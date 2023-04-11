// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMIPI_Reciever__Syms.h"


void VMIPI_Reciever::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VMIPI_Reciever__Syms* __restrict vlSymsp = static_cast<VMIPI_Reciever__Syms*>(userp);
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VMIPI_Reciever::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VMIPI_Reciever__Syms* __restrict vlSymsp = static_cast<VMIPI_Reciever__Syms*>(userp);
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__q_o_r),2);
            tracep->chgCData(oldp+1,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__q_o_r),2);
            tracep->chgBit(oldp+2,(vlTOPp->MIPI_Reciever__DOT__mipi_clk_2));
            tracep->chgCData(oldp+3,(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte_r),8);
            tracep->chgCData(oldp+4,(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte_r),8);
            tracep->chgCData(oldp+5,(vlTOPp->MIPI_Reciever__DOT__div2__DOT__counter),8);
            tracep->chgCData(oldp+6,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__byte_r),8);
            tracep->chgBit(oldp+7,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__l0__DOT__Q0_r));
            tracep->chgBit(oldp+8,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__sync_r));
            tracep->chgCData(oldp+9,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__byte_r),8);
            tracep->chgBit(oldp+10,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__l0__DOT__Q0_r));
            tracep->chgCData(oldp+11,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__counter),8);
            tracep->chgCData(oldp+12,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__counter),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+13,(vlTOPp->MIPI_Reciever__DOT__mipi_clk_8));
            tracep->chgCData(oldp+14,(vlTOPp->MIPI_Reciever__DOT__div8__DOT__counter),8);
            tracep->chgBit(oldp+15,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+16,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r));
            tracep->chgBit(oldp+17,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__state));
            tracep->chgBit(oldp+18,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__valid_old));
            tracep->chgIData(oldp+19,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter),32);
            tracep->chgIData(oldp+20,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__count_val),32);
            tracep->chgIData(oldp+21,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__data_o_r),32);
            tracep->chgIData(oldp+22,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr),32);
            tracep->chgIData(oldp+23,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__cX_r),32);
            tracep->chgIData(oldp+24,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__cY_r),32);
            tracep->chgSData(oldp+25,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgIData(oldp+26,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r),32);
            tracep->chgCData(oldp+27,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__type_o_r),6);
            tracep->chgSData(oldp+28,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__wordcount_r),16);
            tracep->chgIData(oldp+29,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r),32);
            tracep->chgIData(oldp+30,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r_old),32);
            tracep->chgBit(oldp+31,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__start));
            tracep->chgIData(oldp+32,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__counter),32);
            tracep->chgCData(oldp+33,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc),8);
            tracep->chgCData(oldp+34,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom),8);
            tracep->chgIData(oldp+35,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction),24);
            tracep->chgIData(oldp+36,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__regheader_correct),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+37,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__sync_r));
            tracep->chgCData(oldp+38,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r),8);
            tracep->chgCData(oldp+39,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+40,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r));
            tracep->chgCData(oldp+41,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi),8);
            tracep->chgBit(oldp+42,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__term_r));
            tracep->chgBit(oldp+43,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__debug0_r));
            tracep->chgIData(oldp+44,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou),32);
            tracep->chgIData(oldp+45,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_term),32);
            tracep->chgIData(oldp+46,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_hs),32);
        }
        tracep->chgBit(oldp+47,(vlTOPp->sys_clk));
        tracep->chgBit(oldp+48,(vlTOPp->reset));
        tracep->chgBit(oldp+49,(vlTOPp->lane0_d));
        tracep->chgBit(oldp+50,(vlTOPp->mipi_clk));
        tracep->chgBit(oldp+51,(vlTOPp->lane1_d));
        tracep->chgBit(oldp+52,(vlTOPp->lane0_p));
        tracep->chgBit(oldp+53,(vlTOPp->lane0_n));
        tracep->chgBit(oldp+54,(vlTOPp->lane1_p));
        tracep->chgBit(oldp+55,(vlTOPp->lane1_n));
        tracep->chgIData(oldp+56,(vlTOPp->data_o),32);
        tracep->chgIData(oldp+57,(vlTOPp->address_out),32);
        tracep->chgBit(oldp+58,(vlTOPp->ram_clk));
        tracep->chgBit(oldp+59,(vlTOPp->debug0));
        tracep->chgBit(oldp+60,(vlTOPp->debug1));
        tracep->chgBit(oldp+61,(vlTOPp->debug3));
        tracep->chgBit(oldp+62,(vlTOPp->debug2));
        tracep->chgBit(oldp+63,(vlTOPp->termination));
        tracep->chgBit(oldp+64,(vlTOPp->rec_data_o));
        tracep->chgBit(oldp+65,(vlTOPp->MIPI_Reciever__DOT__rec_data));
        tracep->chgBit(oldp+66,(vlTOPp->MIPI_Reciever__DOT__mipi_clk_4));
        tracep->chgBit(oldp+67,(vlTOPp->MIPI_Reciever__DOT__valid));
        tracep->chgCData(oldp+68,(vlTOPp->MIPI_Reciever__DOT__div4__DOT__counter),8);
        tracep->chgCData(oldp+69,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ddr),2);
        tracep->chgBit(oldp+70,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__l0__DOT__Q1_r));
        tracep->chgCData(oldp+71,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ddr),2);
        tracep->chgBit(oldp+72,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__l0__DOT__Q1_r));
        tracep->chgSData(oldp+73,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk),16);
    }
}

void VMIPI_Reciever::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VMIPI_Reciever__Syms* __restrict vlSymsp = static_cast<VMIPI_Reciever__Syms*>(userp);
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
    }
}
