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
            tracep->chgCData(oldp+1,(vlTOPp->Debayer__DOT__line0[0]),8);
            tracep->chgCData(oldp+2,(vlTOPp->Debayer__DOT__line0[1]),8);
            tracep->chgCData(oldp+3,(vlTOPp->Debayer__DOT__line0[2]),8);
            tracep->chgCData(oldp+4,(vlTOPp->Debayer__DOT__line0[3]),8);
            tracep->chgCData(oldp+5,(vlTOPp->Debayer__DOT__line0[4]),8);
            tracep->chgCData(oldp+6,(vlTOPp->Debayer__DOT__line0[5]),8);
            tracep->chgCData(oldp+7,(vlTOPp->Debayer__DOT__line0[6]),8);
            tracep->chgCData(oldp+8,(vlTOPp->Debayer__DOT__line0[7]),8);
            tracep->chgCData(oldp+9,(vlTOPp->Debayer__DOT__line0[8]),8);
            tracep->chgCData(oldp+10,(vlTOPp->Debayer__DOT__line0[9]),8);
            tracep->chgCData(oldp+11,(vlTOPp->Debayer__DOT__line1[0]),8);
            tracep->chgCData(oldp+12,(vlTOPp->Debayer__DOT__line1[1]),8);
            tracep->chgCData(oldp+13,(vlTOPp->Debayer__DOT__line1[2]),8);
            tracep->chgCData(oldp+14,(vlTOPp->Debayer__DOT__line1[3]),8);
            tracep->chgCData(oldp+15,(vlTOPp->Debayer__DOT__line1[4]),8);
            tracep->chgCData(oldp+16,(vlTOPp->Debayer__DOT__line1[5]),8);
            tracep->chgCData(oldp+17,(vlTOPp->Debayer__DOT__line1[6]),8);
            tracep->chgCData(oldp+18,(vlTOPp->Debayer__DOT__line1[7]),8);
            tracep->chgCData(oldp+19,(vlTOPp->Debayer__DOT__line1[8]),8);
            tracep->chgCData(oldp+20,(vlTOPp->Debayer__DOT__line1[9]),8);
            tracep->chgCData(oldp+21,(vlTOPp->Debayer__DOT__line2[0]),8);
            tracep->chgCData(oldp+22,(vlTOPp->Debayer__DOT__line2[1]),8);
            tracep->chgCData(oldp+23,(vlTOPp->Debayer__DOT__line2[2]),8);
            tracep->chgCData(oldp+24,(vlTOPp->Debayer__DOT__line2[3]),8);
            tracep->chgCData(oldp+25,(vlTOPp->Debayer__DOT__line2[4]),8);
            tracep->chgCData(oldp+26,(vlTOPp->Debayer__DOT__line2[5]),8);
            tracep->chgCData(oldp+27,(vlTOPp->Debayer__DOT__line2[6]),8);
            tracep->chgCData(oldp+28,(vlTOPp->Debayer__DOT__line2[7]),8);
            tracep->chgCData(oldp+29,(vlTOPp->Debayer__DOT__line2[8]),8);
            tracep->chgCData(oldp+30,(vlTOPp->Debayer__DOT__line2[9]),8);
            tracep->chgCData(oldp+31,(vlTOPp->Debayer__DOT__line3[0]),8);
            tracep->chgCData(oldp+32,(vlTOPp->Debayer__DOT__line3[1]),8);
            tracep->chgCData(oldp+33,(vlTOPp->Debayer__DOT__line3[2]),8);
            tracep->chgCData(oldp+34,(vlTOPp->Debayer__DOT__line3[3]),8);
            tracep->chgCData(oldp+35,(vlTOPp->Debayer__DOT__line3[4]),8);
            tracep->chgCData(oldp+36,(vlTOPp->Debayer__DOT__line3[5]),8);
            tracep->chgCData(oldp+37,(vlTOPp->Debayer__DOT__line3[6]),8);
            tracep->chgCData(oldp+38,(vlTOPp->Debayer__DOT__line3[7]),8);
            tracep->chgCData(oldp+39,(vlTOPp->Debayer__DOT__line3[8]),8);
            tracep->chgCData(oldp+40,(vlTOPp->Debayer__DOT__line3[9]),8);
            tracep->chgCData(oldp+41,(vlTOPp->Debayer__DOT__red_r),8);
            tracep->chgCData(oldp+42,(vlTOPp->Debayer__DOT__green_r),8);
            tracep->chgCData(oldp+43,(vlTOPp->Debayer__DOT__blue_r),8);
            tracep->chgIData(oldp+44,(vlTOPp->Debayer__DOT__cX),32);
            tracep->chgIData(oldp+45,(vlTOPp->Debayer__DOT__cY),32);
            tracep->chgCData(oldp+46,(vlTOPp->Debayer__DOT__line_sel),2);
            tracep->chgIData(oldp+47,(vlTOPp->Debayer__DOT__address_out_r),19);
            tracep->chgSData(oldp+48,(vlTOPp->Debayer__DOT__raw_pix),9);
        }
        tracep->chgBit(oldp+49,(vlTOPp->clock));
        tracep->chgBit(oldp+50,(vlTOPp->reset));
        tracep->chgIData(oldp+51,(vlTOPp->address_in),19);
        tracep->chgIData(oldp+52,(vlTOPp->address_out),19);
        tracep->chgCData(oldp+53,(vlTOPp->raw),8);
        tracep->chgCData(oldp+54,(vlTOPp->red),8);
        tracep->chgCData(oldp+55,(vlTOPp->green),8);
        tracep->chgCData(oldp+56,(vlTOPp->blue),8);
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
