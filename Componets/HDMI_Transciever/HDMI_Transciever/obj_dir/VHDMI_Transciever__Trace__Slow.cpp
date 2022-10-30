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
        tracep->declBit(c+18,"clk_low", false,-1);
        tracep->declBit(c+19,"clk_high", false,-1);
        tracep->declBit(c+20,"reset", false,-1);
        tracep->declBit(c+21,"red", false,-1);
        tracep->declBit(c+22,"green", false,-1);
        tracep->declBit(c+23,"blue", false,-1);
        tracep->declBit(c+24,"clock", false,-1);
        tracep->declBus(c+25,"ram_addr", false,-1, 25,0);
        tracep->declBus(c+26,"ram_green", false,-1, 7,0);
        tracep->declBus(c+27,"ram_blue", false,-1, 7,0);
        tracep->declBus(c+28,"ram_red", false,-1, 7,0);
        tracep->declBit(c+18,"HDMI_Transciever clk_low", false,-1);
        tracep->declBit(c+19,"HDMI_Transciever clk_high", false,-1);
        tracep->declBit(c+20,"HDMI_Transciever reset", false,-1);
        tracep->declBit(c+21,"HDMI_Transciever red", false,-1);
        tracep->declBit(c+22,"HDMI_Transciever green", false,-1);
        tracep->declBit(c+23,"HDMI_Transciever blue", false,-1);
        tracep->declBit(c+24,"HDMI_Transciever clock", false,-1);
        tracep->declBus(c+25,"HDMI_Transciever ram_addr", false,-1, 25,0);
        tracep->declBus(c+26,"HDMI_Transciever ram_green", false,-1, 7,0);
        tracep->declBus(c+27,"HDMI_Transciever ram_blue", false,-1, 7,0);
        tracep->declBus(c+28,"HDMI_Transciever ram_red", false,-1, 7,0);
        tracep->declBus(c+32,"HDMI_Transciever h_pixel", false,-1, 31,0);
        tracep->declBus(c+33,"HDMI_Transciever h_front_porch", false,-1, 31,0);
        tracep->declBus(c+34,"HDMI_Transciever h_sync_widith", false,-1, 31,0);
        tracep->declBus(c+35,"HDMI_Transciever h_back_porch", false,-1, 31,0);
        tracep->declBus(c+36,"HDMI_Transciever h_blanking_total", false,-1, 31,0);
        tracep->declBus(c+37,"HDMI_Transciever h_tot_pixel", false,-1, 31,0);
        tracep->declBus(c+38,"HDMI_Transciever v_pixel", false,-1, 31,0);
        tracep->declBus(c+39,"HDMI_Transciever v_front_porch", false,-1, 31,0);
        tracep->declBus(c+40,"HDMI_Transciever v_sync_widith", false,-1, 31,0);
        tracep->declBus(c+41,"HDMI_Transciever v_back_porch", false,-1, 31,0);
        tracep->declBus(c+42,"HDMI_Transciever v_blanking_total", false,-1, 31,0);
        tracep->declBus(c+43,"HDMI_Transciever v_tot_pixel", false,-1, 31,0);
        tracep->declBus(c+1,"HDMI_Transciever h", false,-1, 31,0);
        tracep->declBus(c+2,"HDMI_Transciever v", false,-1, 31,0);
        tracep->declBus(c+3,"HDMI_Transciever state", false,-1, 1,0);
        tracep->declBus(c+4,"HDMI_Transciever H_VSync_Ctr_0", false,-1, 1,0);
        tracep->declBus(c+5,"HDMI_Transciever H_VSync_Ctr_1", false,-1, 1,0);
        tracep->declBus(c+6,"HDMI_Transciever H_VSync_Ctr_2", false,-1, 1,0);
        tracep->declBus(c+7,"HDMI_Transciever addr", false,-1, 25,0);
        tracep->declBit(c+8,"HDMI_Transciever first", false,-1);
        tracep->declBit(c+18,"HDMI_Transciever encoder0 clklow", false,-1);
        tracep->declBit(c+19,"HDMI_Transciever encoder0 clkhigh", false,-1);
        tracep->declBit(c+20,"HDMI_Transciever encoder0 reset", false,-1);
        tracep->declBus(c+3,"HDMI_Transciever encoder0 state", false,-1, 1,0);
        tracep->declBus(c+27,"HDMI_Transciever encoder0 pix_data", false,-1, 7,0);
        tracep->declBus(c+4,"HDMI_Transciever encoder0 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+44,"HDMI_Transciever encoder0 aux_data", false,-1, 3,0);
        tracep->declBit(c+23,"HDMI_Transciever encoder0 data_o", false,-1);
        tracep->declBus(c+9,"HDMI_Transciever encoder0 q_m", false,-1, 9,0);
        tracep->declBus(c+29,"HDMI_Transciever encoder0 q_out", false,-1, 9,0);
        tracep->declBus(c+10,"HDMI_Transciever encoder0 cnt", false,-1, 31,0);
        tracep->declBus(c+11,"HDMI_Transciever encoder0 cnt_old", false,-1, 31,0);
        tracep->declBit(c+18,"HDMI_Transciever encoder1 clklow", false,-1);
        tracep->declBit(c+19,"HDMI_Transciever encoder1 clkhigh", false,-1);
        tracep->declBit(c+20,"HDMI_Transciever encoder1 reset", false,-1);
        tracep->declBus(c+3,"HDMI_Transciever encoder1 state", false,-1, 1,0);
        tracep->declBus(c+26,"HDMI_Transciever encoder1 pix_data", false,-1, 7,0);
        tracep->declBus(c+4,"HDMI_Transciever encoder1 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+45,"HDMI_Transciever encoder1 aux_data", false,-1, 3,0);
        tracep->declBit(c+22,"HDMI_Transciever encoder1 data_o", false,-1);
        tracep->declBus(c+12,"HDMI_Transciever encoder1 q_m", false,-1, 9,0);
        tracep->declBus(c+30,"HDMI_Transciever encoder1 q_out", false,-1, 9,0);
        tracep->declBus(c+13,"HDMI_Transciever encoder1 cnt", false,-1, 31,0);
        tracep->declBus(c+14,"HDMI_Transciever encoder1 cnt_old", false,-1, 31,0);
        tracep->declBit(c+18,"HDMI_Transciever encoder2 clklow", false,-1);
        tracep->declBit(c+19,"HDMI_Transciever encoder2 clkhigh", false,-1);
        tracep->declBit(c+20,"HDMI_Transciever encoder2 reset", false,-1);
        tracep->declBus(c+3,"HDMI_Transciever encoder2 state", false,-1, 1,0);
        tracep->declBus(c+28,"HDMI_Transciever encoder2 pix_data", false,-1, 7,0);
        tracep->declBus(c+4,"HDMI_Transciever encoder2 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+46,"HDMI_Transciever encoder2 aux_data", false,-1, 3,0);
        tracep->declBit(c+21,"HDMI_Transciever encoder2 data_o", false,-1);
        tracep->declBus(c+15,"HDMI_Transciever encoder2 q_m", false,-1, 9,0);
        tracep->declBus(c+31,"HDMI_Transciever encoder2 q_out", false,-1, 9,0);
        tracep->declBus(c+16,"HDMI_Transciever encoder2 cnt", false,-1, 31,0);
        tracep->declBus(c+17,"HDMI_Transciever encoder2 cnt_old", false,-1, 31,0);
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
        tracep->fullIData(oldp+1,(vlTOPp->HDMI_Transciever__DOT__h),32);
        tracep->fullIData(oldp+2,(vlTOPp->HDMI_Transciever__DOT__v),32);
        tracep->fullCData(oldp+3,(vlTOPp->HDMI_Transciever__DOT__state),2);
        tracep->fullCData(oldp+4,(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0),2);
        tracep->fullCData(oldp+5,(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_1),2);
        tracep->fullCData(oldp+6,(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_2),2);
        tracep->fullIData(oldp+7,(vlTOPp->HDMI_Transciever__DOT__addr),26);
        tracep->fullBit(oldp+8,(vlTOPp->HDMI_Transciever__DOT__first));
        tracep->fullSData(oldp+9,(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m),10);
        tracep->fullIData(oldp+10,(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt),32);
        tracep->fullIData(oldp+11,(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old),32);
        tracep->fullSData(oldp+12,(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m),10);
        tracep->fullIData(oldp+13,(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt),32);
        tracep->fullIData(oldp+14,(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old),32);
        tracep->fullSData(oldp+15,(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m),10);
        tracep->fullIData(oldp+16,(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt),32);
        tracep->fullIData(oldp+17,(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old),32);
        tracep->fullBit(oldp+18,(vlTOPp->clk_low));
        tracep->fullBit(oldp+19,(vlTOPp->clk_high));
        tracep->fullBit(oldp+20,(vlTOPp->reset));
        tracep->fullBit(oldp+21,(vlTOPp->red));
        tracep->fullBit(oldp+22,(vlTOPp->green));
        tracep->fullBit(oldp+23,(vlTOPp->blue));
        tracep->fullBit(oldp+24,(vlTOPp->clock));
        tracep->fullIData(oldp+25,(vlTOPp->ram_addr),26);
        tracep->fullCData(oldp+26,(vlTOPp->ram_green),8);
        tracep->fullCData(oldp+27,(vlTOPp->ram_blue),8);
        tracep->fullCData(oldp+28,(vlTOPp->ram_red),8);
        tracep->fullSData(oldp+29,(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out),10);
        tracep->fullSData(oldp+30,(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out),10);
        tracep->fullSData(oldp+31,(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out),10);
        tracep->fullIData(oldp+32,(0x280U),32);
        tracep->fullIData(oldp+33,(0x10U),32);
        tracep->fullIData(oldp+34,(0x60U),32);
        tracep->fullIData(oldp+35,(0x30U),32);
        tracep->fullIData(oldp+36,(0xa0U),32);
        tracep->fullIData(oldp+37,(0x320U),32);
        tracep->fullIData(oldp+38,(0x1e0U),32);
        tracep->fullIData(oldp+39,(0xaU),32);
        tracep->fullIData(oldp+40,(2U),32);
        tracep->fullIData(oldp+41,(0x21U),32);
        tracep->fullIData(oldp+42,(0x2dU),32);
        tracep->fullIData(oldp+43,(0x20dU),32);
        tracep->fullCData(oldp+44,(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data),4);
        tracep->fullCData(oldp+45,(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data),4);
        tracep->fullCData(oldp+46,(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data),4);
    }
}
