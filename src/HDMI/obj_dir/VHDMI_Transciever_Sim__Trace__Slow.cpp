// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHDMI_Transciever_Sim__Syms.h"


//======================

void VHDMI_Transciever_Sim::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VHDMI_Transciever_Sim::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VHDMI_Transciever_Sim__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever_Sim__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VHDMI_Transciever_Sim::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VHDMI_Transciever_Sim::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever_Sim__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever_Sim__Syms*>(userp);
    VHDMI_Transciever_Sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VHDMI_Transciever_Sim::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever_Sim__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever_Sim__Syms*>(userp);
    VHDMI_Transciever_Sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+99,"pixclk", false,-1);
        tracep->declBit(c+100,"clk_high", false,-1);
        tracep->declBit(c+101,"reset", false,-1);
        tracep->declBus(c+102,"TMDSd", false,-1, 3,0);
        tracep->declBit(c+99,"HDMI_Transciever_Sim pixclk", false,-1);
        tracep->declBit(c+100,"HDMI_Transciever_Sim clk_high", false,-1);
        tracep->declBit(c+101,"HDMI_Transciever_Sim reset", false,-1);
        tracep->declBus(c+102,"HDMI_Transciever_Sim TMDSd", false,-1, 3,0);
        tracep->declBit(c+99,"HDMI_Transciever_Sim clk_low", false,-1);
        tracep->declBus(c+37,"HDMI_Transciever_Sim blue", false,-1, 7,0);
        tracep->declBus(c+38,"HDMI_Transciever_Sim green", false,-1, 7,0);
        tracep->declBus(c+39,"HDMI_Transciever_Sim red", false,-1, 7,0);
        tracep->declBus(c+40,"HDMI_Transciever_Sim addr", false,-1, 20,0);
        tracep->declBus(c+108,"HDMI_Transciever_Sim HDMI h_pixel", false,-1, 31,0);
        tracep->declBus(c+109,"HDMI_Transciever_Sim HDMI h_front_porch", false,-1, 31,0);
        tracep->declBus(c+110,"HDMI_Transciever_Sim HDMI h_back_porch", false,-1, 31,0);
        tracep->declBus(c+111,"HDMI_Transciever_Sim HDMI h_tot_pixel", false,-1, 31,0);
        tracep->declBus(c+112,"HDMI_Transciever_Sim HDMI v_pixel", false,-1, 31,0);
        tracep->declBus(c+113,"HDMI_Transciever_Sim HDMI v_front_porch", false,-1, 31,0);
        tracep->declBus(c+114,"HDMI_Transciever_Sim HDMI v_back_porch", false,-1, 31,0);
        tracep->declBus(c+115,"HDMI_Transciever_Sim HDMI v_tot_pixel", false,-1, 31,0);
        tracep->declBit(c+99,"HDMI_Transciever_Sim HDMI clk_low", false,-1);
        tracep->declBit(c+100,"HDMI_Transciever_Sim HDMI clk_high", false,-1);
        tracep->declBit(c+101,"HDMI_Transciever_Sim HDMI reset", false,-1);
        tracep->declBus(c+39,"HDMI_Transciever_Sim HDMI red", false,-1, 7,0);
        tracep->declBus(c+38,"HDMI_Transciever_Sim HDMI green", false,-1, 7,0);
        tracep->declBus(c+37,"HDMI_Transciever_Sim HDMI blue", false,-1, 7,0);
        tracep->declBus(c+40,"HDMI_Transciever_Sim HDMI addr", false,-1, 20,0);
        tracep->declBus(c+102,"HDMI_Transciever_Sim HDMI TMDSd", false,-1, 3,0);
        tracep->declBus(c+41,"HDMI_Transciever_Sim HDMI CounterX", false,-1, 10,0);
        tracep->declBus(c+42,"HDMI_Transciever_Sim HDMI CounterY", false,-1, 10,0);
        tracep->declBit(c+43,"HDMI_Transciever_Sim HDMI hSync", false,-1);
        tracep->declBit(c+44,"HDMI_Transciever_Sim HDMI vSync", false,-1);
        tracep->declBus(c+45,"HDMI_Transciever_Sim HDMI DrawArea", false,-1, 1,0);
        tracep->declBus(c+40,"HDMI_Transciever_Sim HDMI addr_r", false,-1, 20,0);
        tracep->declBus(c+46,"HDMI_Transciever_Sim HDMI TMDS_red", false,-1, 9,0);
        tracep->declBus(c+47,"HDMI_Transciever_Sim HDMI TMDS_green", false,-1, 9,0);
        tracep->declBus(c+48,"HDMI_Transciever_Sim HDMI TMDS_blue", false,-1, 9,0);
        tracep->declBit(c+34,"HDMI_Transciever_Sim HDMI TMDS_r", false,-1);
        tracep->declBit(c+35,"HDMI_Transciever_Sim HDMI TMDS_b", false,-1);
        tracep->declBit(c+36,"HDMI_Transciever_Sim HDMI TMDS_g", false,-1);
        tracep->declBus(c+103,"HDMI_Transciever_Sim HDMI TMDS_mod10", false,-1, 3,0);
        tracep->declBus(c+90,"HDMI_Transciever_Sim HDMI TMDS_shift_red", false,-1, 9,0);
        tracep->declBus(c+91,"HDMI_Transciever_Sim HDMI TMDS_shift_green", false,-1, 9,0);
        tracep->declBus(c+92,"HDMI_Transciever_Sim HDMI TMDS_shift_blue", false,-1, 9,0);
        tracep->declBit(c+104,"HDMI_Transciever_Sim HDMI TMDS_shift_load", false,-1);
        tracep->declBus(c+49,"HDMI_Transciever_Sim HDMI red_bay", false,-1, 7,0);
        tracep->declBus(c+50,"HDMI_Transciever_Sim HDMI green_bay", false,-1, 7,0);
        tracep->declBus(c+51,"HDMI_Transciever_Sim HDMI blue_bay", false,-1, 7,0);
        tracep->declBit(c+93,"HDMI_Transciever_Sim HDMI ddr_r D0", false,-1);
        tracep->declBit(c+94,"HDMI_Transciever_Sim HDMI ddr_r D1", false,-1);
        tracep->declBit(c+100,"HDMI_Transciever_Sim HDMI ddr_r SCLK", false,-1);
        tracep->declBit(c+34,"HDMI_Transciever_Sim HDMI ddr_r Q", false,-1);
        tracep->declBit(c+95,"HDMI_Transciever_Sim HDMI ddr_g D0", false,-1);
        tracep->declBit(c+96,"HDMI_Transciever_Sim HDMI ddr_g D1", false,-1);
        tracep->declBit(c+100,"HDMI_Transciever_Sim HDMI ddr_g SCLK", false,-1);
        tracep->declBit(c+36,"HDMI_Transciever_Sim HDMI ddr_g Q", false,-1);
        tracep->declBit(c+97,"HDMI_Transciever_Sim HDMI ddr_b D0", false,-1);
        tracep->declBit(c+98,"HDMI_Transciever_Sim HDMI ddr_b D1", false,-1);
        tracep->declBit(c+100,"HDMI_Transciever_Sim HDMI ddr_b SCLK", false,-1);
        tracep->declBit(c+35,"HDMI_Transciever_Sim HDMI ddr_b Q", false,-1);
        tracep->declBit(c+99,"HDMI_Transciever_Sim HDMI encoder0 clklow", false,-1);
        tracep->declBit(c+101,"HDMI_Transciever_Sim HDMI encoder0 reset", false,-1);
        tracep->declBus(c+45,"HDMI_Transciever_Sim HDMI encoder0 state", false,-1, 1,0);
        tracep->declBus(c+37,"HDMI_Transciever_Sim HDMI encoder0 pix_data", false,-1, 7,0);
        tracep->declBus(c+52,"HDMI_Transciever_Sim HDMI encoder0 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+116,"HDMI_Transciever_Sim HDMI encoder0 aux_data", false,-1, 3,0);
        tracep->declBit(c+117,"HDMI_Transciever_Sim HDMI encoder0 data_o", false,-1);
        tracep->declBus(c+48,"HDMI_Transciever_Sim HDMI encoder0 q_out", false,-1, 9,0);
        tracep->declBus(c+48,"HDMI_Transciever_Sim HDMI encoder0 q_out1", false,-1, 9,0);
        tracep->declBus(c+53,"HDMI_Transciever_Sim HDMI encoder0 cnt_old", false,-1, 31,0);
        tracep->declBus(c+1,"HDMI_Transciever_Sim HDMI encoder0 N1qm", false,-1, 7,0);
        tracep->declBus(c+2,"HDMI_Transciever_Sim HDMI encoder0 N0qm", false,-1, 7,0);
        tracep->declBus(c+54,"HDMI_Transciever_Sim HDMI encoder0 N1pd", false,-1, 7,0);
        tracep->declBus(c+55,"HDMI_Transciever_Sim HDMI encoder0 N0pd", false,-1, 7,0);
        tracep->declBus(c+3,"HDMI_Transciever_Sim HDMI encoder0 q_m", false,-1, 8,0);
        tracep->declBit(c+56,"HDMI_Transciever_Sim HDMI encoder0 q_m0", false,-1);
        tracep->declBit(c+57,"HDMI_Transciever_Sim HDMI encoder0 q_m1", false,-1);
        tracep->declBit(c+58,"HDMI_Transciever_Sim HDMI encoder0 q_m2", false,-1);
        tracep->declBit(c+59,"HDMI_Transciever_Sim HDMI encoder0 q_m3", false,-1);
        tracep->declBit(c+60,"HDMI_Transciever_Sim HDMI encoder0 q_m4", false,-1);
        tracep->declBit(c+61,"HDMI_Transciever_Sim HDMI encoder0 q_m5", false,-1);
        tracep->declBit(c+62,"HDMI_Transciever_Sim HDMI encoder0 q_m6", false,-1);
        tracep->declBit(c+63,"HDMI_Transciever_Sim HDMI encoder0 q_m7", false,-1);
        tracep->declBit(c+64,"HDMI_Transciever_Sim HDMI encoder0 q_m8", false,-1);
        tracep->declBit(c+4,"HDMI_Transciever_Sim HDMI encoder0 q_out2p1", false,-1);
        tracep->declBit(c+5,"HDMI_Transciever_Sim HDMI encoder0 q_out2p2", false,-1);
        tracep->declBus(c+6,"HDMI_Transciever_Sim HDMI encoder0 q_out2p3", false,-1, 7,0);
        tracep->declBus(c+105,"HDMI_Transciever_Sim HDMI encoder0 q_out2", false,-1, 9,0);
        tracep->declBus(c+7,"HDMI_Transciever_Sim HDMI encoder0 cnt0", false,-1, 31,0);
        tracep->declBus(c+8,"HDMI_Transciever_Sim HDMI encoder0 cnt1", false,-1, 31,0);
        tracep->declBus(c+9,"HDMI_Transciever_Sim HDMI encoder0 cnt2", false,-1, 31,0);
        tracep->declBus(c+10,"HDMI_Transciever_Sim HDMI encoder0 cnt3", false,-1, 31,0);
        tracep->declBus(c+11,"HDMI_Transciever_Sim HDMI encoder0 cnt", false,-1, 31,0);
        tracep->declBus(c+65,"HDMI_Transciever_Sim HDMI encoder0 tmds_cnt", false,-1, 10,0);
        tracep->declBit(c+99,"HDMI_Transciever_Sim HDMI encoder1 clklow", false,-1);
        tracep->declBit(c+101,"HDMI_Transciever_Sim HDMI encoder1 reset", false,-1);
        tracep->declBus(c+45,"HDMI_Transciever_Sim HDMI encoder1 state", false,-1, 1,0);
        tracep->declBus(c+38,"HDMI_Transciever_Sim HDMI encoder1 pix_data", false,-1, 7,0);
        tracep->declBus(c+118,"HDMI_Transciever_Sim HDMI encoder1 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+119,"HDMI_Transciever_Sim HDMI encoder1 aux_data", false,-1, 3,0);
        tracep->declBit(c+120,"HDMI_Transciever_Sim HDMI encoder1 data_o", false,-1);
        tracep->declBus(c+47,"HDMI_Transciever_Sim HDMI encoder1 q_out", false,-1, 9,0);
        tracep->declBus(c+47,"HDMI_Transciever_Sim HDMI encoder1 q_out1", false,-1, 9,0);
        tracep->declBus(c+66,"HDMI_Transciever_Sim HDMI encoder1 cnt_old", false,-1, 31,0);
        tracep->declBus(c+12,"HDMI_Transciever_Sim HDMI encoder1 N1qm", false,-1, 7,0);
        tracep->declBus(c+13,"HDMI_Transciever_Sim HDMI encoder1 N0qm", false,-1, 7,0);
        tracep->declBus(c+67,"HDMI_Transciever_Sim HDMI encoder1 N1pd", false,-1, 7,0);
        tracep->declBus(c+68,"HDMI_Transciever_Sim HDMI encoder1 N0pd", false,-1, 7,0);
        tracep->declBus(c+14,"HDMI_Transciever_Sim HDMI encoder1 q_m", false,-1, 8,0);
        tracep->declBit(c+69,"HDMI_Transciever_Sim HDMI encoder1 q_m0", false,-1);
        tracep->declBit(c+70,"HDMI_Transciever_Sim HDMI encoder1 q_m1", false,-1);
        tracep->declBit(c+71,"HDMI_Transciever_Sim HDMI encoder1 q_m2", false,-1);
        tracep->declBit(c+72,"HDMI_Transciever_Sim HDMI encoder1 q_m3", false,-1);
        tracep->declBit(c+73,"HDMI_Transciever_Sim HDMI encoder1 q_m4", false,-1);
        tracep->declBit(c+74,"HDMI_Transciever_Sim HDMI encoder1 q_m5", false,-1);
        tracep->declBit(c+75,"HDMI_Transciever_Sim HDMI encoder1 q_m6", false,-1);
        tracep->declBit(c+76,"HDMI_Transciever_Sim HDMI encoder1 q_m7", false,-1);
        tracep->declBit(c+77,"HDMI_Transciever_Sim HDMI encoder1 q_m8", false,-1);
        tracep->declBit(c+15,"HDMI_Transciever_Sim HDMI encoder1 q_out2p1", false,-1);
        tracep->declBit(c+16,"HDMI_Transciever_Sim HDMI encoder1 q_out2p2", false,-1);
        tracep->declBus(c+17,"HDMI_Transciever_Sim HDMI encoder1 q_out2p3", false,-1, 7,0);
        tracep->declBus(c+106,"HDMI_Transciever_Sim HDMI encoder1 q_out2", false,-1, 9,0);
        tracep->declBus(c+18,"HDMI_Transciever_Sim HDMI encoder1 cnt0", false,-1, 31,0);
        tracep->declBus(c+19,"HDMI_Transciever_Sim HDMI encoder1 cnt1", false,-1, 31,0);
        tracep->declBus(c+20,"HDMI_Transciever_Sim HDMI encoder1 cnt2", false,-1, 31,0);
        tracep->declBus(c+21,"HDMI_Transciever_Sim HDMI encoder1 cnt3", false,-1, 31,0);
        tracep->declBus(c+22,"HDMI_Transciever_Sim HDMI encoder1 cnt", false,-1, 31,0);
        tracep->declBus(c+121,"HDMI_Transciever_Sim HDMI encoder1 tmds_cnt", false,-1, 10,0);
        tracep->declBit(c+99,"HDMI_Transciever_Sim HDMI encoder2 clklow", false,-1);
        tracep->declBit(c+101,"HDMI_Transciever_Sim HDMI encoder2 reset", false,-1);
        tracep->declBus(c+45,"HDMI_Transciever_Sim HDMI encoder2 state", false,-1, 1,0);
        tracep->declBus(c+39,"HDMI_Transciever_Sim HDMI encoder2 pix_data", false,-1, 7,0);
        tracep->declBus(c+118,"HDMI_Transciever_Sim HDMI encoder2 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+122,"HDMI_Transciever_Sim HDMI encoder2 aux_data", false,-1, 3,0);
        tracep->declBit(c+123,"HDMI_Transciever_Sim HDMI encoder2 data_o", false,-1);
        tracep->declBus(c+46,"HDMI_Transciever_Sim HDMI encoder2 q_out", false,-1, 9,0);
        tracep->declBus(c+46,"HDMI_Transciever_Sim HDMI encoder2 q_out1", false,-1, 9,0);
        tracep->declBus(c+78,"HDMI_Transciever_Sim HDMI encoder2 cnt_old", false,-1, 31,0);
        tracep->declBus(c+23,"HDMI_Transciever_Sim HDMI encoder2 N1qm", false,-1, 7,0);
        tracep->declBus(c+24,"HDMI_Transciever_Sim HDMI encoder2 N0qm", false,-1, 7,0);
        tracep->declBus(c+79,"HDMI_Transciever_Sim HDMI encoder2 N1pd", false,-1, 7,0);
        tracep->declBus(c+80,"HDMI_Transciever_Sim HDMI encoder2 N0pd", false,-1, 7,0);
        tracep->declBus(c+25,"HDMI_Transciever_Sim HDMI encoder2 q_m", false,-1, 8,0);
        tracep->declBit(c+81,"HDMI_Transciever_Sim HDMI encoder2 q_m0", false,-1);
        tracep->declBit(c+82,"HDMI_Transciever_Sim HDMI encoder2 q_m1", false,-1);
        tracep->declBit(c+83,"HDMI_Transciever_Sim HDMI encoder2 q_m2", false,-1);
        tracep->declBit(c+84,"HDMI_Transciever_Sim HDMI encoder2 q_m3", false,-1);
        tracep->declBit(c+85,"HDMI_Transciever_Sim HDMI encoder2 q_m4", false,-1);
        tracep->declBit(c+86,"HDMI_Transciever_Sim HDMI encoder2 q_m5", false,-1);
        tracep->declBit(c+87,"HDMI_Transciever_Sim HDMI encoder2 q_m6", false,-1);
        tracep->declBit(c+88,"HDMI_Transciever_Sim HDMI encoder2 q_m7", false,-1);
        tracep->declBit(c+89,"HDMI_Transciever_Sim HDMI encoder2 q_m8", false,-1);
        tracep->declBit(c+26,"HDMI_Transciever_Sim HDMI encoder2 q_out2p1", false,-1);
        tracep->declBit(c+27,"HDMI_Transciever_Sim HDMI encoder2 q_out2p2", false,-1);
        tracep->declBus(c+28,"HDMI_Transciever_Sim HDMI encoder2 q_out2p3", false,-1, 7,0);
        tracep->declBus(c+107,"HDMI_Transciever_Sim HDMI encoder2 q_out2", false,-1, 9,0);
        tracep->declBus(c+29,"HDMI_Transciever_Sim HDMI encoder2 cnt0", false,-1, 31,0);
        tracep->declBus(c+30,"HDMI_Transciever_Sim HDMI encoder2 cnt1", false,-1, 31,0);
        tracep->declBus(c+31,"HDMI_Transciever_Sim HDMI encoder2 cnt2", false,-1, 31,0);
        tracep->declBus(c+32,"HDMI_Transciever_Sim HDMI encoder2 cnt3", false,-1, 31,0);
        tracep->declBus(c+33,"HDMI_Transciever_Sim HDMI encoder2 cnt", false,-1, 31,0);
        tracep->declBus(c+121,"HDMI_Transciever_Sim HDMI encoder2 tmds_cnt", false,-1, 10,0);
    }
}

void VHDMI_Transciever_Sim::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VHDMI_Transciever_Sim::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever_Sim__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever_Sim__Syms*>(userp);
    VHDMI_Transciever_Sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VHDMI_Transciever_Sim::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever_Sim__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever_Sim__Syms*>(userp);
    VHDMI_Transciever_Sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,((0xffU & ((((((((1U 
                                                   & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m)) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 1U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                     >> 2U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 3U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                     >> 4U))) 
                                              + (1U 
                                                 & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                    >> 5U))) 
                                             + (1U 
                                                & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                   >> 6U))) 
                                            + (1U & 
                                               ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                >> 7U))))),8);
        tracep->fullCData(oldp+2,((0xffU & ((((((((1U 
                                                   & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 1U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 2U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 3U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 4U)))) 
                                              + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                     >> 5U)))) 
                                             + (1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                    >> 6U)))) 
                                            + (1U & 
                                               (~ ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                   >> 7U)))))),8);
        tracep->fullSData(oldp+3,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m),9);
        tracep->fullBit(oldp+4,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p1));
        tracep->fullBit(oldp+5,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p2));
        tracep->fullCData(oldp+6,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p3),8);
        tracep->fullIData(oldp+7,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt0),32);
        tracep->fullIData(oldp+8,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt1),32);
        tracep->fullIData(oldp+9,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt2),32);
        tracep->fullIData(oldp+10,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt3),32);
        tracep->fullIData(oldp+11,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt),32);
        tracep->fullCData(oldp+12,((0xffU & (((((((
                                                   (1U 
                                                    & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 1U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 2U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                     >> 3U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 4U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                     >> 5U))) 
                                              + (1U 
                                                 & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                    >> 6U))) 
                                             + (1U 
                                                & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                   >> 7U))))),8);
        tracep->fullCData(oldp+13,((0xffU & (((((((
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                        >> 1U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 2U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 3U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 4U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 5U)))) 
                                              + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                     >> 6U)))) 
                                             + (1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                    >> 7U)))))),8);
        tracep->fullSData(oldp+14,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m),9);
        tracep->fullBit(oldp+15,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p1));
        tracep->fullBit(oldp+16,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p2));
        tracep->fullCData(oldp+17,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p3),8);
        tracep->fullIData(oldp+18,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt0),32);
        tracep->fullIData(oldp+19,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt1),32);
        tracep->fullIData(oldp+20,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt2),32);
        tracep->fullIData(oldp+21,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt3),32);
        tracep->fullIData(oldp+22,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt),32);
        tracep->fullCData(oldp+23,((0xffU & (((((((
                                                   (1U 
                                                    & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 1U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 2U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                     >> 3U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 4U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                     >> 5U))) 
                                              + (1U 
                                                 & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                    >> 6U))) 
                                             + (1U 
                                                & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                   >> 7U))))),8);
        tracep->fullCData(oldp+24,((0xffU & (((((((
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                        >> 1U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 2U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 3U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 4U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 5U)))) 
                                              + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                     >> 6U)))) 
                                             + (1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                    >> 7U)))))),8);
        tracep->fullSData(oldp+25,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m),9);
        tracep->fullBit(oldp+26,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p1));
        tracep->fullBit(oldp+27,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p2));
        tracep->fullCData(oldp+28,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p3),8);
        tracep->fullIData(oldp+29,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt0),32);
        tracep->fullIData(oldp+30,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt1),32);
        tracep->fullIData(oldp+31,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt2),32);
        tracep->fullIData(oldp+32,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt3),32);
        tracep->fullIData(oldp+33,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt),32);
        tracep->fullBit(oldp+34,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_r));
        tracep->fullBit(oldp+35,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_b));
        tracep->fullBit(oldp+36,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_g));
        tracep->fullCData(oldp+37,(vlTOPp->HDMI_Transciever_Sim__DOT__blue),8);
        tracep->fullCData(oldp+38,(vlTOPp->HDMI_Transciever_Sim__DOT__green),8);
        tracep->fullCData(oldp+39,(vlTOPp->HDMI_Transciever_Sim__DOT__red),8);
        tracep->fullIData(oldp+40,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__addr_r),21);
        tracep->fullSData(oldp+41,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX),11);
        tracep->fullSData(oldp+42,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterY),11);
        tracep->fullBit(oldp+43,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__hSync));
        tracep->fullBit(oldp+44,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__vSync));
        tracep->fullCData(oldp+45,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__DrawArea),2);
        tracep->fullSData(oldp+46,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out1),10);
        tracep->fullSData(oldp+47,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out1),10);
        tracep->fullSData(oldp+48,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out1),10);
        tracep->fullCData(oldp+49,(((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterY))
                                     ? 0U : ((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX))
                                              ? (0xffU 
                                                 & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red))
                                              : 0U))),8);
        tracep->fullCData(oldp+50,((0xffU & ((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterY))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX))
                                                  ? (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green)
                                                  : 0U)
                                              : ((1U 
                                                  & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX))
                                                  ? 0U
                                                  : (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green))))),8);
        tracep->fullCData(oldp+51,(((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterY))
                                     ? ((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX))
                                         ? 0U : (0xffU 
                                                 & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue)))
                                     : 0U)),8);
        tracep->fullCData(oldp+52,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr),2);
        tracep->fullIData(oldp+53,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt_old),32);
        tracep->fullCData(oldp+54,((0xffU & (((((((
                                                   (1U 
                                                    & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                       >> 1U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                      >> 2U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                     >> 3U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                      >> 4U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                     >> 5U))) 
                                              + (1U 
                                                 & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                    >> 6U))) 
                                             + (1U 
                                                & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                   >> 7U))))),8);
        tracep->fullCData(oldp+55,((0xffU & (((((((
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                        >> 1U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                       >> 2U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                      >> 3U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                       >> 4U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                      >> 5U)))) 
                                              + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                     >> 6U)))) 
                                             + (1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                    >> 7U)))))),8);
        tracep->fullBit(oldp+56,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue))));
        tracep->fullBit(oldp+57,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m1));
        tracep->fullBit(oldp+58,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m2));
        tracep->fullBit(oldp+59,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m3));
        tracep->fullBit(oldp+60,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m4));
        tracep->fullBit(oldp+61,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m5));
        tracep->fullBit(oldp+62,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m6));
        tracep->fullBit(oldp+63,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m7));
        tracep->fullBit(oldp+64,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m8));
        tracep->fullSData(oldp+65,(((2U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                     ? ((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                         ? 0x2abU : 0x154U)
                                     : ((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                         ? 0xabU : 0x354U))),11);
        tracep->fullIData(oldp+66,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt_old),32);
        tracep->fullCData(oldp+67,((0xffU & (((((((
                                                   (1U 
                                                    & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                       >> 1U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                      >> 2U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                     >> 3U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                      >> 4U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                     >> 5U))) 
                                              + (1U 
                                                 & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                    >> 6U))) 
                                             + (1U 
                                                & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                   >> 7U))))),8);
        tracep->fullCData(oldp+68,((0xffU & (((((((
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                        >> 1U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                       >> 2U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                      >> 3U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                       >> 4U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                      >> 5U)))) 
                                              + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                     >> 6U)))) 
                                             + (1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                    >> 7U)))))),8);
        tracep->fullBit(oldp+69,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green))));
        tracep->fullBit(oldp+70,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m1));
        tracep->fullBit(oldp+71,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m2));
        tracep->fullBit(oldp+72,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m3));
        tracep->fullBit(oldp+73,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m4));
        tracep->fullBit(oldp+74,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m5));
        tracep->fullBit(oldp+75,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m6));
        tracep->fullBit(oldp+76,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m7));
        tracep->fullBit(oldp+77,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m8));
        tracep->fullIData(oldp+78,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt_old),32);
        tracep->fullCData(oldp+79,((0xffU & (((((((
                                                   (1U 
                                                    & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                       >> 1U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                      >> 2U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                     >> 3U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                      >> 4U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                     >> 5U))) 
                                              + (1U 
                                                 & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                    >> 6U))) 
                                             + (1U 
                                                & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                   >> 7U))))),8);
        tracep->fullCData(oldp+80,((0xffU & (((((((
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                        >> 1U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                       >> 2U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                      >> 3U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                       >> 4U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                      >> 5U)))) 
                                              + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                     >> 6U)))) 
                                             + (1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                    >> 7U)))))),8);
        tracep->fullBit(oldp+81,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red))));
        tracep->fullBit(oldp+82,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m1));
        tracep->fullBit(oldp+83,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m2));
        tracep->fullBit(oldp+84,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m3));
        tracep->fullBit(oldp+85,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m4));
        tracep->fullBit(oldp+86,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m5));
        tracep->fullBit(oldp+87,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m6));
        tracep->fullBit(oldp+88,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m7));
        tracep->fullBit(oldp+89,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m8));
        tracep->fullSData(oldp+90,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_red),10);
        tracep->fullSData(oldp+91,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_green),10);
        tracep->fullSData(oldp+92,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_blue),10);
        tracep->fullBit(oldp+93,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_red))));
        tracep->fullBit(oldp+94,((1U & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_red) 
                                        >> 1U))));
        tracep->fullBit(oldp+95,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_green))));
        tracep->fullBit(oldp+96,((1U & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_green) 
                                        >> 1U))));
        tracep->fullBit(oldp+97,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_blue))));
        tracep->fullBit(oldp+98,((1U & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_blue) 
                                        >> 1U))));
        tracep->fullBit(oldp+99,(vlTOPp->pixclk));
        tracep->fullBit(oldp+100,(vlTOPp->clk_high));
        tracep->fullBit(oldp+101,(vlTOPp->reset));
        tracep->fullCData(oldp+102,(vlTOPp->TMDSd),4);
        tracep->fullCData(oldp+103,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_mod10),4);
        tracep->fullBit(oldp+104,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_load));
        tracep->fullSData(oldp+105,(((IData)(vlTOPp->reset)
                                      ? 0U : (0x3ffU 
                                              & (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p1) 
                                                  << 9U) 
                                                 | (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p2) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p3)))))),10);
        tracep->fullSData(oldp+106,(((IData)(vlTOPp->reset)
                                      ? 0U : (0x3ffU 
                                              & (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p1) 
                                                  << 9U) 
                                                 | (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p2) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p3)))))),10);
        tracep->fullSData(oldp+107,(((IData)(vlTOPp->reset)
                                      ? 0U : (0x3ffU 
                                              & (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p1) 
                                                  << 9U) 
                                                 | (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p2) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p3)))))),10);
        tracep->fullIData(oldp+108,(0x500U),32);
        tracep->fullIData(oldp+109,(0x6eU),32);
        tracep->fullIData(oldp+110,(0xdcU),32);
        tracep->fullIData(oldp+111,(0x672U),32);
        tracep->fullIData(oldp+112,(0x2d0U),32);
        tracep->fullIData(oldp+113,(5U),32);
        tracep->fullIData(oldp+114,(0x14U),32);
        tracep->fullIData(oldp+115,(0x2eeU),32);
        tracep->fullCData(oldp+116,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__aux_data),4);
        tracep->fullBit(oldp+117,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__data_o));
        tracep->fullCData(oldp+118,(0U),2);
        tracep->fullCData(oldp+119,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__aux_data),4);
        tracep->fullBit(oldp+120,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__data_o));
        tracep->fullSData(oldp+121,(0x354U),11);
        tracep->fullCData(oldp+122,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__aux_data),4);
        tracep->fullBit(oldp+123,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__data_o));
    }
}
