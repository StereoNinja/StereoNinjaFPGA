module SERIAL(input clk,input reset,input RX,output TX,output vid_en,write_ram,output[7:0] green_r,red_r,blue_r,output[25:0]addr,output [7:0]led);
	reg[3:0] state=0;	
	reg[7:0] datain;
	reg[7:0] dataout;
	reg send_data;
	wire data_ready;
	always @(posedge clk) begin
		if(reset==1) begin
			state=0;		
			dataout=0;
			send_data=0;
		end else begin
			vid_en<=0;
			write_ram<=0;
			case (state)
				'd0: begin//idle
					write_ram<=0;
					vid_en<=0;
					if(data_ready==1&&datain=='hAA)begin
						state<=1;
						send_data<=1;
						dataout<='h01;
					end else begin    	
						send_data<=0;
					end
				end
				'd1: begin//con
					if(data_ready==1&&datain=='hAB)begin
						state<=2;
						send_data<=1;
						dataout<='h02;
					end else if(data_ready==1&&datain=='hAC) begin
						state<=3;
						send_data<=1;
						dataout<='h03;		
					end
					else begin   	
						send_data<=0;
					end
				end
				'd2: begin//vid_en
					vid_en<=1;
					if(data_ready==1&&datain=='hA0)begin
						state<=0;
						send_data<=1;
						dataout<='h04;				
					end else begin
						send_data<=0;
					end
				end
				'd3: begin//write_ram
					write_ram<=0;	
					if(data_ready==1&&datain=='hAD)begin
						state<=0;
						send_data<=1;
						dataout<='h04;			
					end else if(data_ready==1&&datain=='hAF)begin
						state<=4;
						send_data<=1;
						dataout<='hAF;			
					end else begin   	
						send_data<=0;
					end
				end	
				'd4: begin//header	
					if(data_ready==1)begin
						state<=5;
						addr[7:0]=datain;
						send_data<=1;
						dataout<='h10;
					end	else begin
						send_data<=0;
					end
				end	
				'd5: begin//addr0
					if(data_ready==1)begin
						state<=6;
						addr[15:8]=datain;
						send_data<=1;
						dataout<='h11;
					end	else begin
						send_data<=0;
					end
				end	
				'd6: begin//addr1
					if(data_ready==1)begin
						state<=7;
						addr[23:16]=datain;
						send_data<=1;
						dataout<='h12;
					end else begin
						send_data<=0;
					end
				end	
				'd7: begin//addr2
					if(data_ready==1)begin
						state<=8;
						red_r=datain;
						send_data<=1;
						dataout<='h13;
					end else begin
						send_data<=0;
					end
				end	
				'd8: begin//red			
					if(data_ready==1)begin
						state<=9;
						green_r=datain;	
						send_data<=1;
						dataout<='h14;
					end else begin
						send_data<=0;
					end
				end	
				'd9: begin//green			
					if(data_ready==1)begin
						state<=10;
						blue_r=datain;	
						send_data<=1;
						dataout<='h15;
					end else begin
						send_data<=0;
					end
				end	
				'd10: begin//blue			
					if(data_ready==1&&datain=='hA1)begin
						state<=3;
						send_data<=1;
						dataout<='hA1;
						write_ram<=1;
					end else begin   	
						send_data<=0;
					end
				end	
				default: begin
				end
			endcase	
		end
	end


	assign led=datain;
	
	RX #(.CLKS_PER_BIT(218)) rxm(.i_Clock(clk),.i_Rx_Serial(RX),.o_Rx_DV(data_ready),.o_Rx_Byte(datain)); 
	//RX rxm(.clk(clk),.resetn(!reset),.ser_rx(RX),.cfg_divider(217),.data(datain));
	TX #(.CLKS_PER_BIT(217)) txm(.i_Clock(clk),.i_Tx_DV(send_data),.i_Tx_Byte(dataout),.o_Tx_Serial(TX));	

endmodule