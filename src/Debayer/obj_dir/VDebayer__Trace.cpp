// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDebayer__Syms.h"


void VDebayer::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VDebayer__Syms* __restrict vlSymsp = static_cast<VDebayer__Syms*>(userp);
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VDebayer::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VDebayer__Syms* __restrict vlSymsp = static_cast<VDebayer__Syms*>(userp);
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clock));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgIData(oldp+2,(vlTOPp->address_in),19);
        tracep->chgIData(oldp+3,(vlTOPp->address_out),19);
        tracep->chgCData(oldp+4,(vlTOPp->raw),8);
        tracep->chgCData(oldp+5,(vlTOPp->red),8);
        tracep->chgCData(oldp+6,(vlTOPp->green),8);
        tracep->chgCData(oldp+7,(vlTOPp->blue),8);
    }
}

void VDebayer::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VDebayer__Syms* __restrict vlSymsp = static_cast<VDebayer__Syms*>(userp);
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
