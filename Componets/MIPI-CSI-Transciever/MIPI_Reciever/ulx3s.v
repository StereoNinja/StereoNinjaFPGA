module ulx3s(input pixclk,inout cam0_sda,inout cam0_scl,debug0,debug1,debug2,input reset,input fire ,input cam0_clk,inout cam0_d0,cam0_d1,cam0_d0_r_p,cam0_d0_r_n,cam0_d1_r_p,cam0_d1_r_n,cam0_clk_r_p,cam0_clk_r_n,output[7:0] led,output[3:0] TMDSd);	
	
	wire clk400;
	wire clk100Mhz;
	wire clk250;
	wire cam0_sda_w,cam0_scl_w;
	wire term;
	wire mipi_clk05;
	assign cam0_sda=cam0_sda_w;
	assign cam0_scl=cam0_scl_w;	
	//Terminierung von cam0
	assign cam0_d0_r_p=(term)?0:'bz;
	assign cam0_d0_r_n=(term)?0:'bz;
	assign cam0_d1_r_p=(term)?0:'bz;
	assign cam0_d1_r_n=(term)?0:'bz;
	assign cam0_clk_r_p=1?0:'bz;
	assign cam0_clk_r_n=1?0:'bz;	
	//	
	Cam_Init i2c (.clk400(clk400),.reset(reset),.init(fire),.sda(cam0_sda_w),.scl(cam0_scl_w));	
	clock2 pll2(.clkin_25MHz(pixclk),.clk_400kHz(clk400));
	clock8 pll3(.pixclk(pixclk),.clk_100MHz(clk100Mhz),.clk_250MHz(clk250));
	wire[16:0] data_adress;
	wire[31:0 ] data,cX,xY;
	wire ram_clk,rec_data;
	wire[18:0] read_addr,addr_write;
	MIPI_Reciever mipi(.cX(cX),.cY(cY),.rec_data_o(rec_data),.sys_clk(clk100Mhz),.mipi_clk(cam0_clk),.reset(reset),.lane0_d(cam0_d0),.lane1_d(cam0_d1),.lane0_p(cam0_d0_r_p),.lane0_n(cam0_d0_r_n),.lane1_p(cam0_d1_r_p),.lane1_n(cam0_d1_r_n),.data_o(data),.adress_out(data_adress),.ram_clk(ram_clk),.debug0(debug0),.debug1(debug1),.debug2(debug2),.termination(term));	
	assign led=0;
	reg [7:0] red,green,blue;
	//assign data='hffffffff;	
	/*always @(posedge ram_clk) begin		
		data_adress<=data_adress+1;
		if(data_adress>35000)begin
			data<='hffffffff;
		end else begin
			data<=0;
		end
		if(data_adress>76799)begin
			data_adress<=0;
		end
	end*/
	wire[31:0] ramdata;	
	assign addr_write=cX+cY;
	dpram_dualclock DPR(.data_a(data),.addr_a(data_adress),.addr_b(read_addr[18:2]),
	.we_a(rec_data),.we_b(0),.clk(ram_clk),.clk_b(pixclk),.data_out(ramdata));

	always @(posedge clk100Mhz) begin		
		red<=(read_addr[1])?(read_addr[0]?ramdata[31:24]:ramdata[23:16]):(read_addr[0]?ramdata[15:8]:ramdata[7:0]);
		green<=(read_addr[1])?(read_addr[0]?ramdata[31:24]:ramdata[23:16]):(read_addr[0]?ramdata[15:8]:ramdata[7:0]);
		blue<=(read_addr[1])?(read_addr[0]?ramdata[31:24]:ramdata[23:16]):(read_addr[0]?ramdata[15:8]:ramdata[7:0]);
	end	
	
	HDMI_Transciever HDMI(.clk_low(pixclk),.reset(reset),.clk_high(clk250),.red(red[7:0]*4),.green(green[7:0]*4),.blue(blue[7:0]*4),.addr(read_addr),.TMDSd(TMDSd));

endmodule

module clock
		(
		input mipi_clk,
		output mipi_clk_1_4,
		output mipi_clk_1_8,
		output clk_125MHz,
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
			.CLKOS2_DIV(8),
			.CLKOS_DIV(4),
			.CLKOP_DIV(1),
			.CLKFB_DIV(1),
			.CLKI_DIV(1),
			.FEEDBK_PATH("CLKOP")
		)
		pll_i
		(
			.CLKI(mipi_clk),
			.CLKFB(clk_125MHz),
			.CLKOP(clk_125MHz),
			.CLKOS(mipi_clk_1_4),
			.CLKOS2(mipi_clk_1_8), 
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
		input pixclk,
		output byte_clk8,
		output clk_1_6Mhz,
		output clk_250MHz,
		output clk_100MHz,
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
			.CLKOS3_DIV(5),
			.CLKOS2_DIV(2),
			.CLKOS_DIV(128),
			.CLKOP_DIV(1),
			.CLKFB_DIV(10),
			.CLKI_DIV(1),
			.FEEDBK_PATH("CLKOP")
		)
		pll_i
		(
			.CLKI(pixclk),
			.CLKFB(clk_125MHz),
			.CLKOP(clk_125MHz),
			.CLKOS(byte_clk8),
			.CLKOS2(clk_250MHz), 
			.CLKOS3(clk_100MHz),
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
module dpram_dualclock
(
	input [31:0] data_a, data_b,
	input [16:0] addr_a,input [16:0] addr_b,input[1:0]bank,
	input we_a, we_b, clk, clk_b,
	output reg [31:0] data_out
);
	reg [31:0] ram[76799:0];	
	// Port A 
	always @ (posedge clk)
	begin		
		if(we_a)begin
			ram[addr_a] <= data_a;
		end		
	end 
	// Port B 
	always @ (posedge clk_b)
	begin		

		/*if(!we_b)begin
			if(bank==0)begin
				red<=ram[addr_b][7:0];
				green<=ram[addr_b][7:0];
				blue<=ram[addr_b][7:0];
			end else if(bank==1)begin
				ed<=ram[addr_b][15:8];
				green<=ram[addr_b][15:8];
				blue<=ram[addr_b][15:8];
			end else if(bank==2)begin
				ed<=ram[addr_b][23:16];
				green<=ram[addr_b][23:16];
				blue<=ram[addr_b][23:16];
			end else if(bank==3)begin
				ed<=ram[addr_b][31:24];
				green<=ram[addr_b][31:24];
				blue<=ram[addr_b][31:24];
			end			
		end*/
		data_out<=ram[addr_b];		
	end
	//assign red=(bank[1])?(bank[0]?ram_r[31:24]:ram_r[23:16]):(bank[0]?ram_r[15:8]:ram_r[7:0]);
	//assign green=(bank[1])?(bank[0]?ram_r[31:24]:ram_r[23:16]):(bank[0]?ram_r[15:8]:ram_r[7:0]);
	//assign blue=(bank[1])?(bank[0]?ram_r[31:24]:ram_r[23:16]):(bank[0]?ram_r[15:8]:ram_r[7:0]);
	///assign red=ram_r[7:0];
	//assign green=ram_r[15:8];
	//assign blue=ram_r[23:16];

endmodule




