module ODDRX1F(input D0,D1,SCLK, output Q);
    always @(posedge SCLK or negedge SCLK) begin
        Q<=SCLK?D0:D1;
    end
endmodule