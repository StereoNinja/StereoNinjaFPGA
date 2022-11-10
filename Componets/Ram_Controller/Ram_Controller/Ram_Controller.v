module Ram_Controller(input write_readn,clk,reset,data_ready,re_ram,wr_ram,
		input[7:0] red_in,
		input[7:0] green_in,
		input[7:0] blue_in,
		input[25:0] addr_in_read,
		input[25:0] addr_in_write,		
		output reg[7:0] red_out,
		output reg[7:0] green_out,
		output reg[7:0] blue_out,
		output cke,csn,wen,rasn,casn,
		output reg[12:0] a,
		output reg [1:0] ba,
		output reg [1:0] dqm,
		inout reg [15:0] d
		);
	///////////////////////////states
	reg[7:0] state=wait0;
	localparam[7:0] wait0=0;
	localparam[7:0] precharge=1;
	localparam[7:0] auto_refresh0=2;
	localparam[7:0] auto_refresh1=3;
	localparam[7:0] activ=4;
	localparam[7:0] write=5;
	localparam[7:0] read=6;
	localparam[7:0] cha_row=7;
	localparam[7:0] cha_bank=8;
	localparam[7:0] write_pix=9;
	localparam[7:0] pre_wait=10;
	localparam[7:0] load_mode=11;
	////////////////////////////////Times
	localparam[7:0] T=250;
	localparam[7:0] Trc=12;
	localparam[7:0] Tmrd=2;
	localparam[7:0] Tdlp=3;
	localparam[7:0] Trp=3;
	localparam[7:0] Trrd=2;
	localparam[7:0] Trcd=3;	
	///////////////////////////////	
	reg posedge_ready;	//variable	
	integer cnt;		//variable
	////////////////////////////////commands
	reg[3:0] com;
	localparam[3:0] DESL=4'b1000;
	localparam[3:0] NOP=4'b0111;
	localparam[3:0] BST=4'b0110;
	localparam[3:0] READ=4'b0101;
	localparam[3:0] WRITE=4'b0100;
	localparam[3:0] ACT=4'b0011;
	localparam[3:0] PRE=4'b0010;
	localparam[3:0] REFSELF=4'b0001;
	localparam[3:0] MRS=4'b0000;
	////////////////////////////////assignment commands
	assign csn =com[3];
	assign rasn=com[2];
	assign casn=com[1];
	assign wen =com[0];
	////////////////////////////////
	reg[25:0] cur_row=24'hFFFFFF;
	reg[1:0] cur_bank=0;	
	reg[25:0] cur_col=0;	
	//////////////////////////////
	reg[25:0] cur_row_new=0; //variable
	reg[1:0] cur_bank_new=0;//variable
	reg[25:0] cur_col_new=0;//variable	
	reg[1:0] rgb_cnt=0;//variable
	assign cke=1;	
	always@(posedge clk) begin
		if(reset==1) begin
		state<=wait0;
		cnt=0;		
		cur_row=0;
		cur_bank=0;
		end else begin	
			a<=0;
			ba<=0;
			d=0;
	    	case (state)
	    	////////////////////State wait0	
			wait0: begin
				com<=NOP;				
				if(cnt<T) begin
					cnt=cnt+1;					
				end else begin
					cnt=0;
					state<=precharge;
					com<=PRE;				
					ba<=2'd3;
					a[10]<=1'b1;
				end
			end
			////////////////////State precharge
			precharge: begin							
				if(cnt<Trp-1) begin
					com<=NOP;
					cnt=cnt+1;					
				end else begin
					cnt=0;
					state<=auto_refresh0;
					com<=REFSELF;				
				end
			end
			////////////////////State auto_refresh0
			auto_refresh0: begin
				com<=NOP;
				if(cnt<Trc-1) begin
					cnt=cnt+1;					
				end else begin
					cnt=0;
					state<=auto_refresh1;
					com<=REFSELF;				
				end
			end
			////////////////////State auto_refresh1
			auto_refresh1: begin
				com<=NOP;
				if(cnt<Trc-1) begin
					cnt=cnt+1;					
				end else begin
					cnt=0;
					state<=load_mode;
					com<=MRS;
					a[5:4]<=2'b11;
				end
			end
			///////////////////State load mode
			load_mode: begin
				com<=NOP;
				if(cnt<Tmrd) begin
					cnt=cnt+1;					
				end else begin
					cnt=0;
					state<=activ;
					com<=ACT;
					a[9:0]<=0;
					ba<=0;
				end
			end
			///////////////////State active
			activ: begin
				com<=NOP;				
				state<=write;		
				
			end
			///////////////////State read
			read: begin				
				
			end
			///////////////////State write
			write: begin
				com<=NOP;
				if(wr_ram==1) begin
					cur_row_new = addr_in_write/1920;
					cur_bank_new= addr_in_write/480;
					cur_col_new=(addr_in_write%1920)%480;
					if(cur_row_new==cur_row&&cur_bank_new==cur_bank) begin
					if(wr_ram==1) begin
						cur_col=cur_col_new;
						a[9:0]<=cur_col[9:0];
						ba<=cur_bank;
						a[10]<=1;
						dqm='b00;
						com<=WRITE;
						rgb_cnt=cur_col_new%3;
						if(rgb_cnt==2'b00)begin							
							d={red_in,green_in};
						end else if(rgb_cnt==2'b01)begin						
							d={blue_in,red_in};
						end else if(rgb_cnt==2'b10)begin							
							d={green_in,blue_in};
						end						
					end if(re_ram==1) begin
						cnt=0;
						com<=READ;
						dqm='b00;
						state<=write;
						cur_col=cur_col_new;
						a[9:0]<=cur_col[9:0];
						ba<=cur_bank;
						a[10]<=1;
						rgb_cnt=cur_col_new%3;
						if(rgb_cnt==0)begin
							green_out=d[7:0];
							red_out=d[15:0];
						end else if(rgb_cnt==1)begin						
							red_out=d[7:0];
							green_out=d[15:0];
						end else if(rgb_cnt==2)begin
							d={green_in,blue_in};
							blue_out=d[7:0];
							green_out=d[15:0];
						end							
					end				
					end else if(cur_row_new!=cur_row) begin
						state<=pre_wait;
						cnt=0;						
					end else if(cur_bank_new!=cur_bank) begin
						state<=cha_bank;
						cnt=0;
					end						
				end
				
			end
			//////////////////State pre_wait
			pre_wait: begin	
				com<=NOP;				
				if(cnt<Tdlp-1) begin
					cnt=cnt+1;					
				end else begin										
					cnt=0;
					state<=cha_row;
					com<=PRE;					
					a[10]<=1;
					dqm='b11;
				end			
			end			
			//////////////////State cha_row
			cha_row: begin	
				com<=NOP;
				if(cnt<Trp-1) begin
					cnt=cnt+1;					
				end else begin
					cur_row=cur_row_new;
					cur_bank=cur_bank_new;					
					cnt=0;
					state<=write_pix;
					com<=ACT;					
					ba<=cur_bank;	
					a[12:0]<=cur_row[12:0];					
				end			
			end
			//////////////////State cha_bank
			cha_bank: begin	
				com<=NOP;
				if(cnt<Trrd-1) begin
					cnt=cnt+1;					
				end else begin					
					ba<=cur_bank_new;					
					cnt=0;
					state<=write_pix;
					com<=ACT;					
					cur_bank=cur_bank_new;
					cur_row=cur_row_new;
					a[12:0]<=cur_row[12:0];
					ba<=cur_bank;
				end			
			end
			//////////////////State write_pix
			write_pix: begin
				com<=NOP;
				if(cnt<Trcd-1) begin
					cnt=cnt+1;					
				end else begin
				if(wr_ram==1) begin
					cnt=0;
					com<=WRITE;
					dqm='b00;
					state<=write;
					cur_col=cur_col_new;
					a[9:0]<=cur_col[9:0];
					ba<=cur_bank;
					a[10]<=1;
					rgb_cnt=cur_col_new%3;
					if(rgb_cnt==0)begin
						d={red_in,green_in};
					end else if(rgb_cnt==1)begin
						d={blue_in,red_in};
					end else if(rgb_cnt==2)begin
						d={green_in,blue_in};
				end				
				end if(re_ram==1) begin
					cnt=0;
					com<=READ;
					dqm='b00;
					state<=write;
					cur_col=cur_col_new;
					a[9:0]<=cur_col[9:0];
					ba<=cur_bank;
					a[10]<=1;
					rgb_cnt=cur_col_new%3;
					if(rgb_cnt==0)begin
						green_out=d[7:0];
						red_out=d[15:0];
					end else if(rgb_cnt==1)begin						
						red_out=d[7:0];
						green_out=d[15:0];
					end else if(rgb_cnt==2)begin
						d={green_in,blue_in};
						blue_out=d[7:0];
						green_out=d[15:0];
					end							
				end
			end
			end			
			//////////////////	
			default: begin
			end
		endcase	
		end	
	end	
endmodule