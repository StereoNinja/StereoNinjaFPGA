module Debayer (
        input clock,reset,
        input[18:0] address_in,
        output[18:0]address_out,
        input[7:0] raw,
        output[7:0] red,
        output[7:0] green,
        output[7:0] blue
    );
    reg [7:0] line0[639:0];
    reg [7:0] line1[639:0];
    reg [7:0] line2[639:0];
    assign address_out=address_in;

    always @(posedge clock) begin
        
    end

endmodule