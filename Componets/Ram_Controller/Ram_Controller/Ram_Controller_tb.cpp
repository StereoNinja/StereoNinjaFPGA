#include <verilatedos.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h>
#include "verilated.h"
#include "VRam_Controller.h"
#include "testb.h"

int	main(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);
	TESTB<VRam_Controller>	*tb
		= new TESTB<VRam_Controller>;
	tb->opentrace("blinky.vcd");
	//tb->m_core->btn= 0;

	for (int i=0; i < 1000; i++) {
		//tb->m_core->data_ready=0;
		if(i>=556){
			tb->m_core->write_readn=1;
			tb->m_core->addr_in_write=0;
			tb->m_core->blue_in=255;
			tb->m_core->red_in=0;
			tb->m_core->green_in=0;

		}
		if(i>600 && i<602)
			tb->m_core->data_ready=1;
		    tb->m_core->addr_in_write=1;
		if(i>612&& i<614)
			tb->m_core->data_ready=1;
		if(i>618&& i<630)
					tb->m_core->data_ready=1;

		if(i>618)
			tb->m_core->addr_in_write=1;
		if(i>620)
				tb->m_core->addr_in_write=2;
		if(i>622)
				tb->m_core->addr_in_write=481;
		if(i>634)
				tb->m_core->addr_in_write=482;
		if(i>636)
				tb->m_core->addr_in_write=961;
		if(i>644)
				tb->m_core->addr_in_write=962;




	    tb->tick();
	}
	printf("\n\nSimulation complete\n");
}
