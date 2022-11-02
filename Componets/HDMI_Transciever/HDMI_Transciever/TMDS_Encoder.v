module TMDS_Encoder(input clklow,input clkhigh,input reset,input [1:0]state
		,input[7:0] pix_data,input[1:0] H_VSync_Ctr,input[3:0] aux_data,output data_o,output[9:0] q_out);
	///////////////////////////	
	reg[9:0]q_out1;
	integer cnt_old=0;	
	wire[8:0] q_m={q_m8,q_m7,q_m6,q_m5,q_m4,q_m3,q_m2,q_m1,q_m0};
	wire q_m0=pix_data[0];
	wire q_m1=(((N1(pix_data)>4)||(N1(pix_data)=='d4 && pix_data[0]=='b0))? q_m0~^pix_data[1]:q_m0^pix_data[1]);
	wire q_m2=(((N1(pix_data)>4)||(N1(pix_data)=='d4 && pix_data[0]=='b0))? q_m1~^pix_data[2]:q_m1^pix_data[2]);
	wire q_m3=(((N1(pix_data)>4)||(N1(pix_data)=='d4 && pix_data[0]=='b0))? q_m2~^pix_data[3]:q_m2^pix_data[3]);
	wire q_m4=(((N1(pix_data)>4)||(N1(pix_data)=='d4 && pix_data[0]=='b0))? q_m2~^pix_data[4]:q_m3^pix_data[4]);
	wire q_m5=(((N1(pix_data)>4)||(N1(pix_data)=='d4 && pix_data[0]=='b0))? q_m4~^pix_data[5]:q_m4^pix_data[5]);
	wire q_m6=(((N1(pix_data)>4)||(N1(pix_data)=='d4 && pix_data[0]=='b0))? q_m5~^pix_data[6]:q_m5^pix_data[6]);
	wire q_m7=(((N1(pix_data)>4)||(N1(pix_data)=='d4 && pix_data[0]=='b0))? q_m6~^pix_data[7]:q_m6^pix_data[7]);
	wire q_m8=(((N1(pix_data)>4)||(N1(pix_data)=='d4 && pix_data[0]=='b0))? 'b0:'b1);
	
	
	wire q_out2p1=  ((cnt_old==0)||(N1(q_m[7:0])==N0(q_m[7:0]))) ? !q_m[8] :(((cnt_old>0 && ((N1(q_m[7:0])>N0(q_m[7:0])))||(cnt_old<0 && ((N0(q_m[7:0])>N1(q_m[7:0])))))?'b1:'b0));
	wire q_out2p2=  ((cnt_old==0)||(N1(q_m[7:0])==N0(q_m[7:0]))) ? q_m[8] : (((cnt_old>0 && ((N1(q_m[7:0])>N0(q_m[7:0])))||(cnt_old<0 && ((N0(q_m[7:0])>N1(q_m[7:0])))))?q_m[8]:q_m[8]));
	wire[7:0] q_out2p3=((cnt_old==0)||(N1(q_m[7:0])==N0(q_m[7:0]))) ? ((q_m[8]==1)?q_m[7:0]:~q_m[7:0]) : (((cnt_old>0 && ((N1(q_m[7:0])>N0(q_m[7:0])))||(cnt_old<0 && ((N0(q_m[7:0])>N1(q_m[7:0])))))?~q_m[7:0]:q_m[7:0]));
	wire[9:0] q_out2={q_out2p1,q_out2p2,q_out2p3};			
	
	wire[31:0] cnt0=cnt_old+(N0(q_m[7:0])-N1(q_m[7:0]));
	wire[31:0] cnt1=cnt_old+(N1(q_m[7:0])-N0(q_m[7:0]));
	wire[31:0] cnt2=cnt_old+2*q_m[8]+N0(q_m[7:0])-N1(q_m[7:0]);
	wire[31:0] cnt3=cnt_old-2*(!q_m[8])+N1(q_m[7:0])-N0(q_m[7:0]);	
	wire[31:0] cnt=((cnt_old==0)||(N1(q_m[7:0])==N0(q_m[7:0]))) ? ((q_m[8]==0)? cnt0 : cnt1 ) :(((cnt_old>0 && N1(q_m[7:0]>N0(q_m[7:0])))||(cnt_old<0 && (N0(q_m[7:0])>N1(q_m[7:0]))))? cnt2:cnt3);
	
	always @(posedge clklow) begin	
		cnt_old<=cnt;
		case (state) 
			'b00: begin	//h0 refers to Control Period coding
				cnt_old<=0;
				case (H_VSync_Ctr)
					'h0: begin
						q_out1='b1101010100;//354 nothing	
					end
					'h1: begin
						q_out1='b0010101011;//AB h Synch	
					end
					'h2: begin
						q_out1='b0101010100;//145 VSync
					end
					'h3: begin						
						q_out1='b1010101011;//2AB H and V Synch	
					end
					default: begin
						q_out1='b0000000000;
					end
				endcase
			end
			2'b10: begin	//h1 refers to Data Island coding	
				cnt_old<=0;
				case (aux_data)
					'h0: begin
						q_out1='b1010011100;							
					end
					'h1: begin
						q_out1='b1001100011;	
					end
					'h2: begin
						q_out1='b1011100100;
					end
					'h3: begin						
						q_out1='b1011100010;	
					end
					'h4: begin						
						q_out1='b0101110001;	
					end
					'h5: begin						
						q_out1='b0100011110;	
					end
					'h6: begin						
						q_out1='b0110001110;	
					end
					'h7: begin						
						q_out1='b0100111100;	
					end
					'h8: begin						
						q_out1='b1011001100;	
					end
					'h9: begin						
						q_out1='b0100111001;	
					end
					'ha: begin						
						q_out1='b0110011100;	
					end
					'hb: begin						
						q_out1='b1011000110;	
					end
					'hc: begin						
						q_out1='b1010001110;	
					end
					'hd: begin						
						q_out1='b1001110001;	
					end
					'he: begin						
						q_out1='b0101100011;	
					end
					'hf: begin						
						q_out1='b1011000011;	
					end
					default: begin
						q_out1='b0000000000;
					end
				endcase
			end
			2'b01: begin	//h2 refers to Video Data coding					
					
				q_out1=q_out2;				
					
			end
			default: begin
				q_out1='b0000000000;
			end
				
		endcase				 
		
	end
	assign q_out=q_out1;	
	
	function automatic [7:0] N0(input[7:0 ]data);		
		begin
			N0=(data[0]==0)+(data[1]==0)+(data[2]==0)+(data[3]==0)+(data[4]==0)+(data[5]==0)+(data[6]==0)+(data[7]==0);
		end
	endfunction

	function automatic [7:0] N1(input[7:0 ]data);		
		begin
			N1=(data[0]==1)+(data[1]==1)+(data[2]==1)+(data[3]==1)+(data[4]==1)+(data[5]==1)+(data[6]==1)+(data[7]==1);
		end
	endfunction	
endmodule



