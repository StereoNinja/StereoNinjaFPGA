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
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBus(c+3,"address_in", false,-1, 18,0);
        tracep->declBus(c+4,"address_out", false,-1, 18,0);
        tracep->declBus(c+5,"raw", false,-1, 7,0);
        tracep->declBus(c+6,"red", false,-1, 7,0);
        tracep->declBus(c+7,"green", false,-1, 7,0);
        tracep->declBus(c+8,"blue", false,-1, 7,0);
        tracep->declBit(c+1,"Debayer clock", false,-1);
        tracep->declBit(c+2,"Debayer reset", false,-1);
        tracep->declBus(c+3,"Debayer address_in", false,-1, 18,0);
        tracep->declBus(c+4,"Debayer address_out", false,-1, 18,0);
        tracep->declBus(c+5,"Debayer raw", false,-1, 7,0);
        tracep->declBus(c+6,"Debayer red", false,-1, 7,0);
        tracep->declBus(c+7,"Debayer green", false,-1, 7,0);
        tracep->declBus(c+8,"Debayer blue", false,-1, 7,0);
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
        tracep->fullBit(oldp+1,(vlTOPp->clock));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullIData(oldp+3,(vlTOPp->address_in),19);
        tracep->fullIData(oldp+4,(vlTOPp->address_out),19);
        tracep->fullCData(oldp+5,(vlTOPp->raw),8);
        tracep->fullCData(oldp+6,(vlTOPp->red),8);
        tracep->fullCData(oldp+7,(vlTOPp->green),8);
        tracep->fullCData(oldp+8,(vlTOPp->blue),8);
    }
}
