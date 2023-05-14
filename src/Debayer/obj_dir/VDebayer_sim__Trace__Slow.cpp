// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDebayer_sim__Syms.h"


//======================

void VDebayer_sim::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VDebayer_sim::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDebayer_sim__Syms* __restrict vlSymsp = static_cast<VDebayer_sim__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VDebayer_sim::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VDebayer_sim::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VDebayer_sim__Syms* __restrict vlSymsp = static_cast<VDebayer_sim__Syms*>(userp);
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VDebayer_sim::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VDebayer_sim__Syms* __restrict vlSymsp = static_cast<VDebayer_sim__Syms*>(userp);
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+23,"clock", false,-1);
        tracep->declBit(c+24,"reset", false,-1);
        tracep->declBus(c+25,"address_in", false,-1, 18,0);
        tracep->declBus(c+26,"red", false,-1, 7,0);
        tracep->declBus(c+27,"green", false,-1, 7,0);
        tracep->declBus(c+28,"blue", false,-1, 7,0);
        tracep->declBit(c+23,"Debayer_sim clock", false,-1);
        tracep->declBit(c+24,"Debayer_sim reset", false,-1);
        tracep->declBus(c+25,"Debayer_sim address_in", false,-1, 18,0);
        tracep->declBus(c+26,"Debayer_sim red", false,-1, 7,0);
        tracep->declBus(c+27,"Debayer_sim green", false,-1, 7,0);
        tracep->declBus(c+28,"Debayer_sim blue", false,-1, 7,0);
        tracep->declBus(c+25,"Debayer_sim read_addr", false,-1, 18,0);
        tracep->declBus(c+2,"Debayer_sim ramdata", false,-1, 31,0);
        tracep->declBus(c+3,"Debayer_sim counter", false,-1, 7,0);
        tracep->declBus(c+4,"Debayer_sim color_w", false,-1, 31,0);
        tracep->declBus(c+5,"Debayer_sim raw_v", false,-1, 7,0);
        tracep->declBit(c+6,"Debayer_sim green_r", false,-1);
        tracep->declBus(c+30,"Debayer_sim debay size_x", false,-1, 31,0);
        tracep->declBus(c+31,"Debayer_sim debay size_y", false,-1, 31,0);
        tracep->declBit(c+23,"Debayer_sim debay clock", false,-1);
        tracep->declBit(c+24,"Debayer_sim debay reset", false,-1);
        tracep->declBus(c+25,"Debayer_sim debay address_in", false,-1, 18,0);
        tracep->declBus(c+25,"Debayer_sim debay address_out", false,-1, 18,0);
        tracep->declBus(c+5,"Debayer_sim debay raw", false,-1, 7,0);
        tracep->declBus(c+26,"Debayer_sim debay red", false,-1, 7,0);
        tracep->declBus(c+7,"Debayer_sim debay green", false,-1, 7,0);
        tracep->declBus(c+28,"Debayer_sim debay blue", false,-1, 7,0);
        tracep->declBus(c+8,"Debayer_sim debay red_r", false,-1, 7,0);
        tracep->declBus(c+7,"Debayer_sim debay green_r", false,-1, 7,0);
        tracep->declBus(c+9,"Debayer_sim debay blue_r", false,-1, 7,0);
        tracep->declBus(c+10,"Debayer_sim debay cX", false,-1, 31,0);
        tracep->declBus(c+11,"Debayer_sim debay cY", false,-1, 31,0);
        tracep->declBus(c+12,"Debayer_sim debay line_sel", false,-1, 1,0);
        tracep->declBus(c+13,"Debayer_sim debay address_out_r", false,-1, 18,0);
        tracep->declBus(c+1,"Debayer_sim debay i", false,-1, 31,0);
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+14+i*1,"Debayer_sim debay raw_pix", true,(i+0), 7,0);}}
        tracep->declBus(c+32,"Debayer_sim DPR data_a", false,-1, 31,0);
        tracep->declBus(c+33,"Debayer_sim DPR data_b", false,-1, 31,0);
        tracep->declBus(c+34,"Debayer_sim DPR addr_a", false,-1, 16,0);
        tracep->declBus(c+29,"Debayer_sim DPR addr_b", false,-1, 16,0);
        tracep->declBus(c+35,"Debayer_sim DPR bank", false,-1, 1,0);
        tracep->declBit(c+36,"Debayer_sim DPR we_a", false,-1);
        tracep->declBit(c+37,"Debayer_sim DPR we_b", false,-1);
        tracep->declBit(c+38,"Debayer_sim DPR clk", false,-1);
        tracep->declBit(c+23,"Debayer_sim DPR clk_b", false,-1);
        tracep->declBus(c+2,"Debayer_sim DPR data_out", false,-1, 31,0);
    }
}

void VDebayer_sim::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VDebayer_sim::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VDebayer_sim__Syms* __restrict vlSymsp = static_cast<VDebayer_sim__Syms*>(userp);
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VDebayer_sim::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VDebayer_sim__Syms* __restrict vlSymsp = static_cast<VDebayer_sim__Syms*>(userp);
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->Debayer_sim__DOT__debay__DOT__i),32);
        tracep->fullIData(oldp+2,(vlTOPp->Debayer_sim__DOT__ramdata),32);
        tracep->fullCData(oldp+3,(vlTOPp->Debayer_sim__DOT__counter),8);
        tracep->fullIData(oldp+4,(vlTOPp->Debayer_sim__DOT__color_w),32);
        tracep->fullCData(oldp+5,(vlTOPp->Debayer_sim__DOT__raw_v),8);
        tracep->fullBit(oldp+6,((1U & (IData)(vlTOPp->Debayer_sim__DOT__debay__DOT__green_r))));
        tracep->fullCData(oldp+7,(vlTOPp->Debayer_sim__DOT__debay__DOT__green_r),8);
        tracep->fullCData(oldp+8,(vlTOPp->Debayer_sim__DOT__debay__DOT__red_r),8);
        tracep->fullCData(oldp+9,(vlTOPp->Debayer_sim__DOT__debay__DOT__blue_r),8);
        tracep->fullIData(oldp+10,(vlTOPp->Debayer_sim__DOT__debay__DOT__cX),32);
        tracep->fullIData(oldp+11,(vlTOPp->Debayer_sim__DOT__debay__DOT__cY),32);
        tracep->fullCData(oldp+12,(vlTOPp->Debayer_sim__DOT__debay__DOT__line_sel),2);
        tracep->fullIData(oldp+13,(vlTOPp->Debayer_sim__DOT__debay__DOT__address_out_r),19);
        tracep->fullCData(oldp+14,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[0]),8);
        tracep->fullCData(oldp+15,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[1]),8);
        tracep->fullCData(oldp+16,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[2]),8);
        tracep->fullCData(oldp+17,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[3]),8);
        tracep->fullCData(oldp+18,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[4]),8);
        tracep->fullCData(oldp+19,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[5]),8);
        tracep->fullCData(oldp+20,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[6]),8);
        tracep->fullCData(oldp+21,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[7]),8);
        tracep->fullCData(oldp+22,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[8]),8);
        tracep->fullBit(oldp+23,(vlTOPp->clock));
        tracep->fullBit(oldp+24,(vlTOPp->reset));
        tracep->fullIData(oldp+25,(vlTOPp->address_in),19);
        tracep->fullCData(oldp+26,(vlTOPp->red),8);
        tracep->fullCData(oldp+27,(vlTOPp->green),8);
        tracep->fullCData(oldp+28,(vlTOPp->blue),8);
        tracep->fullIData(oldp+29,((0x1ffffU & (vlTOPp->address_in 
                                                >> 2U))),17);
        tracep->fullIData(oldp+30,(0x280U),32);
        tracep->fullIData(oldp+31,(0x1e0U),32);
        tracep->fullIData(oldp+32,(vlTOPp->Debayer_sim__DOT__DPR__DOT__data_a),32);
        tracep->fullIData(oldp+33,(vlTOPp->Debayer_sim__DOT__DPR__DOT__data_b),32);
        tracep->fullIData(oldp+34,(vlTOPp->Debayer_sim__DOT__DPR__DOT__addr_a),17);
        tracep->fullCData(oldp+35,(vlTOPp->Debayer_sim__DOT__DPR__DOT__bank),2);
        tracep->fullBit(oldp+36,(vlTOPp->Debayer_sim__DOT__DPR__DOT__we_a));
        tracep->fullBit(oldp+37,(0U));
        tracep->fullBit(oldp+38,(vlTOPp->Debayer_sim__DOT__DPR__DOT__clk));
    }
}
