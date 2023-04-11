// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTMDS_ENCODER_H_
#define _VTMDS_ENCODER_H_  // guard

#include "verilated.h"

//==========

class VTMDS_Encoder__Syms;
class VTMDS_Encoder_VerilatedVcd;


//----------

VL_MODULE(VTMDS_Encoder) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clklow,0,0);
    VL_IN8(clkhigh,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(state,1,0);
    VL_IN8(pix_data,7,0);
    VL_IN8(H_VSync_Ctr,1,0);
    VL_IN8(aux_data,3,0);
    VL_OUT8(data_o,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    SData/*9:0*/ TMDS_Encoder__DOT__q_m;
    SData/*9:0*/ TMDS_Encoder__DOT__q_out;
    IData/*31:0*/ TMDS_Encoder__DOT__cnt;
    IData/*31:0*/ TMDS_Encoder__DOT__cnt_old;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clkhigh;
    CData/*0:0*/ __Vclklast__TOP__clklow;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTMDS_Encoder__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTMDS_Encoder);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VTMDS_Encoder(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTMDS_Encoder();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTMDS_Encoder__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTMDS_Encoder__Syms* symsp, bool first);
  private:
    static QData _change_request(VTMDS_Encoder__Syms* __restrict vlSymsp);
    static QData _change_request_1(VTMDS_Encoder__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VTMDS_Encoder__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VTMDS_Encoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VTMDS_Encoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(VTMDS_Encoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VTMDS_Encoder__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VTMDS_Encoder__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VTMDS_Encoder__Syms* __restrict vlSymsp);
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
