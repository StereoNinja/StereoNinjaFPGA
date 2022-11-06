module TMDS_Encoder(input clklow,input reset,input [1:0]state
		,input[7:0] pix_data,input[1:0] H_VSync_Ctr,input[3:0] aux_data,output data_o,output[9:0] q_out);
	///////////////////////////	
	reg[9:0]q_out1;
	integer cnt_old=0;	
	wire[7:0] N1qm=(q_m[0]==1)+(q_m[1]==1)+(q_m[2]==1)+(q_m[3]==1)+(q_m[4]==1)+(q_m[5]==1)+(q_m[6]==1)+(q_m[7]==1);
	wire[7:0] N0qm=(q_m[0]==0)+(q_m[1]==0)+(q_m[2]==0)+(q_m[3]==0)+(q_m[4]==0)+(q_m[5]==0)+(q_m[6]==0)+(q_m[7]==0);
	wire[7:0] N1pd=(pix_data[0]==1)+(pix_data[1]==1)+(pix_data[2]==1)+(pix_data[3]==1)+(pix_data[4]==1)+(pix_data[5]==1)+(pix_data[6]==1)+(pix_data[7]==1);
	wire[7:0] N0pd=(pix_data[0]==0)+(pix_data[1]==0)+(pix_data[2]==0)+(pix_data[3]==0)+(pix_data[4]==0)+(pix_data[5]==0)+(pix_data[6]==0)+(pix_data[7]==0);
			
	
	wire[8:0] q_m=(reset==1)?0:{q_m8,q_m7,q_m6,q_m5,q_m4,q_m3,q_m2,q_m1,q_m0};
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
	wire[7:0] q_out2p3=(reset==1)?0:((cnt_old==0)||(N1(q_m[7:0])==N0(q_m[7:0]))) ? ((q_m[8]==1)?q_m[7:0]:~q_m[7:0]) : (((cnt_old>0 && ((N1(q_m[7:0])>N0(q_m[7:0])))||(cnt_old<0 && ((N0(q_m[7:0])>N1(q_m[7:0])))))?~q_m[7:0]:q_m[7:0]));
	wire[9:0] q_out2=(reset==1)?0:{q_out2p1,q_out2p2,q_out2p3};			
	
	wire[31:0] cnt0=cnt_old+(N0(q_m[7:0])-N1(q_m[7:0]));
	wire[31:0] cnt1=cnt_old+(N1(q_m[7:0])-N0(q_m[7:0]));
	wire[31:0] cnt2=cnt_old+2*q_m[8]+N0(q_m[7:0])-N1(q_m[7:0]);
	wire[31:0] cnt3=cnt_old-2*(!q_m[8])+N1(q_m[7:0])-N0(q_m[7:0]);	
	wire[31:0] cnt=(reset==1)?0:((cnt_old==0)||(N1(q_m[7:0])==N0(q_m[7:0]))) ? ((q_m[8]==0)? cnt0 : cnt1 ) :(((cnt_old>0 && N1(q_m[7:0])>N0(q_m[7:0]))||(cnt_old<0 && (N0(q_m[7:0])>N1(q_m[7:0]))))? cnt2:cnt3);
	
	
	wire[10:0] tmds_cnt=(H_VSync_Ctr[1]==1)?((H_VSync_Ctr[0]==1)?10'b1010101011 :10'b0101010100 ) : ((H_VSync_Ctr[0]==1)? 10'b0010101011 : 10'b1101010100);
		
	always @(posedge clklow) begin	
		if(reset==1) begin
			cnt_old<=0;
			q_out1<=0;
		end
		else begin
			cnt_old<=cnt;
			case (state) 
				'b00: begin	//h0 refers to Control Period coding
					cnt_old<=0;
					q_out1<=tmds_cnt;				
				end
				2'b10: begin	//h1 refers to Data Island coding	
					cnt_old<=0;					
				end
				2'b01: begin	//h2 refers to Video Data coding				
					q_out1=q_out2;					
				end
				default: begin
					q_out1='b0000000000;
				end				
			endcase				 
		end
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



