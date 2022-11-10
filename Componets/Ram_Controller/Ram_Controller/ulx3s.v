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
		wire wr_ram,re_ram;
		wire[7:0] red,green,blue;
		wire[25:0] addr;
		wire[23:0] rgb;
		SERIAL uart(.clk(pixclk),.reset(reset),.TX(ftdi_rxd),.RX(ftdi_txd),
				.vid_en(vid_en),.led(led),.wr_ram(wr_ram),.re_ram(re_ram),.green_r(green),.red_r(red),.blue_r(blue),.addr(addr),.rgb_in(rgb));
		Ram_Controller ram(.wr_ram(wr_ram),.re_ram(re_ram),.clk(pixclk),.reset(reset),.data_ready(wr_ready),.red_in(red),.green_in(green),.blue_in(blue),.addr_in_write(addr),.red_out(rgb[23:16]),.green_out(rgb[15:8]),.blue_out(rgb[7:0]),
				.cke(sdram_cke),.csn(sdram_csn),.wen(sdram_wen),.rasn(sdram_rasn),.casn(sdram_casn),.a(sdram_a),.ba(sdram_ba),.dqm(sdram_dqm),.d(sdram_d));
		
endmodule

