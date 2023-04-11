module MIPI_Reciever_old(input sys_clk,mipi_clk,mipi_clk_2,mipi_clk_8,reset,lane0_d,lane1_d,inout lane0_p,lane0_n,lane1_p,lane1_n,output[7:0] red,output[7:0] green,output[7:0] blue,output[7:0] adress_out,output reg debug0,debug1,debug2,output termination);
    reg termination_r;
	wire stop_clk;
	wire[7:0] lane0byte,lane1byte;
	assign termination=termination_r;	
   	wire sync_detect;
	wire mipi_clk0_25_sync;
   	wire[31:0] regheader;
    LaneRx lane0(.lane_d(lane0_d),.stop(stop_clk),.mipi_clk(mipi_clk),.sync(sync_detect),.byte0(lane0byte));
    LaneRx lane1(.lane_d(lane1_d),.stop(stop_clk),.mipi_clk(mipi_clk),.sync(debug0),.byte0(lane1byte));    
    SoTFSM RxFSM(.clk100MHz(sys_clk),.reset(reset),.lane0_p(lane0_p),.lane0_n(lane0_n),.lane1_p(lane1_p),.lane1_n(lane1_n),.stop_rx(stop_clk),.term(termination_r),.debug0(debug1));
    ByteAlligner all(.mipi_clk(mipi_clk),.reset(reset),.stop(stop_clk),.sync(sync_detect),.lane0(lane0byte),.lane1(lane1byte),.out(regheader));
	wire debug2_w;		
	wire[31:0] out_w;
	LowProtocoll LP(.clk(mipi_clk),.reset(reset),.sync(sync_detect),.in(regheader),.stop(stop_clk),.valid(debug2_w),.out(out_w));	
	wire sync_detect_w;
	//assign debug2=debug2_w;
	Pulsedelay delay(.clk(mipi_clk),.in(debug2_w),.out(debug2));
	//assign debug0=mipi_clk_8;
	
	//DataHandler DH(.mipi_clk_0125(mipi_clk),.stop(stop_clk),.reset(reset),.header_detect(debug2_w),.recieve_data(debug0),.in(out_w));
endmodule
module Pulsedelay(input clk,in,output out);
reg[64:0] data=0;
	always @(posedge clk) begin
		data<={in,data[64:1]};
	end
	assign out=(data!=0)||in;
endmodule

module LaneRx(input lane_d,stop,mipi_clk,output sync,output[7:0] byte0);
	IDDRX1F l0(.D(lane_d),.SCLK(mipi_clk),.Q0(ddr[0]),.Q1(ddr[1]),.RST('b0));
	reg[7:0] byte_r;
	reg sync_r=0;
	assign sync=sync_r;
	assign byte0=byte_r;
	wire[1:0] ddr;
	always @(posedge mipi_clk or posedge stop) begin
		if(stop==1)begin
			byte_r<=0;
			sync_r<=0;
		end else begin
			byte_r<={ddr,byte_r[7:2]};
			sync_r<=(byte_r[7:0]==8'b10111000)?1:sync_r;
		end
	end
endmodule

module SoTFSM(input clk100MHz,reset,rec_data,lane0_p,lane0_n,lane1_p,lane1_n,stop_tran,output reg stop_rx,term,debug0,debug1);
	///////////////////States for long and short Packet Recieve
	localparam reg[7:0] TIMEOUT=0;
	localparam reg[7:0] LP11=1;
	localparam reg[7:0] LP01=2;
	localparam reg[7:0] LP00=3;
	localparam reg[7:0] SYNC=4;
	localparam reg[7:0] HEADER=5;
	localparam reg[7:0] DATA=6;	
	///////////////////Const for Timing 
	localparam integer Tlpx=2;
	localparam integer Timeout=20;
	localparam integer Tdterm=2;
	localparam integer Thssettle=5;
	///////////////////
	reg[7:0] state_mipi=TIMEOUT;	
	integer timer_tou,timer_term,timer_hs;	
	///////////////////////////////////////////////FSM
	always @(posedge clk100MHz) begin
		if(reset==1) begin
			state_mipi<=TIMEOUT;
			timer_tou<=0;
			timer_term<=0;
			timer_hs<=0;			
			term<=0;
			stop_rx<=1;
		end else begin
			case (state_mipi)
				TIMEOUT: begin
					state_mipi<=(lane0_p==1 && lane0_n==1 &&lane1_p==1 &&lane1_n==1)?LP11:TIMEOUT; 				
					timer_tou<=0;
					timer_term<=0;
					timer_hs<=0;			
					term<=0;
					debug0<=0;
				end
				LP11:begin					
					state_mipi<=(lane0_p==0 && lane0_n==1 &&lane1_p==0 &&lane1_n==1)?LP01:LP11;	
					debug0<=0;
				end
				LP01:begin
					if(timer_tou>=Timeout) begin
						state_mipi<=TIMEOUT;
					end else begin
						if(lane0_p==0 && lane0_n==0 &&lane1_p==0 &&lane1_n==0)begin
							state_mipi<=LP00;
							timer_tou<=0;					 
						end					
					end						
					timer_tou<=timer_tou+1;
					timer_term<=timer_term+1;			
				end
				LP00:begin
					if(timer_term>=Tdterm) begin					
						term<=1;					
					end 
					if(timer_hs>=Thssettle) begin
						state_mipi<=SYNC;
						timer_tou<=0;	
						stop_rx<=0;
					end
					if(timer_tou>=Timeout)begin
						state_mipi<=TIMEOUT;
					end
					timer_tou<=timer_tou+1;
					timer_term<=timer_term+1;
					timer_hs<=timer_hs+1;					
				end
				SYNC:begin		
					debug0<=1;
					if(timer_tou>=4*Timeout)begin
						state_mipi<=TIMEOUT;
						stop_rx<=1;					
					end				
					timer_tou<=timer_tou+1;
					/*if(rec_data==1)begin
						state_mipi<=HEADER;
						timer_tou<=0;
					end*/				
				end	
				HEADER:begin
					if(rec_data==0)begin
						state_mipi<=TIMEOUT;
						stop_rx<=1;	
					end	
				end		
				default: begin
				end
			endcase		
		end	   
	end
endmodule

module ByteAlligner(input mipi_clk,reset,stop,sync,input[7:0] lane0,input[7:0] lane1,output[31:0] out);
	reg[31:0] out_r;
	assign out=out_r;
	reg start=0;
	reg[7:0] counter;
	always @(posedge mipi_clk) begin
		if(reset==1||stop==1)begin
			out_r<=0;
			start=0;
			counter<=0;
			end else begin
			start=sync?1:start;
			if(start)begin				
				if(counter<3)begin
					counter<=counter+1;
				end else begin
					counter<=0;
					out_r<={lane1,lane0,out_r[31:16]};
				end
			end
		end
	end
endmodule

module LowProtocoll(input clk,input reset,sync,input[31:0] in,input stop,output[31:0] out,output valid,RAW8);
	
	wire[31:0] regheader;
	assign regheader=in;
	wire[7:0] ecc;
	assign ecc[0]=regheader[0]^regheader[1]^regheader[2]^regheader[4]^regheader[5]^regheader[7]^regheader[10]^regheader[11]^regheader[13]^regheader[16]^
		regheader[20]^regheader[21]^regheader[22]^regheader[23];
	assign ecc[1]=regheader[0]^regheader[1]^regheader[3]^regheader[4]^regheader[6]^regheader[8]^regheader[10]^regheader[12]^regheader[14]^regheader[17]^
		regheader[20]^regheader[21]^regheader[22]^regheader[23];
	assign ecc[2]=regheader[0]^regheader[2]^regheader[3]^regheader[5]^regheader[6]^regheader[9]^regheader[11]^regheader[12]^regheader[15]^regheader[18]^
		regheader[20]^regheader[21]^regheader[22];
	assign ecc[3]=regheader[1]^regheader[2]^regheader[3]^regheader[7]^regheader[8]^regheader[9]^regheader[13]^regheader[14]^regheader[15]^regheader[19]^
		regheader[20]^regheader[21]^regheader[23];
	assign ecc[4]=regheader[4]^regheader[5]^regheader[6]^regheader[7]^regheader[8]^regheader[9]^regheader[16]^regheader[17]^regheader[18]^regheader[19]^
		regheader[20]^regheader[22]^regheader[23];
	assign ecc[5]=regheader[10]^regheader[11]^regheader[12]^regheader[13]^regheader[14]^regheader[15]^regheader[16]^regheader[17]^regheader[18]^regheader[19]^
		regheader[21]^regheader[22]^regheader[23];	
	assign ecc[6]=0;
	assign ecc[7]=0;
	wire syndrom,one_bit_error;
	assign syndrom=ecc^regheader[31:24];
	/*assign one_bit_error=(syndrom==8'h07)||(syndrom==8'h0B)||(syndrom==8'h0D)||(syndrom==8'h0E)||(syndrom==8'h13)||(syndrom==8'h15)|
	(syndrom==8'h16)||(syndrom==8'h19)||(syndrom==8'h1A)||(syndrom==8'h1C)||(syndrom==8'h23)||(syndrom==8'h25)||
	(syndrom==8'h26)||(syndrom==8'h29)||(syndrom==8'h2A)||(syndrom==8'h2C)||(syndrom==8'h31)||(syndrom==8'h32)||
	(syndrom==8'h34)||(syndrom==8'h38)||(syndrom==8'h1F)||(syndrom==8'h2F)||(syndrom==8'h37)||(syndrom==8'h3B);*/
	reg valid_r=0;
	reg start=0;
	reg[31:0] out_r;
	assign out=out_r;
	reg[7:0] counter;	
	assign valid=valid_r;
	always @(posedge clk ) begin		
		if(reset==1||stop==1)begin			
			valid_r<=0;	
			start=0;
			counter<=0;			
			end else begin
			start=sync?1:start;
			if(start)begin		
				//valid_r<=((ecc==in[31:24])&&(in!=0)&&in[5:0]=='h2a)?1:0;		
				if(counter<11)begin
					counter<=counter+1;					
				end else begin
					counter<=4;					
					valid_r<=((syndrom==0)&&(in!=0)&&in[5:0]=='h2a)?1:0;
					out_r<=((syndrom==0)&&(in!=0)/*&&in[5:0]=='h2a*/)?in:0;					
				end
			end
		end
	end	
endmodule

module DataHandler (
		input reset,stop,mipi_clk_0125,header_detect,FS,RAW8,input[31:0] in,output recieve_data,output[31:0] data_out,output[31:0] adress_out
	);
	reg state=0;
	reg recieve_data_r=0;
	reg[31:0] data_out_r,counter;
	assign data_out=data_out_r;
	assign adress_out=counter;
	assign recieve_data=recieve_data_r;
	reg[31:0] count_val=0;
	always @(posedge mipi_clk_0125) begin
		if(reset==1||stop==1)begin
			state<=0;
			recieve_data_r<=0;
			counter<=0;
		end else begin
			case (state)
				0:begin
					recieve_data_r<=0;
					if(header_detect)begin
						state<=1;
						count_val<=in[23:8]/4;
						//count_val<=40;
						counter<=0;
						recieve_data_r<=1;
					end
				end 
				1:begin
					if (counter<count_val) begin
						data_out_r<=in;
						counter<=counter+1;
					end else begin
						state<=0;
						recieve_data_r<=0;
						data_out_r<=0;
					end
				end
				default:begin				
				end 
			endcase
		end
	end

endmodule
/*
module IDDRX1F(input D,input SCLK,input RST,output Q0,output Q1);
	reg Q0_r,Q1_r;
	always @(posedge SCLK) begin
		Q0_r<=D;
	end
	always @(negedge SCLK) begin
		Q1_r<=D;
	end	
	assign Q1=Q1_r;
	assign Q0=Q0_r;
	
endmodule