module TMDS_Encoder(input clklow,input clkhigh,input reset,input [1:0]state
					,input[7:0] pix_data,input[1:0] H_VSync_Ctr,input[3:0] aux_data,output data_o);
///////////////////////////
	//reg[9:0] outreg;
	reg[9:0] q_m;
	reg[9:0] q_out;	
	integer cnt=0;
	integer cnt_old=0;	

	always @(posedge clklow) begin
		if(reset==1)begin			
		end 		
		else begin			
	    	case (state)
	    		'h0: begin	//h0 refers to Control Period coding
	    			case (H_VSync_Ctr)
	    				'h0: begin
	    					q_out='b1101010100;	
						end
						'h1: begin
							q_out='b0010101011;	
						end
						'h2: begin
							q_out='b0101010100;
						end
						'h3: begin						
							q_out='b1010101011;	
						end
						default: begin
						end
					endcase
				end
				'h1: begin	//h1 refers to Data Island coding	
					case (aux_data)
						'h0: begin
							q_out='b1010011100;	
						end
						'h1: begin
							q_out='b1001100011;	
						end
						'h2: begin
							q_out='b1011100100;
						end
						'h3: begin						
							q_out='b1011100010;	
						end
						'h4: begin						
							q_out='b0101110001;	
						end
						'h5: begin						
							q_out='b0100011110;	
						end
						'h6: begin						
							q_out='b0110001110;	
						end
						'h7: begin						
							q_out='b0100111100;	
						end
						'h8: begin						
							q_out='b1011001100;	
						end
						'h9: begin						
							q_out='b0100111001;	
						end
						'ha: begin						
							q_out='b0110011100;	
						end
						'hb: begin						
							q_out='b1011000110;	
						end
						'hc: begin						
							q_out='b1010001110;	
						end
						'hd: begin						
							q_out='b1001110001;	
						end
						'he: begin						
							q_out='b0101100011;	
						end
						'hf: begin						
							q_out='b1011000011;	
						end
						default: begin
						end
					endcase
				end
				'h2: begin	//h2 refers to Video Data coding	
					cnt_old=cnt;
					//cnt=cnt(pix_data);
					if ((N1(pix_data)>4) || (N1(pix_data)=='d4 && pix_data[0]=='b0)) begin
						q_m[0]=pix_data[0];
						q_m[1]=q_m[0]~^pix_data[1];
						q_m[2]=q_m[1]~^pix_data[2];
						q_m[3]=q_m[2]~^pix_data[3];
						q_m[4]=q_m[3]~^pix_data[4];
						q_m[5]=q_m[4]~^pix_data[5];
						q_m[6]=q_m[5]~^pix_data[6];
						q_m[7]=q_m[6]~^pix_data[7];
						q_m[8]='b1;											
					end else begin
						q_m[0]=pix_data[0];
						q_m[1]=q_m[0]^pix_data[1];
						q_m[2]=q_m[1]^pix_data[2];
						q_m[3]=q_m[2]^pix_data[3];
						q_m[4]=q_m[3]^pix_data[4];
						q_m[5]=q_m[4]^pix_data[5];
						q_m[6]=q_m[5]^pix_data[6];
						q_m[7]=q_m[6]^pix_data[7];
						q_m[8]='b1;	
					end
					if ((cnt_old==0)^(N1(q_m)==N0(q_m))) begin
						q_out[9]=!q_m[8];
						q_out[8]=q_m[8];
						q_out[7:2]=(q_m[8])?q_m[7:0]:~q_m[7:0];
						if (q_m[8]==0) begin
							cnt=cnt_old+(N0(q_m[7:0])-N1(q_m[7:0]));							
						end else begin
							cnt=cnt_old+(N1(q_m[7:0])-N0(q_m[7:0]));							
						end					
					end else begin
						if (cnt_old>0 && (N1(q_m[7:0]>N0(q_m[7:0])))||(cnt_old<0 && (N0(q_m[7:0]>N1(q_m[7:0]))))) begin
							q_out[9]='b1;
							q_out[8]=q_m[8];
							q_out[7:0]=~q_m[7:0];
							cnt=cnt_old+2*q_m[8]+N0(q_m[7:0])-N1(q_m[7:0]);
						end else begin
							q_out[9]='b0;
							q_out[8]=q_m[8];
							q_out[7:0]=~q_m[7:0];
							cnt=cnt_old+2*(~q_m[8])+N1(q_m[7:0])-N0(q_m[7:0]);
						end						
					end				
				end
				default: begin
				end
				endcase
				 
		end
	end
	
	always @(posedge clkhigh) begin
	if (reset==1) begin
		end else begin			
			//q_out={'b0,q_out[9:1]};
			q_out={'b0,q_out[9:1]};
			
		end
	end
	assign data_o =q_out[0];
endmodule


function integer N0 (reg [7:0 ]data);
	integer counter;
	for (counter=0; counter<8; counter++) begin
		if(data[counter]==0) begin
		N0=N0+1;
	end
		end
endfunction

function integer N1 (reg [7:0 ]data);
	integer counter;
	for (counter=0; counter<8; counter++) begin
		if(data[counter]==1) begin
		N1=N1+1;
	end
		end
endfunction


	