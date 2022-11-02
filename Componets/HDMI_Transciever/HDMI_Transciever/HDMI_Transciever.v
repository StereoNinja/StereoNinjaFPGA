module HDMI_Transciever(input clk_low,input clk_high,/*,input reset,*/input[7:0] red,input[7:0] green,input[7:0] blue,/*output[25:0] ram_addr*/
		output[3:0] TMDSd);
	////////////////////////////////////////////////////////////////////////
	parameter
		h_pixel=640,				  
		h_front_porch=16,		
		h_back_porch=48,		
		h_tot_pixel=800,
				  
		v_pixel=480,				  
		v_front_porch=10,		
		v_back_porch=33,		
		v_tot_pixel=525;	
	////////////////////////////////////////////////////////////////////////
	reg [9:0] CounterX, CounterY;
	reg hSync, vSync;
	reg[1:0]  DrawArea;
	always @(posedge clk_low) DrawArea <= (CounterX<h_pixel) && (CounterY<v_pixel);
	always @(posedge clk_low) CounterX <= (CounterX==h_tot_pixel-1) ? 0 : CounterX+1;
	always @(posedge clk_low)begin 
		vSync <= ((CounterY>=v_pixel+v_front_porch) && (CounterY<v_tot_pixel-v_back_porch)&&(CounterX<h_tot_pixel-2))||((CounterY==v_pixel+v_front_porch-1)&& (CounterX>=h_tot_pixel-2));
		if(CounterX==h_tot_pixel-1)begin			
			CounterY <= (CounterY==v_tot_pixel-1) ? 0 : CounterY+1;			
		end				
	end
	always @(posedge clk_low) hSync <= (CounterX>=h_pixel+h_front_porch) && (CounterX<h_tot_pixel-h_back_porch);		
		////////////////////////////////////////////////////////////////////////
	wire [9:0] TMDS_red, TMDS_green, TMDS_blue;	
	////////////////////////////////////////////////////////////////////////
	reg [3:0] TMDS_mod10=0;  // modulus 10 counter
	reg [9:0] TMDS_shift_red=0, TMDS_shift_green=0, TMDS_shift_blue=0;
	reg TMDS_shift_load=0;
	always @(posedge clk_high) TMDS_shift_load <= (TMDS_mod10==4'd9);
	always @(posedge clk_high)
	begin
		TMDS_shift_red   <= TMDS_shift_load ? TMDS_red   : TMDS_shift_red  [9:1];
		TMDS_shift_green <= TMDS_shift_load ? TMDS_green : TMDS_shift_green[9:1];
		TMDS_shift_blue  <= TMDS_shift_load ? TMDS_blue  : TMDS_shift_blue [9:1];	
		TMDS_mod10 <= (TMDS_mod10==4'd9) ? 4'd0 : TMDS_mod10+4'd1;
	end

	OBUFDS OBUFDS_red  (.I(TMDS_shift_red  [0]), .O(TMDSd[2]));
	OBUFDS OBUFDS_green(.I(TMDS_shift_green[0]), .O(TMDSd[1]));
	OBUFDS OBUFDS_blue (.I(TMDS_shift_blue [0]), .O(TMDSd[0]));
	OBUFDS OBUFDS_clock(.I(clk_low), .O(TMDSd[3]));
	
	TMDS_Encoder encoder0 (.clklow(clk_low),.clkhigh(clk_high),.reset(reset),.state(DrawArea),.pix_data(blue),.H_VSync_Ctr({vSync,hSync}),.q_out(TMDS_blue));
	TMDS_Encoder encoder1 (.clklow(clk_low),.clkhigh(clk_high),.reset(reset),.state(DrawArea),.pix_data(green),.H_VSync_Ctr(2'b0),.q_out(TMDS_green));
	TMDS_Encoder encoder2 (.clklow(clk_low),.clkhigh(clk_high),.reset(reset),.state(DrawArea),.pix_data(red),.H_VSync_Ctr(2'b0),.q_out(TMDS_red));
	
endmodule

