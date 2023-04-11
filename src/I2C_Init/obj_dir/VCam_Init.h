// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCAM_INIT_H_
#define _VCAM_INIT_H_  // guard

#include "verilated_heavy.h"

//==========

class VCam_Init__Syms;
class VCam_Init_VerilatedVcd;


//----------

VL_MODULE(VCam_Init) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk400,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(init,0,0);
    VL_INOUT8(sda,0,0);
    VL_INOUT8(scl,0,0);
    VL_OUT8(cam_ready,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ Cam_Init__DOT__send_data;
    CData/*0:0*/ Cam_Init__DOT__cam_ready_r;
    CData/*0:0*/ Cam_Init__DOT__ready_old;
    CData/*0:0*/ Cam_Init__DOT__cam_ready0;
    CData/*7:0*/ Cam_Init__DOT__datain;
    CData/*7:0*/ Cam_Init__DOT__slave_addr;
    CData/*7:0*/ Cam_Init__DOT__state;
    CData/*0:0*/ Cam_Init__DOT__initia;
    CData/*0:0*/ Cam_Init__DOT__init_old;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__r_w;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__valid_r;
    CData/*7:0*/ Cam_Init__DOT__cam0__DOT__state;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__send_data_old;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__rising_edge;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__sda0;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__sending;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__ready0;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__clkdelay0;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__clkdelay1;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__scl0;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__scl1;
    CData/*0:0*/ Cam_Init__DOT__cam0__DOT__scl2;
    SData/*15:0*/ Cam_Init__DOT__register_in;
    IData/*31:0*/ Cam_Init__DOT__counter;
    IData/*31:0*/ Cam_Init__DOT__cam0__DOT__counter;
    IData/*23:0*/ Cam_Init__DOT__data_init[62];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk400;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCam_Init__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCam_Init);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCam_Init(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCam_Init();
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
    static void _eval_initial_loop(VCam_Init__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCam_Init__Syms* symsp, bool first);
  private:
    static QData _change_request(VCam_Init__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCam_Init__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VCam_Init__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCam_Init__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCam_Init__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCam_Init__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VCam_Init__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VCam_Init__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VCam_Init__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
