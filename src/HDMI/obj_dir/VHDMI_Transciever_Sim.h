// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHDMI_TRANSCIEVER_SIM_H_
#define _VHDMI_TRANSCIEVER_SIM_H_  // guard

#include "verilated.h"

//==========

class VHDMI_Transciever_Sim__Syms;
class VHDMI_Transciever_Sim_VerilatedVcd;


//----------

VL_MODULE(VHDMI_Transciever_Sim) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(pixclk,0,0);
    VL_IN8(clk_high,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(TMDSd,3,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ HDMI_Transciever_Sim__DOT__blue;
        CData/*7:0*/ HDMI_Transciever_Sim__DOT__green;
        CData/*7:0*/ HDMI_Transciever_Sim__DOT__red;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__hSync;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__vSync;
        CData/*1:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__DrawArea;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_r;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_b;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_g;
        CData/*3:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_mod10;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_load;
        CData/*3:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__aux_data;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__data_o;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m1;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m2;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m3;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m4;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m5;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m6;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m7;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m8;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p1;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p2;
        CData/*7:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p3;
        CData/*3:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__aux_data;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__data_o;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m1;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m2;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m3;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m4;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m5;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m6;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m7;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m8;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p1;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p2;
        CData/*7:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p3;
        CData/*3:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__aux_data;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__data_o;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m1;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m2;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m3;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m4;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m5;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m6;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m7;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m8;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p1;
        CData/*0:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p2;
        CData/*7:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p3;
        SData/*10:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX;
        SData/*10:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterY;
        SData/*9:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_red;
        SData/*9:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_green;
        SData/*9:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_blue;
        SData/*9:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out1;
        SData/*8:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m;
        SData/*9:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out1;
        SData/*8:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m;
        SData/*9:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out1;
        SData/*8:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m;
        IData/*20:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__addr_r;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt_old;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt0;
    };
    struct {
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt1;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt2;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt3;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt_old;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt0;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt1;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt2;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt3;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt_old;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt0;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt1;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt2;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt3;
        IData/*31:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ HDMI_Transciever_Sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__0__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__0__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__1__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__1__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__2__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__2__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__3__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__3__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__4__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__4__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__5__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__5__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__6__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__6__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__7__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__7__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__8__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__8__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__9__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__9__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__10__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__10__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__11__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__11__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__12__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__12__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__13__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__13__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__14__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__14__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__15__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__15__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__16__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__16__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__17__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__17__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__18__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__18__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__19__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__19__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__20__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__20__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__21__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__21__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__22__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__22__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__23__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__23__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__24__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__24__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__25__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__25__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__26__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__26__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__27__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__27__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__28__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__28__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__29__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__29__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__30__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__30__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__31__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__31__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__32__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__32__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__33__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__33__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__34__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__34__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__35__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__35__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__36__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__36__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__37__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__37__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__38__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__38__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__39__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__39__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__40__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__40__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__41__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__41__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__42__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__42__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__43__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__43__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__44__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__44__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__45__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__45__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__46__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N0__46__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__47__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__N1__47__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__48__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__48__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__49__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__49__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__50__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__50__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__51__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__51__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__52__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__52__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__53__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__53__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__54__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__54__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__55__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__55__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__56__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__56__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__57__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__57__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__58__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__58__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__59__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__59__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__60__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__60__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__61__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__61__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__62__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__62__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__63__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__63__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__64__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__64__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__65__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__65__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__66__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__66__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__67__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__67__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__68__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__68__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__69__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__69__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__70__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__70__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__71__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__71__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__72__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__72__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__73__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__73__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__74__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__74__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__75__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__75__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__76__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__76__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__77__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__77__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__78__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__78__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__79__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__79__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__80__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__80__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__81__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__81__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__82__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__82__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__83__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__83__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__84__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__84__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__85__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__85__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__86__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__86__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__87__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__87__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__88__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__88__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__89__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__89__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__90__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__90__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__91__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__91__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__92__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__92__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__93__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__93__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__94__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N0__94__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__95__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__N1__95__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__96__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__96__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__97__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__97__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__98__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__98__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__99__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__99__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__100__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__100__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__101__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__101__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__102__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__102__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__103__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__103__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__104__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__104__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__105__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__105__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__106__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__106__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__107__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__107__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__108__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__108__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__109__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__109__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__110__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__110__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__111__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__111__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__112__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__112__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__113__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__113__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__114__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__114__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__115__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__115__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__116__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__116__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__117__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__117__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__118__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__118__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__119__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__119__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__120__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__120__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__121__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__121__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__122__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__122__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__123__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__123__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__124__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__124__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__125__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__125__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__126__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__126__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__127__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__127__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__128__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__128__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__129__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__129__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__130__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__130__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__131__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__131__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__132__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__132__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__133__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__133__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__134__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__134__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__135__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__135__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__136__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__136__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__137__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__137__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__138__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__138__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__139__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__139__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__140__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__140__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__141__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__141__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__142__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N0__142__data;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__143__Vfuncout;
        CData/*7:0*/ __Vfunc_HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__N1__143__data;
        CData/*0:0*/ __Vclklast__TOP__clk_high;
        CData/*0:0*/ __Vclklast__TOP__pixclk;
        SData/*9:0*/ __Vdly__HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_red;
        SData/*9:0*/ __Vdly__HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_green;
        SData/*9:0*/ __Vdly__HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_blue;
        CData/*0:0*/ __Vm_traceActivity[5];
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VHDMI_Transciever_Sim__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VHDMI_Transciever_Sim);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VHDMI_Transciever_Sim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VHDMI_Transciever_Sim();
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
    static void _eval_initial_loop(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VHDMI_Transciever_Sim__Syms* symsp, bool first);
  private:
    static QData _change_request(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp);
    static QData _change_request_1(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__8(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VHDMI_Transciever_Sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
