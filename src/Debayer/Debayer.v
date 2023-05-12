module Debayer 
    #(  parameter
		size_x=640,
        size_y=480)
    (   input clock,reset,
        input[18:0] address_in,
        output[18:0]address_out,
        input[7:0] raw,
        output[7:0] red,
        output[7:0] green,
        output[7:0] blue
    );    
    reg [7:0] line0[size_x-1:0]; 
    reg [7:0] line1[size_x-1:0];
    reg [7:0] line2[size_x-1:0];
    reg [7:0] line3[size_x-1:0];
    reg[7:0] red_r,green_r,blue_r;
    reg[31:0] cX,cY;
    reg[1:0] line_sel;
    reg[18:0] address_out_r;
    integer i;
    initial begin
         for (i=0;i<(size_x);i=i+1) begin
            line0[i]<=0;
            line1[i]<=0;
            line2[i]<=0;
            line3[i]<=0;
         end  
         line_sel<=0;       
    end   
    assign address_out=address_in;
    assign red=red_r;
    assign green=green_r;
    assign blue=blue_r;

    reg[7:0] raw_pix [8:0];

    always @(posedge clock) begin
        if(reset)begin
            cX<=0;
            cY<=0;         
            address_out_r<=0;
            line_sel<=0;
        end else begin
            //////////////////////////////////////soft reset at frameend
            if(address_in>=size_x*size_y-1)begin
                cX<=0;
                cY<=0;
                line_sel<=0;
            end   
            ////////////////////////////////////cX and cY Generation
            if(cX>=size_x-1)begin
                cY<=cY+1;
                cX<=0;                
            end else begin
                cX<=cX+1;
            end         
            /////////////////////////////////////line select
            case (line_sel) 
                0:begin
                   line0[cX]<=raw;
                   if(cX>=size_x-1)begin
                    //raw_pix={line0[cX+1],line0[cX],line0[cX-1],line3[cX+1],line3[cX],line3[cX-1],line2[cX+1],line2[cX],line2[cX-1]};
                    raw_pix[8]=line0[cX+1];
                    raw_pix[7]=line0[cX];
                    raw_pix[6]=line0[cX-1];
                    raw_pix[5]=line3[cX+1];
                    raw_pix[4]=line3[cX];
                    raw_pix[3]=line3[cX-1];
                    raw_pix[2]=line2[cX+1];
                    raw_pix[1]=line2[cX];
                    raw_pix[0]=line2[cX-1];
                    line_sel<=1;
                   end else begin
                    //raw_pix={line3[cX+1],line3[cX],line3[cX-1],line2[cX+1],line2[cX],line2[cX-1],line1[cX+1],line1[cX],line1[cX-1]};
                    raw_pix[8]=line3[cX+1];
                    raw_pix[7]=line3[cX];
                    raw_pix[6]=line3[cX-1];
                    raw_pix[5]=line2[cX+1];
                    raw_pix[4]=line2[cX];
                    raw_pix[3]=line2[cX-1];
                    raw_pix[2]=line1[cX+1];
                    raw_pix[1]=line1[cX];
                    raw_pix[0]=line1[cX-1];
                   end                   
                end 
                1:begin
                    line1[cX]<=raw;
                     if(cX>=size_x-1)begin
                        //raw_pix={line1[cX+1],line1[cX],line1[cX-1],line0[cX+1],line0[cX],line0[cX-1],line3[cX+1],line3[cX],line3[cX-1]};
                        raw_pix[8]=line1[cX+1];
                        raw_pix[7]=line1[cX];
                        raw_pix[6]=line1[cX-1];
                        raw_pix[5]=line0[cX+1];
                        raw_pix[4]=line0[cX];
                        raw_pix[3]=line0[cX-1];
                        raw_pix[2]=line3[cX+1];
                        raw_pix[1]=line3[cX];
                        raw_pix[0]=line3[cX-1];
                        line_sel<=2;
                     end else begin
                        raw_pix[8]=line0[cX+1];
                        raw_pix[7]=line0[cX];
                        raw_pix[6]=line0[cX-1];
                        raw_pix[5]=line3[cX+1];
                        raw_pix[4]=line3[cX];
                        raw_pix[3]=line3[cX-1];
                        raw_pix[2]=line2[cX+1];
                        raw_pix[1]=line2[cX];
                        raw_pix[0]=line2[cX-1];
                     end                     
                end 
                2:begin
                    line2[cX]<=raw;
                    if(cX>=size_x-1)begin
                        //raw_pix={line2[cX+1],line2[cX],line2[cX-1],line1[cX+1],line1[cX],line1[cX-1],line0[cX+1],line0[cX],line0[cX-1]};
                        raw_pix[8]=line2[cX+1];
                        raw_pix[7]=line2[cX];
                        raw_pix[6]=line2[cX-1];
                        raw_pix[5]=line1[cX+1];
                        raw_pix[4]=line1[cX];
                        raw_pix[3]=line1[cX-1];
                        raw_pix[2]=line0[cX+1];
                        raw_pix[1]=line0[cX];
                        raw_pix[0]=line0[cX-1];
                        line_sel<=3;
                     end else begin
                        //raw_pix={line1[cX+1],line1[cX],line1[cX-1],line0[cX+1],line0[cX],line0[cX-1],line3[cX+1],line3[cX],line3[cX-1]}; 
                        raw_pix[8]=line1[cX+1];
                        raw_pix[7]=line1[cX];
                        raw_pix[6]=line1[cX-1];
                        raw_pix[5]=line0[cX+1];
                        raw_pix[4]=line0[cX];
                        raw_pix[3]=line0[cX-1];
                        raw_pix[2]=line3[cX+1];
                        raw_pix[1]=line3[cX];
                        raw_pix[0]=line3[cX-1];
                     end                    
                end 
                3:begin
                    line3[cX]<=raw;
                    if(cX>=size_x-1)begin
                        //raw_pix={line3[cX+1],line3[cX],line3[cX-1],line2[cX+1],line2[cX],line2[cX-1],line1[cX+1],line1[cX],line1[cX-1]};
                        raw_pix[8]=line0[cX+1];
                        raw_pix[7]=line0[cX];
                        raw_pix[6]=line0[cX-1];
                        raw_pix[5]=line3[cX+1];
                        raw_pix[4]=line3[cX];
                        raw_pix[3]=line3[cX-1];
                        raw_pix[2]=line2[cX+1];
                        raw_pix[1]=line2[cX];
                        raw_pix[0]=line2[cX-1];
                        line_sel<=0;
                     end else begin
                        //raw_pix={line2[cX+1],line2[cX],line2[cX-1],line1[cX+1],line1[cX],line1[cX-1],line0[cX+1],line0[cX],line0[cX-1]}; 
                        raw_pix[8]=line2[cX+1];
                        raw_pix[7]=line2[cX];
                        raw_pix[6]=line2[cX-1];
                        raw_pix[5]=line1[cX+1];
                        raw_pix[4]=line1[cX];
                        raw_pix[3]=line1[cX-1];
                        raw_pix[2]=line0[cX+1];
                        raw_pix[1]=line0[cX];
                        raw_pix[0]=line0[cX-1];
                     end                    
                end 
                default: begin
                end
            endcase
            ///////////////////////////////////////Adress Bufferin Delay
            if(address_in==(2*size_x))begin
                address_out_r<=0;
            end else begin
                address_out_r<=address_out_r+1;
            end
            ///////////////////////////////////////Interpolation
            red_r<=0;
            green_r<=0;
            blue_r<=0;
            ////////////////////////////////////////////
            //012 raw_pix
            //345
            //678            

              if(cX[0]==1)begin
                        if(cY[0]==1)begin////Green
                            red_r<=(raw_pix[3]+raw_pix[5])/2;
                            green_r<=raw_pix[4];
                            blue_r<=(raw_pix[1]+raw_pix[7])/2;
                        end else begin////Blue
                            red_r<=(raw_pix[0]+raw_pix[2]+raw_pix[6]+raw_pix[8])/4;
                            green_r<=(raw_pix[1]+raw_pix[7])/2;
                            blue_r<=raw_pix[4];
                        end
                    end else begin
                        if(cY[0]==1)begin////Red
                            red_r<=raw_pix[4];
                            green_r<=raw_pix[4];
                            blue_r<=(raw_pix[1]+raw_pix[3]+raw_pix[5]+raw_pix[7])/4;
                        end else begin////Green
                            red_r<=(raw_pix[1]+raw_pix[7])/2;
                            green_r<=raw_pix[4];
                            blue_r<=(raw_pix[3]+raw_pix[5])/2;
                        end
                    end
                            
        end        
    end

endmodule
