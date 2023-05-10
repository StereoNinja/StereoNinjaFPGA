// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDebayer__Syms.h"


//======================

void VDebayer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VDebayer::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDebayer__Syms* __restrict vlSymsp = static_cast<VDebayer__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VDebayer::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VDebayer::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VDebayer__Syms* __restrict vlSymsp = static_cast<VDebayer__Syms*>(userp);
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VDebayer::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VDebayer__Syms* __restrict vlSymsp = static_cast<VDebayer__Syms*>(userp);
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+50,"clock", false,-1);
        tracep->declBit(c+51,"reset", false,-1);
        tracep->declBus(c+52,"address_in", false,-1, 18,0);
        tracep->declBus(c+53,"address_out", false,-1, 18,0);
        tracep->declBus(c+54,"raw", false,-1, 7,0);
        tracep->declBus(c+55,"red", false,-1, 7,0);
        tracep->declBus(c+56,"green", false,-1, 7,0);
        tracep->declBus(c+57,"blue", false,-1, 7,0);
        tracep->declBus(c+58,"Debayer size_x", false,-1, 31,0);
        tracep->declBus(c+58,"Debayer size_y", false,-1, 31,0);
        tracep->declBit(c+50,"Debayer clock", false,-1);
        tracep->declBit(c+51,"Debayer reset", false,-1);
        tracep->declBus(c+52,"Debayer address_in", false,-1, 18,0);
        tracep->declBus(c+53,"Debayer address_out", false,-1, 18,0);
        tracep->declBus(c+54,"Debayer raw", false,-1, 7,0);
        tracep->declBus(c+55,"Debayer red", false,-1, 7,0);
        tracep->declBus(c+56,"Debayer green", false,-1, 7,0);
        tracep->declBus(c+57,"Debayer blue", false,-1, 7,0);
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+2+i*1,"Debayer line0", true,(i+0), 7,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+12+i*1,"Debayer line1", true,(i+0), 7,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+22+i*1,"Debayer line2", true,(i+0), 7,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+32+i*1,"Debayer line3", true,(i+0), 7,0);}}
        tracep->declBus(c+42,"Debayer red_r", false,-1, 7,0);
        tracep->declBus(c+43,"Debayer green_r", false,-1, 7,0);
        tracep->declBus(c+44,"Debayer blue_r", false,-1, 7,0);
        tracep->declBus(c+45,"Debayer cX", false,-1, 31,0);
        tracep->declBus(c+46,"Debayer cY", false,-1, 31,0);
        tracep->declBus(c+47,"Debayer line_sel", false,-1, 1,0);
        tracep->declBus(c+48,"Debayer address_out_r", false,-1, 18,0);
        tracep->declBus(c+1,"Debayer i", false,-1, 31,0);
        tracep->declBus(c+49,"Debayer raw_pix", false,-1, 8,0);
    }
}

void VDebayer::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VDebayer::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VDebayer__Syms* __restrict vlSymsp = static_cast<VDebayer__Syms*>(userp);
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VDebayer::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VDebayer__Syms* __restrict vlSymsp = static_cast<VDebayer__Syms*>(userp);
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->Debayer__DOT__i),32);
        tracep->fullCData(oldp+2,(vlTOPp->Debayer__DOT__line0[0]),8);
        tracep->fullCData(oldp+3,(vlTOPp->Debayer__DOT__line0[1]),8);
        tracep->fullCData(oldp+4,(vlTOPp->Debayer__DOT__line0[2]),8);
        tracep->fullCData(oldp+5,(vlTOPp->Debayer__DOT__line0[3]),8);
        tracep->fullCData(oldp+6,(vlTOPp->Debayer__DOT__line0[4]),8);
        tracep->fullCData(oldp+7,(vlTOPp->Debayer__DOT__line0[5]),8);
        tracep->fullCData(oldp+8,(vlTOPp->Debayer__DOT__line0[6]),8);
        tracep->fullCData(oldp+9,(vlTOPp->Debayer__DOT__line0[7]),8);
        tracep->fullCData(oldp+10,(vlTOPp->Debayer__DOT__line0[8]),8);
        tracep->fullCData(oldp+11,(vlTOPp->Debayer__DOT__line0[9]),8);
        tracep->fullCData(oldp+12,(vlTOPp->Debayer__DOT__line1[0]),8);
        tracep->fullCData(oldp+13,(vlTOPp->Debayer__DOT__line1[1]),8);
        tracep->fullCData(oldp+14,(vlTOPp->Debayer__DOT__line1[2]),8);
        tracep->fullCData(oldp+15,(vlTOPp->Debayer__DOT__line1[3]),8);
        tracep->fullCData(oldp+16,(vlTOPp->Debayer__DOT__line1[4]),8);
        tracep->fullCData(oldp+17,(vlTOPp->Debayer__DOT__line1[5]),8);
        tracep->fullCData(oldp+18,(vlTOPp->Debayer__DOT__line1[6]),8);
        tracep->fullCData(oldp+19,(vlTOPp->Debayer__DOT__line1[7]),8);
        tracep->fullCData(oldp+20,(vlTOPp->Debayer__DOT__line1[8]),8);
        tracep->fullCData(oldp+21,(vlTOPp->Debayer__DOT__line1[9]),8);
        tracep->fullCData(oldp+22,(vlTOPp->Debayer__DOT__line2[0]),8);
        tracep->fullCData(oldp+23,(vlTOPp->Debayer__DOT__line2[1]),8);
        tracep->fullCData(oldp+24,(vlTOPp->Debayer__DOT__line2[2]),8);
        tracep->fullCData(oldp+25,(vlTOPp->Debayer__DOT__line2[3]),8);
        tracep->fullCData(oldp+26,(vlTOPp->Debayer__DOT__line2[4]),8);
        tracep->fullCData(oldp+27,(vlTOPp->Debayer__DOT__line2[5]),8);
        tracep->fullCData(oldp+28,(vlTOPp->Debayer__DOT__line2[6]),8);
        tracep->fullCData(oldp+29,(vlTOPp->Debayer__DOT__line2[7]),8);
        tracep->fullCData(oldp+30,(vlTOPp->Debayer__DOT__line2[8]),8);
        tracep->fullCData(oldp+31,(vlTOPp->Debayer__DOT__line2[9]),8);
        tracep->fullCData(oldp+32,(vlTOPp->Debayer__DOT__line3[0]),8);
        tracep->fullCData(oldp+33,(vlTOPp->Debayer__DOT__line3[1]),8);
        tracep->fullCData(oldp+34,(vlTOPp->Debayer__DOT__line3[2]),8);
        tracep->fullCData(oldp+35,(vlTOPp->Debayer__DOT__line3[3]),8);
        tracep->fullCData(oldp+36,(vlTOPp->Debayer__DOT__line3[4]),8);
        tracep->fullCData(oldp+37,(vlTOPp->Debayer__DOT__line3[5]),8);
        tracep->fullCData(oldp+38,(vlTOPp->Debayer__DOT__line3[6]),8);
        tracep->fullCData(oldp+39,(vlTOPp->Debayer__DOT__line3[7]),8);
        tracep->fullCData(oldp+40,(vlTOPp->Debayer__DOT__line3[8]),8);
        tracep->fullCData(oldp+41,(vlTOPp->Debayer__DOT__line3[9]),8);
        tracep->fullCData(oldp+42,(vlTOPp->Debayer__DOT__red_r),8);
        tracep->fullCData(oldp+43,(vlTOPp->Debayer__DOT__green_r),8);
        tracep->fullCData(oldp+44,(vlTOPp->Debayer__DOT__blue_r),8);
        tracep->fullIData(oldp+45,(vlTOPp->Debayer__DOT__cX),32);
        tracep->fullIData(oldp+46,(vlTOPp->Debayer__DOT__cY),32);
        tracep->fullCData(oldp+47,(vlTOPp->Debayer__DOT__line_sel),2);
        tracep->fullIData(oldp+48,(vlTOPp->Debayer__DOT__address_out_r),19);
        tracep->fullSData(oldp+49,(vlTOPp->Debayer__DOT__raw_pix),9);
        tracep->fullBit(oldp+50,(vlTOPp->clock));
        tracep->fullBit(oldp+51,(vlTOPp->reset));
        tracep->fullIData(oldp+52,(vlTOPp->address_in),19);
        tracep->fullIData(oldp+53,(vlTOPp->address_out),19);
        tracep->fullCData(oldp+54,(vlTOPp->raw),8);
        tracep->fullCData(oldp+55,(vlTOPp->red),8);
        tracep->fullCData(oldp+56,(vlTOPp->green),8);
        tracep->fullCData(oldp+57,(vlTOPp->blue),8);
        tracep->fullIData(oldp+58,(0xaU),32);
    }
}
