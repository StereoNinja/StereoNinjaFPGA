// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHDMI_Transciever__Syms.h"


//======================

void VHDMI_Transciever::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VHDMI_Transciever::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VHDMI_Transciever::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VHDMI_Transciever::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VHDMI_Transciever::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+80,"clk_low", false,-1);
        tracep->declBit(c+81,"clk_high", false,-1);
        tracep->declBit(c+82,"reset", false,-1);
        tracep->declBit(c+83,"red", false,-1);
        tracep->declBit(c+84,"green", false,-1);
        tracep->declBit(c+85,"blue", false,-1);
        tracep->declBit(c+86,"clock", false,-1);
        tracep->declBus(c+87,"ram_addr", false,-1, 25,0);
        tracep->declBus(c+88,"ram_green", false,-1, 7,0);
        tracep->declBus(c+89,"ram_blue", false,-1, 7,0);
        tracep->declBus(c+90,"ram_red", false,-1, 7,0);
        tracep->declBus(c+91,"blue_r", false,-1, 9,0);
        tracep->declBus(c+92,"green_r", false,-1, 9,0);
        tracep->declBus(c+93,"red_r", false,-1, 9,0);
        tracep->declBit(c+80,"HDMI_Transciever clk_low", false,-1);
        tracep->declBit(c+81,"HDMI_Transciever clk_high", false,-1);
        tracep->declBit(c+82,"HDMI_Transciever reset", false,-1);
        tracep->declBit(c+83,"HDMI_Transciever red", false,-1);
        tracep->declBit(c+84,"HDMI_Transciever green", false,-1);
        tracep->declBit(c+85,"HDMI_Transciever blue", false,-1);
        tracep->declBit(c+86,"HDMI_Transciever clock", false,-1);
        tracep->declBus(c+87,"HDMI_Transciever ram_addr", false,-1, 25,0);
        tracep->declBus(c+88,"HDMI_Transciever ram_green", false,-1, 7,0);
        tracep->declBus(c+89,"HDMI_Transciever ram_blue", false,-1, 7,0);
        tracep->declBus(c+90,"HDMI_Transciever ram_red", false,-1, 7,0);
        tracep->declBus(c+91,"HDMI_Transciever blue_r", false,-1, 9,0);
        tracep->declBus(c+92,"HDMI_Transciever green_r", false,-1, 9,0);
        tracep->declBus(c+93,"HDMI_Transciever red_r", false,-1, 9,0);
        tracep->declBit(c+80,"HDMI_Transciever hdmi pixclk", false,-1);
        tracep->declBit(c+81,"HDMI_Transciever hdmi clk_TMDS", false,-1);
        tracep->declBus(c+94,"HDMI_Transciever hdmi TMDSd", false,-1, 3,0);
        tracep->declBus(c+96,"HDMI_Transciever hdmi h_pixel", false,-1, 31,0);
        tracep->declBus(c+97,"HDMI_Transciever hdmi h_front_porch", false,-1, 31,0);
        tracep->declBus(c+98,"HDMI_Transciever hdmi h_back_porch", false,-1, 31,0);
        tracep->declBus(c+99,"HDMI_Transciever hdmi h_tot_pixel", false,-1, 31,0);
        tracep->declBus(c+100,"HDMI_Transciever hdmi v_pixel", false,-1, 31,0);
        tracep->declBus(c+98,"HDMI_Transciever hdmi v_front_porch", false,-1, 31,0);
        tracep->declBus(c+97,"HDMI_Transciever hdmi v_back_porch", false,-1, 31,0);
        tracep->declBus(c+101,"HDMI_Transciever hdmi v_tot_pixel", false,-1, 31,0);
        tracep->declBus(c+28,"HDMI_Transciever hdmi CounterX", false,-1, 9,0);
        tracep->declBus(c+29,"HDMI_Transciever hdmi CounterY", false,-1, 9,0);
        tracep->declBit(c+30,"HDMI_Transciever hdmi hSync", false,-1);
        tracep->declBit(c+31,"HDMI_Transciever hdmi vSync", false,-1);
        tracep->declBus(c+32,"HDMI_Transciever hdmi DrawArea", false,-1, 1,0);
        tracep->declBus(c+33,"HDMI_Transciever hdmi W", false,-1, 7,0);
        tracep->declBus(c+34,"HDMI_Transciever hdmi A", false,-1, 7,0);
        tracep->declBus(c+102,"HDMI_Transciever hdmi red", false,-1, 7,0);
        tracep->declBus(c+102,"HDMI_Transciever hdmi green", false,-1, 7,0);
        tracep->declBus(c+102,"HDMI_Transciever hdmi blue", false,-1, 7,0);
        tracep->declBus(c+35,"HDMI_Transciever hdmi TMDS_red", false,-1, 9,0);
        tracep->declBus(c+36,"HDMI_Transciever hdmi TMDS_green", false,-1, 9,0);
        tracep->declBus(c+37,"HDMI_Transciever hdmi TMDS_blue", false,-1, 9,0);
        tracep->declBit(c+103,"HDMI_Transciever hdmi DCM_TMDS_CLKFX", false,-1);
        tracep->declBus(c+69,"HDMI_Transciever hdmi TMDS_mod10", false,-1, 3,0);
        tracep->declBus(c+70,"HDMI_Transciever hdmi TMDS_shift_red", false,-1, 9,0);
        tracep->declBus(c+71,"HDMI_Transciever hdmi TMDS_shift_green", false,-1, 9,0);
        tracep->declBus(c+72,"HDMI_Transciever hdmi TMDS_shift_blue", false,-1, 9,0);
        tracep->declBit(c+73,"HDMI_Transciever hdmi TMDS_shift_load", false,-1);
        tracep->declBit(c+104,"HDMI_Transciever hdmi reset", false,-1);
        tracep->declBit(c+74,"HDMI_Transciever hdmi OBUFDS_red I", false,-1);
        tracep->declBit(c+74,"HDMI_Transciever hdmi OBUFDS_red O", false,-1);
        tracep->declBit(c+75,"HDMI_Transciever hdmi OBUFDS_red OB", false,-1);
        tracep->declBit(c+76,"HDMI_Transciever hdmi OBUFDS_green I", false,-1);
        tracep->declBit(c+76,"HDMI_Transciever hdmi OBUFDS_green O", false,-1);
        tracep->declBit(c+77,"HDMI_Transciever hdmi OBUFDS_green OB", false,-1);
        tracep->declBit(c+78,"HDMI_Transciever hdmi OBUFDS_blue I", false,-1);
        tracep->declBit(c+78,"HDMI_Transciever hdmi OBUFDS_blue O", false,-1);
        tracep->declBit(c+79,"HDMI_Transciever hdmi OBUFDS_blue OB", false,-1);
        tracep->declBit(c+80,"HDMI_Transciever hdmi OBUFDS_clock I", false,-1);
        tracep->declBit(c+80,"HDMI_Transciever hdmi OBUFDS_clock O", false,-1);
        tracep->declBit(c+95,"HDMI_Transciever hdmi OBUFDS_clock OB", false,-1);
        tracep->declBit(c+80,"HDMI_Transciever hdmi encoder0 clklow", false,-1);
        tracep->declBit(c+81,"HDMI_Transciever hdmi encoder0 clkhigh", false,-1);
        tracep->declBit(c+104,"HDMI_Transciever hdmi encoder0 reset", false,-1);
        tracep->declBus(c+32,"HDMI_Transciever hdmi encoder0 state", false,-1, 1,0);
        tracep->declBus(c+102,"HDMI_Transciever hdmi encoder0 pix_data", false,-1, 7,0);
        tracep->declBus(c+38,"HDMI_Transciever hdmi encoder0 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+105,"HDMI_Transciever hdmi encoder0 aux_data", false,-1, 3,0);
        tracep->declBit(c+106,"HDMI_Transciever hdmi encoder0 data_o", false,-1);
        tracep->declBus(c+37,"HDMI_Transciever hdmi encoder0 q_out", false,-1, 9,0);
        tracep->declBus(c+37,"HDMI_Transciever hdmi encoder0 q_out1", false,-1, 9,0);
        tracep->declBus(c+39,"HDMI_Transciever hdmi encoder0 cnt_old", false,-1, 31,0);
        tracep->declBus(c+1,"HDMI_Transciever hdmi encoder0 q_m", false,-1, 8,0);
        tracep->declBit(c+107,"HDMI_Transciever hdmi encoder0 q_m0", false,-1);
        tracep->declBit(c+2,"HDMI_Transciever hdmi encoder0 q_m1", false,-1);
        tracep->declBit(c+3,"HDMI_Transciever hdmi encoder0 q_m2", false,-1);
        tracep->declBit(c+4,"HDMI_Transciever hdmi encoder0 q_m3", false,-1);
        tracep->declBit(c+5,"HDMI_Transciever hdmi encoder0 q_m4", false,-1);
        tracep->declBit(c+6,"HDMI_Transciever hdmi encoder0 q_m5", false,-1);
        tracep->declBit(c+7,"HDMI_Transciever hdmi encoder0 q_m6", false,-1);
        tracep->declBit(c+8,"HDMI_Transciever hdmi encoder0 q_m7", false,-1);
        tracep->declBit(c+9,"HDMI_Transciever hdmi encoder0 q_m8", false,-1);
        tracep->declBit(c+40,"HDMI_Transciever hdmi encoder0 q_out2p1", false,-1);
        tracep->declBit(c+41,"HDMI_Transciever hdmi encoder0 q_out2p2", false,-1);
        tracep->declBus(c+42,"HDMI_Transciever hdmi encoder0 q_out2p3", false,-1, 7,0);
        tracep->declBus(c+43,"HDMI_Transciever hdmi encoder0 q_out2", false,-1, 9,0);
        tracep->declBus(c+44,"HDMI_Transciever hdmi encoder0 cnt0", false,-1, 31,0);
        tracep->declBus(c+45,"HDMI_Transciever hdmi encoder0 cnt1", false,-1, 31,0);
        tracep->declBus(c+46,"HDMI_Transciever hdmi encoder0 cnt2", false,-1, 31,0);
        tracep->declBus(c+47,"HDMI_Transciever hdmi encoder0 cnt3", false,-1, 31,0);
        tracep->declBus(c+48,"HDMI_Transciever hdmi encoder0 cnt", false,-1, 31,0);
        tracep->declBit(c+80,"HDMI_Transciever hdmi encoder1 clklow", false,-1);
        tracep->declBit(c+81,"HDMI_Transciever hdmi encoder1 clkhigh", false,-1);
        tracep->declBit(c+104,"HDMI_Transciever hdmi encoder1 reset", false,-1);
        tracep->declBus(c+32,"HDMI_Transciever hdmi encoder1 state", false,-1, 1,0);
        tracep->declBus(c+102,"HDMI_Transciever hdmi encoder1 pix_data", false,-1, 7,0);
        tracep->declBus(c+108,"HDMI_Transciever hdmi encoder1 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+109,"HDMI_Transciever hdmi encoder1 aux_data", false,-1, 3,0);
        tracep->declBit(c+110,"HDMI_Transciever hdmi encoder1 data_o", false,-1);
        tracep->declBus(c+36,"HDMI_Transciever hdmi encoder1 q_out", false,-1, 9,0);
        tracep->declBus(c+36,"HDMI_Transciever hdmi encoder1 q_out1", false,-1, 9,0);
        tracep->declBus(c+49,"HDMI_Transciever hdmi encoder1 cnt_old", false,-1, 31,0);
        tracep->declBus(c+10,"HDMI_Transciever hdmi encoder1 q_m", false,-1, 8,0);
        tracep->declBit(c+107,"HDMI_Transciever hdmi encoder1 q_m0", false,-1);
        tracep->declBit(c+11,"HDMI_Transciever hdmi encoder1 q_m1", false,-1);
        tracep->declBit(c+12,"HDMI_Transciever hdmi encoder1 q_m2", false,-1);
        tracep->declBit(c+13,"HDMI_Transciever hdmi encoder1 q_m3", false,-1);
        tracep->declBit(c+14,"HDMI_Transciever hdmi encoder1 q_m4", false,-1);
        tracep->declBit(c+15,"HDMI_Transciever hdmi encoder1 q_m5", false,-1);
        tracep->declBit(c+16,"HDMI_Transciever hdmi encoder1 q_m6", false,-1);
        tracep->declBit(c+17,"HDMI_Transciever hdmi encoder1 q_m7", false,-1);
        tracep->declBit(c+18,"HDMI_Transciever hdmi encoder1 q_m8", false,-1);
        tracep->declBit(c+50,"HDMI_Transciever hdmi encoder1 q_out2p1", false,-1);
        tracep->declBit(c+51,"HDMI_Transciever hdmi encoder1 q_out2p2", false,-1);
        tracep->declBus(c+52,"HDMI_Transciever hdmi encoder1 q_out2p3", false,-1, 7,0);
        tracep->declBus(c+53,"HDMI_Transciever hdmi encoder1 q_out2", false,-1, 9,0);
        tracep->declBus(c+54,"HDMI_Transciever hdmi encoder1 cnt0", false,-1, 31,0);
        tracep->declBus(c+55,"HDMI_Transciever hdmi encoder1 cnt1", false,-1, 31,0);
        tracep->declBus(c+56,"HDMI_Transciever hdmi encoder1 cnt2", false,-1, 31,0);
        tracep->declBus(c+57,"HDMI_Transciever hdmi encoder1 cnt3", false,-1, 31,0);
        tracep->declBus(c+58,"HDMI_Transciever hdmi encoder1 cnt", false,-1, 31,0);
        tracep->declBit(c+80,"HDMI_Transciever hdmi encoder2 clklow", false,-1);
        tracep->declBit(c+81,"HDMI_Transciever hdmi encoder2 clkhigh", false,-1);
        tracep->declBit(c+104,"HDMI_Transciever hdmi encoder2 reset", false,-1);
        tracep->declBus(c+32,"HDMI_Transciever hdmi encoder2 state", false,-1, 1,0);
        tracep->declBus(c+102,"HDMI_Transciever hdmi encoder2 pix_data", false,-1, 7,0);
        tracep->declBus(c+108,"HDMI_Transciever hdmi encoder2 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+111,"HDMI_Transciever hdmi encoder2 aux_data", false,-1, 3,0);
        tracep->declBit(c+112,"HDMI_Transciever hdmi encoder2 data_o", false,-1);
        tracep->declBus(c+35,"HDMI_Transciever hdmi encoder2 q_out", false,-1, 9,0);
        tracep->declBus(c+35,"HDMI_Transciever hdmi encoder2 q_out1", false,-1, 9,0);
        tracep->declBus(c+59,"HDMI_Transciever hdmi encoder2 cnt_old", false,-1, 31,0);
        tracep->declBus(c+19,"HDMI_Transciever hdmi encoder2 q_m", false,-1, 8,0);
        tracep->declBit(c+107,"HDMI_Transciever hdmi encoder2 q_m0", false,-1);
        tracep->declBit(c+20,"HDMI_Transciever hdmi encoder2 q_m1", false,-1);
        tracep->declBit(c+21,"HDMI_Transciever hdmi encoder2 q_m2", false,-1);
        tracep->declBit(c+22,"HDMI_Transciever hdmi encoder2 q_m3", false,-1);
        tracep->declBit(c+23,"HDMI_Transciever hdmi encoder2 q_m4", false,-1);
        tracep->declBit(c+24,"HDMI_Transciever hdmi encoder2 q_m5", false,-1);
        tracep->declBit(c+25,"HDMI_Transciever hdmi encoder2 q_m6", false,-1);
        tracep->declBit(c+26,"HDMI_Transciever hdmi encoder2 q_m7", false,-1);
        tracep->declBit(c+27,"HDMI_Transciever hdmi encoder2 q_m8", false,-1);
        tracep->declBit(c+60,"HDMI_Transciever hdmi encoder2 q_out2p1", false,-1);
        tracep->declBit(c+61,"HDMI_Transciever hdmi encoder2 q_out2p2", false,-1);
        tracep->declBus(c+62,"HDMI_Transciever hdmi encoder2 q_out2p3", false,-1, 7,0);
        tracep->declBus(c+63,"HDMI_Transciever hdmi encoder2 q_out2", false,-1, 9,0);
        tracep->declBus(c+64,"HDMI_Transciever hdmi encoder2 cnt0", false,-1, 31,0);
        tracep->declBus(c+65,"HDMI_Transciever hdmi encoder2 cnt1", false,-1, 31,0);
        tracep->declBus(c+66,"HDMI_Transciever hdmi encoder2 cnt2", false,-1, 31,0);
        tracep->declBus(c+67,"HDMI_Transciever hdmi encoder2 cnt3", false,-1, 31,0);
        tracep->declBus(c+68,"HDMI_Transciever hdmi encoder2 cnt", false,-1, 31,0);
    }
}

void VHDMI_Transciever::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VHDMI_Transciever::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VHDMI_Transciever::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m),9);
        tracep->fullBit(oldp+2,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m1));
        tracep->fullBit(oldp+3,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m2));
        tracep->fullBit(oldp+4,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m3));
        tracep->fullBit(oldp+5,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m4));
        tracep->fullBit(oldp+6,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m5));
        tracep->fullBit(oldp+7,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m6));
        tracep->fullBit(oldp+8,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m7));
        tracep->fullBit(oldp+9,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m8));
        tracep->fullSData(oldp+10,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m),9);
        tracep->fullBit(oldp+11,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m1));
        tracep->fullBit(oldp+12,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m2));
        tracep->fullBit(oldp+13,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m3));
        tracep->fullBit(oldp+14,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m4));
        tracep->fullBit(oldp+15,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m5));
        tracep->fullBit(oldp+16,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m6));
        tracep->fullBit(oldp+17,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m7));
        tracep->fullBit(oldp+18,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m8));
        tracep->fullSData(oldp+19,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m),9);
        tracep->fullBit(oldp+20,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m1));
        tracep->fullBit(oldp+21,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m2));
        tracep->fullBit(oldp+22,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m3));
        tracep->fullBit(oldp+23,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m4));
        tracep->fullBit(oldp+24,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m5));
        tracep->fullBit(oldp+25,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m6));
        tracep->fullBit(oldp+26,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m7));
        tracep->fullBit(oldp+27,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m8));
        tracep->fullSData(oldp+28,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterX),10);
        tracep->fullSData(oldp+29,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterY),10);
        tracep->fullBit(oldp+30,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__hSync));
        tracep->fullBit(oldp+31,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__vSync));
        tracep->fullCData(oldp+32,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__DrawArea),2);
        tracep->fullCData(oldp+33,((0xffU & (- (IData)(
                                                       ((0xffU 
                                                         & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterX)) 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterY))))))),8);
        tracep->fullCData(oldp+34,((0xffU & (- (IData)(
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterX) 
                                                             >> 5U))) 
                                                        & (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterY) 
                                                               >> 5U)))))))),8);
        tracep->fullSData(oldp+35,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out1),10);
        tracep->fullSData(oldp+36,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out1),10);
        tracep->fullSData(oldp+37,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out1),10);
        tracep->fullCData(oldp+38,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT____Vcellinp__encoder0__H_VSync_Ctr),2);
        tracep->fullIData(oldp+39,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old),32);
        tracep->fullBit(oldp+40,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p1));
        tracep->fullBit(oldp+41,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p2));
        tracep->fullCData(oldp+42,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p3),8);
        tracep->fullSData(oldp+43,((((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p1) 
                                     << 9U) | (((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p2) 
                                                << 8U) 
                                               | (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p3)))),10);
        tracep->fullIData(oldp+44,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt0),32);
        tracep->fullIData(oldp+45,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt1),32);
        tracep->fullIData(oldp+46,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt2),32);
        tracep->fullIData(oldp+47,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt3),32);
        tracep->fullIData(oldp+48,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt),32);
        tracep->fullIData(oldp+49,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old),32);
        tracep->fullBit(oldp+50,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p1));
        tracep->fullBit(oldp+51,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p2));
        tracep->fullCData(oldp+52,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p3),8);
        tracep->fullSData(oldp+53,((((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p1) 
                                     << 9U) | (((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p2) 
                                                << 8U) 
                                               | (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p3)))),10);
        tracep->fullIData(oldp+54,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt0),32);
        tracep->fullIData(oldp+55,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt1),32);
        tracep->fullIData(oldp+56,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt2),32);
        tracep->fullIData(oldp+57,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt3),32);
        tracep->fullIData(oldp+58,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt),32);
        tracep->fullIData(oldp+59,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old),32);
        tracep->fullBit(oldp+60,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p1));
        tracep->fullBit(oldp+61,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p2));
        tracep->fullCData(oldp+62,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p3),8);
        tracep->fullSData(oldp+63,((((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p1) 
                                     << 9U) | (((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p2) 
                                                << 8U) 
                                               | (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p3)))),10);
        tracep->fullIData(oldp+64,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt0),32);
        tracep->fullIData(oldp+65,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt1),32);
        tracep->fullIData(oldp+66,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt2),32);
        tracep->fullIData(oldp+67,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt3),32);
        tracep->fullIData(oldp+68,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt),32);
        tracep->fullCData(oldp+69,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_mod10),4);
        tracep->fullSData(oldp+70,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_red),10);
        tracep->fullSData(oldp+71,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_green),10);
        tracep->fullSData(oldp+72,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_blue),10);
        tracep->fullBit(oldp+73,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_load));
        tracep->fullBit(oldp+74,((1U & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_red))));
        tracep->fullBit(oldp+75,((1U & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_red)))));
        tracep->fullBit(oldp+76,((1U & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_green))));
        tracep->fullBit(oldp+77,((1U & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_green)))));
        tracep->fullBit(oldp+78,((1U & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_blue))));
        tracep->fullBit(oldp+79,((1U & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_blue)))));
        tracep->fullBit(oldp+80,(vlTOPp->clk_low));
        tracep->fullBit(oldp+81,(vlTOPp->clk_high));
        tracep->fullBit(oldp+82,(vlTOPp->reset));
        tracep->fullBit(oldp+83,(vlTOPp->red));
        tracep->fullBit(oldp+84,(vlTOPp->green));
        tracep->fullBit(oldp+85,(vlTOPp->blue));
        tracep->fullBit(oldp+86,(vlTOPp->clock));
        tracep->fullIData(oldp+87,(vlTOPp->ram_addr),26);
        tracep->fullCData(oldp+88,(vlTOPp->ram_green),8);
        tracep->fullCData(oldp+89,(vlTOPp->ram_blue),8);
        tracep->fullCData(oldp+90,(vlTOPp->ram_red),8);
        tracep->fullSData(oldp+91,(vlTOPp->blue_r),10);
        tracep->fullSData(oldp+92,(vlTOPp->green_r),10);
        tracep->fullSData(oldp+93,(vlTOPp->red_r),10);
        tracep->fullCData(oldp+94,(vlTOPp->HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd),4);
        tracep->fullBit(oldp+95,((1U & (~ (IData)(vlTOPp->clk_low)))));
        tracep->fullIData(oldp+96,(4U),32);
        tracep->fullIData(oldp+97,(2U),32);
        tracep->fullIData(oldp+98,(1U),32);
        tracep->fullIData(oldp+99,(8U),32);
        tracep->fullIData(oldp+100,(3U),32);
        tracep->fullIData(oldp+101,(7U),32);
        tracep->fullCData(oldp+102,(0xffU),8);
        tracep->fullBit(oldp+103,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__DCM_TMDS_CLKFX));
        tracep->fullBit(oldp+104,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__reset));
        tracep->fullCData(oldp+105,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__aux_data),4);
        tracep->fullBit(oldp+106,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__data_o));
        tracep->fullBit(oldp+107,(1U));
        tracep->fullCData(oldp+108,(0U),2);
        tracep->fullCData(oldp+109,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__aux_data),4);
        tracep->fullBit(oldp+110,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__data_o));
        tracep->fullCData(oldp+111,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__aux_data),4);
        tracep->fullBit(oldp+112,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__data_o));
    }
}
