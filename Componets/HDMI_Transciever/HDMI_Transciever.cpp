#include <verilatedos.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h>
#include "verilated.h"
#include "VTMDS_Encoder.h"
#include "testb.h"

int	main(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);
	TESTB<VTMDS_Encoder>	*tb
		= new TESTB<VTMDS_Encoder>;
	tb->opentrace("blinky.vcd");
	//tb->m_core->btn= 0;

	for (int i=0; i < 1000; i++) {
		tb->m_core->state=2;
		tb->m_core->pix_data=57;
	    tb->tick();
	}
	printf("\n\nSimulation complete\n");
}
