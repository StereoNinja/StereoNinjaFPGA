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
        tracep->declBit(c+10,"clock", false,-1);
        tracep->declBit(c+11,"reset", false,-1);
        tracep->declBus(c+12,"address_in", false,-1, 18,0);
        tracep->declBus(c+13,"address_out", false,-1, 18,0);
        tracep->declBus(c+14,"raw", false,-1, 7,0);
        tracep->declBus(c+15,"red", false,-1, 7,0);
        tracep->declBus(c+16,"green", false,-1, 7,0);
        tracep->declBus(c+17,"blue", false,-1, 7,0);
        tracep->declBus(c+18,"Debayer size_x", false,-1, 31,0);
        tracep->declBus(c+19,"Debayer size_y", false,-1, 31,0);
        tracep->declBit(c+10,"Debayer clock", false,-1);
        tracep->declBit(c+11,"Debayer reset", false,-1);
        tracep->declBus(c+12,"Debayer address_in", false,-1, 18,0);
        tracep->declBus(c+13,"Debayer address_out", false,-1, 18,0);
        tracep->declBus(c+14,"Debayer raw", false,-1, 7,0);
        tracep->declBus(c+15,"Debayer red", false,-1, 7,0);
        tracep->declBus(c+16,"Debayer green", false,-1, 7,0);
        tracep->declBus(c+17,"Debayer blue", false,-1, 7,0);
        tracep->declBus(c+2,"Debayer red_r", false,-1, 7,0);
        tracep->declBus(c+3,"Debayer green_r", false,-1, 7,0);
        tracep->declBus(c+4,"Debayer blue_r", false,-1, 7,0);
        tracep->declBus(c+5,"Debayer cX", false,-1, 31,0);
        tracep->declBus(c+6,"Debayer cY", false,-1, 31,0);
        tracep->declBus(c+7,"Debayer line_sel", false,-1, 1,0);
        tracep->declBus(c+8,"Debayer address_out_r", false,-1, 18,0);
        tracep->declBus(c+1,"Debayer i", false,-1, 31,0);
        tracep->declBus(c+9,"Debayer raw_pix", false,-1, 8,0);
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
        tracep->fullCData(oldp+2,(vlTOPp->Debayer__DOT__red_r),8);
        tracep->fullCData(oldp+3,(vlTOPp->Debayer__DOT__green_r),8);
        tracep->fullCData(oldp+4,(vlTOPp->Debayer__DOT__blue_r),8);
        tracep->fullIData(oldp+5,(vlTOPp->Debayer__DOT__cX),32);
        tracep->fullIData(oldp+6,(vlTOPp->Debayer__DOT__cY),32);
        tracep->fullCData(oldp+7,(vlTOPp->Debayer__DOT__line_sel),2);
        tracep->fullIData(oldp+8,(vlTOPp->Debayer__DOT__address_out_r),19);
        tracep->fullSData(oldp+9,(vlTOPp->Debayer__DOT__raw_pix),9);
        tracep->fullBit(oldp+10,(vlTOPp->clock));
        tracep->fullBit(oldp+11,(vlTOPp->reset));
        tracep->fullIData(oldp+12,(vlTOPp->address_in),19);
        tracep->fullIData(oldp+13,(vlTOPp->address_out),19);
        tracep->fullCData(oldp+14,(vlTOPp->raw),8);
        tracep->fullCData(oldp+15,(vlTOPp->red),8);
        tracep->fullCData(oldp+16,(vlTOPp->green),8);
        tracep->fullCData(oldp+17,(vlTOPp->blue),8);
        tracep->fullIData(oldp+18,(0x280U),32);
        tracep->fullIData(oldp+19,(0x1e0U),32);
    }
}
