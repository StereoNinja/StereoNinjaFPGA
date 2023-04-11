module HDMI_Transciever
		#(parameter
		h_pixel=640,				  
		h_front_porch=16,		
		h_back_porch=48,		
		h_tot_pixel=800,				  
		v_pixel=480,				  
		v_front_porch=10,		
		v_back_porch=33,		
		v_tot_pixel=525)
		(input clk_low,input clk_high,input reset,input[7:0] red,input[7:0] green,input[7:0] blue,output[20:0] addr,
		output[3:0] TMDSd);
	////////////////////////////////////////////////////////////////////////
		
	////////////////////////////////////////////////////////////////////////
	reg [10:0] CounterX=0, CounterY=0;
	reg hSync=0, vSync=0;
	reg[1:0]  DrawArea=0;
	reg[20:0] addr_r;

	assign addr=addr_r;
		
	always @(posedge clk_low) DrawArea <=(reset==1)? 0 :( (CounterX<h_pixel) && (CounterY<v_pixel));
	always @(posedge clk_low)begin
		if(reset==1)begin
			CounterX<=0;
			addr_r=0;
		end else begin
			
		if(CounterX==h_tot_pixel-1)begin
			CounterX <=0;
			//addr=CounterY*1280;
		end else begin
			CounterX <=CounterX+1;		
			addr_r=(DrawArea==1)?addr_r+1:addr_r;
			
		end
		vSync <= ((CounterY>=v_pixel+v_front_porch) && (CounterY<v_tot_pixel-v_back_porch)&&(CounterX<h_tot_pixel-2))||((CounterY==v_pixel+v_front_porch-1)&& (CounterX>=h_tot_pixel-2));
		if(CounterX==h_tot_pixel-1)begin			
			CounterY <= (CounterY==v_tot_pixel-1) ? 0 : CounterY+1;	
			addr_r = (CounterY==v_tot_pixel-1) ? 0 : addr_r;	
			
		end
		end		
		end	
	
	/*always @(posedge clk_low)begin 
		if(reset==1) begin
			vSync<=0;
			CounterY<=0;
			cntY<=0;
		end else begin		
		vSync <= ((CounterY>=v_pixel+v_front_porch) && (CounterY<v_tot_pixel-v_back_porch)&&(CounterX<h_tot_pixel-2))||((CounterY==v_pixel+v_front_porch-1)&& (CounterX>=h_tot_pixel-2));
		if(CounterX==h_tot_pixel-1)begin			
			CounterY <= (CounterY==v_tot_pixel-1) ? 0 : CounterY+1;
			
		end	
		end
	end*/
	always @(posedge clk_low) hSync <=(reset==1)? 0 : ((CounterX>=h_pixel+h_front_porch) && (CounterX<h_tot_pixel-h_back_porch));		
		////////////////////////////////////////////////////////////////////////
	wire [9:0] TMDS_red, TMDS_green, TMDS_blue;	
	wire TMDS_r,TMDS_b,TMDS_g;
	////////////////////////////////////////////////////////////////////////
	reg [3:0] TMDS_mod10;  // modulus 10 counter
	reg [9:0] TMDS_shift_red, TMDS_shift_green, TMDS_shift_blue;
	reg TMDS_shift_load;
	always @(posedge clk_high) TMDS_shift_load <= (reset==1)? 0 : (TMDS_mod10==4'd4);
	always @(posedge clk_high)
	begin
		if(reset==1) begin
			TMDS_shift_red<=0;
			TMDS_shift_green<=0;
			TMDS_shift_blue<=0;
			TMDS_mod10<=0;	
		end
		else begin
		TMDS_shift_red   <= TMDS_shift_load ? TMDS_red   : TMDS_shift_red  [9:2];
		TMDS_shift_green <= TMDS_shift_load ? TMDS_green : TMDS_shift_green[9:2];
		TMDS_shift_blue  <= TMDS_shift_load ? TMDS_blue  : TMDS_shift_blue [9:2];	
		TMDS_mod10 <= (TMDS_mod10==4'd4) ? 4'd0 : TMDS_mod10+4'd1;
	end
	end

	ODDRX1F ddr_r(.D0(TMDS_shift_red[0]),.D1(TMDS_shift_red[1]),.SCLK(clk_high),.Q(TMDS_r));
	ODDRX1F ddr_g(.D0(TMDS_shift_green[0]),.D1(TMDS_shift_green[1]),.SCLK(clk_high),.Q(TMDS_g));
	ODDRX1F ddr_b(.D0(TMDS_shift_blue[0]),.D1(TMDS_shift_blue[1]),.SCLK(clk_high),.Q(TMDS_b));
	

	assign TMDSd[2]=TMDS_r;
	assign TMDSd[1]=TMDS_g;
	assign TMDSd[0]=TMDS_b;
	assign TMDSd[3]=clk_low;

	wire[7:0] red_bay,green_bay,blue_bay;

	assign red_bay=(CounterY[0])?(CounterX[0]?0:0):(CounterX[0]?red:0);
	assign green_bay=(CounterY[0])?(CounterX[0]?green:0):(CounterX[0]?0:green);
	assign blue_bay=(CounterY[0])?(CounterX[0]?0:blue):(CounterX[0]?0:0);
	
	TMDS_Encoder encoder0 (.clklow(clk_low),.reset(reset),.state(DrawArea),.pix_data(blue),.H_VSync_Ctr({vSync,hSync}),.q_out(TMDS_blue));
	TMDS_Encoder encoder1 (.clklow(clk_low),.reset(reset),.state(DrawArea),.pix_data(green),.H_VSync_Ctr(2'b0),.q_out(TMDS_green));
	TMDS_Encoder encoder2 (.clklow(clk_low),.reset(reset),.state(DrawArea),.pix_data(red),.H_VSync_Ctr(2'b0),.q_out(TMDS_red));	
		
endmodule
