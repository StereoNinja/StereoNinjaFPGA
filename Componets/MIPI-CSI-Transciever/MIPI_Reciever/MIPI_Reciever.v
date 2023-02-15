module MIPI_Reciever(input sys_clk,reset,lane0_d,mipi_clk,mipi_clk_4,lane1_d,inout lane0_p,lane0_n,lane1_p,lane1_n,output[31:0] data_o,output[31:0] adress_out,output reg debug0,debug1,debug2,output termination);
    reg termination_r;
	wire stop_clk, rec_data;
	wire[7:0] lane0byte,lane1byte;
	assign termination=termination_r;   	
    SoTFSM RxFSM(.rec_data(rec_data),.clk100MHz(sys_clk),.reset(reset),.lane0_p(lane0_p),.lane0_n(lane0_n),.lane1_p(lane1_p),.lane1_n(lane1_n),.stop_rx(stop_clk),.term(termination_r),.debug0(debug0));
	wire[3:0]q_o_0,q_o_1;
	wire[1:0] ov_fl_0,ov_fl_1;
	wire even,sync;
	//assign debug1=even;
	wire sync_mipi_clk,sync_mipi_clk_2,sync_mipi_clk_4,sync_mipi_clk_8;
	assign debug2=sync;

	ECLKSYNCB SYNC(.ECLKI(mipi_clk),.STOP(stop_clk),.ECLKO(sync_mipi_clk));	
	CLKDIVF div2 (.CLKI(sync_mipi_clk),.RST(reset),.CDIVX(sync_mipi_clk_2));
	CLKDIVF div4 (.CLKI(sync_mipi_clk_2),.RST(reset),.CDIVX(sync_mipi_clk_4));
	CLKDIVF div8 (.CLKI(sync_mipi_clk_4),.RST(reset),.CDIVX(sync_mipi_clk_8));
	


    IDDR2 lane0 (.lane(lane0_d),.sync_mipi_clk(sync_mipi_clk),.sync_mipi_clk_2(sync_mipi_clk_2),.reset(reset),.stop(stop_clk),.even(even),.sync(sync),.q_o(q_o_0),.ov_fl(ov_fl_0));
	IDDR2 lane1 (.lane(lane1_d),.sync_mipi_clk(sync_mipi_clk),.sync_mipi_clk_2(sync_mipi_clk_2),.reset(reset),.stop(stop_clk),/*.even(even),.sync(sync),*/.q_o(q_o_1),.ov_fl(ov_fl_1));
	
	wire[7:0] byte_e_0,byte_ue_0,byte_e_1,byte_ue_1;
	Byte_Arrange BA0 (.reset(reset),.stop(stop_clk),.mipi_clk_2(sync_mipi_clk_2),.q_o(q_o_0),.ov_fl(ov_fl_0),.byte_e(byte_e_0),.byte_ue(byte_ue_0));
	Byte_Arrange BA1 (.reset(reset),.stop(stop_clk),.mipi_clk_2(sync_mipi_clk_2),.q_o(q_o_1),.ov_fl(ov_fl_1),.byte_e(byte_e_1),.byte_ue(byte_ue_1));
	
	wire[7:0] byte_o_0,byte_o_1;
	Byte_Alligner BAL0(.reset(reset),.stop(stop_clk),.mipi_clk_2(sync_mipi_clk_2),.sync(sync),.even(even),.byte_e(byte_e_0),.byte_ue(byte_ue_0),.byte_o(byte_o_0));
	Byte_Alligner BAL1(.reset(reset),.stop(stop_clk),.mipi_clk_2(sync_mipi_clk_2),.sync(sync),.even(even),.byte_e(byte_e_1),.byte_ue(byte_ue_1),.byte_o(byte_o_1));

	wire [31:0] data;
	wire valid;
	wire[5:0] type_w;
	wire[15:0] wordcount;
	DATA_Encoder DE (.mipi_clk_4(sync_mipi_clk_4),.reset(reset),.stop(stop_clk),.sync(sync),.byte_in0(byte_o_0),.type_o(type_w),.wordcount(wordcount),.byte_in1(byte_o_1),.valid(valid));
	
	
	Protocoll Prot (.mipi_clk_8(sync_mipi_clk_8),.stop(stop_clk),.reset(reset),.valid(valid),.type_i(type_w),.wordcount(wordcount),.data(data),.rec_data(rec_data),.adress_o(),);
	
	assign debug1=rec_data;
	
endmodule

module IDDR2 (input lane,sync_mipi_clk,sync_mipi_clk_2,input reset,stop,output[3:0] q_o,output[1:0] ov_fl,output even,output sync);
	wire[3:0] ddr;
	reg sync_r,even_r;
	reg[3:0] q_o_r;
	reg[1:0] ov_fl_r0;
	reg[1:0] ov_fl_r1;
	reg[7:0] syncbyte=0;
	assign sync=sync_r&(!stop);
	assign even=even_r;
	assign ov_fl=ov_fl_r1;
	assign q_o=q_o_r;	
	//wire one_bit_error_e,one_bit_error_ue;
	wire[7:0] detect_e,detect_ue;	
	
	assign detect_e=syncbyte^8'b10111000;
	assign detect_ue=((8'b00111111)&syncbyte)^8'b00101110;
	//assign one_bit_error_e=(detect_e==1)||(detect_e==2)||(detect_e==4)||(detect_e==8)||(detect_e==16)||(detect_e==32)||(detect_e==64)||(detect_e==128);
	//assign one_bit_error_ue=(detect_ue==1)||(detect_ue==2)||(detect_ue==4)||(detect_ue==8)||(detect_ue==16)||(detect_ue==32)||(detect_ue==64)||(detect_ue==128);
	IDDRX2F IDDR (.D(lane),.ECLK(sync_mipi_clk),.SCLK(sync_mipi_clk_2),.RST(reset),.Q0(ddr[0]),.Q1(ddr[1]),.Q2(ddr[2]),.Q3(ddr[3]));	
	always @(posedge sync_mipi_clk_2) begin
		if(reset||stop)begin
			sync_r<=0;
			even_r<=0;
			ov_fl_r0<=0;
			ov_fl_r1<=0;			
			q_o_r<=0;
			syncbyte=0;
		end else begin				
			syncbyte={ddr,syncbyte[7:4]};			
			sync_r<=(detect_e==0||detect_ue==0)?1:sync_r;
			if(detect_e==0)begin
				even_r<=1;
			end
			if (detect_ue==0) begin
				even_r<=0;
			end
			q_o_r<=ddr;
			ov_fl_r0<=ddr[3:2];
			ov_fl_r1<=ov_fl_r0;
		end
	end

endmodule

module Byte_Arrange(input reset,stop,mipi_clk_2,input[3:0] q_o,input[1:0] ov_fl,output[7:0] byte_e,output[7:0]byte_ue);
	reg[7:0] byte0_r,byte1_r;
	assign byte_e=byte0_r;
	assign byte_ue=byte1_r;	
	always @(posedge mipi_clk_2) begin
		if(reset||stop)begin
			byte0_r<=0;
			byte1_r<=0;
		end else begin				
			byte0_r<={q_o,byte0_r[7:4]};
			byte1_r<={q_o[1:0],ov_fl,byte1_r[7:4]};		
		end
end
endmodule

module Byte_Alligner(input reset,stop,mipi_clk_2,sync,even,input[7:0] byte_e,input[7:0] byte_ue,output[7:0] byte_o);
	reg[7:0] byte_o_r;
	assign byte_o=byte_o_r;	
	reg[7:0]counter;
	wire[7:0] byte_o_eu;
	assign byte_o_eu=(even)?byte_e:byte_ue;
	always @(posedge mipi_clk_2) begin
		if(reset||stop)begin
			byte_o_r<=0;			
			counter<=0;			
		end else begin			
			if(sync)begin
				counter<=counter+1;
				byte_o_r<=(counter[0]==0)?byte_o_eu:byte_o_r;
				//byte_o_r<=byte_o_eu;
				
			end
		end
	end
endmodule


module DATA_Encoder(input mipi_clk_4,reset,stop,sync,input[7:0] byte_in0,byte_in1,output[31:0]data,output valid,output[5:0] type_o,output[15:0] wordcount);

	reg[31:0] out_r;
	reg valid_r,start;
	assign valid=valid_r;	
	reg[7:0] counter;
	wire[31:0] regheader;
	assign regheader=out_r;
	wire[7:0] ecc;
	reg [31:0] data_r;
	reg[5:0] type_o_r;
	reg[15:0] wordcount_r;
	assign data=data_r;
	assign type_o=type_o_r;
	assign wordcount=wordcount_r;
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

	assign one_bit_error=(syndrom==8'h07)||(syndrom==8'h0B)||(syndrom==8'h0D)||(syndrom==8'h0E)||(syndrom==8'h13)||(syndrom==8'h15)|
	(syndrom==8'h16)||(syndrom==8'h19)||(syndrom==8'h1A)||(syndrom==8'h1C)||(syndrom==8'h23)||(syndrom==8'h25)||
	(syndrom==8'h26)||(syndrom==8'h29)||(syndrom==8'h2A)||(syndrom==8'h2C)||(syndrom==8'h31)||(syndrom==8'h32)||
	(syndrom==8'h34)||(syndrom==8'h38)||(syndrom==8'h1F)||(syndrom==8'h2F)||(syndrom==8'h37)||(syndrom==8'h3B);

	always @(posedge mipi_clk_4) begin
		if(reset||stop)begin
			out_r<=0;	
			valid_r<=0;		
			start=0;
			counter<=0;
			data_r<=0;
			type_o_r<=0;
			wordcount_r<=0;
		end else begin			
			if(sync)begin
				out_r<={byte_in1,byte_in0,out_r[31:16]};
				valid_r<=(ecc==out_r[31:24]&&out_r!=0)?1:valid_r;
				start=(ecc==out_r[31:24]&&out_r!=0)?1:start;
				type_o_r<=(ecc==out_r[31:24]&&out_r!=0)?out_r[5:0]:type_o_r;
				wordcount_r<=(ecc==out_r[31:24]&&out_r!=0)?out_r[23:8]:wordcount_r;
				if(start)begin
					counter<=counter+1;
					if(counter>1)begin
						counter<=1;
						data_r<=out_r;
					end else begin
						counter<=counter+1;
					end
				end						
			end
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
	localparam integer Thssettle=4;
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
					stop_rx<=1;	
				end
				LP11:begin					
					state_mipi<=(lane0_p==0 && lane0_n==1 &&lane1_p==0 &&lane1_n==1)?LP01:LP11;	
					debug0<=0;
					stop_rx<=1;	
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
					stop_rx<=1;			
				end
				LP00:begin
					stop_rx<=1;	
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
					if(rec_data==1)begin
						state_mipi<=HEADER;
						timer_tou<=0;
					end				
				end	
				HEADER:begin
					timer_tou<=timer_tou+1;
					if(rec_data==0||timer_tou>8*Timeout)begin
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



module Protocoll(input mipi_clk_8,stop,reset,valid,input[5:0] type_i,input[15:0] wordcount,input[31:0] data,output[31:0] data_o,adress_o,output rec_data);
	reg rec_data_r,state,valid_old;
	reg[31:0] counter,count_val,data_o_r,counter2;
	assign data_o=data_o_r;
	assign rec_data=rec_data_r&&(!stop);

	always @(posedge mipi_clk_8) begin
		if(reset)begin
			rec_data_r<=0;
			state<=0;
			data_o_r<=0;
			counter2<=0;
			valid_old<=0;
			//counter<=0;
			//count_val<=0;
		end	else begin
			valid_old<=valid;			
			case (state)
				0:begin
					state<=((valid)&&type_i=='h2a&&wordcount=='h0280)?1:0;
					count_val<=wordcount/4;							
				end 
				1:begin
					if(counter<count_val)begin
						counter<=counter+1;
						rec_data_r<=1;
						data_o_r<=data;
					end else begin
						rec_data_r<=0;
						state<=0;
						counter<=0;
					end
				end
				default:begin					
				end 
			endcase
		end
	end

endmodule






/*
module ECLKSYNCB (input ECLKI,STOP,output ECLKO);
		assign ECLKO=STOP?0:ECLKI;
endmodule

module CLKDIVF(input CLKI,RST,output CDIVX);
	reg[7:0] counter;
	assign CDIVX=counter[0];
	always @(posedge CLKI) begin
		if(RST==1)begin
			counter<=0;
		end else begin
			counter<=counter+1;
		end
	end

endmodule

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

module IDDRX2F (input D,ECLK,SCLK,RST,output Q0,Q1,Q2,Q3);
	reg A,B,C,D1;
	assign Q0=A;
	assign Q1=B;
	assign Q2=C;
	assign Q3=D1;

	always @(posedge ECLK ) begin
		
		if(SCLK==0)begin
			A<=D;
		end
		if(SCLK==1)begin
			C<=D;
		end
	end
	always @(negedge ECLK) begin
		if(SCLK==1)begin
			B<=D;
		end
		if(SCLK==0)begin
			D1<=D;
		end
	end
	

endmodule