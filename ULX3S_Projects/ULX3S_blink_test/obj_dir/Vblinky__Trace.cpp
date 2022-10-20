// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vblinky__Syms.h"


void Vblinky::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vblinky__Syms* __restrict vlSymsp = static_cast<Vblinky__Syms*>(userp);
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vblinky::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vblinky__Syms* __restrict vlSymsp = static_cast<Vblinky__Syms*>(userp);
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->i_clk));
        tracep->chgCData(oldp+1,(vlTOPp->btn),7);
        tracep->chgCData(oldp+2,(vlTOPp->o_led),8);
        tracep->chgIData(oldp+3,(vlTOPp->blinky__DOT__ctr),32);
    }
}

void Vblinky::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vblinky__Syms* __restrict vlSymsp = static_cast<Vblinky__Syms*>(userp);
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
