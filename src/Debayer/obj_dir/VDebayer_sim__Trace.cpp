// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDebayer_sim__Syms.h"


void VDebayer_sim::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VDebayer_sim__Syms* __restrict vlSymsp = static_cast<VDebayer_sim__Syms*>(userp);
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VDebayer_sim::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VDebayer_sim__Syms* __restrict vlSymsp = static_cast<VDebayer_sim__Syms*>(userp);
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->Debayer_sim__DOT__debay__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+1,(vlTOPp->Debayer_sim__DOT__debay__DOT__address_out_r),19);
            tracep->chgIData(oldp+2,(vlTOPp->Debayer_sim__DOT__ramdata),32);
            tracep->chgCData(oldp+3,(vlTOPp->Debayer_sim__DOT__counter),8);
            tracep->chgIData(oldp+4,(vlTOPp->Debayer_sim__DOT__color_w),32);
            tracep->chgCData(oldp+5,(vlTOPp->Debayer_sim__DOT__raw_v),8);
            tracep->chgBit(oldp+6,((1U & (IData)(vlTOPp->Debayer_sim__DOT__debay__DOT__green_r))));
            tracep->chgCData(oldp+7,(vlTOPp->Debayer_sim__DOT__debay__DOT__green_r),8);
            tracep->chgCData(oldp+8,(vlTOPp->Debayer_sim__DOT__debay__DOT__red_r),8);
            tracep->chgCData(oldp+9,(vlTOPp->Debayer_sim__DOT__debay__DOT__blue_r),8);
            tracep->chgIData(oldp+10,(vlTOPp->Debayer_sim__DOT__debay__DOT__cX),32);
            tracep->chgIData(oldp+11,(vlTOPp->Debayer_sim__DOT__debay__DOT__cY),32);
            tracep->chgCData(oldp+12,(vlTOPp->Debayer_sim__DOT__debay__DOT__line_sel),2);
            tracep->chgCData(oldp+13,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[0]),8);
            tracep->chgCData(oldp+14,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[1]),8);
            tracep->chgCData(oldp+15,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[2]),8);
            tracep->chgCData(oldp+16,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[3]),8);
            tracep->chgCData(oldp+17,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[4]),8);
            tracep->chgCData(oldp+18,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[5]),8);
            tracep->chgCData(oldp+19,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[6]),8);
            tracep->chgCData(oldp+20,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[7]),8);
            tracep->chgCData(oldp+21,(vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[8]),8);
            tracep->chgIData(oldp+22,((0x1ffffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__address_out_r 
                                                   >> 2U))),17);
        }
        tracep->chgBit(oldp+23,(vlTOPp->clock));
        tracep->chgBit(oldp+24,(vlTOPp->reset));
        tracep->chgIData(oldp+25,(vlTOPp->address_in),19);
        tracep->chgCData(oldp+26,(vlTOPp->red),8);
        tracep->chgCData(oldp+27,(vlTOPp->green),8);
        tracep->chgCData(oldp+28,(vlTOPp->blue),8);
    }
}

void VDebayer_sim::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VDebayer_sim__Syms* __restrict vlSymsp = static_cast<VDebayer_sim__Syms*>(userp);
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
