##
## Verilator Rules
##
.PHONY: all

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



clean: 
	rm -rf pass_through.bit
	rm -rf pass_through.config
	rm -rf pass_through.json
	rm -rf MIPI_Serial.bit
	rm -rf MIPI_Serial.config
	rm -rf MIPI_Serial.json















