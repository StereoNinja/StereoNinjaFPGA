#include <verilatedos.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h>
#include "verilated.h"
#include "VDebayer.h"
#include "testb.h"

int	main(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);
	TESTB<VDebayer>	*tb
		= new TESTB<VDebayer>;
	tb->opentrace("HDMI_Sim.vcd");
	//tb->m_core->btn= 0;
	
	for (int i=0; i < 10000; i++) {		
	    tb->tick();
		tb->m_core->address_in=i%10;
		tb->m_core->raw=i%255;
	}
	printf("\n\nSimulation complete\n");
}
