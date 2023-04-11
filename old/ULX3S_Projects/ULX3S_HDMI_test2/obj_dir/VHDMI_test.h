// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHDMI_TEST_H_
#define _VHDMI_TEST_H_  // guard

#include "verilated.h"

//==========

class VHDMI_test__Syms;
class VHDMI_test_VerilatedVcd;


//----------

VL_MODULE(VHDMI_test) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(pixclk,0,0);
    VL_IN8(clk_TMDS,0,0);
    VL_OUT8(TMDSd,3,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ HDMI_test__DOT__hSync;
    CData/*0:0*/ HDMI_test__DOT__vSync;
    CData/*0:0*/ HDMI_test__DOT__DrawArea;
    CData/*7:0*/ HDMI_test__DOT__red;
    CData/*7:0*/ HDMI_test__DOT__green;
    CData/*7:0*/ HDMI_test__DOT__blue;
    CData/*0:0*/ HDMI_test__DOT__DCM_TMDS_CLKFX;
    CData/*3:0*/ HDMI_test__DOT__TMDS_mod10;
    CData/*0:0*/ HDMI_test__DOT__TMDS_shift_load;
    CData/*3:0*/ HDMI_test__DOT__encode_R__DOT__Nb1s;
    CData/*0:0*/ HDMI_test__DOT__encode_R__DOT__XNOR;
    CData/*3:0*/ HDMI_test__DOT__encode_R__DOT__balance_acc;
    CData/*3:0*/ HDMI_test__DOT__encode_R__DOT__balance;
    CData/*0:0*/ HDMI_test__DOT__encode_R__DOT__balance_sign_eq;
    CData/*0:0*/ HDMI_test__DOT__encode_R__DOT__invert_q_m;
    CData/*3:0*/ HDMI_test__DOT__encode_R__DOT__balance_acc_inc;
    CData/*3:0*/ HDMI_test__DOT__encode_R__DOT__balance_acc_new;
    CData/*3:0*/ HDMI_test__DOT__encode_G__DOT__Nb1s;
    CData/*0:0*/ HDMI_test__DOT__encode_G__DOT__XNOR;
    CData/*3:0*/ HDMI_test__DOT__encode_G__DOT__balance_acc;
    CData/*3:0*/ HDMI_test__DOT__encode_G__DOT__balance;
    CData/*0:0*/ HDMI_test__DOT__encode_G__DOT__balance_sign_eq;
    CData/*0:0*/ HDMI_test__DOT__encode_G__DOT__invert_q_m;
    CData/*3:0*/ HDMI_test__DOT__encode_G__DOT__balance_acc_inc;
    CData/*3:0*/ HDMI_test__DOT__encode_G__DOT__balance_acc_new;
    CData/*3:0*/ HDMI_test__DOT__encode_B__DOT__Nb1s;
    CData/*0:0*/ HDMI_test__DOT__encode_B__DOT__XNOR;
    CData/*3:0*/ HDMI_test__DOT__encode_B__DOT__balance_acc;
    CData/*3:0*/ HDMI_test__DOT__encode_B__DOT__balance;
    CData/*0:0*/ HDMI_test__DOT__encode_B__DOT__balance_sign_eq;
    CData/*0:0*/ HDMI_test__DOT__encode_B__DOT__invert_q_m;
    CData/*3:0*/ HDMI_test__DOT__encode_B__DOT__balance_acc_inc;
    CData/*3:0*/ HDMI_test__DOT__encode_B__DOT__balance_acc_new;
    SData/*9:0*/ HDMI_test__DOT__CounterX;
    SData/*9:0*/ HDMI_test__DOT__CounterY;
    SData/*9:0*/ HDMI_test__DOT__TMDS_red;
    SData/*9:0*/ HDMI_test__DOT__TMDS_green;
    SData/*9:0*/ HDMI_test__DOT__TMDS_blue;
    SData/*9:0*/ HDMI_test__DOT__TMDS_shift_red;
    SData/*9:0*/ HDMI_test__DOT__TMDS_shift_green;
    SData/*9:0*/ HDMI_test__DOT__TMDS_shift_blue;
    SData/*8:0*/ HDMI_test__DOT__encode_R__DOT__q_m;
    SData/*8:0*/ HDMI_test__DOT__encode_G__DOT__q_m;
    SData/*8:0*/ HDMI_test__DOT__encode_B__DOT__q_m;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ HDMI_test__DOT____Vcellinp__encode_B__CD;
    CData/*0:0*/ __Vclklast__TOP__pixclk;
    CData/*0:0*/ __Vclklast__TOP__clk_TMDS;
    SData/*9:0*/ __Vdly__HDMI_test__DOT__CounterX;
    SData/*9:0*/ __Vdly__HDMI_test__DOT__CounterY;
    SData/*8:0*/ __Vchglast__TOP__HDMI_test__DOT__encode_R__DOT__q_m;
    SData/*8:0*/ __Vchglast__TOP__HDMI_test__DOT__encode_G__DOT__q_m;
    SData/*8:0*/ __Vchglast__TOP__HDMI_test__DOT__encode_B__DOT__q_m;
    CData/*0:0*/ __Vm_traceActivity[5];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VHDMI_test__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VHDMI_test);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VHDMI_test(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VHDMI_test();
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
    static void _eval_initial_loop(VHDMI_test__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VHDMI_test__Syms* symsp, bool first);
  private:
    static QData _change_request(VHDMI_test__Syms* __restrict vlSymsp);
    static QData _change_request_1(VHDMI_test__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VHDMI_test__Syms* __restrict vlSymsp);
    static void _combo__TOP__7(VHDMI_test__Syms* __restrict vlSymsp);
    static void _combo__TOP__9(VHDMI_test__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VHDMI_test__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VHDMI_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VHDMI_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(VHDMI_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(VHDMI_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VHDMI_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VHDMI_test__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VHDMI_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__6(VHDMI_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
