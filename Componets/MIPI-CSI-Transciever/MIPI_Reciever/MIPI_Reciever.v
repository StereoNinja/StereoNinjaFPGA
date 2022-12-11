module MIPI_Reciever(input byte_clk,byte_clk_8,pixclk,reset,lane0,lane1,output[7:0] red,output[7:0] green,output[7:0] blue,output[24:0] address_out,output reg [1:0] led);
reg[7:0] bytereg0=0;
reg[7:0] bytereg1=0;
reg[7:0] counter=0;
wire byte_clk8=byte_clk_8;
integer mipi_cnt=0;
reg[7:0] data_id=0;
reg[15:0] word_cnt;
reg FS,FE,PIX;
reg[7:0] state_byte=idle_bitclk;
reg[7:0] state_mipi=idle_mipi;
reg ena_byte8=0;
reg[24:0] addres=0;
reg[31:0] regheader;
wire[7:0] ecc;

reg[15:0] wordcount;


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
always@(posedge byte_clk8)begin
	if(reset==1) begin
	end else begin
		case (state_byte)
			idle_bitclk: begin
				if(byte_clk==1)begin
					state_byte<=bitclk;
					counter<=0;
					bytereg0[0]=lane0;
					bytereg1[0]=lane1;
				end
			end
			bitclk: begin
				counter<=counter+1;
				bytereg0[counter+1]=lane0;
				bytereg1[counter+1]=lane1;
				state_byte<=counter>=6?idle_bitclk:bitclk;
				regheader<=(counter>=6)?{bytereg0,regheader[31:8]}:regheader;//(2'bx,dataid,word_count,ecc_code)	
			end
			default: begin
			end
		endcase
	end
end
//////////////////////////
always @(posedge byte_clk) begin
	if(reset==1)begin
		state_mipi<=idle_mipi;
	end else begin
		case (state_mipi)
			idle_mipi: begin							
				FS<=0;
				FE<=0;
				PIX<=0;
				led<=0;
				if(regheader[5:0]==FS_const[5:0]&&regheader[31:24]==ecc)begin
					led[0]<=1;
				end
				if(regheader[5:0]==FE_const[5:0]&&regheader[31:24]==ecc)begin
					led[1]<=1;
				end
				if(regheader[5:0]==RAW10_const[5:0]&&regheader[31:24]==ecc)begin
					led[1]<=1;
				end
				
				
				/*if(regheader[5:0]==FS_const[5:0]&&regheader[31:24]==ecc)begin
					FS<=1;//Frame start
					led[0]<=1;
				end else if(regheader[5:0]==FE_const[5:0]&&regheader[31:24]==ecc)begin
					FE<=1;//Frame end 
					led<=3;
				end else if(regheader[5:0]==RAW10_const[5:0]&&regheader[31:24]==ecc)begin
					PIX<=1;
					led[1]<=1;
					state_mipi<=data_mipi;
					mipi_cnt=0;
					wordcount<={regheader[15:8],regheader[23:16]};
				end	*/			
			end			
			data_mipi: begin
				if(mipi_cnt<=wordcount-1) begin
					mipi_cnt=mipi_cnt+1;
				end else begin
					state_mipi<=PF_mipi;
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


