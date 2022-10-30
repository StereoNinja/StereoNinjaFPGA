module HDMI_Transciever(input clk_low,input clk_high,input reset,output red,green,blue,clock,output[25:0] ram_addr,input[7:0] ram_green,input[7:0] ram_blue ,input[7:0] ram_red);
	
	parameter h_pixel=640,				  
		h_front_porch=16,
		h_sync_widith=96,
		h_back_porch=48,
		h_blanking_total=160,
		h_tot_pixel=800,
				  
		v_pixel=480,				  
		v_front_porch=10,
		v_sync_widith=2,
		v_back_porch=33,
		v_blanking_total=45,
		v_tot_pixel=525;
/*parameter h_pixel=10,				  
   		h_front_porch=2,		
		h_back_porch=2,		
		h_tot_pixel=16,
				  
		v_pixel=10,				  
		v_front_porch=2,		
		v_back_porch=2,		
		v_tot_pixel=16;*/
	
		
		integer h,v=0;
		always @(posedge(clk_low)) begin
			
				//////////////////////////// state and adress counting
				
				if ((h>=h_back_porch-1 && v>= v_back_porch) && ((h<h_back_porch+h_pixel-1 && v< v_back_porch+v_pixel))) begin
					state=2;
					addr=addr+1;
				end	else begin				
					state=0;
					H_VSync_Ctr_1[0]=1;
					H_VSync_Ctr_1[1]=0;
					H_VSync_Ctr_2[0]=0;
					H_VSync_Ctr_2[1]=0;
				end
				////////////////////////////HSync
				if(h>=(h_back_porch+h_pixel+h_front_porch)-1) begin
					H_VSync_Ctr_0[0]=1;	
				end else begin
					H_VSync_Ctr_0[0]=0;
				end				
				////////////////////////////VSync
				if( v>=(v_back_porch+v_pixel+v_front_porch)) begin
					H_VSync_Ctr_0[1]=1;	
				end else begin
					H_VSync_Ctr_0[1]=0;
				end				
				/////////////////////////////next frame
				if (h>=h_tot_pixel-1 && v>=v_tot_pixel-1) begin
					h=0;
					v=0;
				end
				
				if(h>= h_tot_pixel-1)begin
					v=v+1;
					h=0;
					H_VSync_Ctr_0[0]=0;
					H_VSync_Ctr_0[1]=0;
				end else if(first==1) begin
				h=h+1;
				end
				first=1;
		end
		reg[1:0] state;
		reg[1:0] H_VSync_Ctr_0;
		reg[1:0] H_VSync_Ctr_1;
		reg[1:0] H_VSync_Ctr_2;
		reg[25:0] addr;
		reg first=0;
		assign ram_addr=addr;
		TMDS_Encoder encoder0 (.clklow(clk_low),.clkhigh(clk_high),.reset(reset),.state(state),.pix_data(ram_blue),.H_VSync_Ctr(H_VSync_Ctr_0),,.data_o(blue));
		TMDS_Encoder encoder1 (.clklow(clk_low),.clkhigh(clk_high),.reset(reset),.state(state),.pix_data(ram_green),.H_VSync_Ctr(H_VSync_Ctr_0),,.data_o(green));
		TMDS_Encoder encoder2 (.clklow(clk_low),.clkhigh(clk_high),.reset(reset),.state(state),.pix_data(ram_red),.H_VSync_Ctr(H_VSync_Ctr_0),,.data_o(red));
		
endmodule