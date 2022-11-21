#include <verilatedos.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h>
#include "verilated.h"
#include "VCam_I2C.h"
#include "testb.h"

int	main(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);
	TESTB<VCam_I2C>	*tb
		= new TESTB<VCam_I2C>;
	tb->opentrace("blinky.vcd");
	//tb->m_core->btn= 0;


	for (int i=0; i < 1000; i++) {
		tb->m_core->send_data=1;
		tb->m_core->register_in=43690;
		tb->m_core->slave_addr=170;
		tb->m_core->datain=170;
	    tb->tick();
	    if(i==9){
	    	tb->m_core->ackn=1;
	    }
	}
	printf("\n\nSimulation complete\n");
}
