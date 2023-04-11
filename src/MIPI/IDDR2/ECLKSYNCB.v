module ECLKSYNCB (input ECLKI,STOP,output ECLKO);		
		reg eclki_r0,eclki_r1,eclki_r2;
		always @(posedge ECLKI or negedge ECLKI) begin
			eclki_r1<=eclki_r0;
			eclki_r2<=eclki_r1;
			if(STOP==0)begin			
			eclki_r0<=ECLKI;
			end else begin
				eclki_r0<=0;
			end
		end
		assign ECLKO=eclki_r2;
endmodule