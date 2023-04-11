module IDDRX2F (input D,ECLK,SCLK,RST,output
 Q0,Q1,Q2,Q3);
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