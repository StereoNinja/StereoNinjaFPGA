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
            tracep->chgBit(oldp+0,(vlTOPp->MIPI_Reciever__DOT__SYNC__DOT__eclki_r2));
            tracep->chgBit(oldp+1,(vlTOPp->MIPI_Reciever__DOT__SYNC__DOT__eclki_r0));
            tracep->chgBit(oldp+2,(vlTOPp->MIPI_Reciever__DOT__SYNC__DOT__eclki_r1));
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
            tracep->chgCData(oldp+36,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r_old),8);
            tracep->chgSData(oldp+37,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r_s),16);
            tracep->chgCData(oldp+38,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r)
                                        ? (IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte0_r)
                                        : (IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte1_r))),8);
            tracep->chgCData(oldp+39,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__counter),8);
            tracep->chgCData(oldp+40,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r_old),8);
            tracep->chgSData(oldp+41,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r_s),16);
            tracep->chgCData(oldp+42,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r)
                                        ? (IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte0_r)
                                        : (IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte1_r))),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+43,(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8));
            tracep->chgCData(oldp+44,(vlTOPp->MIPI_Reciever__DOT__div8__DOT__counter),8);
            tracep->chgBit(oldp+45,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+46,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r));
            tracep->chgBit(oldp+47,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__state));
            tracep->chgBit(oldp+48,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__valid_old));
            tracep->chgIData(oldp+49,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter),32);
            tracep->chgIData(oldp+50,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__count_val),32);
            tracep->chgIData(oldp+51,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__data_o_r),32);
            tracep->chgIData(oldp+52,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr),32);
            tracep->chgIData(oldp+53,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__cX_r),32);
            tracep->chgIData(oldp+54,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__cY_r),32);
            tracep->chgSData(oldp+55,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgIData(oldp+56,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r),32);
            tracep->chgCData(oldp+57,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__type_o_r),6);
            tracep->chgSData(oldp+58,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__wordcount_r),16);
            tracep->chgIData(oldp+59,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r),32);
            tracep->chgIData(oldp+60,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r_old),32);
            tracep->chgBit(oldp+61,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__start));
            tracep->chgIData(oldp+62,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__counter),32);
            tracep->chgCData(oldp+63,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc),8);
            tracep->chgCData(oldp+64,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom),8);
            tracep->chgIData(oldp+65,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction),24);
            tracep->chgIData(oldp+66,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__regheader_correct),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+67,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r));
            tracep->chgCData(oldp+68,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi),8);
            tracep->chgBit(oldp+69,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__term_r));
            tracep->chgBit(oldp+70,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__debug0_r));
            tracep->chgIData(oldp+71,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou),32);
            tracep->chgIData(oldp+72,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_term),32);
            tracep->chgIData(oldp+73,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_hs),32);
        }
        tracep->chgBit(oldp+74,(vlTOPp->sys_clk));
        tracep->chgBit(oldp+75,(vlTOPp->reset));
        tracep->chgBit(oldp+76,(vlTOPp->lane0_d));
        tracep->chgBit(oldp+77,(vlTOPp->mipi_clk));
        tracep->chgBit(oldp+78,(vlTOPp->mipi_clk_8));
        tracep->chgBit(oldp+79,(vlTOPp->lane1_d));
        tracep->chgBit(oldp+80,(vlTOPp->lane0_p));
        tracep->chgBit(oldp+81,(vlTOPp->lane0_n));
        tracep->chgBit(oldp+82,(vlTOPp->lane1_p));
        tracep->chgBit(oldp+83,(vlTOPp->lane1_n));
        tracep->chgIData(oldp+84,(vlTOPp->data_o),32);
        tracep->chgIData(oldp+85,(vlTOPp->adress_out),32);
        tracep->chgBit(oldp+86,(vlTOPp->ram_clk));
        tracep->chgBit(oldp+87,(vlTOPp->debug0));
        tracep->chgBit(oldp+88,(vlTOPp->debug1));
        tracep->chgBit(oldp+89,(vlTOPp->debug3));
        tracep->chgBit(oldp+90,(vlTOPp->debug2));
        tracep->chgBit(oldp+91,(vlTOPp->termination));
        tracep->chgBit(oldp+92,(vlTOPp->rec_data_o));
        tracep->chgIData(oldp+93,(vlTOPp->cX),32);
        tracep->chgIData(oldp+94,(vlTOPp->cY),32);
        tracep->chgBit(oldp+95,(vlTOPp->MIPI_Reciever__DOT__rec_data));
        tracep->chgBit(oldp+96,(vlTOPp->MIPI_Reciever__DOT__sync));
        tracep->chgCData(oldp+97,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r),8);
        tracep->chgCData(oldp+98,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r),8);
        tracep->chgBit(oldp+99,(vlTOPp->MIPI_Reciever__DOT__valid));
        tracep->chgCData(oldp+100,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ddr),4);
        tracep->chgBit(oldp+101,(((IData)(vlTOPp->reset) 
                                  | (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r))));
        tracep->chgBit(oldp+102,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__sync_r) 
                                  & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r)))));
        tracep->chgCData(oldp+103,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ddr),4);
        tracep->chgSData(oldp+104,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk),16);
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
        vlTOPp->__Vm_traceActivity[8U] = 0U;
    }
}
