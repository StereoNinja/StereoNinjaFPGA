module Cam_I2C(input clk400kHz,reset,send_data,input[7:0] datain,input[15:0] register_in,input[7:0] slave_addr,input ackn,inout scl,inout  sda);
	localparam reg[7:0] idle=0;
	localparam reg[7:0] adress=1;
	localparam reg[7:0] rw=2;
	localparam reg[7:0] reg0=3;
	localparam reg[7:0] reg1=4;
	localparam reg[7:0] data=5;
	
	reg[7:0] state=idle;
	reg send_data_old=0;
	reg rising_edge=0;
	integer counter =0;
	reg sda0=1;
	assign sda=sda0;
	always @(posedge clk400kHz) begin
		if (reset==1) begin
			state<=0;		
			sda0<=1;
			counter=0;
		end else begin
			//sda=1;
			send_data_old<=send_data;
			rising_edge=(send_data==1&&send_data_old==0)?1:0;			
			case (state)
				idle: begin
				sda0<=1;
				if(rising_edge==1) begin
					state<=adress;
					sda0<=0;
					counter=0;
				end			
				end
				adress: begin
					sda0<=slave_addr[counter];				
					counter=(counter>=7)?0:counter+1;
					state<=(counter>=7)?rw:adress;
				end
				rw: begin
					sda0<=0;
					state<=((sda==0||ackn==1) && counter==1)?reg0:rw;
					counter=(counter>=1)?0:counter+1;						
				end
				reg0: begin
					sda0<=register_in[counter];				
					counter=(counter>=8)?0:counter+1;
					state<=(counter>=8&&(sda==0||ackn==1))?reg1:reg0;					
				end
				reg1: begin
					sda0<=register_in[counter+8];				
					counter=(counter>=8)?0:counter+1;
					state<=(counter>=8&&(sda==0||ackn==1))?data:reg1;
				end
				data: begin
					sda0<=datain[counter];				
					counter=(counter>=8)?0:counter+1;
					state<=(counter>=8&&(sda==0||ackn==1))?idle:data;		
				end
				default: begin
				end
			endcase
		end
	end
	
	
endmodule