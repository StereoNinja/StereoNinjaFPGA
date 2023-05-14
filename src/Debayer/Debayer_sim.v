module Debayer_sim(input clock,reset,input[18:0] address_in,output[7:0] red,green,blue);
wire[18:0] read_addr;
wire[31:0] ramdata;
Debayer debay(.clock(clock),.reset(reset),.address_in(address_in),.address_out(read_addr),.raw(raw_v),.red(red),.green(green_r),.blue(blue));  


dpram_dualclock DPR(.addr_b(read_addr[18:2]),.we_b(0),.clk_b(clock),.data_out(ramdata));

reg[7:0] counter=0;
reg[31:0] color_w;
reg[7:0] raw_v;
	
	always @(posedge clock) begin		
		if(counter>=3)begin
			counter<=0;
			color_w<=ramdata;
		end else begin
			counter<=counter+1;
			color_w<={8'h00,color_w[31:8]};			
		end
		raw_v<=color_w[7:0];		
	end	
endmodule


module dpram_dualclock
	(
		input [31:0] data_a, data_b,
		input [16:0] addr_a,input [16:0] addr_b,input[1:0]bank,
		input we_a, we_b, clk, clk_b,
		output reg [31:0] data_out
	);
		reg [31:0] ram[76799:0];	
		initial $readmemh("raw.mem",ram);	

		// Port A 
		always @ (posedge clk)
		begin		
			if(we_a)begin
				ram[addr_a] <= data_a;
			end		
		end 
		// Port B 
		always @ (posedge clk_b)
		begin		

			data_out<=ram[addr_b];		
		end
		

endmodule

