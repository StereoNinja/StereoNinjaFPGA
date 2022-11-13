module ulx3s(
		input pixclk,
		input reset,		
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
		wire wr_ram,re_ram,clk96,clk8,rd_ready,busy,ack_wr,ack_re,re_valid,wr_valid,clk150;
		wire[7:0] red,green,blue;
		wire[25:0] addr;
		wire[15:0] rgb_in;
		wire[15:0] rgb_out;
		reg[15:0] d_out;
		wire[15:0] d_in;
		reg sd_data_wr;
		reg[28:0] div=0;
		
		clock cl(.clkin_25MHz(pixclk),.clk_150MHz(clk150));
		SERIAL uart(.clk(pixclk),.reset(reset),.TX(ftdi_rxd),.RX(ftdi_txd),
				.vid_en(vid_en),.led(led),.wr_ram(wr_ram),.re_ram(re_ram),.data0(rgb_in[7:0]),.data1(rgb_in[15:8]),.addr(addr),.rgb_in(rgb_out));	
		assign sdram_clk = ~clk150; // phase shifted 180 deg
		assign sdram_cke = 1'b1;
		sdram_16bit ram(.sys_CLK(clk150),.sys_CMD({re_ram,wr_ram}),.sys_ADDR(addr[24:0]),.sys_DIN(rgb_in),.sys_DOUT(rgb_out),.sys_rd_data_valid(re_valid),.sys_wr_data_valid(wr_valid),
				.sys_cmd_ack({ack_re,ack_wr}),.sdr_n_CS_WE_RAS_CAS({sdram_csn,sdram_wen,sdram_rasn,sdram_casn}),.sdr_BA(sdram_ba),.sdr_ADDR(sdram_a),.sdr_DATA(sdram_d),.sdr_DQM(sdram_dqm));
endmodule

module clock
		(
		input clkin_25MHz,
		output clk_150MHz,
		output clk_96MHz,
		output clk_8MHz,
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
			.CLKOS2_DIV(300),
			.CLKOS_DIV(25),
			.CLKOP_DIV(3),
			.CLKFB_DIV(6),
			.CLKI_DIV(1),
			.FEEDBK_PATH("CLKOP")
		)
		pll_i
		(
			.CLKI(clkin_25MHz),
			.CLKFB(clk_150MHz),
			.CLKOP(clk_150MHz),
			.CLKOS(clk_96MHz),
			.CLKOS2(clk_8MHz), 
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

