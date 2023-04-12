#.DELETE_ON_ERROR:
TOPMOD  := ulx3s_pass_through_sim
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
VFLAGS := -O3 -MMD --trace -Wall -y HDMI  -y I2C_Init -y I2C_Init/I2C -y MIPI/IDDR2

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

clean: 
	rm -rf pass_through.bit
	rm -rf pass_through.config
	rm -rf pass_through.json
	rm -rf MIPI_Serial.bit
	rm -rf MIPI_Serial.config
	rm -rf MIPI_Serial.json
	rm -rf TOPSIM.vcd
	rm -r obj_dir




pass_through.bit: pass_through.config
	ecppack pass_through.config pass_through.bit

pass_through.config: pass_through.json
	nextpnr-ecp5 --85k --json pass_through.json  \
		--lpf LPF/ulx3s_v20.lpf \
		--package CABGA381 \
		--textcfg pass_through.config\
		--lpf-allow-unconstrained		

pass_through.json: pass_through.ys  
	yosys pass_through.ys 

prog_pass_through: pass_through.bit
	sudo ujprog pass_through.bit


MIPI_Serial.bit: MIPI_Serial.config
	ecppack MIPI_Serial.config MIPI_Serial.bit


MIPI_Serial.config: MIPI_Serial.json
	nextpnr-ecp5 --85k --json MIPI_Serial.json  \
		--lpf LPF/ulx3s_v20.lpf \
		--package CABGA381 \
		--textcfg MIPI_Serial.config\
		--lpf-allow-unconstrained		

MIPI_Serial.json: MIPI_Serial.ys  
	yosys MIPI_Serial.ys 

prog_MIPI_Serial: MIPI_Serial.bit
	sudo ujprog MIPI_Serial.bit
	

















