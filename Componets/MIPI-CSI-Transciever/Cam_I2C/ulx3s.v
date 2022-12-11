module ulx3s(input pixclk,inout sda,output scl,input reset,input fire,output cam_ena);
	
	reg send_data;
	reg[7:0] datain=0;
	reg[16:0] register_in='h0100;
	reg[6:0] slave_addr=7'd16;
	wire clk400,clk200;
	wire clk1_6;	
	assign cam_ena=1;
	Cam_I2C i2c (.clk400kHz(clk400),.scl(scl),.sda(sda),.reset(reset),.send_data(fire),.datain(datain),.register_in(register_in),.slave_addr(slave_addr),.ackn(1'b0));//,.sda(sda));
	clock pll(.clkin_25MHz(pixclk),.clk_1_6Mhz(clk1_6));
	clock2 pll2(.clkin_25MHz(pixclk),.clk_400kHz(clk400),.clk_200kHz(clk200));
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

