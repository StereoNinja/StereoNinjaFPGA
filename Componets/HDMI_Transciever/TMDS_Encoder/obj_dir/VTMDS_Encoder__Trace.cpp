// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTMDS_Encoder__Syms.h"


void VTMDS_Encoder::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VTMDS_Encoder__Syms* __restrict vlSymsp = static_cast<VTMDS_Encoder__Syms*>(userp);
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VTMDS_Encoder::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VTMDS_Encoder__Syms* __restrict vlSymsp = static_cast<VTMDS_Encoder__Syms*>(userp);
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->TMDS_Encoder__DOT__q_m),10);
            tracep->chgIData(oldp+1,(vlTOPp->TMDS_Encoder__DOT__cnt),32);
            tracep->chgIData(oldp+2,(vlTOPp->TMDS_Encoder__DOT__cnt_old),32);
        }
        tracep->chgBit(oldp+3,(vlTOPp->clklow));
        tracep->chgBit(oldp+4,(vlTOPp->clkhigh));
        tracep->chgBit(oldp+5,(vlTOPp->reset));
        tracep->chgCData(oldp+6,(vlTOPp->state),2);
        tracep->chgCData(oldp+7,(vlTOPp->pix_data),8);
        tracep->chgCData(oldp+8,(vlTOPp->H_VSync_Ctr),2);
        tracep->chgCData(oldp+9,(vlTOPp->aux_data),4);
        tracep->chgBit(oldp+10,(vlTOPp->data_o));
        tracep->chgSData(oldp+11,(vlTOPp->TMDS_Encoder__DOT__q_out),10);
    }
}

void VTMDS_Encoder::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VTMDS_Encoder__Syms* __restrict vlSymsp = static_cast<VTMDS_Encoder__Syms*>(userp);
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
