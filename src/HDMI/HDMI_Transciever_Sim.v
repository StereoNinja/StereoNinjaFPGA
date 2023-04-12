
	`ifdef VERILATOR
			module HDMI_Transciever_Sim(
			input pixclk,
			input clk_high,
			input reset,
			output [3:0] TMDSd);
	`else	
			module HDMI_Transciever_Sim(
			input pixclk,			
			input reset,
			output [3:0] TMDSd);
	`endif 


	`ifdef VERILATOR
		wire clk_low=pixclk;
	`else
		wire clk_high,clk_low;	
	`endif 	
	
	reg[7:0] blue,green,red;	
	reg[20:0] addr;
	`ifdef VERILATOR
	`else
		clock clkmult(.clkin_25MHz(pixclk),.clk_250MHz(clk_high),.clk_25MHz(clk_low));		
	`endif 
	HDMI_Transciever /*#(
			.h_pixel(1280),				  
			.h_front_porch(110),		
			.h_back_porch(220),		
			.h_tot_pixel(1650),				  
			.v_pixel(720),				  
			.v_front_porch(5),		
			.v_back_porch(20),		
			.v_tot_pixel(750)) */HDMI (.clk_low(clk_low),.clk_high(clk_high),.red(red),.green(green),.blue(blue),.TMDSd(TMDSd),.reset(reset),.addr(addr));	
	always @(posedge pixclk) begin
		if(reset==1)begin		
			red<=0;
			green<=0;
			blue<=0;
		end else begin		
		red<=255;
		green<=0;
		blue<=0;
		if(addr>0)
		begin
			red<=255;
			green<=0;
			blue<=0;
		end;
			if(addr>460800)
			begin
			red<=0;
			green<=0;
			blue<=255;		
		end
		
	end
	end
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
			.CLKOS2_DIV(10),
			.CLKOS_DIV(2),
			.CLKOP_DIV(6),
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