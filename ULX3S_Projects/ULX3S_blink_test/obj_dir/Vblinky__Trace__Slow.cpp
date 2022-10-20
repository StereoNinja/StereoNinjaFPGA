// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vblinky__Syms.h"


//======================

void Vblinky::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vblinky::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vblinky__Syms* __restrict vlSymsp = static_cast<Vblinky__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vblinky::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vblinky::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vblinky__Syms* __restrict vlSymsp = static_cast<Vblinky__Syms*>(userp);
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vblinky::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vblinky__Syms* __restrict vlSymsp = static_cast<Vblinky__Syms*>(userp);
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"i_clk", false,-1);
        tracep->declBus(c+2,"btn", false,-1, 6,0);
        tracep->declBus(c+3,"o_led", false,-1, 7,0);
        tracep->declBit(c+1,"blinky i_clk", false,-1);
        tracep->declBus(c+2,"blinky btn", false,-1, 6,0);
        tracep->declBus(c+3,"blinky o_led", false,-1, 7,0);
        tracep->declBus(c+5,"blinky ctr_width", false,-1, 31,0);
        tracep->declBus(c+4,"blinky ctr", false,-1, 31,0);
    }
}

void Vblinky::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vblinky::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vblinky__Syms* __restrict vlSymsp = static_cast<Vblinky__Syms*>(userp);
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vblinky::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vblinky__Syms* __restrict vlSymsp = static_cast<Vblinky__Syms*>(userp);
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->i_clk));
        tracep->fullCData(oldp+2,(vlTOPp->btn),7);
        tracep->fullCData(oldp+3,(vlTOPp->o_led),8);
        tracep->fullIData(oldp+4,(vlTOPp->blinky__DOT__ctr),32);
        tracep->fullIData(oldp+5,(0x20U),32);
    }
}
