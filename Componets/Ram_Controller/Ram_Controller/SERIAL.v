module SERIAL(input clk,input reset,input RX,output TX,output vid_en,wr_ram,re_ram,output[7:0] green_r,red_r,blue_r,output[25:0]addr,output [7:0]led,input[23:0] rgb_in);
reg[7:0] state=0;	
reg[7:0] datain;
reg[7:0] dataout;
reg send_data;
wire data_ready;
/////////////////
localparam[7:0] idle=0;
localparam[7:0] con=1;
localparam[7:0] vid_en=2;
localparam[7:0] write_ram=3;
localparam[7:0] header_w=4;
localparam[7:0] addr_w0=5;
localparam[7:0] addr_w1=6;
localparam[7:0] addr_w2=7;
localparam[7:0] red=8;
localparam[7:0] green=9;
localparam[7:0] blue=10;
localparam[7:0] read_ram=11;
localparam[7:0] header_r=12;
localparam[7:0] addr_r0=13;
localparam[7:0] addr_r1=14;
localparam[7:0] addr_r2=15;
localparam[7:0] send_color=16;


always @(posedge clk) begin
	if(reset==1) begin
		state=0;		
		dataout=0;
		send_data=0;
	end else begin
		vid_en<=0;
		wr_ram<=0;
		re_ram<=0;
	case (state)
    idle: begin//idle
    	wr_ram<=0;
    	vid_en<=0;
    	if(data_ready==1&&datain=='hAA)begin
    		state<=1;
    		send_data<=1;
    		dataout<='h01;
    	end else begin    	
    		send_data<=0;
    	end
	end	
	con: begin//con
		if(data_ready==1&&datain=='hAB)begin
			state<=2;
			send_data<=1;
			dataout<='h02;
		end else if(data_ready==1&&datain=='hAC) begin
			state<=3;
			send_data<=1;
			dataout<='h03;	
		end else if(data_ready==1&&datain=='h20) begin
			state<=read_ram;
			send_data<=1;
			dataout<='h21;		
		end
		else begin   	
			send_data<=0;
		end
	end
	vid_en: begin//vid_en
		vid_en<=1;
		if(data_ready==1&&datain=='hA0)begin
			state<=0;
			send_data<=1;
			dataout<='h04;				
		end else begin
			send_data<=0;
		end
	end
	write_ram: begin//write_ram
		wr_ram<=0;	
		if(data_ready==1&&datain=='hA0)begin
			state<=0;
			send_data<=1;
			dataout<='h04;			
		end else if(data_ready==1&&datain=='hAF)begin
			state<=4;
			send_data<=1;
			dataout<='hAF;			
		end else begin   	
			send_data<=0;
		end
	end	
	header_w: begin//header	
		if(data_ready==1)begin
			state<=5;
			addr[7:0]=datain;
			send_data<=1;
			dataout<='h10;
		end	else begin
			send_data<=0;
		end
	end	
	addr_w0: begin//addr0
		if(data_ready==1)begin
			state<=6;
			addr[15:8]=datain;
			send_data<=1;
			dataout<='h11;
		end	else begin
			send_data<=0;
		end
	end	
	addr_w1: begin//addr1
		if(data_ready==1)begin
			state<=7;
			addr[23:16]=datain;
			send_data<=1;
			dataout<='h12;
		end else begin
			send_data<=0;
		end
	end	
	addr_w2: begin//addr2
		if(data_ready==1)begin
			state<=8;
			red_r=datain;
			send_data<=1;
			dataout<='h13;
		end else begin
			send_data<=0;
		end
	end	
	red: begin//red			
		if(data_ready==1)begin
			state<=9;
			green_r=datain;	
			send_data<=1;
			dataout<='h14;
		end else begin
			send_data<=0;
		end
	end	
	green: begin//green			
		if(data_ready==1)begin
			state<=10;
			blue_r=datain;	
			send_data<=1;
			dataout<='h15;
		end else begin
			send_data<=0;
		end
	end	
	blue: begin//blue			
		if(data_ready==1&&datain=='hA1)begin
			state<=3;
			send_data<=1;
			dataout<='hA1;
			wr_ram<=1;
		end else begin   	
			send_data<=0;
		end
	end
	read_ram: begin//read_ram	
		if(data_ready==1&&datain=='h22)begin
			state<=header_r;
			send_data<=1;
			dataout<='h23;				
		end else if(data_ready==1&&datain=='hA0)begin
				state<=0;
				send_data<=1;
				dataout<='h04;				
			end else begin
			send_data<=0;
		end
	end
	header_r: begin//header_r	
		if(data_ready==1)begin
			state<=addr_r0;
			send_data<=1;
			dataout<='h24;
			addr[7:0]=datain;
		end else begin
			send_data<=0;
		end
	end
	addr_r0: begin//add_r1	
		if(data_ready==1)begin
			state<=addr_r1;
			send_data<=1;
			dataout<='h25;
			addr[15:8]=datain;
		end else begin
			send_data<=0;
		end
	end
	addr_r1: begin//add_r1	
		if(data_ready==1)begin
			state<=addr_r2;
			send_data<=1;
			dataout<='h26;
			addr[23:16]=datain;
			re_ram<=1;
		end else begin
			send_data<=0;
		end
	end
	addr_r2: begin//add_r2	
		if(data_ready==1&&datain=='h27)begin
			state<=send_color;
			send_data<=1;			
			dataout<=rgb_in[7:0];			
		end else begin
			send_data<=0;
		end
	end
	send_color: begin//send_color	
		if(data_ready==1&&datain=='h28)begin
			state<=read_ram;
			send_data<=1;			
			dataout<=rgb_in[15:8];
		end else begin
			send_data<=0;
		end
	end	
	default: begin
	end
endcase	
end
end


assign led=datain;
	
RX #(.CLKS_PER_BIT(218)) rxm(.i_Clock(clk),.i_Rx_Serial(RX),.o_Rx_DV(data_ready),.o_Rx_Byte(datain)); 
//RX rxm(.clk(clk),.resetn(!reset),.ser_rx(RX),.cfg_divider(217),.data(datain));
TX #(.CLKS_PER_BIT(217)) txm(.i_Clock(clk),.i_Tx_DV(send_data),.i_Tx_Byte(dataout),.o_Tx_Serial(TX));	

endmodule