module Cam_Init(input clk400,input reset,input init,inout sda,scl,output cam_ready);	
	reg send_data,cam_ready_r,ready,ready_old,cam_ready0;
	reg[7:0] datain,slave_addr,state;
	reg[15:0] register_in;
	reg initia=1;
	reg init_old=0;
	integer counter;
	
	
	Cam_I2C cam0 (.clk400kHz(clk400),.scl(scl),.sda(sda),.reset(reset)
			,.send_data(send_data),.datain(datain),.register_in(register_in),.slave_addr(slave_addr),.ackn(1'b0),.ready(ready));
	localparam reg[7:0] idle=0;
	localparam reg[7:0] init_s=1;
	localparam reg[7:0] wakeup=2;
	
	assign cam_ready=cam_ready0;
	integer dataint=7;
	
	reg[23:0] data_init [0:61];
	initial $readmemh("initdata_lowres.mem",data_init);	
	always @(posedge clk400) begin
		if(reset==1) begin
			state<=idle;
			send_data<=0;
			cam_ready0<=0;
			init_old<=0;
			initia<=1;
		end else begin
			init_old<=init;
			ready_old<=ready;
			case (state)
				idle: begin
					state<=(init_old==0&&init==1)?init_s:idle;
					counter<=0;
				end
				init_s:begin
					send_data<=0;
					if((ready==1&&ready_old==0)||initia)begin
						initia<=0;
						counter<=counter+1;						
						send_data<=1;
						slave_addr<=16;	
						//datain<='hff;
						//register_in<='hffff;
						datain<=data_init[counter][7:0];
						register_in<=data_init[counter][23:8];
					end					
					state<=(counter>60)?idle:init_s;
					//cam_ready0<=(counter>53)?1:0;
				end
				wakeup:begin
					send_data<=0;
					if(counter>60) begin
					state<=idle;
					send_data<=1;
					slave_addr<=16;	
					counter<=0;
					datain<=data_init[59];
					register_in<=data_init[59];
					end;
					counter<=counter+1;
				end
				default: begin
				end
				endcase
		end
	end
	
	
endmodule