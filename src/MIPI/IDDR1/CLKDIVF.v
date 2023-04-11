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