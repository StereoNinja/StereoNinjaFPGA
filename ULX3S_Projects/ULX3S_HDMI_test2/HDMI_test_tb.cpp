#include <verilatedos.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h>
#include "verilated.h"
#include "VHDMI_test.h"
#include "testb.h"

int	main(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);
	TESTB<VHDMI_test>	*tb
		= new TESTB<VHDMI_test>;
	tb->opentrace("blinky.vcd");
	//tb->m_core->btn= 0;
	printf("P3\n");
	printf("800 525\n");
	printf("255\n");
	int count =0;
	int count2=0;
	for (int i=0; i < 800*525*10; i++) {
	  tb->tick();
	  if(count ==9){
	  printf(" %d %d %d ",
	  			tb->m_core->HDMI_test__DOT__red,
	  			tb->m_core->HDMI_test__DOT__green,
	  			tb->m_core->HDMI_test__DOT__blue);

	  count=0;
	  if(count2>=52){
		  count2=0;
		// printf("\n");
	  }
	  else
		 count2++;
	  }
	  else
		  count++;
	}
	//printf("\n\nSimulation complete\n");
}
