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
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->Debayer__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+1,(vlTOPp->Debayer__DOT__red_r),8);
            tracep->chgCData(oldp+2,(vlTOPp->Debayer__DOT__green_r),8);
            tracep->chgCData(oldp+3,(vlTOPp->Debayer__DOT__blue_r),8);
            tracep->chgIData(oldp+4,(vlTOPp->Debayer__DOT__cX),32);
            tracep->chgIData(oldp+5,(vlTOPp->Debayer__DOT__cY),32);
            tracep->chgCData(oldp+6,(vlTOPp->Debayer__DOT__line_sel),2);
            tracep->chgIData(oldp+7,(vlTOPp->Debayer__DOT__address_out_r),19);
            tracep->chgCData(oldp+8,(vlTOPp->Debayer__DOT__raw_pix[0]),8);
            tracep->chgCData(oldp+9,(vlTOPp->Debayer__DOT__raw_pix[1]),8);
            tracep->chgCData(oldp+10,(vlTOPp->Debayer__DOT__raw_pix[2]),8);
            tracep->chgCData(oldp+11,(vlTOPp->Debayer__DOT__raw_pix[3]),8);
            tracep->chgCData(oldp+12,(vlTOPp->Debayer__DOT__raw_pix[4]),8);
            tracep->chgCData(oldp+13,(vlTOPp->Debayer__DOT__raw_pix[5]),8);
            tracep->chgCData(oldp+14,(vlTOPp->Debayer__DOT__raw_pix[6]),8);
            tracep->chgCData(oldp+15,(vlTOPp->Debayer__DOT__raw_pix[7]),8);
            tracep->chgCData(oldp+16,(vlTOPp->Debayer__DOT__raw_pix[8]),8);
        }
        tracep->chgBit(oldp+17,(vlTOPp->clock));
        tracep->chgBit(oldp+18,(vlTOPp->reset));
        tracep->chgIData(oldp+19,(vlTOPp->address_in),19);
        tracep->chgIData(oldp+20,(vlTOPp->address_out),19);
        tracep->chgCData(oldp+21,(vlTOPp->raw),8);
        tracep->chgCData(oldp+22,(vlTOPp->red),8);
        tracep->chgCData(oldp+23,(vlTOPp->green),8);
        tracep->chgCData(oldp+24,(vlTOPp->blue),8);
    }
}

void VDebayer::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VDebayer__Syms* __restrict vlSymsp = static_cast<VDebayer__Syms*>(userp);
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
