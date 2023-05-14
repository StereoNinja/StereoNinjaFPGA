// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDEBAYER_SIM_H_
#define _VDEBAYER_SIM_H_  // guard

#include "verilated_heavy.h"

//==========

class VDebayer_sim__Syms;
class VDebayer_sim_VerilatedVcd;


//----------

VL_MODULE(VDebayer_sim) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(red,7,0);
    VL_OUT8(green,7,0);
    VL_OUT8(blue,7,0);
    VL_IN(address_in,18,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ Debayer_sim__DOT__DPR__DOT__clk;
    CData/*7:0*/ Debayer_sim__DOT__counter;
    CData/*7:0*/ Debayer_sim__DOT__raw_v;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT__red_r;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT__green_r;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT__blue_r;
    CData/*1:0*/ Debayer_sim__DOT__debay__DOT__line_sel;
    CData/*1:0*/ Debayer_sim__DOT__DPR__DOT__bank;
    CData/*0:0*/ Debayer_sim__DOT__DPR__DOT__we_a;
    IData/*31:0*/ Debayer_sim__DOT__ramdata;
    IData/*31:0*/ Debayer_sim__DOT__color_w;
    IData/*31:0*/ Debayer_sim__DOT__debay__DOT__cX;
    IData/*31:0*/ Debayer_sim__DOT__debay__DOT__cY;
    IData/*18:0*/ Debayer_sim__DOT__debay__DOT__address_out_r;
    IData/*31:0*/ Debayer_sim__DOT__debay__DOT__i;
    IData/*31:0*/ Debayer_sim__DOT__DPR__DOT__data_a;
    IData/*31:0*/ Debayer_sim__DOT__DPR__DOT__data_b;
    IData/*16:0*/ Debayer_sim__DOT__DPR__DOT__addr_a;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT__line0[640];
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT__line1[640];
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT__line2[640];
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT__line3[640];
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT__raw_pix[9];
    IData/*31:0*/ Debayer_sim__DOT__DPR__DOT__ram[76800];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT____Vlvbound1;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT____Vlvbound2;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT____Vlvbound3;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT____Vlvbound4;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT____Vlvbound5;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT____Vlvbound6;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT____Vlvbound7;
    CData/*7:0*/ Debayer_sim__DOT__debay__DOT____Vlvbound8;
    CData/*0:0*/ __Vdlyvset__Debayer_sim__DOT__DPR__DOT__ram__v0;
    CData/*0:0*/ __Vclklast__TOP__Debayer_sim__DOT__DPR__DOT__clk;
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ Debayer_sim__DOT__DPR__DOT____Vlvbound1;
    IData/*16:0*/ __Vdlyvdim0__Debayer_sim__DOT__DPR__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__Debayer_sim__DOT__DPR__DOT__ram__v0;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VDebayer_sim__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDebayer_sim);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VDebayer_sim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDebayer_sim();
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
    static void _eval_initial_loop(VDebayer_sim__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VDebayer_sim__Syms* symsp, bool first);
  private:
    static QData _change_request(VDebayer_sim__Syms* __restrict vlSymsp);
    static QData _change_request_1(VDebayer_sim__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VDebayer_sim__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VDebayer_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VDebayer_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(VDebayer_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VDebayer_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VDebayer_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VDebayer_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VDebayer_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
