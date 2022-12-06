#include <verilatedos.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h>
#include "verilated.h"
#include "VCam_Init.h"
#include "testb.h"

int	main(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);
	TESTB<VCam_Init>	*tb
		= new TESTB<VCam_Init>;
	tb->opentrace("blinky.vcd");
	//tb->m_core->btn= 0;


	for (int i=0; i < 20000; i++) {
		if( i>10)
			tb->m_core->init=1;


	    tb->tick();

	}
	printf("\n\nSimulation complete\n");
}
