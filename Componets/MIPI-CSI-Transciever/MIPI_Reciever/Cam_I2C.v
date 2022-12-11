module Cam_I2C(output valid,input clk400kHz,reset,send_data,r_w,input[7:0] datain,input[15:0] register_in,input[6:0] slave_addr,input ackn,inout scl,inout  sda, output ready);
	localparam reg[7:0] idle=0;
	localparam reg[7:0] start=1;
	localparam reg[7:0] send=2;
	localparam reg[7:0] reg0=3;
	localparam reg[7:0] reg1=4;
	localparam reg[7:0] data=5;
	localparam reg[7:0] stop=6;
	
	reg valid_r;
	reg[7:0] state=idle;
	reg send_data_old=0;
	reg rising_edge=0;
	integer counter =0;
	reg sda0=1;
	assign sda=sda0;
	reg sending=0;
	reg[36:0] i2cdata={slave_addr,1'b0,1'b1,register_in[15:8],1'b1,register_in[7:0],1'b1,datain,1'b1,1'b0};
	reg [36:0] i2cin=0;
	reg ready0;
	assign valid=valid_r;
	always @(posedge clk400kHz) begin
		if (reset==1) begin
			state<=0;		
			sda0<=1;
			counter=0;
			valid_r=0;			
		end else begin
			//sda=1;
			send_data_old<=send_data;
			rising_edge=(send_data==1&&send_data_old==0)?1:0;			
			case (state)
				idle: begin
					valid_r=0;
					ready0<=1;
					sda0<=1;
					sending=0;
					if(rising_edge==1) begin
						state<=start;
						ready0<=0;
						counter=0;
						sda0<=0;
						//sending=1;
					end
				end	
				start: begin
					sending=(counter>=36)?0:1;
					sda0<=(counter>=36)?0:i2cdata[36-counter];				
					counter=(counter>=36)?0:counter+1;
					state<=(counter>=36)?stop:start;		
					
				end
				stop: begin					
					state<=idle;
					sda0<=0;
					if(i2cin[1]==0&&i2cin[10]==0&&i2cin[19]==0&&i2cin[28]==0)begin
						valid_r=1;
					end
				end
				default: begin
				end
			endcase
		end
	end
	reg [7:0]clkcount=0;
	reg clkdelay0;
	reg clkdelay1;	
	reg scl0,scl1,scl2;	
	assign scl=sending?~clk400kHz:1;
	assign ready=ready0;
	
endmodule