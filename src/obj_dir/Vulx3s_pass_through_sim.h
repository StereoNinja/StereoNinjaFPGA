// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VULX3S_PASS_THROUGH_SIM_H_
#define _VULX3S_PASS_THROUGH_SIM_H_  // guard

#include "verilated_heavy.h"

//==========

class Vulx3s_pass_through_sim__Syms;
class Vulx3s_pass_through_sim_VerilatedVcd;


//----------

VL_MODULE(Vulx3s_pass_through_sim) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(pixclk,0,0);
    VL_IN8(cam0_clk,0,0);
    VL_IN8(sys_clk,0,0);
    VL_IN8(clk250,0,0);
    VL_INOUT8(cam0_sda,0,0);
    VL_INOUT8(cam0_scl,0,0);
    VL_INOUT8(debug0,0,0);
    VL_INOUT8(debug1,0,0);
    VL_INOUT8(debug2,0,0);
    VL_INOUT8(debug3,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(btn,0,0);
    VL_IN8(fire,0,0);
    VL_INOUT8(cam0_d0,0,0);
    VL_INOUT8(cam0_d1,0,0);
    VL_INOUT8(cam0_d0_r_p,0,0);
    VL_INOUT8(cam0_d0_r_n,0,0);
    VL_INOUT8(cam0_d1_r_p,0,0);
    VL_INOUT8(cam0_d1_r_n,0,0);
    VL_INOUT8(cam0_clk_r_p,0,0);
    VL_INOUT8(cam0_clk_r_n,0,0);
    VL_OUT8(led,7,0);
    VL_OUT8(TMDSd,3,0);
    VL_OUT8(ftdi_rxd,0,0);
    VL_OUT8(ftdi_txden,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__sync_mipi_clk_2;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__sync_mipi_clk_4;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__sync_mipi_clk_8;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__SYNC__DOT__eclki_r2;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__clk400;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__clk100Mhz;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__cam0_sda_w;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__cam0_scl_w;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__color;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__red_v;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__green_v;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__blue_v;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__grey0;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__grey1;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__grey2;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__grey3;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__hex;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__ready;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__start;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__counter;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__mipi_clk_8;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__rec_data;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0byte;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1byte;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__sync;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__valid;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__stop_tran;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__state_mipi;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__term_r;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__debug0_r;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__debug1_r;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__SYNC__DOT__eclki_r0;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__SYNC__DOT__eclki_r1;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__div2__DOT__counter;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__div4__DOT__counter;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__div8__DOT__counter;
        CData/*3:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__ddr;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__sync_r;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__even_r;
        CData/*3:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__q_o_r;
        CData/*1:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__ov_fl_r;
        CData/*1:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__ov_fl_r1;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__syncbyte;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__delay_lane;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__A;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__B;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__C;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__D1;
        CData/*3:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__ddr;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__sync_r;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__even_r;
        CData/*3:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__q_o_r;
        CData/*1:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__ov_fl_r;
        CData/*1:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__ov_fl_r1;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__syncbyte;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__delay_lane;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__A;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__B;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__C;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__D1;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BA0__DOT__byte0_r;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BA0__DOT__byte1_r;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BA1__DOT__byte0_r;
    };
    struct {
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BA1__DOT__byte1_r;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BAL0__DOT__byte_o_r;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BAL0__DOT__counter;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BAL0__DOT__byte_o_r_old;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BAL1__DOT__byte_o_r;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BAL1__DOT__counter;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BAL1__DOT__byte_o_r_old;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__valid_r;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__start;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__ecc;
        CData/*5:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__type_o_r;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__syndrom;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__rec_data_r;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__state;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__valid_old;
        CData/*1:0*/ ulx3s_pass_through_sim__DOT__DPR__DOT__bank;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__hSync;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__vSync;
        CData/*1:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__DrawArea;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_r;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_b;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_g;
        CData/*3:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_mod10;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_load;
        CData/*3:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__aux_data;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__data_o;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m1;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m2;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m3;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m4;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m5;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m6;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m7;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m8;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p1;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p2;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p3;
        CData/*3:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__aux_data;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__data_o;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m1;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m2;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m3;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m4;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m5;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m6;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m7;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m8;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p1;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p2;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p3;
        CData/*3:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__aux_data;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__data_o;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m1;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m2;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m3;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m4;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m5;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m6;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m7;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m8;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p1;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p2;
        CData/*7:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p3;
        SData/*15:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BAL0__DOT__byte_o_r_s;
    };
    struct {
        SData/*15:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__BAL1__DOT__byte_o_r_s;
        SData/*15:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__wordcount_r;
        SData/*15:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__c;
        SData/*15:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__c_calk;
        SData/*10:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterX;
        SData/*10:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterY;
        SData/*9:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_red;
        SData/*9:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_green;
        SData/*9:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_blue;
        SData/*9:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out1;
        SData/*8:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m;
        SData/*9:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out1;
        SData/*8:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m;
        SData/*9:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out1;
        SData/*8:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m;
        IData/*18:0*/ ulx3s_pass_through_sim__DOT__addr_write;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__ramdata;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__color_w;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__timer_tou;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__timer_term;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__timer_hs;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__out_r;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__out_r_old;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__counter;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__data_r;
        IData/*23:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__correction;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__regheader_correct;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__counter;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__count_val;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__data_o_r;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__counter_addr;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__cX_r;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__cY_r;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__DPR__DOT__data_b;
        IData/*20:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__addr_r;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt_old;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt0;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt1;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt2;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt3;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt_old;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt0;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt1;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt2;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt3;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt_old;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt0;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt1;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt2;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt3;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__DPR__DOT__ram[76800];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__debug2__out__out8;
        CData/*0:0*/ ulx3s_pass_through_sim__DOT__debug3__out__out9;
        CData/*1:0*/ ulx3s_pass_through_sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__0__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__0__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__1__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__1__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__2__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__2__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__3__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__3__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__4__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__4__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__5__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__5__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__6__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__6__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__7__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__7__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__8__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__8__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__9__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__9__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__10__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__10__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__11__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__11__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__12__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__12__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__13__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__13__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__14__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__14__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__15__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__15__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__16__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__16__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__17__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__17__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__18__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__18__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__19__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__19__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__20__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__20__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__21__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__21__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__22__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__22__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__23__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__23__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__24__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__24__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__25__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__25__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__26__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__26__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__27__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__27__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__28__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__28__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__29__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__29__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__30__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__30__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__31__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__31__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__32__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__32__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__33__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__33__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__34__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__34__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__35__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__35__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__36__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__36__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__37__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__37__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__38__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__38__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__39__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__39__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__40__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__40__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__41__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__41__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__42__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__42__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__43__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__43__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__44__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__44__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__45__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__45__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__46__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N0__46__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__47__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__N1__47__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__48__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__48__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__49__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__49__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__50__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__50__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__51__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__51__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__52__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__52__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__53__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__53__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__54__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__54__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__55__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__55__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__56__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__56__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__57__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__57__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__58__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__58__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__59__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__59__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__60__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__60__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__61__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__61__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__62__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__62__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__63__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__63__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__64__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__64__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__65__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__65__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__66__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__66__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__67__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__67__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__68__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__68__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__69__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__69__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__70__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__70__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__71__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__71__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__72__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__72__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__73__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__73__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__74__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__74__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__75__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__75__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__76__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__76__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__77__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__77__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__78__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__78__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__79__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__79__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__80__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__80__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__81__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__81__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__82__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__82__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__83__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__83__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__84__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__84__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__85__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__85__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__86__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__86__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__87__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__87__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__88__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__88__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__89__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__89__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__90__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__90__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__91__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__91__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__92__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__92__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__93__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__93__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__94__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N0__94__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__95__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__N1__95__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__96__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__96__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__97__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__97__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__98__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__98__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__99__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__99__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__100__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__100__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__101__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__101__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__102__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__102__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__103__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__103__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__104__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__104__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__105__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__105__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__106__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__106__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__107__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__107__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__108__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__108__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__109__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__109__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__110__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__110__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__111__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__111__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__112__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__112__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__113__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__113__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__114__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__114__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__115__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__115__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__116__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__116__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__117__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__117__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__118__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__118__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__119__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__119__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__120__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__120__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__121__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__121__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__122__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__122__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__123__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__123__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__124__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__124__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__125__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__125__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__126__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__126__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__127__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__127__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__128__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__128__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__129__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__129__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__130__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__130__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__131__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__131__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__132__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__132__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__133__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__133__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__134__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__134__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__135__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__135__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__136__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__136__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__137__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__137__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__138__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__138__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__139__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__139__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__140__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__140__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__141__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__141__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__142__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N0__142__data;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__143__Vfuncout;
        CData/*7:0*/ __Vfunc_ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__N1__143__data;
        CData/*7:0*/ __Vdly__ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__state_mipi;
        CData/*7:0*/ __Vdly__ulx3s_pass_through_sim__DOT__mipi__DOT__BAL0__DOT__byte_o_r;
        CData/*7:0*/ __Vdly__ulx3s_pass_through_sim__DOT__mipi__DOT__BAL1__DOT__byte_o_r;
        CData/*5:0*/ __Vdly__ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__type_o_r;
        CData/*0:0*/ __VinpClk__TOP__ulx3s_pass_through_sim__DOT__mipi__DOT__SYNC__DOT__eclki_r2;
        CData/*0:0*/ __Vclklast__TOP__pixclk;
        CData/*0:0*/ __Vclklast__TOP__clk250;
        CData/*0:0*/ __Vclklast__TOP__sys_clk;
        CData/*0:0*/ __Vclklast__TOP__cam0_clk;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ulx3s_pass_through_sim__DOT__mipi__DOT__SYNC__DOT__eclki_r2;
        CData/*0:0*/ __Vclklast__TOP__ulx3s_pass_through_sim__DOT__mipi__DOT__sync_mipi_clk_2;
        CData/*0:0*/ __Vclklast__TOP__ulx3s_pass_through_sim__DOT__mipi__DOT__sync_mipi_clk_4;
        CData/*0:0*/ __Vclklast__TOP__ulx3s_pass_through_sim__DOT__mipi__DOT__sync_mipi_clk_8;
        CData/*0:0*/ __Vchglast__TOP__ulx3s_pass_through_sim__DOT__mipi__DOT__SYNC__DOT__eclki_r2;
        SData/*15:0*/ __Vdly__ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__wordcount_r;
        IData/*31:0*/ ulx3s_pass_through_sim__DOT__DPR__DOT____Vlvbound1;
        IData/*31:0*/ __Vdly__ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__timer_tou;
        IData/*31:0*/ __Vdly__ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__timer_term;
        IData/*31:0*/ __Vdly__ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__timer_hs;
        IData/*31:0*/ __Vdly__ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__out_r;
        IData/*31:0*/ __Vdly__ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__counter;
        CData/*0:0*/ __Vm_traceActivity[13];
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vulx3s_pass_through_sim__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vulx3s_pass_through_sim);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vulx3s_pass_through_sim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vulx3s_pass_through_sim();
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
    static void _eval_initial_loop(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vulx3s_pass_through_sim__Syms* symsp, bool first);
  private:
    static QData _change_request(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__9(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__14(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__19(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__20(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__21(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__22(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__10(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vulx3s_pass_through_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
