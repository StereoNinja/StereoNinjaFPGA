module MIPI_Reciever(input bit_clk,mipi_clk,reset,lane0_d,lane1_d,inout  lane0_p,lane0_n,lane1_p,lane1_n,output[7:0] red,output[7:0] green,output[7:0] blue,output[7:0] adress_out,output reg debug0,debug1,debug2,output termination);
reg[7:0] bytereg0=0;
reg[7:0] bytereg1=0;
reg[7:0] bytereg=0;

integer delay_mipi=0;
reg end_data;
reg[7:0] state_mipi=TIMEOUT;
reg[7:0] state_mipi_sync=MIPI_IDLE;
integer allign_cnt=0;
reg termination_r=0;
reg lane0_pr,lane0_nr,lane1_pr,lane1_nr;
assign termination=termination_r;
reg start_clk=0;
reg stop_clk=0;
reg FS_detect,Eot_detect,sync_detect;
reg[24:0] addres=0;
reg[39:0] regheader=0;
wire[7:0] ecc;
reg[31:0] wordcount;
wire[1:0] lane0ddr;
wire[1:0] lane1ddr;
reg[7:0] timer0,timer1,timer2;//timeout termination hs-prepare
    //ECLKSYNCB ECLKS(.ECLKI(mipi_clk),.STOP(startclk),.ECLKO(clk_mipi_o));
    IDDRX1F l0(.D(lane0_d),.SCLK(mipi_clk),.Q0(lane0ddr[1]),.Q1(lane0ddr[0]),.RST('b0));
    IDDRX1F l1(.D(lane1_d),.SCLK(mipi_clk),.Q0(lane1ddr[0]),.Q1(lane1ddr[1]),.RST('b0));
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
///////////////////States for long and short Packet Recieve
localparam reg[7:0] TIMEOUT=0;
localparam reg[7:0] LP11=1;
localparam reg[7:0] LP01=2;
localparam reg[7:0] LP00=3;
localparam reg[7:0] SYNC=4;
localparam reg[7:0] HEADER=5;
localparam reg[7:0] DATA=6;
///////////////////////////
localparam reg[7:0] MIPI_SYNC=0;
localparam reg[7:0] MIPI_IDLE=1;
localparam reg[7:0] MIPI_DATA=2;

//////////////////Const for Data_id
localparam reg[5:0] FS_const=6'h00;//Framestart
localparam reg[5:0] FE_const=6'h01;//Frameend
localparam reg[5:0] ED_const=6'h12;//Embedded data
localparam reg[5:0] RAW8_const=6'h2A;//Embedded data
localparam reg[5:0] RAW10_const=6'h2B;//Embedded data
///////////////////Const for Timing 
localparam integer Tlpx=5;
localparam integer Timeout=40;
localparam integer Tdterm=5;
localparam integer Thssettle=11;
///////////////////FSM for MIPI Reciever
always @(posedge bit_clk) begin
	if(reset==1) begin
		state_mipi<=TIMEOUT;
		timer0<=0;
		timer1<=0;
		timer2<=0;
		debug2<=0;		
		termination_r<=0;
	end else begin
		case (state_mipi)
	 	    TIMEOUT: begin
	 	    	state_mipi<=(lane0_p==1 && lane0_n==1 &&lane1_p==1 &&lane1_n==1)?LP11:TIMEOUT; 	    	
	 	    	debug2<=0;
	 	    	termination_r<=0;
	 	    end
			LP11:begin
				timer0<=0;	
				timer1<=0;
				timer2<=0;
				state_mipi<=(lane0_p==0 && lane0_n==1 &&lane1_p==0 &&lane1_n==1)?LP01:LP11;				
				debug2<=0;
				termination_r<=0;
			end
			LP01:begin
				if(timer0>=Timeout) begin
					state_mipi<=TIMEOUT;
				end else begin
					if(lane0_p==0 && lane0_n==0 &&lane1_p==0 &&lane1_n==0)begin
					 state_mipi<=LP00;
					 timer0<=0;					 
					end					
				end
				timer2<=0;	
				timer0<=timer0+1;
				timer1<=timer1+1;			
				end
			LP00:begin
				if(timer1>=Tdterm) begin					
					termination_r<=1;					
				end 
				if(timer2>=Thssettle) begin
					state_mipi<=SYNC;
					timer0<=0;	
					start_clk<=1;
				end
				if(timer0>=Timeout)begin
					state_mipi<=TIMEOUT;
				end
				timer0<=timer0+1;
				timer1<=timer1+1;
				timer2<=timer2+1;				
				debug2<=0;
			end
			SYNC:begin							
				debug2<=1;
				if(timer0>=6*Timeout)begin
					state_mipi<=TIMEOUT;
					start_clk<=0;					
				end
				timer0<=timer0+1;
				if(stop_clk==1)begin
					termination_r<=0;
					start_clk<=0;	
					state_mipi<=TIMEOUT;
				end				
			end			
			default: begin
			end
		endcase		
	end	
end

always@(negedge mipi_clk or negedge start_clk)begin
	if(start_clk==0) begin
		state_mipi_sync<=MIPI_IDLE;		
		debug0<=0;
		debug1<=0;
		stop_clk<=0;
	end else if(start_clk==1) begin				
				
				bytereg0={lane0ddr,bytereg0[7:2]};
				bytereg1={lane1ddr,bytereg1[7:2]};
				if (allign_cnt<4) begin
					allign_cnt<=allign_cnt+1;
				end else begin
					allign_cnt<=1;
					regheader={bytereg1,bytereg0,regheader[31:16]};
				end
				case (state_mipi_sync)
				MIPI_IDLE: begin
					if(bytereg0[6:0]=='b1011100)begin
						state_mipi_sync<=MIPI_SYNC;						
					end
					debug0<=0;
					debug1<=0;					
	            end
	            MIPI_SYNC: begin
	            	debug0<=0;
	            	debug1<=1;
	            	if(regheader[5:0]==FS_const[5:0])begin
	            		//state_mipi_sync<=MIPI_DATA;
	            	 	delay_mipi<=16;
	            	end	            	
	            end
	            MIPI_DATA: begin
	            	debug0<=1;
	            	debug1<=1;
	            	if(delay_mipi>2)begin
	            		delay_mipi<=delay_mipi-1;	
	            	end else begin
	            		//stop_clk<=1;
	            		state_mipi_sync<=MIPI_IDLE;
	            	end	            	
	            end
	            default: begin
	            end
                endcase
    end
end
///////////////////////FSM byte/bitclk
/*always@(posedge bit_clk)begin
	if(reset==1) begin
	end else begin
		case (state_byte)
			idle_bitclk: begin
				bytereg0={lane0ddr,bytereg0[7:2]};
				bytereg1={lane1ddr,bytereg1[7:2]};
				if (allign_cnt <4) begin
					allign_cnt<=allign_cnt+1;
				end else begin
					allign_cnt<=1;
					regheader={bytereg1,bytereg0,regheader[31:16]};
					end
					
			end			
			default: begin
			end
		endcase
	end
end
//////////////////////////
always @(posedge bit_clk or posedge reset) begin
	if(reset==1)begin
		state_mipi<=idle_mipi;
		led<=0;
	end else begin
		case (state_mipi)
			idle_mipi: begin							
				FS<=0;
				FE<=0;
				PIX<=0;
				led<=0;		
				if(bytereg0=='hb8)begin
					PIX<=1;
					led[0]<=1;
					state_mipi<=start_mipi;					
				end				
			end
			start_mipi:begin
				led[1]<=0;
				if(regheader[5:0]==RAW10_const[5:0]&&regheader[31:24]==ecc)begin
					FS<=1;//Frame start
					led[1]<=1;
					addres<=0;
					state_mipi<=data_mipi;
					mipi_cnt=0;
					wordcount<=regheader[23:8]*4;
				end				
			end
			data_mipi: begin
				if(mipi_cnt<=wordcount-1) begin
					mipi_cnt=mipi_cnt+1;
					addres<=(mipi_cnt)/8;
					led[2]<=1;
				end else begin
					state_mipi<=idle_mipi;
					mipi_cnt=0;
				end
			end
			PF_mipi: begin
				state_mipi<=idle_mipi;
			end
			default: begin
			end
		endcase
	end	
end*/
endmodule

/*module IDDRX1F(input D,input SCLK,input RST,output Q0,output Q1);
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


