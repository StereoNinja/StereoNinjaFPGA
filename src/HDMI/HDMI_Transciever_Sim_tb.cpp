#include <verilatedos.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h>
#include "verilated.h"
#include "VHDMI_Transciever_Sim.h"
#include "testb.h"

int	main(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);
	TESTB<VHDMI_Transciever_Sim>	*tb
		= new TESTB<VHDMI_Transciever_Sim>;
	tb->opentrace("HDMI_Sim.vcd");
	//tb->m_core->btn= 0;

	for (int i=0; i < 1000000; i++) {		
	    tb->tick();
	}
	printf("\n\nSimulation complete\n");
}
