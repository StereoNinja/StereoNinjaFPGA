////////////////////////////////////////////////////////////////////////////////
//
// Filename: 	testb.h
//
// Project:	Verilog Tutorial Example file
//
// Purpose:	A wrapper providing a common interface to a clocked FPGA core
//		being exercised by Verilator.
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
//
// Written and distributed by Gisselquist Technology, LLC
//
// This program is hereby granted to the public domain.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
// FITNESS FOR A PARTICULAR PURPOSE.
//
////////////////////////////////////////////////////////////////////////////////
//
//
#ifndef	TESTB_H
#define	TESTB_H

#include <stdio.h>
#include <stdint.h>
#include <verilated_vcd_c.h>

#define	TBASSERT(TB,A) do { if (!(A)) { (TB).closetrace(); } assert(A); } while(0);

template <class VA>	class TESTB {
public:
	VA		*m_core;
	VerilatedVcdC*	m_trace;
	uint64_t	m_tickcount;

	TESTB(void) : m_trace(NULL), m_tickcount(0l) {
		m_core = new VA;
		Verilated::traceEverOn(true);
		m_core->pixclk = 0;
		m_core->cam0_clk = 0;

		//m_core->byte_clk_8 = 0;
		eval(); // Get our initial values set properly.
	}
	virtual ~TESTB(void) {
		closetrace();
		delete m_core;
		m_core = NULL;
	}

	virtual	void	opentrace(const char *vcdname) {
		if (!m_trace) {
			m_trace = new VerilatedVcdC;
			m_core->trace(m_trace, 99);
			m_trace->open(vcdname);
		}
	}

	virtual	void	closetrace(void) {
		if (m_trace) {
			m_trace->close();
			delete m_trace;
			m_trace = NULL;
		}
	}

	virtual	void	eval(void) {
		m_core->eval();
	}

	virtual	void	tick(void) {
		m_tickcount++;

		// Make sure we have our evaluations straight before the top
		// of the clock.  This is necessary since some of the 
		// connection modules may have made changes, for which some
		// logic depends.  This forces that logic to be recalculated
		// before the top of the clock.
		eval();
		m_core->pixclk = (((m_tickcount-1)%16)<8) ? 1 : 0;
		//m_core->mipi_clk_2= (((m_tickcount-1)%4)<2) ? 1 : 0;
		//m_core->mipi_clk_4= (((m_tickcount-1)%8)<4) ? 1 : 0;
		m_core->cam0_clk= (((m_tickcount-1)%2)<1) ? 1 : 0;
		
				
				eval();
				if (m_trace) m_trace->dump((vluint64_t)(1100*m_tickcount));
				
		eval();
		if (m_trace) {
			m_trace->dump((vluint64_t)(10*m_tickcount+5));
			m_trace->flush();
		}
	}

	unsigned long	tickcount(void) {
		return m_tickcount;
	}
};

#endif
