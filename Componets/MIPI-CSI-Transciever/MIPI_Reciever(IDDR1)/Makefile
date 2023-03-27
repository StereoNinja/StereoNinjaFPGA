##
## Verilator Rules
##
.PHONY: all

#.DELETE_ON_ERROR:
TOPMOD  := MIPI_Reciever
VLOGFIL := $(TOPMOD).v
VCDFILE := $(TOPMOD).vcd
SIMPROG := $(TOPMOD)_tb
SIMFILE := $(SIMPROG).cpp
VDIRFB  := ./obj_dir
all: $(VCDFILE)

GCC := g++
CFLAGS = -g -Wall -I$(VINC) -I $(VDIRFB)
#
# Modern versions of Verilator and C++ may require an -faligned-new flag
# CFLAGS = -g -Wall -faligned-new -I$(VINC) -I $(VDIRFB)

VERILATOR=verilator
VFLAGS := -O3 -MMD --trace -Wall

## Find the directory containing the Verilog sources.  This is given from
## calling: "verilator -V" and finding the VERILATOR_ROOT output line from
## within it.  From this VERILATOR_ROOT value, we can find all the components
## we need here--in particular, the verilator include directory
VERILATOR_ROOT ?= $(shell bash -c '$(VERILATOR) -V|grep VERILATOR_ROOT | head -1 | sed -e "s/^.*=\s*//"')
##
## The directory containing the verilator includes
VINC := $(VERILATOR_ROOT)/include

$(VDIRFB)/V$(TOPMOD).cpp: $(TOPMOD).v 
	$(VERILATOR) $(VFLAGS) -cc --top-module $(TOPMOD) $(VLOGFIL)

$(VDIRFB)/V$(TOPMOD)__ALL.a: $(VDIRFB)/V$(TOPMOD).cpp
	make --no-print-directory -C $(VDIRFB) -f V$(TOPMOD).mk

$(SIMPROG): $(SIMFILE) $(VDIRFB)/V$(TOPMOD)__ALL.a $(COSIMS)
	$(GCC) $(CFLAGS) $(VINC)/verilated.cpp				\
		$(VINC)/verilated_vcd_c.cpp $(SIMFILE) $(COSIMS)	\
		$(VDIRFB)/V$(TOPMOD)__ALL.a -o $(SIMPROG)

test: $(VCDFILE)

$(VCDFILE): $(SIMPROG)
	./$(SIMPROG) 
	

## 
.PHONY: clean
clean:
	rm -rf $(VDIRFB)/ $(SIMPROG) $(VCDFILE) 
	rm -rf $(VDIRFB)/ $(SIMPROG) $(VCDFILE) 
	rm -rf $(TOPMOD).json
	rm -rf ulx3s.bit
	rm -rf ulx3s_out.config$(VCDFILE) 

##
## Find all of the Verilog dependencies and submodules
##
DEPS := $(wildcard $(VDIRFB)/*.d)

## Include any of these submodules in the Makefile
## ... but only if we are not building the "clean" target
## which would (oops) try to build those dependencies again
##
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(DEPS),)
include $(DEPS)
endif
endif

ulx3s.bit: ulx3s_out.config
	ecppack ulx3s_out.config ulx3s.bit


ulx3s_out.config: MIPI_Reciever.json
	nextpnr-ecp5 --85k --json MIPI_Reciever.json  \
		--lpf ulx3s_v20.lpf \
		--package CABGA381 \
		--textcfg ulx3s_out.config\
		--lpf-allow-unconstrained
		#--package CABGA381 \
		
		#--package CABGA381 \
		#--textcfg ulx3s_out.config 
		

MIPI_Reciever.json: MIPI_Reciever.ys  
	yosys MIPI_Reciever.ys 

prog: ulx3s.bit
	sudo ujprog *.bit
















