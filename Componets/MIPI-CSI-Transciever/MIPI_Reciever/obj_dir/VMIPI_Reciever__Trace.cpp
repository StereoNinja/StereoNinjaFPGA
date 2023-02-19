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
            tracep->chgBit(oldp+0,(vlTOPp->MIPI_Reciever__DOT__rec_data));
            tracep->chgBit(oldp+1,(vlTOPp->MIPI_Reciever__DOT__sync));
            tracep->chgBit(oldp+2,(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+3,(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2));
            tracep->chgCData(oldp+4,(vlTOPp->MIPI_Reciever__DOT__div2__DOT__counter),8);
            tracep->chgBit(oldp+5,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__A));
            tracep->chgBit(oldp+6,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__C));
            tracep->chgBit(oldp+7,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__A));
            tracep->chgBit(oldp+8,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__C));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+9,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__B));
            tracep->chgBit(oldp+10,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__D1));
            tracep->chgBit(oldp+11,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__B));
            tracep->chgBit(oldp+12,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__D1));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+13,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__q_o_r),4);
            tracep->chgCData(oldp+14,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__q_o_r),4);
            tracep->chgCData(oldp+15,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ov_fl_r1),2);
            tracep->chgCData(oldp+16,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ov_fl_r1),2);
            tracep->chgBit(oldp+17,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r));
            tracep->chgBit(oldp+18,(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_4));
            tracep->chgCData(oldp+19,(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte0_r),8);
            tracep->chgCData(oldp+20,(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte1_r),8);
            tracep->chgCData(oldp+21,(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte0_r),8);
            tracep->chgCData(oldp+22,(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte1_r),8);
            tracep->chgCData(oldp+23,(vlTOPp->MIPI_Reciever__DOT__div4__DOT__counter),8);
            tracep->chgBit(oldp+24,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__sync_r));
            tracep->chgCData(oldp+25,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ov_fl_r0),2);
            tracep->chgCData(oldp+26,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte),8);
            tracep->chgCData(oldp+27,((0xb8U ^ (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte))),8);
            tracep->chgCData(oldp+28,((0x2eU ^ (0x3fU 
                                                & (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte)))),8);
            tracep->chgBit(oldp+29,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__even_r));
            tracep->chgBit(oldp+30,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__sync_r));
            tracep->chgCData(oldp+31,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ov_fl_r0),2);
            tracep->chgCData(oldp+32,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte),8);
            tracep->chgCData(oldp+33,((0xb8U ^ (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte))),8);
            tracep->chgCData(oldp+34,((0x2eU ^ (0x3fU 
                                                & (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte)))),8);
            tracep->chgCData(oldp+35,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__counter),8);
            tracep->chgCData(oldp+36,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r)
                                        ? (IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte0_r)
                                        : (IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte1_r))),8);
            tracep->chgCData(oldp+37,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__counter),8);
            tracep->chgCData(oldp+38,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r)
                                        ? (IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte0_r)
                                        : (IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte1_r))),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+39,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r));
            tracep->chgBit(oldp+40,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__state));
            tracep->chgBit(oldp+41,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__valid_old));
            tracep->chgIData(oldp+42,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter),32);
            tracep->chgIData(oldp+43,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__count_val),32);
            tracep->chgIData(oldp+44,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__data_o_r),32);
            tracep->chgIData(oldp+45,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr),32);
            tracep->chgIData(oldp+46,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__cX_r),32);
            tracep->chgIData(oldp+47,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__cY_r),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgIData(oldp+48,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r),32);
            tracep->chgBit(oldp+49,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r));
            tracep->chgCData(oldp+50,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__type_o_r),6);
            tracep->chgSData(oldp+51,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__wordcount_r),16);
            tracep->chgIData(oldp+52,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r),32);
            tracep->chgBit(oldp+53,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__start));
            tracep->chgCData(oldp+54,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__counter),8);
            tracep->chgCData(oldp+55,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc),8);
            tracep->chgBit(oldp+56,((1U & ((IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc) 
                                           ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                              >> 0x18U)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+57,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r));
            tracep->chgCData(oldp+58,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi),8);
            tracep->chgBit(oldp+59,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__term_r));
            tracep->chgBit(oldp+60,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__debug0_r));
            tracep->chgIData(oldp+61,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou),32);
            tracep->chgIData(oldp+62,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_term),32);
            tracep->chgIData(oldp+63,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_hs),32);
        }
        tracep->chgBit(oldp+64,(vlTOPp->sys_clk));
        tracep->chgBit(oldp+65,(vlTOPp->reset));
        tracep->chgBit(oldp+66,(vlTOPp->lane0_d));
        tracep->chgBit(oldp+67,(vlTOPp->mipi_clk));
        tracep->chgBit(oldp+68,(vlTOPp->mipi_clk_8));
        tracep->chgBit(oldp+69,(vlTOPp->lane1_d));
        tracep->chgBit(oldp+70,(vlTOPp->lane0_p));
        tracep->chgBit(oldp+71,(vlTOPp->lane0_n));
        tracep->chgBit(oldp+72,(vlTOPp->lane1_p));
        tracep->chgBit(oldp+73,(vlTOPp->lane1_n));
        tracep->chgIData(oldp+74,(vlTOPp->data_o),32);
        tracep->chgIData(oldp+75,(vlTOPp->adress_out),32);
        tracep->chgBit(oldp+76,(vlTOPp->ram_clk));
        tracep->chgBit(oldp+77,(vlTOPp->debug0));
        tracep->chgBit(oldp+78,(vlTOPp->debug1));
        tracep->chgBit(oldp+79,(vlTOPp->debug2));
        tracep->chgBit(oldp+80,(vlTOPp->termination));
        tracep->chgBit(oldp+81,(vlTOPp->rec_data_o));
        tracep->chgIData(oldp+82,(vlTOPp->cX),32);
        tracep->chgIData(oldp+83,(vlTOPp->cY),32);
        tracep->chgBit(oldp+84,(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8));
        tracep->chgCData(oldp+85,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r),8);
        tracep->chgCData(oldp+86,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r),8);
        tracep->chgCData(oldp+87,(vlTOPp->MIPI_Reciever__DOT__div8__DOT__counter),8);
        tracep->chgCData(oldp+88,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ddr),4);
        tracep->chgBit(oldp+89,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__sync_r) 
                                 & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r)))));
        tracep->chgCData(oldp+90,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ddr),4);
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
        vlTOPp->__Vm_traceActivity[7U] = 0U;
    }
}
