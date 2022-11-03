// (c) fpga4fun.com & KNJN LLC 2013

////////////////////////////////////////////////////////////////////////
module HDMI_test(
	input pixclk,  // 25MHz
	output [3:0] TMDSd
	
	
);

////////////////////////////////////////////////////////////////////////
reg [9:0] CounterX, CounterY;
reg hSync, vSync, DrawArea;
always @(posedge pixclk) DrawArea <= (CounterX<640) && (CounterY<480);

always @(posedge pixclk) CounterX <= (CounterX==799) ? 0 : CounterX+1;
always @(posedge pixclk) if(CounterX==799) CounterY <= (CounterY==524) ? 0 : CounterY+1;

always @(posedge pixclk) hSync <= (CounterX>=656) && (CounterX<752);
always @(posedge pixclk) vSync <= (CounterY>=490) && (CounterY<492);

////////////////
wire [7:0] W = {8{CounterX[7:0]==CounterY[7:0]}};
wire [7:0] A = {8{CounterX[7:5]==3'h2 && CounterY[7:5]==3'h2}};
reg [7:0] red, green, blue;
always @(posedge pixclk) red <= ({CounterX[5:0] & {6{CounterY[4:3]==~CounterX[4:3]}}, 2'b00} | W) & ~A;
always @(posedge pixclk) green <= (CounterX[7:0] & {8{CounterY[6]}} | W) & ~A;
always @(posedge pixclk) blue <= CounterY[7:0] | W | A;

////////////////////////////////////////////////////////////////////////
wire [9:0] TMDS_red, TMDS_green, TMDS_blue;
TMDS_encoder encode_R(.clk(pixclk), .VD(red  ), .CD(2'b00)        , .VDE(DrawArea), .TMDS(TMDS_red));
TMDS_encoder encode_G(.clk(pixclk), .VD(green), .CD(2'b00)        , .VDE(DrawArea), .TMDS(TMDS_green));
TMDS_encoder encode_B(.clk(pixclk), .VD(blue ), .CD({vSync,hSync}), .VDE(DrawArea), .TMDS(TMDS_blue));

////////////////////////////////////////////////////////////////////////
wire clk_TMDS, DCM_TMDS_CLKFX;  // 25MHz x 10 = 250MHz
clock clockmty(.clkin_25MHz(pixclk),.clk_250MHz(clk_TMDS));
//DCM_SP #(.CLKFX_MULTIPLY(10)) DCM_TMDS_inst(.CLKIN(pixclk), .CLKFX(clk_TMDS), .RST(1'b0));
//BUFG BUFG_TMDSp(.I(DCM_TMDS_CLKFX), .O(clk_TMDS));

////////////////////////////////////////////////////////////////////////
reg [3:0] TMDS_mod10=0;  // modulus 10 counter
reg [9:0] TMDS_shift_red=0, TMDS_shift_green=0, TMDS_shift_blue=0;
reg TMDS_shift_load=0;
always @(posedge clk_TMDS) TMDS_shift_load <= (TMDS_mod10==4'd9);

always @(posedge clk_TMDS)
begin
	TMDS_shift_red   <= TMDS_shift_load ? TMDS_red   : TMDS_shift_red  [9:1];
	TMDS_shift_green <= TMDS_shift_load ? TMDS_green : TMDS_shift_green[9:1];
	TMDS_shift_blue  <= TMDS_shift_load ? TMDS_blue  : TMDS_shift_blue [9:1];	
	TMDS_mod10 <= (TMDS_mod10==4'd9) ? 4'd0 : TMDS_mod10+4'd1;
end

OBUFDS OBUFDS_red  (.I(TMDS_shift_red  [0]), .O(TMDSd[2]));
OBUFDS OBUFDS_green(.I(TMDS_shift_green[0]), .O(TMDSd[1]));
OBUFDS OBUFDS_blue (.I(TMDS_shift_blue [0]), .O(TMDSd[0]));
OBUFDS OBUFDS_clock(.I(pixclk), .O(TMDSd[3]));
endmodule


////////////////////////////////////////////////////////////////////////
module TMDS_encoder(
	input clk,
	input [7:0] VD,  // video data (red, green or blue)
	input [1:0] CD,  // control data
	input VDE,  // video data enable, to choose between CD (when VDE=0) and VD (when VDE=1)
	output reg [9:0] TMDS = 0
);

wire [3:0] Nb1s = VD[0] + VD[1] + VD[2] + VD[3] + VD[4] + VD[5] + VD[6] + VD[7];
wire XNOR = (Nb1s>4'd4) || (Nb1s==4'd4 && VD[0]==1'b0);
wire [8:0] q_m = {~XNOR, q_m[6:0] ^ VD[7:1] ^ {7{XNOR}}, VD[0]};

reg [3:0] balance_acc = 0;
wire [3:0] balance = q_m[0] + q_m[1] + q_m[2] + q_m[3] + q_m[4] + q_m[5] + q_m[6] + q_m[7] - 4'd4;
wire balance_sign_eq = (balance[3] == balance_acc[3]);
wire invert_q_m = (balance==0 || balance_acc==0) ? ~q_m[8] : balance_sign_eq;
wire [3:0] balance_acc_inc = balance - ({q_m[8] ^ ~balance_sign_eq} & ~(balance==0 || balance_acc==0));
wire [3:0] balance_acc_new = invert_q_m ? balance_acc-balance_acc_inc : balance_acc+balance_acc_inc;
wire [9:0] TMDS_data = {invert_q_m, q_m[8], q_m[7:0] ^ {8{invert_q_m}}};
wire [9:0] TMDS_code = CD[1] ? (CD[0] ? 10'b1010101011 : 10'b0101010100) : (CD[0] ? 10'b0010101011 : 10'b1101010100);

always @(posedge clk) TMDS <= VDE ? TMDS_data : TMDS_code;
always @(posedge clk) balance_acc <= VDE ? balance_acc_new : 4'h0;
endmodule

module OBUFDS(
	input I, // input
	output O, // positive output
	output OB // negative output
);

assign O = I;
assign OB = ~I;

endmodule

module clock
		(
		input clkin_25MHz,
		output clk_125MHz,
		output clk_250MHz,
		output clk_25MHz,
		output clk_83M333Hz,
		output locked
		);
	wire int_locked;

	(* ICP_CURRENT="9" *) (* LPF_RESISTOR="8" *) (* MFG_ENABLE_FILTEROPAMP="1" *) (* MFG_GMCREF_SEL="2" *)
		EHXPLLL
		#(
			.PLLRST_ENA("DISABLED"),
			.INTFB_WAKE("DISABLED"),
			.STDBY_ENABLE("DISABLED"),
			.DPHASE_SOURCE("DISABLED"),
			.CLKOS_FPHASE(0),
			.CLKOP_FPHASE(0),
			.CLKOS3_CPHASE(5),
			.CLKOS2_CPHASE(0),
			.CLKOS_CPHASE(1),
			.CLKOP_CPHASE(3),
			.OUTDIVIDER_MUXD("DIVD"),
			.OUTDIVIDER_MUXC("DIVC"),
			.OUTDIVIDER_MUXB("DIVB"),
			.OUTDIVIDER_MUXA("DIVA"),
			.CLKOS3_ENABLE("ENABLED"),
			.CLKOS2_ENABLE("ENABLED"),
			.CLKOS_ENABLE("ENABLED"),
			.CLKOP_ENABLE("ENABLED"),
			.CLKOS3_DIV(0),
			.CLKOS2_DIV(20),
			.CLKOS_DIV(2),
			.CLKOP_DIV(4),
			.CLKFB_DIV(5),
			.CLKI_DIV(1),
			.FEEDBK_PATH("CLKOP")
		)
		pll_i
		(
			.CLKI(clkin_25MHz),
			.CLKFB(clk_125MHz),
			.CLKOP(clk_125MHz),
			.CLKOS(clk_250MHz),
			.CLKOS2(clk_25MHz), 
			.CLKOS3(clk_83M333Hz),
			.RST(1'b0),
			.STDBY(1'b0),
			.PHASESEL0(1'b0),
			.PHASESEL1(1'b0),
			.PHASEDIR(1'b0),
			.PHASESTEP(1'b0),
			.PLLWAKESYNC(1'b0),
			.ENCLKOP(1'b0),
			.ENCLKOS(1'b0),
			.ENCLKOS2(1'b0),
			.ENCLKOS3(1'b0),
			.LOCK(locked),
			.INTLOCK(int_locked)
		);
endmodule




////////////////////