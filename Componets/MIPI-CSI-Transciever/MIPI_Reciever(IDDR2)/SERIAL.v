module SERIAL(input clk,input reset,start,output TX,input [7:0] datain,input[23:0] addrin,output reg ready);
	reg[7:0] state=0;	
	reg[7:0] dataout;
	reg send_data;
	wire TX_Done;
	integer cnt;
	/////////////////
	localparam[7:0] idle=0;
	localparam[7:0] sync=1;
	localparam[7:0] addr0=2;
	localparam[7:0] addr1=3;
	localparam[7:0] addr2=4;
	localparam[7:0] pix=5;

	always @(posedge clk) begin
		if(reset==1) begin
			state<=0;		
			send_data<=0;
			cnt<=0;
			ready<=0;
		end else begin			
			case (state)
				idle: begin
					state<=start?sync:state;
					ready<=1;
				end	
				sync: begin
					ready<=0;					
					dataout<=8'haa;
					state<=(TX_Done&&cnt>800)?addr0:state;
					cnt<=(TX_Done&&cnt>800)?0:cnt+1;					
					send_data<=(TX_Done&&cnt>400)?0:1;					
				end
				addr0: begin
					ready<=0;					
					dataout<=addrin[7:0];
					state<=(TX_Done&&cnt>800)?addr1:state;
					cnt<=(TX_Done&&cnt>800)?0:cnt+1;	
					send_data<=(TX_Done&&cnt>400)?0:1;	
				end
				addr1: begin
					
					dataout<=addrin[15:8];
					state<=(TX_Done&&cnt>800)?addr2:state;
					cnt<=(TX_Done&&cnt>800)?0:cnt+1;	
					send_data<=(TX_Done&&cnt>400)?0:1;	
				end	
				addr2: begin
					
					dataout<=addrin[23:16];
					state<=(TX_Done&&cnt>800)?pix:state;
					cnt<=(TX_Done&&cnt>800)?0:cnt+1;	
					send_data<=(TX_Done&&cnt>400)?0:1;	
				end	
				pix: begin
					
					dataout<=datain;
					state<=(TX_Done&&cnt>800)?idle:state;
					cnt<=(TX_Done&&cnt>800)?0:cnt+1;	
					send_data<=(TX_Done&&cnt>400)?0:1;	

				end					
				default: begin
				end
			endcase	
		end
	end


	
	
	
	//RX rxm(.clk(clk),.resetn(!reset),.ser_rx(RX),.cfg_divider(217),.data(datain));
	TX #(.CLKS_PER_BIT(217)) txm(.i_Clock(clk),.i_Tx_DV(send_data),.i_Tx_Byte(dataout),.o_Tx_Serial(TX),.o_Tx_Done(TX_Done));	

endmodule