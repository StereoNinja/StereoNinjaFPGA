module HDMI_Transciever_Test(
		input pixclk,
		input reset,
		output [3:0] TMDSd,
		output ftdi_rxd,
		input ftdi_txd,
		output[7:0]led,
		output ftdi_txden,
		output sdram_clk,sdram_cke,sdram_csn,sdram_wen,sdram_rasn,sdram_casn,
		output[12:0] sdram_a,
		output[1:0] sdram_ba,
		output[1:0] sdram_dqm,
		inout[15:0] sdram_d
		);
	//assign led='b10101010;
	wire clk_high,clk_low;
	reg[7:0] blue,green,red;		
	wire vid_en;
	wire wr_ram_r,re_ram_r,wr_ram_vid,re_ram_vid,wr_ram_uart,re_ram_uart,clk96,clk8,rd_ready,busy,ack_wr,ack_re,re_valid,wr_valid,clk150;
	wire[7:0] red,green,blue;
	wire[25:0] addr;
	wire[25:0] addr_uart;
	wire[25:0] addr_vid;
	wire[15:0] rgb_in;	
	wire[15:0] rgb_out_r;
	reg[15:0] d_out;
	wire[15:0] d_in;
	reg sd_data_wr;
	clock clkmult(.clkin_25MHz(pixclk),.clk_250MHz(clk_high),.clk_25MHz(clk_low)/*,.clk_150MHz(clk150)*/);	
	clock2 clk(.clkin_25MHz(pixclk),.clk_200MHz(clk150));
	wire clk_uart;
	HDMI_Transciever #(
			.h_pixel(1280),				  
			.h_front_porch(110),		
			.h_back_porch(220),		
			.h_tot_pixel(1650),				  
			.v_pixel(720),				  
			.v_front_porch(5),		
			.v_back_porch(20),		
			.v_tot_pixel(750)) HDMI (.clk_low(clk_low),.clk_high(clk_high),.red(red),.green(green),.blue(blue),.TMDSd(TMDSd),.reset(!vid_en),.addr(addr_vid));	
	SERIAL uart(.clk(pixclk),.reset(reset),.TX(ftdi_rxd),.RX(ftdi_txd),
			.vid_ena(vid_en),.led(led),.wr_ram(wr_ram_uart),.re_ram(re_ram_uart),.data0(rgb_in[7:0]),.data1(rgb_in[15:8]),.addr(addr_uart),.rgb_in(rgb_out_r));	
	assign sdram_clk = clk150; // phase shifted 180 deg
	assign sdram_cke = 1'b1;
	sdram_16bit ram(.sys_CLK(clk150),.sys_CMD({re_ram_r,wr_ram_r}),.sys_ADDR(addr[24:0]),.sys_DIN(rgb_in),.sys_DOUT(rgb_out_r)
			,.sys_rd_data_valid(re_valid),.sys_wr_data_valid(wr_valid),
			.sys_cmd_ack({ack_re,ack_wr}),.sdr_n_CS_WE_RAS_CAS({sdram_csn,sdram_wen,sdram_rasn,sdram_casn}),.
			sdr_BA(sdram_ba),.sdr_ADDR(sdram_a),.sdr_DATA(sdram_d),.sdr_DQM(sdram_dqm));
	
	
	assign blue={rgb_out_r[3:0],4'b1111};
	assign wr_ram_vid=0;
	assign re_ram_vid=1;
	assign red      = {rgb_out_r[7:4],4'b1111};
	assign green    = {rgb_out_r[15:12],4'b1111};
	//assign red=addr_vid<460800?255:0;
	//assign green    = 0;
	assign addr     = vid_en?addr_vid:addr_uart;
	assign wr_ram_r = vid_en?wr_ram_vid:wr_ram_uart;
	assign re_ram_r = vid_en?re_ram_vid:re_ram_uart;	
	
endmodule



module clock
		(
		input clkin_25MHz,
		output clk_125MHz,
		output clk_250MHz,
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
		output clk_200MHz,
		output clk_250MHz,
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
			.CLKOS2_DIV(10),
			.CLKOS_DIV(2),
			.CLKOP_DIV(4),
			.CLKFB_DIV(8),
			.CLKI_DIV(1),
			.FEEDBK_PATH("CLKOP")
		)
		pll_i
		(
			.CLKI(clkin_25MHz),
			.CLKFB(clk_200MHz),
			.CLKOP(clk_200MHz),
			.CLKOS(clk_250MHz),
			.CLKOS2(clk_25MHz), 
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


