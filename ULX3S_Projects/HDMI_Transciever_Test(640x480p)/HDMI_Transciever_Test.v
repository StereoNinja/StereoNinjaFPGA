module HDMI_Transciever_Test(
		input pixclk,
		//input clk_high,
		output [3:0] TMDSd
		);
	wire clk_high;
	reg[7:0] blue,green,red;
	reg[7:0] cnt;
	wire[3:0]TMDSd_r;
	wire clk_high;
	reg[25:0] cntY;
	reg[25:0] cntX;
	
	clock clkmult(.clkin_25MHz(pixclk),.clk_250MHz(clk_high));		
	HDMI_Transciever #(
			.h_pixel(640),				  
			.h_front_porch(16),		
			.h_back_porch(48),		
			.h_tot_pixel(800),				  
			.v_pixel(480),				  
			.v_front_porch(10),		
			.v_back_porch(33),		
			.v_tot_pixel(525)) HDMI (.clk_low(pixclk),.clk_high(clk_high),.red(red),.green(green),.blue(blue),.TMDSd(TMDSd),.cntX(cntX),.cntY(cntY));	
	always @(posedge pixclk) begin
		red<=0;
		green<=0;
		blue<=0;
		if(cntX<320&&cntY<240) begin
			red<=255;
			green<=0;
			blue<=0;
		end
		if(cntX>320&&cntY<240) begin
			red<=0;
			green<=255;
			blue<=0;
		end		
		if(cntX<320&&cntY>240) begin
			red<=0;
			green<=0;
			blue<=255;
		end
		if(cntX>320&&cntY>240) begin
			red<=255;
			green<=255;
			blue<=255;
		end
		
		
		
	end
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