module Cam_Init(input clk25,input clk400,input clk1_6,input reset,input init,inout sda,scl,output cam_ready);	
	reg send_data,cam_ready_r,ready,ready_old,cam_ready0;
	reg[7:0] datain,slave_addr,state;
	reg[15:0] register_in;
	reg initia=1;
	reg init_old=0;
	integer counter;
	
	
	Cam_I2C cam0 (.clk400kHz(clk400),.scl(scl),.sda(sda),.clk1_6MHz(clk1_6),.reset(reset)
			,.send_data(send_data),.datain(datain),.register_in(register_in),.slave_addr(slave_addr),.ackn(1'b0),.ready(ready));
	localparam reg[7:0] idle=0;
	localparam reg[7:0] init_s=1;
	localparam reg[7:0] wakeup=2;
	
	assign cam_ready=cam_ready0;
	integer dataint=7;
	
	reg[23:0] data_init [0:55];
	initial $readmemh("initdata.mem",data_init);
		/*	{8'h00,8'h05,8'h0c,8'hff,8'hff,
			 8'h05,8'h09,8'h01,8'h00,
			 8'h18,8'h00,8'h0d,8'h78,
			 8'h03,8'he8,8'h08,8'he7,
			 8'h02,8'hf0,8'h06,8'haf,
			 8'h02,8'h80,8'h01,8'he0,
			 8'h01,8'h01,8'h03,8'h03,
			 8'h05,8'h01,8'h03,8'h03,
			 8'h00,8'h39,8'h01,8'h00,
			 8'h72,8'h06,8'h68,8'h04,
			 8'hd0,8'h00,8'h4b,8'h0f,
			 8'h14,8'h00,8'h14,8'h30,
			 8'h10,8'h10,8'h10,8'h0e,
			 8'h0e,8'h01};*/
	reg[15:0] reg_init[0:58];
	initial $readmemh("initreg.mem",reg_init);
	/*   {16'h0100,16'h30eb,16'h30eb,16'h300a,
	   	16'h300b,16'h30eb,16'h30eb,16'h0114,
	   	16'h0128,16'h012a,16'h012b,16'h0164,
	   	16'h0165,16'h0166,16'h0167,16'h0168,
	   	16'h0169,16'h016a,16'h016b,16'h016c,
	   	16'h016d,16'h016e,16'h016f,16'h0170,
	   	16'h0171,16'h0174,16'h0175,16'h0301,
	   	16'h0303,16'h0304,16'h0305,16'h0306,
	   	16'h0307,16'h030b,16'h030c,16'h030d,
	   	16'h0624,16'h0625,16'h0626,16'h0627,
	   	16'h455e,16'h471e,16'h4767,16'h4750,
	   	16'h4540,16'h47b4,16'h4713,16'h478b,
	   	16'h478f,16'h4793,16'h4797,16'h479b,
		16'h0162,16'h0163,16'h0100};*/
			
	
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
					state<=(counter>54)?idle:init_s;
					//cam_ready0<=(counter>53)?1:0;
				end
				wakeup:begin
					send_data<=0;
					if(counter>60) begin
					state<=idle;
					send_data<=1;
					slave_addr<=16;	
					counter<=0;
					datain<=data_init[55];
					register_in<=reg_init[55];
					end;
					counter<=counter+1;
				end
				default: begin
				end
				endcase
		end
	end
	
	
endmodule