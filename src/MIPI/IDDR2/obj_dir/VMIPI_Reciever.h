// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMIPI_RECIEVER_H_
#define _VMIPI_RECIEVER_H_  // guard

#include "verilated.h"

//==========

class VMIPI_Reciever__Syms;
class VMIPI_Reciever_VerilatedVcd;


//----------

VL_MODULE(VMIPI_Reciever) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(sys_clk,0,0);
    VL_IN8(mipi_clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(lane0_d,0,0);
    VL_IN8(mipi_clk_8,0,0);
    VL_IN8(lane1_d,0,0);
    VL_INOUT8(lane0_p,0,0);
    VL_INOUT8(lane0_n,0,0);
    VL_INOUT8(lane1_p,0,0);
    VL_INOUT8(lane1_n,0,0);
    VL_OUT8(ram_clk,0,0);
    VL_OUT8(debug0,0,0);
    VL_OUT8(debug1,0,0);
    VL_OUT8(debug3,0,0);
    VL_OUT8(debug2,0,0);
    VL_OUT8(termination,0,0);
    VL_OUT8(rec_data_o,0,0);
    VL_OUT(data_o,31,0);
    VL_OUT(adress_out,31,0);
    VL_OUT(cX,31,0);
    VL_OUT(cY,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ MIPI_Reciever__DOT__sync_mipi_clk_2;
        CData/*0:0*/ MIPI_Reciever__DOT__sync_mipi_clk_4;
        CData/*0:0*/ MIPI_Reciever__DOT__sync_mipi_clk_8;
        CData/*0:0*/ MIPI_Reciever__DOT__SYNC__DOT__eclki_r2;
        CData/*0:0*/ MIPI_Reciever__DOT__rec_data;
        CData/*7:0*/ MIPI_Reciever__DOT__lane0byte;
        CData/*7:0*/ MIPI_Reciever__DOT__lane1byte;
        CData/*0:0*/ MIPI_Reciever__DOT__sync;
        CData/*0:0*/ MIPI_Reciever__DOT__valid;
        CData/*0:0*/ MIPI_Reciever__DOT__RxFSM__DOT__stop_tran;
        CData/*7:0*/ MIPI_Reciever__DOT__RxFSM__DOT__state_mipi;
        CData/*0:0*/ MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r;
        CData/*0:0*/ MIPI_Reciever__DOT__RxFSM__DOT__term_r;
        CData/*0:0*/ MIPI_Reciever__DOT__RxFSM__DOT__debug0_r;
        CData/*0:0*/ MIPI_Reciever__DOT__RxFSM__DOT__debug1_r;
        CData/*0:0*/ MIPI_Reciever__DOT__SYNC__DOT__eclki_r0;
        CData/*0:0*/ MIPI_Reciever__DOT__SYNC__DOT__eclki_r1;
        CData/*7:0*/ MIPI_Reciever__DOT__div2__DOT__counter;
        CData/*7:0*/ MIPI_Reciever__DOT__div4__DOT__counter;
        CData/*7:0*/ MIPI_Reciever__DOT__div8__DOT__counter;
        CData/*3:0*/ MIPI_Reciever__DOT__lane0__DOT__ddr;
        CData/*0:0*/ MIPI_Reciever__DOT__lane0__DOT__sync_r;
        CData/*0:0*/ MIPI_Reciever__DOT__lane0__DOT__even_r;
        CData/*3:0*/ MIPI_Reciever__DOT__lane0__DOT__q_o_r;
        CData/*1:0*/ MIPI_Reciever__DOT__lane0__DOT__ov_fl_r0;
        CData/*1:0*/ MIPI_Reciever__DOT__lane0__DOT__ov_fl_r1;
        CData/*7:0*/ MIPI_Reciever__DOT__lane0__DOT__syncbyte;
        CData/*0:0*/ MIPI_Reciever__DOT__lane0__DOT__delay_lane;
        CData/*0:0*/ MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__A;
        CData/*0:0*/ MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__B;
        CData/*0:0*/ MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__C;
        CData/*0:0*/ MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__D1;
        CData/*3:0*/ MIPI_Reciever__DOT__lane1__DOT__ddr;
        CData/*0:0*/ MIPI_Reciever__DOT__lane1__DOT__sync_r;
        CData/*0:0*/ MIPI_Reciever__DOT__lane1__DOT__even_r;
        CData/*3:0*/ MIPI_Reciever__DOT__lane1__DOT__q_o_r;
        CData/*1:0*/ MIPI_Reciever__DOT__lane1__DOT__ov_fl_r0;
        CData/*1:0*/ MIPI_Reciever__DOT__lane1__DOT__ov_fl_r1;
        CData/*7:0*/ MIPI_Reciever__DOT__lane1__DOT__syncbyte;
        CData/*0:0*/ MIPI_Reciever__DOT__lane1__DOT__delay_lane;
        CData/*0:0*/ MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__A;
        CData/*0:0*/ MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__B;
        CData/*0:0*/ MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__C;
        CData/*0:0*/ MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__D1;
        CData/*7:0*/ MIPI_Reciever__DOT__BA0__DOT__byte0_r;
        CData/*7:0*/ MIPI_Reciever__DOT__BA0__DOT__byte1_r;
        CData/*7:0*/ MIPI_Reciever__DOT__BA1__DOT__byte0_r;
        CData/*7:0*/ MIPI_Reciever__DOT__BA1__DOT__byte1_r;
        CData/*7:0*/ MIPI_Reciever__DOT__BAL0__DOT__byte_o_r;
        CData/*7:0*/ MIPI_Reciever__DOT__BAL0__DOT__counter;
        CData/*7:0*/ MIPI_Reciever__DOT__BAL0__DOT__byte_o_r_old;
        CData/*7:0*/ MIPI_Reciever__DOT__BAL1__DOT__byte_o_r;
        CData/*7:0*/ MIPI_Reciever__DOT__BAL1__DOT__counter;
        CData/*7:0*/ MIPI_Reciever__DOT__BAL1__DOT__byte_o_r_old;
        CData/*0:0*/ MIPI_Reciever__DOT__DE__DOT__valid_r;
        CData/*0:0*/ MIPI_Reciever__DOT__DE__DOT__start;
        CData/*7:0*/ MIPI_Reciever__DOT__DE__DOT__ecc;
        CData/*5:0*/ MIPI_Reciever__DOT__DE__DOT__type_o_r;
        CData/*7:0*/ MIPI_Reciever__DOT__DE__DOT__syndrom;
        CData/*0:0*/ MIPI_Reciever__DOT__Prot__DOT__rec_data_r;
        CData/*0:0*/ MIPI_Reciever__DOT__Prot__DOT__state;
        CData/*0:0*/ MIPI_Reciever__DOT__Prot__DOT__valid_old;
        SData/*15:0*/ MIPI_Reciever__DOT__BAL0__DOT__byte_o_r_s;
        SData/*15:0*/ MIPI_Reciever__DOT__BAL1__DOT__byte_o_r_s;
    };
    struct {
        SData/*15:0*/ MIPI_Reciever__DOT__DE__DOT__wordcount_r;
        SData/*15:0*/ MIPI_Reciever__DOT__Prot__DOT__c;
        SData/*15:0*/ MIPI_Reciever__DOT__Prot__DOT__c_calk;
        IData/*31:0*/ MIPI_Reciever__DOT__RxFSM__DOT__timer_tou;
        IData/*31:0*/ MIPI_Reciever__DOT__RxFSM__DOT__timer_term;
        IData/*31:0*/ MIPI_Reciever__DOT__RxFSM__DOT__timer_hs;
        IData/*31:0*/ MIPI_Reciever__DOT__DE__DOT__out_r;
        IData/*31:0*/ MIPI_Reciever__DOT__DE__DOT__out_r_old;
        IData/*31:0*/ MIPI_Reciever__DOT__DE__DOT__counter;
        IData/*31:0*/ MIPI_Reciever__DOT__DE__DOT__data_r;
        IData/*23:0*/ MIPI_Reciever__DOT__DE__DOT__correction;
        IData/*31:0*/ MIPI_Reciever__DOT__DE__DOT__regheader_correct;
        IData/*31:0*/ MIPI_Reciever__DOT__Prot__DOT__counter;
        IData/*31:0*/ MIPI_Reciever__DOT__Prot__DOT__count_val;
        IData/*31:0*/ MIPI_Reciever__DOT__Prot__DOT__data_o_r;
        IData/*31:0*/ MIPI_Reciever__DOT__Prot__DOT__counter_addr;
        IData/*31:0*/ MIPI_Reciever__DOT__Prot__DOT__cX_r;
        IData/*31:0*/ MIPI_Reciever__DOT__Prot__DOT__cY_r;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi;
    CData/*7:0*/ __Vdly__MIPI_Reciever__DOT__BAL0__DOT__byte_o_r;
    CData/*7:0*/ __Vdly__MIPI_Reciever__DOT__BAL1__DOT__byte_o_r;
    CData/*5:0*/ __Vdly__MIPI_Reciever__DOT__DE__DOT__type_o_r;
    CData/*0:0*/ __VinpClk__TOP__MIPI_Reciever__DOT__SYNC__DOT__eclki_r2;
    CData/*0:0*/ __Vclklast__TOP__sys_clk;
    CData/*0:0*/ __Vclklast__TOP__mipi_clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__MIPI_Reciever__DOT__SYNC__DOT__eclki_r2;
    CData/*0:0*/ __Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_2;
    CData/*0:0*/ __Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_4;
    CData/*0:0*/ __Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_8;
    CData/*0:0*/ __Vchglast__TOP__MIPI_Reciever__DOT__SYNC__DOT__eclki_r2;
    SData/*15:0*/ __Vdly__MIPI_Reciever__DOT__DE__DOT__wordcount_r;
    IData/*31:0*/ __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou;
    IData/*31:0*/ __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_term;
    IData/*31:0*/ __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_hs;
    IData/*31:0*/ __Vdly__MIPI_Reciever__DOT__DE__DOT__out_r;
    IData/*31:0*/ __Vdly__MIPI_Reciever__DOT__DE__DOT__counter;
    CData/*0:0*/ __Vm_traceActivity[9];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VMIPI_Reciever__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMIPI_Reciever);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VMIPI_Reciever(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMIPI_Reciever();
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
    static void _eval_initial_loop(VMIPI_Reciever__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMIPI_Reciever__Syms* symsp, bool first);
  private:
    static QData _change_request(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static QData _change_request_1(VMIPI_Reciever__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VMIPI_Reciever__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VMIPI_Reciever__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VMIPI_Reciever__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__4(VMIPI_Reciever__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__10(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__15(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__16(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__17(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__18(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VMIPI_Reciever__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VMIPI_Reciever__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__7(VMIPI_Reciever__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
