#include <verilatedos.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h>
#include "verilated.h"
#include "VHDMI_Transciever.h"
#include "testb.h"

int	main(int argc, char **argv) {
	printf("start");
	Verilated::commandArgs(argc, argv);
	TESTB<VHDMI_Transciever>	*tb
		= new TESTB<VHDMI_Transciever>;
	tb->opentrace("blinky.vcd");
	//tb->m_core->btn= 0;
    printf("start\n");
    tb->m_core->ram_blue=77;
    tb->m_core->ram_green=88;
    tb->m_core->ram_red=99;
    uint16_t data_b=0;
    uint16_t data_g=0;
    uint16_t data_r=0;
    int count=0;
	for (int i=0; i < 10*(800*525); i++) {
	    tb->tick();

	    data_b |=(tb->m_core->blue)<<count;
	    data_g |=(tb->m_core->green)<<count;
	    data_r |=(tb->m_core->red)<<count;
	    //printf("%b\n",data);
	    if((i+1)%10==0){
	    	/////////////////////decode
	    	uint8_t res_b=0;
	    	uint8_t res_g=0;
	    	uint8_t res_r=0;

	    	if(((0b1000000000)|data_b)>0){
	    		data_b=~data_b & 0b1111111111;
	    	}
	    	if(((0b0100000000)|data_b)>0){
	    	 res_b = (data_b^(data_b<<1));
	    	}
	    	else{
	    		res_b = ~(data_b^(data_b<<1));
	    	}
	    				if(((0b1000000000)|data_g)>0){
	    		    		data_g=~data_g & 0b1111111111;
	    		    	}
	    		    	if(((0b0100000000)|data_g)>0){
	    		    	 res_g = (data_g^(data_g<<1));
	    		    	}
	    		    	else{
	    		    		res_g = ~(data_g^(data_g<<1));
	    		    	}
	    		    			if(((0b1000000000)|data_r)>0){
	    		    		    		data_r=~data_r & 0b1111111111;
	    		    		    	}
	    		    		    	if(((0b0100000000)|data_r)>0){
	    		    		    	 res_r = (data_r^(data_r<<1));
	    		    		    	}
	    		    		    	else{
	    		    		    		res_r = ~(data_r^(data_r<<1));
	    		    		    	}

	    	/////////////////////
	    if(tb->m_core->HDMI_Transciever__DOT__H_VSync_Ctr_0==1){
	    	printf("(  hs   )");
	    } else if (tb->m_core->HDMI_Transciever__DOT__H_VSync_Ctr_0==2) {
	    	printf("(  vs   )");
		} else if (tb->m_core->HDMI_Transciever__DOT__H_VSync_Ctr_0==3) {
			printf("(  hs vs)");
		}else  {
			printf("%.3d,%.3d,%.3d",res_b,res_g,res_r);
		}
	    printf("|");
	    if(tb->m_core->HDMI_Transciever__DOT__h==15){
	    	printf("\n");
	    }

	}
	    if(count==9){
	    	    count=0;
	    	    data_b=0;
	    	    data_r=0;
	    	    data_g=0;
	    	    }else{
	    	    count++;
	    	    }
	}
	printf("\n\nSimulation complete\n");
}

