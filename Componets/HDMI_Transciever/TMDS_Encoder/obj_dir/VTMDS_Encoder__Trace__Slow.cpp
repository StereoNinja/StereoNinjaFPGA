// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTMDS_Encoder__Syms.h"


//======================

void VTMDS_Encoder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VTMDS_Encoder::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTMDS_Encoder__Syms* __restrict vlSymsp = static_cast<VTMDS_Encoder__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VTMDS_Encoder::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VTMDS_Encoder::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VTMDS_Encoder__Syms* __restrict vlSymsp = static_cast<VTMDS_Encoder__Syms*>(userp);
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VTMDS_Encoder::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VTMDS_Encoder__Syms* __restrict vlSymsp = static_cast<VTMDS_Encoder__Syms*>(userp);
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+4,"clklow", false,-1);
        tracep->declBit(c+5,"clkhigh", false,-1);
        tracep->declBit(c+6,"reset", false,-1);
        tracep->declBus(c+7,"state", false,-1, 1,0);
        tracep->declBus(c+8,"pix_data", false,-1, 7,0);
        tracep->declBus(c+9,"H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+10,"aux_data", false,-1, 3,0);
        tracep->declBit(c+11,"data_o", false,-1);
        tracep->declBit(c+4,"TMDS_Encoder clklow", false,-1);
        tracep->declBit(c+5,"TMDS_Encoder clkhigh", false,-1);
        tracep->declBit(c+6,"TMDS_Encoder reset", false,-1);
        tracep->declBus(c+7,"TMDS_Encoder state", false,-1, 1,0);
        tracep->declBus(c+8,"TMDS_Encoder pix_data", false,-1, 7,0);
        tracep->declBus(c+9,"TMDS_Encoder H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+10,"TMDS_Encoder aux_data", false,-1, 3,0);
        tracep->declBit(c+11,"TMDS_Encoder data_o", false,-1);
        tracep->declBus(c+1,"TMDS_Encoder q_m", false,-1, 9,0);
        tracep->declBus(c+12,"TMDS_Encoder q_out", false,-1, 9,0);
        tracep->declBus(c+2,"TMDS_Encoder cnt", false,-1, 31,0);
        tracep->declBus(c+3,"TMDS_Encoder cnt_old", false,-1, 31,0);
    }
}

void VTMDS_Encoder::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VTMDS_Encoder::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VTMDS_Encoder__Syms* __restrict vlSymsp = static_cast<VTMDS_Encoder__Syms*>(userp);
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VTMDS_Encoder::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VTMDS_Encoder__Syms* __restrict vlSymsp = static_cast<VTMDS_Encoder__Syms*>(userp);
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->TMDS_Encoder__DOT__q_m),10);
        tracep->fullIData(oldp+2,(vlTOPp->TMDS_Encoder__DOT__cnt),32);
        tracep->fullIData(oldp+3,(vlTOPp->TMDS_Encoder__DOT__cnt_old),32);
        tracep->fullBit(oldp+4,(vlTOPp->clklow));
        tracep->fullBit(oldp+5,(vlTOPp->clkhigh));
        tracep->fullBit(oldp+6,(vlTOPp->reset));
        tracep->fullCData(oldp+7,(vlTOPp->state),2);
        tracep->fullCData(oldp+8,(vlTOPp->pix_data),8);
        tracep->fullCData(oldp+9,(vlTOPp->H_VSync_Ctr),2);
        tracep->fullCData(oldp+10,(vlTOPp->aux_data),4);
        tracep->fullBit(oldp+11,(vlTOPp->data_o));
        tracep->fullSData(oldp+12,(vlTOPp->TMDS_Encoder__DOT__q_out),10);
    }
}
