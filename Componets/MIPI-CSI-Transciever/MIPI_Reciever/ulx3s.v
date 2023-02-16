module ulx3s(input pixclk,inout cam0_sda,inout cam0_scl,debug0,debug1,debug2,input reset,input fire ,input cam0_clk,inout cam0_d0,cam0_d1,cam0_d0_r_p,cam0_d0_r_n,cam0_d1_r_p,cam0_d1_r_n,cam0_clk_r_p,cam0_clk_r_n,output[7:0] led);	
	
	wire clk400;
	wire clk100Mhz;
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
	clock8 pll3(.pixclk(pixclk),.clk_100MHz(clk100Mhz));
	//clock  pll4(.mipi_clk(cam0_clk),.mipi_clk_1_4(mipi_clk_1_4),.mipi_clk_1_8(mipi_clk_1_8));
	wire[31:0] data_adress,data;
	wire ram_clk;
	MIPI_Reciever mipi(.sys_clk(clk100Mhz),.mipi_clk(cam0_clk),.reset(reset),.lane0_d(cam0_d0),.lane1_d(cam0_d1),.lane0_p(cam0_d0_r_p),.lane0_n(cam0_d0_r_n),.lane1_p(cam0_d1_r_p),.lane1_n(cam0_d1_r_n),,data_o(data),.adress_out(data_adress),.ram_clk(ram_clk),.debug0(debug0),.debug1(debug1),.debug2(debug2),.termination(term));
	//MIPI_Reciever_old mipi(.sys_clk(clk100Mhz),.mipi_clk(cam0_clk),.mipi_clk_8(mipi_clk_1_8),.reset(reset),.lane0_d(cam0_d0),.lane1_d(cam0_d1),.lane0_p(cam0_d0_r_p),.lane0_n(cam0_d0_r_n),.lane1_p(cam0_d1_r_p),.lane1_n(cam0_d1_r_n),.debug0(debug0),.debug1(debug1),.debug2(debug2),.termination(term));
	assign led=0;
	//wire  mipi_clk_1_4,mipi_clk_1_8;	
	

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
		output clk_25MHz,
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
			.CLKOS3_DIV(2),
			.CLKOS2_DIV(4),
			.CLKOS_DIV(128),
			.CLKOP_DIV(1),
			.CLKFB_DIV(4),
			.CLKI_DIV(1),
			.FEEDBK_PATH("CLKOP")
		)
		pll_i
		(
			.CLKI(pixclk),
			.CLKFB(clk_125MHz),
			.CLKOP(clk_125MHz),
			.CLKOS(byte_clk8),
			.CLKOS2(clk_1_6Mhz), 
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