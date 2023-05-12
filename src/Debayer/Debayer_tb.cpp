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


#include<iostream>

#include<fstream>




int	main(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);
	TESTB<VDebayer>	*tb
		= new TESTB<VDebayer>;
	tb->opentrace("Debayer_Sim.vcd");
	//tb->m_core->btn= 0;
	///////////////////////////////////
	std::ifstream raw_image;	
    raw_image.open("raw.ppm",std::ios::binary);
	
	char shit[15];
	char image[4*3*640*480];
	int image_w[3*640*480];
	int* image_g=new int[640*480];
	
	raw_image.read(shit,15);	
	raw_image.read(reinterpret_cast<char*>(&image),sizeof image);	
	std::string s;

	int *image_o= new int[3*640*480];
	std::ofstream raw_image_o;
	raw_image_o.open("raw_o.ppm");
	raw_image_o.write("P3\n640\n480\n255\n",16);

	
	for (size_t i = 0; i < 3*640*480; i++)
	{		s=image[4*i];
			s.push_back(image[4*i+1]);
			s.push_back(image[4*i+2]);
			//std::cout<< s;	
			//std::cout<< "\n";					
			image_w[i]=stoi(s);	
			//std::cout<< image_w[i];
			//std::cout<< " ";				
	}

	for (size_t i =0; i < 480*640; i++)
	{								
			image_g[i]=image_w[3*i];	
			//std::cout<< image_g[i];
			//std::cout<< " ";				
	}
	


	int adress=0;
	tb->m_core->address_in=adress;
	tb->m_core->raw=image_g[adress];
	for (int i=0; i < 640*480*2; i++) {		
	    tb->tick();		
		if(i%2==1){			
			adress=adress+1;
			image_o[3*adress]=3*tb->m_core->red;
			image_o[3*adress+1]=3*tb->m_core->green;
			image_o[3*adress+2]=3*tb->m_core->blue;
			tb->m_core->address_in=adress;
			tb->m_core->raw=image_g[adress];			
		}
		

	}

	for (size_t a = 0; a < 480; a++)
	{
		for (size_t b = 0; b < 640; b++)
		{		
			raw_image_o << (image_o[3*(a*640+b)]);
			raw_image_o.write(" ",1);
			raw_image_o << (image_o[3*(a*640+b)+1]);
			raw_image_o.write(" ",1);
			raw_image_o <<  (image_o[3*(a*640+b)+2]);
			raw_image_o.write(" ",1);									
		}
		raw_image_o.write("\n",1);
	}

	raw_image.close();
	raw_image_o.close();
	printf("\n\nSimulation complete\n");
}
