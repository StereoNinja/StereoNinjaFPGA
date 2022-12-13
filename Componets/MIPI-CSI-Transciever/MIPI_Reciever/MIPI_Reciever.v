module MIPI_Reciever(input byte_clk,bit_clk,pixclk,reset,lane0,lane1,output[7:0] red,output[7:0] green,output[7:0] blue,output[24:0] address_out,output reg [2:0] led);
reg[7:0] bytereg0=0;
reg[7:0] bytereg1=0;
reg[7:0] counter=0;
integer mipi_cnt=0;
reg[7:0] data_id=0;
reg[15:0] word_cnt;
reg FS,FE,PIX;
reg[7:0] state_byte=idle_bitclk;
reg[7:0] state_mipi=idle_mipi;
reg ena_byte8=0;
reg[24:0] addres=0;
reg[31:0] regheader0;
reg[31:0] regheader1;
wire[7:0] ecc;
reg[31:0] wordcount;
wire[1:0] lane0ddr;
wire[1:0] lane1ddr;

    IDDRX1F l0(.D(lane0),.SCLK(bit_clk),.Q0(lane0ddr[0]),.Q1(lane0ddr[1]),.RST(reset));
    IDDRX1F l1(.D(lane1),.SCLK(bit_clk),.Q0(lane1ddr[0]),.Q1(lane1ddr[1]),.RST(reset));
    assign ecc[0]=regheader0[0]^regheader0[1]^regheader0[2]^regheader0[4]^regheader0[5]^regheader0[7]^regheader0[10]^regheader0[11]^regheader0[13]^regheader0[16]^
		regheader0[20]^regheader0[21]^regheader0[22]^regheader0[23];
	assign ecc[1]=regheader0[0]^regheader0[1]^regheader0[3]^regheader0[4]^regheader0[6]^regheader0[8]^regheader0[10]^regheader0[12]^regheader0[14]^regheader0[17]^
		regheader0[20]^regheader0[21]^regheader0[22]^regheader0[23];
	assign ecc[2]=regheader0[0]^regheader0[2]^regheader0[3]^regheader0[5]^regheader0[6]^regheader0[9]^regheader0[11]^regheader0[12]^regheader0[15]^regheader0[18]^
		regheader0[20]^regheader0[21]^regheader0[22];
	assign ecc[3]=regheader0[1]^regheader0[2]^regheader0[3]^regheader0[7]^regheader0[8]^regheader0[9]^regheader0[13]^regheader0[14]^regheader0[15]^regheader0[19]^
		regheader0[20]^regheader0[21]^regheader0[23];
	assign ecc[4]=regheader0[4]^regheader0[5]^regheader0[6]^regheader0[7]^regheader0[8]^regheader0[9]^regheader0[16]^regheader0[17]^regheader0[18]^regheader0[19]^
		regheader0[20]^regheader0[22]^regheader0[23];
	assign ecc[5]=regheader0[10]^regheader0[11]^regheader0[12]^regheader0[13]^regheader0[14]^regheader0[15]^regheader0[16]^regheader0[17]^regheader0[18]^regheader0[19]^
		regheader0[21]^regheader0[22]^regheader0[23];	
	assign ecc[6]=0;
	assign ecc[7]=0;



////////////////////States for byteclk datasample
localparam reg[7:0] idle_bitclk=0;
localparam reg[7:0] bitclk=1;
///////////////////States for long and short Packet Recieve
localparam reg[7:0] idle_mipi=2;
localparam reg[7:0] PH_mipi=3;
localparam reg[7:0] data_mipi=4;
localparam reg[7:0] PF_mipi=5;
//////////////////Const for Data_id
localparam reg[5:0] FS_const=6'h00;//Framestart
localparam reg[5:0] FE_const=6'h01;//Frameend
localparam reg[5:0] ED_const=6'h12;//Embedded data
localparam reg[5:0] RAW8_const=6'h2A;//Embedded data
localparam reg[5:0] RAW10_const=6'h2B;//Embedded data
///////////////////////FSM byte/bitclk
always@(posedge bit_clk)begin
	if(reset==1) begin
	end else begin
		case (state_byte)
			idle_bitclk: begin
				regheader0<={lane0ddr,regheader0[31:2]};
				regheader1<={lane1ddr,regheader1[31:2]};
				bytereg0<={lane0ddr,bytereg0[7:2]};
				bytereg1<={lane1ddr,bytereg1[7:2]};
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
				/*if(regheader0[7:6]=='h00&&regheader0[5:0]==FS_const[5:0]&&regheader0[31:24]==ecc)begin
					FS<=1;//Frame start
					led[0]<=1;
					addres<=0;
				end/* else if(regheader0[7:6]=='h00&&regheader0[5:0]==FE_const[5:0]&&regheader0[31:24]==ecc)begin
					//led[1]<=1;//Frame end					
				end */ if(regheader0[5:0]==RAW8_const[5:0]&&regheader0[31:24]==ecc)begin
					PIX<=1;
					led[1]<=1;
					//state_mipi<=data_mipi;
					mipi_cnt=0;
					wordcount<=(regheader0[23:8])*4;
				end				
			end			
			data_mipi: begin
				if(mipi_cnt<=wordcount-1) begin
					mipi_cnt=mipi_cnt+1;
					addres<=(mipi_cnt)/8;
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
end
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


