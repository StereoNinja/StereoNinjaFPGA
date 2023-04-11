module ulx3s_pass_through_sim(input pixclk,inout cam0_sda,inout cam0_scl,debug0,debug1,debug2,debug3,input reset,btn,input fire ,input cam0_clk,inout cam0_d0,cam0_d1,cam0_d0_r_p,cam0_d0_r_n,cam0_d1_r_p,cam0_d1_r_n,cam0_clk_r_p,cam0_clk_r_n,
		output[7:0] led,output[3:0] TMDSd,output ftdi_rxd,output ftdi_txden,input clk_i2c);	
	//This FIle for Sim only
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
	Cam_Init i2c (.clk400(clk_i2c),.reset(reset),.init(fire),.sda(cam0_sda_w),.scl(cam0_scl_w));	
	

	

	wire[16:0] data_adress;
	wire[31:0 ] data,cX,cY;
	wire ram_clk,rec_data;
	wire[20:0] read_addr;
	wire[18:0] addr_write;
	MIPI_Reciever mipi(.cX(cX),.cY(cY),.rec_data_o(rec_data),.sys_clk(clk100Mhz),.mipi_clk(cam0_clk),.reset(reset),.lane0_d(cam0_d0),.lane1_d(cam0_d1),.lane0_p(cam0_d0_r_p),.lane0_n(cam0_d0_r_n),.lane1_p(cam0_d1_r_p),.lane1_n(cam0_d1_r_n),.data_o(data),.adress_out(data_adress),.ram_clk(ram_clk),.debug0(debug0),.debug1(debug1),.debug2(debug2),.debug3(debug3),.termination(term));	
	assign led=0;
	reg [7:0] color;
	reg [7:0] red_v,green_v,blue_v;	
	reg[7:0] grey0,grey1,grey2,grey3;
	wire[31:0] ramdata;
	wire[7:0] hex;
	reg[18:0] pixcount=0;
		
	dpram_dualclock DPR(.data_a(data),.addr_a(data_adress),.addr_b(read_addr[18:2]),
	.we_a(btn),.we_b(0),.clk(ram_clk),.clk_b(pixclk),.data_out(ramdata));

	reg[31:0] color_w;
	

	reg[23:0] seraddr=0;
	reg[23:0] counter_ser=0;
	
	reg[7:0] serdata=78;
	wire ready,start;
	reg ready_old=0;
	reg[7:0] counter=0;
	
	
	always @(posedge pixclk) begin		
		if(counter>=3)begin
			counter<=0;
			color_w<=ramdata;
		end else begin
			counter<=counter+1;
			color_w<={8'h00,color_w[31:8]};			
		end
		red_v<=color_w[7:0];		
	end	
	HDMI_Transciever HDMI(.clk_low(pixclk),.reset(reset),.clk_high(clk250),.red(red_v),.green(red_v),.blue(red_v),.addr(read_addr),.TMDSd(TMDSd));

	/*always @(posedge pixclk) begin		
		//////////////////////Serial debugger
		red_v=(read_addr[1])?(read_addr[0]?ramdata[31:24]:ramdata[23:16]):(read_addr[0]?ramdata[15:8]:ramdata[7:0]);
		start<=0;
		ready_old<=reset?0:ready;
		if(ready_old==0&&ready==1)begin
			start<=1;					
			read_addr<=(read_addr>307198)?0:read_addr+1;
			serdata<=red_v;
		end
	end
	SERIAL debugger(.clk(pixclk),.reset(reset),.start(start),.ready(ready),.TX(ftdi_rxd),.datain(serdata),.addrin({'b00000,read_addr}));*/
	
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
		initial $readmemh("testimage.mem",ram);	

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

