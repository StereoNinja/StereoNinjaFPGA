// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHDMI_Transciever_Sim__Syms.h"


void VHDMI_Transciever_Sim::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever_Sim__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever_Sim__Syms*>(userp);
    VHDMI_Transciever_Sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VHDMI_Transciever_Sim::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever_Sim__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever_Sim__Syms*>(userp);
    VHDMI_Transciever_Sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,((0xffU & (((((
                                                   (((1U 
                                                      & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                         >> 1U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                        >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 3U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 4U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                     >> 5U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 6U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                     >> 7U))))),8);
            tracep->chgCData(oldp+1,((0xffU & (((((
                                                   (((1U 
                                                      & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m))) 
                                                     + 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                          >> 1U)))) 
                                                    + 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                         >> 2U)))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                        >> 3U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 4U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 5U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 6U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 7U)))))),8);
            tracep->chgSData(oldp+2,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m),9);
            tracep->chgBit(oldp+3,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p1));
            tracep->chgBit(oldp+4,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p2));
            tracep->chgCData(oldp+5,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p3),8);
            tracep->chgIData(oldp+6,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt0),32);
            tracep->chgIData(oldp+7,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt1),32);
            tracep->chgIData(oldp+8,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt2),32);
            tracep->chgIData(oldp+9,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt3),32);
            tracep->chgIData(oldp+10,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt),32);
            tracep->chgCData(oldp+11,((0xffU & ((((
                                                   ((((1U 
                                                       & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                          >> 1U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                         >> 2U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                        >> 3U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 4U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 5U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                     >> 6U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 7U))))),8);
            tracep->chgCData(oldp+12,((0xffU & ((((
                                                   ((((1U 
                                                       & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m))) 
                                                      + 
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                           >> 1U)))) 
                                                     + 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                          >> 2U)))) 
                                                    + 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                         >> 3U)))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                        >> 4U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 5U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 6U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 7U)))))),8);
            tracep->chgSData(oldp+13,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m),9);
            tracep->chgBit(oldp+14,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p1));
            tracep->chgBit(oldp+15,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p2));
            tracep->chgCData(oldp+16,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p3),8);
            tracep->chgIData(oldp+17,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt0),32);
            tracep->chgIData(oldp+18,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt1),32);
            tracep->chgIData(oldp+19,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt2),32);
            tracep->chgIData(oldp+20,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt3),32);
            tracep->chgIData(oldp+21,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt),32);
            tracep->chgCData(oldp+22,((0xffU & ((((
                                                   ((((1U 
                                                       & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                          >> 1U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                         >> 2U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                        >> 3U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 4U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 5U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                     >> 6U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 7U))))),8);
            tracep->chgCData(oldp+23,((0xffU & ((((
                                                   ((((1U 
                                                       & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m))) 
                                                      + 
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                           >> 1U)))) 
                                                     + 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                          >> 2U)))) 
                                                    + 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                         >> 3U)))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                        >> 4U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 5U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 6U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 7U)))))),8);
            tracep->chgSData(oldp+24,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m),9);
            tracep->chgBit(oldp+25,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p1));
            tracep->chgBit(oldp+26,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p2));
            tracep->chgCData(oldp+27,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p3),8);
            tracep->chgIData(oldp+28,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt0),32);
            tracep->chgIData(oldp+29,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt1),32);
            tracep->chgIData(oldp+30,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt2),32);
            tracep->chgIData(oldp+31,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt3),32);
            tracep->chgIData(oldp+32,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+33,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_r));
            tracep->chgBit(oldp+34,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_b));
            tracep->chgBit(oldp+35,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_g));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+36,(vlTOPp->HDMI_Transciever_Sim__DOT__blue),8);
            tracep->chgCData(oldp+37,(vlTOPp->HDMI_Transciever_Sim__DOT__green),8);
            tracep->chgCData(oldp+38,(vlTOPp->HDMI_Transciever_Sim__DOT__red),8);
            tracep->chgIData(oldp+39,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__addr_r),21);
            tracep->chgSData(oldp+40,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX),11);
            tracep->chgSData(oldp+41,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterY),11);
            tracep->chgBit(oldp+42,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__hSync));
            tracep->chgBit(oldp+43,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__vSync));
            tracep->chgCData(oldp+44,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__DrawArea),2);
            tracep->chgSData(oldp+45,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out1),10);
            tracep->chgSData(oldp+46,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out1),10);
            tracep->chgSData(oldp+47,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out1),10);
            tracep->chgCData(oldp+48,(((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterY))
                                        ? 0U : ((1U 
                                                 & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX))
                                                 ? 
                                                (0xffU 
                                                 & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red))
                                                 : 0U))),8);
            tracep->chgCData(oldp+49,((0xffU & ((1U 
                                                 & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterY))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX))
                                                  ? (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green)
                                                  : 0U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX))
                                                  ? 0U
                                                  : (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green))))),8);
            tracep->chgCData(oldp+50,(((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterY))
                                        ? ((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__CounterX))
                                            ? 0U : 
                                           (0xffU & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue)))
                                        : 0U)),8);
            tracep->chgCData(oldp+51,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr),2);
            tracep->chgIData(oldp+52,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__cnt_old),32);
            tracep->chgCData(oldp+53,((0xffU & ((((
                                                   ((((1U 
                                                       & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                          >> 1U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                         >> 2U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                        >> 3U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                       >> 4U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                      >> 5U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                     >> 6U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                      >> 7U))))),8);
            tracep->chgCData(oldp+54,((0xffU & ((((
                                                   ((((1U 
                                                       & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue))) 
                                                      + 
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                           >> 1U)))) 
                                                     + 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                          >> 2U)))) 
                                                    + 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                         >> 3U)))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                        >> 4U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                       >> 5U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                      >> 6U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue) 
                                                       >> 7U)))))),8);
            tracep->chgBit(oldp+55,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__blue))));
            tracep->chgBit(oldp+56,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m1));
            tracep->chgBit(oldp+57,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m2));
            tracep->chgBit(oldp+58,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m3));
            tracep->chgBit(oldp+59,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m4));
            tracep->chgBit(oldp+60,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m5));
            tracep->chgBit(oldp+61,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m6));
            tracep->chgBit(oldp+62,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m7));
            tracep->chgBit(oldp+63,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_m8));
            tracep->chgSData(oldp+64,(((2U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                        ? ((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                            ? 0x2abU
                                            : 0x154U)
                                        : ((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                            ? 0xabU
                                            : 0x354U))),11);
            tracep->chgIData(oldp+65,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__cnt_old),32);
            tracep->chgCData(oldp+66,((0xffU & ((((
                                                   ((((1U 
                                                       & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                          >> 1U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                         >> 2U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                        >> 3U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                       >> 4U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                      >> 5U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                     >> 6U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                      >> 7U))))),8);
            tracep->chgCData(oldp+67,((0xffU & ((((
                                                   ((((1U 
                                                       & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green))) 
                                                      + 
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                           >> 1U)))) 
                                                     + 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                          >> 2U)))) 
                                                    + 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                         >> 3U)))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                        >> 4U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                       >> 5U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                      >> 6U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green) 
                                                       >> 7U)))))),8);
            tracep->chgBit(oldp+68,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__green))));
            tracep->chgBit(oldp+69,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m1));
            tracep->chgBit(oldp+70,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m2));
            tracep->chgBit(oldp+71,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m3));
            tracep->chgBit(oldp+72,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m4));
            tracep->chgBit(oldp+73,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m5));
            tracep->chgBit(oldp+74,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m6));
            tracep->chgBit(oldp+75,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m7));
            tracep->chgBit(oldp+76,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_m8));
            tracep->chgIData(oldp+77,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__cnt_old),32);
            tracep->chgCData(oldp+78,((0xffU & ((((
                                                   ((((1U 
                                                       & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                          >> 1U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                         >> 2U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                        >> 3U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                       >> 4U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                      >> 5U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                     >> 6U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                      >> 7U))))),8);
            tracep->chgCData(oldp+79,((0xffU & ((((
                                                   ((((1U 
                                                       & (~ (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red))) 
                                                      + 
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                           >> 1U)))) 
                                                     + 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                          >> 2U)))) 
                                                    + 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                         >> 3U)))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                        >> 4U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                       >> 5U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                      >> 6U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red) 
                                                       >> 7U)))))),8);
            tracep->chgBit(oldp+80,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__red))));
            tracep->chgBit(oldp+81,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m1));
            tracep->chgBit(oldp+82,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m2));
            tracep->chgBit(oldp+83,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m3));
            tracep->chgBit(oldp+84,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m4));
            tracep->chgBit(oldp+85,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m5));
            tracep->chgBit(oldp+86,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m6));
            tracep->chgBit(oldp+87,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m7));
            tracep->chgBit(oldp+88,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_m8));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgSData(oldp+89,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_red),10);
            tracep->chgSData(oldp+90,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_green),10);
            tracep->chgSData(oldp+91,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_blue),10);
            tracep->chgBit(oldp+92,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_red))));
            tracep->chgBit(oldp+93,((1U & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_red) 
                                           >> 1U))));
            tracep->chgBit(oldp+94,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_green))));
            tracep->chgBit(oldp+95,((1U & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_green) 
                                           >> 1U))));
            tracep->chgBit(oldp+96,((1U & (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_blue))));
            tracep->chgBit(oldp+97,((1U & ((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_blue) 
                                           >> 1U))));
        }
        tracep->chgBit(oldp+98,(vlTOPp->pixclk));
        tracep->chgBit(oldp+99,(vlTOPp->clk_high));
        tracep->chgBit(oldp+100,(vlTOPp->reset));
        tracep->chgCData(oldp+101,(vlTOPp->TMDSd),4);
        tracep->chgCData(oldp+102,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_mod10),4);
        tracep->chgBit(oldp+103,(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__TMDS_shift_load));
        tracep->chgSData(oldp+104,(((IData)(vlTOPp->reset)
                                     ? 0U : (0x3ffU 
                                             & (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p1) 
                                                 << 9U) 
                                                | (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p2) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p3)))))),10);
        tracep->chgSData(oldp+105,(((IData)(vlTOPp->reset)
                                     ? 0U : (0x3ffU 
                                             & (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p1) 
                                                 << 9U) 
                                                | (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p2) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p3)))))),10);
        tracep->chgSData(oldp+106,(((IData)(vlTOPp->reset)
                                     ? 0U : (0x3ffU 
                                             & (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p1) 
                                                 << 9U) 
                                                | (((IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p2) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->HDMI_Transciever_Sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p3)))))),10);
    }
}

void VHDMI_Transciever_Sim::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VHDMI_Transciever_Sim__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever_Sim__Syms*>(userp);
    VHDMI_Transciever_Sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
    }
}
