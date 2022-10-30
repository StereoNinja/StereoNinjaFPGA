// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHDMI_TRANSCIEVER_H_
#define _VHDMI_TRANSCIEVER_H_  // guard

#include "verilated.h"

//==========

class VHDMI_Transciever__Syms;
class VHDMI_Transciever_VerilatedVcd;


//----------

VL_MODULE(VHDMI_Transciever) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_low,0,0);
    VL_IN8(clk_high,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(red,0,0);
    VL_OUT8(green,0,0);
    VL_OUT8(blue,0,0);
    VL_OUT8(clock,0,0);
    VL_IN8(ram_green,7,0);
    VL_IN8(ram_blue,7,0);
    VL_IN8(ram_red,7,0);
    VL_OUT(ram_addr,25,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*1:0*/ HDMI_Transciever__DOT__state;
    CData/*1:0*/ HDMI_Transciever__DOT__H_VSync_Ctr_0;
    CData/*1:0*/ HDMI_Transciever__DOT__H_VSync_Ctr_1;
    CData/*1:0*/ HDMI_Transciever__DOT__H_VSync_Ctr_2;
    CData/*0:0*/ HDMI_Transciever__DOT__first;
    CData/*3:0*/ HDMI_Transciever__DOT__encoder0__DOT__aux_data;
    CData/*3:0*/ HDMI_Transciever__DOT__encoder1__DOT__aux_data;
    CData/*3:0*/ HDMI_Transciever__DOT__encoder2__DOT__aux_data;
    SData/*9:0*/ HDMI_Transciever__DOT__encoder0__DOT__q_m;
    SData/*9:0*/ HDMI_Transciever__DOT__encoder0__DOT__q_out;
    SData/*9:0*/ HDMI_Transciever__DOT__encoder1__DOT__q_m;
    SData/*9:0*/ HDMI_Transciever__DOT__encoder1__DOT__q_out;
    SData/*9:0*/ HDMI_Transciever__DOT__encoder2__DOT__q_m;
    SData/*9:0*/ HDMI_Transciever__DOT__encoder2__DOT__q_out;
    IData/*31:0*/ HDMI_Transciever__DOT__h;
    IData/*31:0*/ HDMI_Transciever__DOT__v;
    IData/*25:0*/ HDMI_Transciever__DOT__addr;
    IData/*31:0*/ HDMI_Transciever__DOT__encoder0__DOT__cnt;
    IData/*31:0*/ HDMI_Transciever__DOT__encoder0__DOT__cnt_old;
    IData/*31:0*/ HDMI_Transciever__DOT__encoder1__DOT__cnt;
    IData/*31:0*/ HDMI_Transciever__DOT__encoder1__DOT__cnt_old;
    IData/*31:0*/ HDMI_Transciever__DOT__encoder2__DOT__cnt;
    IData/*31:0*/ HDMI_Transciever__DOT__encoder2__DOT__cnt_old;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk_high;
    CData/*0:0*/ __Vclklast__TOP__clk_low;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VHDMI_Transciever__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VHDMI_Transciever);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VHDMI_Transciever(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VHDMI_Transciever();
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
    static void _eval_initial_loop(VHDMI_Transciever__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VHDMI_Transciever__Syms* symsp, bool first);
  private:
    static QData _change_request(VHDMI_Transciever__Syms* __restrict vlSymsp);
    static QData _change_request_1(VHDMI_Transciever__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VHDMI_Transciever__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VHDMI_Transciever__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VHDMI_Transciever__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(VHDMI_Transciever__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__5(VHDMI_Transciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VHDMI_Transciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VHDMI_Transciever__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VHDMI_Transciever__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
