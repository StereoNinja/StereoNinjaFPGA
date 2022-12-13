module ulx3s(input pixclk,inout sda,inout scl,inout scl2,inout sda2,input reset,input fire ,output cam_ena,input cam0clk,output cam0clk2,input cam0d0,cam0d1,output cam0d02,cam0d12,output[7:0] led);	
	
	wire clk400,clk200;
	wire clk1_6;	
	wire byte_clk8;
	assign cam_ena=1;
	//assign sda2=sda;
	//assign cam0clk2=cam0d1;
	//assign scl2=c;
	//assign cam0d02=cam0clk;
	//assign cam0d12=ca0d1;
	wire[7:0] ledassign;
	assign led=ledassign;
	always @(event) begin
		ledassign[7:3]=0;
	end
	
	Cam_Init i2c (.clk400(clk400),.reset(reset),.init(fire),.sda(sda),.scl(scl));
	//clock pll(.clkin_25MHz(pixclk),.clk_1_6Mhz(clk1_6));
	clock2 pll2(.clkin_25MHz(pixclk),.clk_400kHz(clk400),.clk_200kHz(clk200));
	//clock8 pll3(.byte_clk(cam0clk),.byte_clk8(byte_clk8));
	MIPI_Reciever mipi(.bit_clk(cam0clk),.reset(reset),.lane0(cam0d0),.lane1(cam0d1),.led({ledassign[2],ledassign[1],ledassign[0]}));
endmodule

module clock
		(
		input clkin_25MHz,
		output clk_400kHz,
		output clk_1_6Mhz,
		output clk_25MHz,
		output clk_150MHz,
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
			.CLKOS3_DIV(4),
			.CLKOS2_DIV(125),
			.CLKOS_DIV(500),
			.CLKOP_DIV(4),
			.CLKFB_DIV(2),
			.CLKI_DIV(1),
			.FEEDBK_PATH("CLKOP")
		)
		pll_i
		(
			.CLKI(clkin_25MHz),
			.CLKFB(clk_125MHz),
			.CLKOP(clk_125MHz),
			.CLKOS(clk_400kHz),
			.CLKOS2(clk_1_6Mhz), 
			.CLKOS3(clk_150MHz),
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

module clock2
		(
		input clkin_25MHz,
		output clk_400kHz,
		output clk_200kHz,
		output clk_25MHz,
		output clk_150MHz,
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
			.CLKOS3_DIV(4),
			.CLKOS2_DIV(250),
			.CLKOS_DIV(125),
			.CLKOP_DIV(1),
			.CLKFB_DIV(2),
			.CLKI_DIV(1),
			.FEEDBK_PATH("CLKOP")
		)
		pll_i
		(
			.CLKI(clkin_25MHz),
			.CLKFB(clk_125MHz),
			.CLKOP(clk_125MHz),
			.CLKOS(clk_400kHz),
			.CLKOS2(clk200), 
			.CLKOS3(clk_150MHz),
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

module clock8
		(
		input byte_clk,
		output byte_clk8,
		output clk_1_6Mhz,
		output clk_25MHz,
		output clk_150MHz,
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
			.CLKOS3_DIV(4),
			.CLKOS2_DIV(4),
			.CLKOS_DIV(1),
			.CLKOP_DIV(4),
			.CLKFB_DIV(2),
			.CLKI_DIV(1),
			.FEEDBK_PATH("CLKOP")
		)
		pll_i
		(
			.CLKI(byte_clk),
			.CLKFB(clk_125MHz),
			.CLKOP(clk_125MHz),
			.CLKOS(byte_clk8),
			.CLKOS2(clk_1_6Mhz), 
			.CLKOS3(clk_150MHz),
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