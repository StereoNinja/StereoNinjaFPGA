// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHDMI_Transciever__Syms.h"


void VHDMI_Transciever::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VHDMI_Transciever::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlTOPp->HDMI_Transciever__DOT__h),32);
            tracep->chgIData(oldp+1,(vlTOPp->HDMI_Transciever__DOT__v),32);
            tracep->chgCData(oldp+2,(vlTOPp->HDMI_Transciever__DOT__state),2);
            tracep->chgCData(oldp+3,(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0),2);
            tracep->chgCData(oldp+4,(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_1),2);
            tracep->chgCData(oldp+5,(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_2),2);
            tracep->chgIData(oldp+6,(vlTOPp->HDMI_Transciever__DOT__addr),26);
            tracep->chgBit(oldp+7,(vlTOPp->HDMI_Transciever__DOT__first));
            tracep->chgSData(oldp+8,(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m),10);
            tracep->chgIData(oldp+9,(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt),32);
            tracep->chgIData(oldp+10,(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old),32);
            tracep->chgSData(oldp+11,(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m),10);
            tracep->chgIData(oldp+12,(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt),32);
            tracep->chgIData(oldp+13,(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old),32);
            tracep->chgSData(oldp+14,(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m),10);
            tracep->chgIData(oldp+15,(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt),32);
            tracep->chgIData(oldp+16,(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old),32);
        }
        tracep->chgBit(oldp+17,(vlTOPp->clk_low));
        tracep->chgBit(oldp+18,(vlTOPp->clk_high));
        tracep->chgBit(oldp+19,(vlTOPp->reset));
        tracep->chgBit(oldp+20,(vlTOPp->red));
        tracep->chgBit(oldp+21,(vlTOPp->green));
        tracep->chgBit(oldp+22,(vlTOPp->blue));
        tracep->chgBit(oldp+23,(vlTOPp->clock));
        tracep->chgIData(oldp+24,(vlTOPp->ram_addr),26);
        tracep->chgCData(oldp+25,(vlTOPp->ram_green),8);
        tracep->chgCData(oldp+26,(vlTOPp->ram_blue),8);
        tracep->chgCData(oldp+27,(vlTOPp->ram_red),8);
        tracep->chgSData(oldp+28,(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out),10);
        tracep->chgSData(oldp+29,(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out),10);
        tracep->chgSData(oldp+30,(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out),10);
    }
}

void VHDMI_Transciever::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
