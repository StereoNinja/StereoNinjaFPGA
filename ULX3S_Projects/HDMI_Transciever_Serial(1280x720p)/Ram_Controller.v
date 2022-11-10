module Ram_Controller(input write_readn,clk,reset,
		input[7:0] red_in,
		input[7:0] green_in,
		input[7:0] blue_in,
		input[25:0] addr_in_read,
		input[25:0] addr_in_write,		
		output[7:0] red_out,
		output[7:0] green_out,
		output[7:0] blue_out,
		output cke,csn,wen,rasn,casn,
		output[12:0] a,
		output[1:0] ba,
		output[1:0] dqm,
		inout[15:0] d
		);
	
	
always@(posedge clk,reset) begin
	if(reset==1) begin
		
	end else begin
		
		
		
	end	
end	
	
endmodule;