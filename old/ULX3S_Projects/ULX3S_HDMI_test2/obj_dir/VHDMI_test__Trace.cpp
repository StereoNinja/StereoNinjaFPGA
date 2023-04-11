// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHDMI_test__Syms.h"


void VHDMI_test::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VHDMI_test__Syms* __restrict vlSymsp = static_cast<VHDMI_test__Syms*>(userp);
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VHDMI_test::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VHDMI_test__Syms* __restrict vlSymsp = static_cast<VHDMI_test__Syms*>(userp);
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m),9);
            tracep->chgCData(oldp+1,(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance),4);
            tracep->chgBit(oldp+2,(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_sign_eq));
            tracep->chgBit(oldp+3,(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m));
            tracep->chgCData(oldp+4,(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc),4);
            tracep->chgSData(oldp+5,((((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m) 
                                       << 9U) | ((0x100U 
                                                  & (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m)) 
                                                 | (0xffU 
                                                    & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                                                       ^ 
                                                       (- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m)))))))),10);
            tracep->chgSData(oldp+6,(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m),9);
            tracep->chgCData(oldp+7,(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance),4);
            tracep->chgBit(oldp+8,(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_sign_eq));
            tracep->chgBit(oldp+9,(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m));
            tracep->chgCData(oldp+10,(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc),4);
            tracep->chgSData(oldp+11,((((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m) 
                                        << 9U) | ((0x100U 
                                                   & (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m)) 
                                                  | (0xffU 
                                                     & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                                                        ^ 
                                                        (- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m)))))))),10);
            tracep->chgSData(oldp+12,(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m),9);
            tracep->chgCData(oldp+13,(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance),4);
            tracep->chgBit(oldp+14,(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_sign_eq));
            tracep->chgBit(oldp+15,(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m));
            tracep->chgCData(oldp+16,(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc),4);
            tracep->chgSData(oldp+17,((((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m) 
                                        << 9U) | ((0x100U 
                                                   & (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m)) 
                                                  | (0xffU 
                                                     & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                                                        ^ 
                                                        (- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m)))))))),10);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+18,(vlTOPp->HDMI_test__DOT__hSync));
            tracep->chgBit(oldp+19,(vlTOPp->HDMI_test__DOT__vSync));
            tracep->chgCData(oldp+20,(vlTOPp->HDMI_test__DOT__red),8);
            tracep->chgCData(oldp+21,(vlTOPp->HDMI_test__DOT__green),8);
            tracep->chgCData(oldp+22,(vlTOPp->HDMI_test__DOT__blue),8);
            tracep->chgCData(oldp+23,(vlTOPp->HDMI_test__DOT__encode_R__DOT__Nb1s),4);
            tracep->chgBit(oldp+24,(vlTOPp->HDMI_test__DOT__encode_R__DOT__XNOR));
            tracep->chgCData(oldp+25,(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc),4);
            tracep->chgCData(oldp+26,(vlTOPp->HDMI_test__DOT__encode_G__DOT__Nb1s),4);
            tracep->chgBit(oldp+27,(vlTOPp->HDMI_test__DOT__encode_G__DOT__XNOR));
            tracep->chgCData(oldp+28,(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc),4);
            tracep->chgCData(oldp+29,(vlTOPp->HDMI_test__DOT__encode_B__DOT__Nb1s),4);
            tracep->chgBit(oldp+30,(vlTOPp->HDMI_test__DOT__encode_B__DOT__XNOR));
            tracep->chgCData(oldp+31,(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+32,(vlTOPp->HDMI_test__DOT__TMDS_mod10),4);
            tracep->chgSData(oldp+33,(vlTOPp->HDMI_test__DOT__TMDS_shift_red),10);
            tracep->chgSData(oldp+34,(vlTOPp->HDMI_test__DOT__TMDS_shift_green),10);
            tracep->chgSData(oldp+35,(vlTOPp->HDMI_test__DOT__TMDS_shift_blue),10);
            tracep->chgBit(oldp+36,(vlTOPp->HDMI_test__DOT__TMDS_shift_load));
            tracep->chgBit(oldp+37,((1U & (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_red))));
            tracep->chgBit(oldp+38,((1U & (~ (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_red)))));
            tracep->chgBit(oldp+39,((1U & (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_green))));
            tracep->chgBit(oldp+40,((1U & (~ (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_green)))));
            tracep->chgBit(oldp+41,((1U & (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_blue))));
            tracep->chgBit(oldp+42,((1U & (~ (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_blue)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgSData(oldp+43,(vlTOPp->HDMI_test__DOT__CounterX),10);
            tracep->chgSData(oldp+44,(vlTOPp->HDMI_test__DOT__CounterY),10);
            tracep->chgBit(oldp+45,(vlTOPp->HDMI_test__DOT__DrawArea));
            tracep->chgCData(oldp+46,((0xffU & (- (IData)(
                                                          ((0xffU 
                                                            & (IData)(vlTOPp->HDMI_test__DOT__CounterX)) 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlTOPp->HDMI_test__DOT__CounterY))))))),8);
            tracep->chgCData(oldp+47,((0xffU & (- (IData)(
                                                          ((2U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->HDMI_test__DOT__CounterX) 
                                                                >> 5U))) 
                                                           & (2U 
                                                              == 
                                                              (7U 
                                                               & ((IData)(vlTOPp->HDMI_test__DOT__CounterY) 
                                                                  >> 5U)))))))),8);
            tracep->chgSData(oldp+48,(vlTOPp->HDMI_test__DOT__TMDS_red),10);
            tracep->chgSData(oldp+49,(vlTOPp->HDMI_test__DOT__TMDS_green),10);
            tracep->chgSData(oldp+50,(vlTOPp->HDMI_test__DOT__TMDS_blue),10);
            tracep->chgCData(oldp+51,(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD),2);
            tracep->chgSData(oldp+52,(((2U & (IData)(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD))
                                        ? ((1U & (IData)(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD))
                                            ? 0x2abU
                                            : 0x154U)
                                        : ((1U & (IData)(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD))
                                            ? 0xabU
                                            : 0x354U))),10);
        }
        tracep->chgBit(oldp+53,(vlTOPp->pixclk));
        tracep->chgBit(oldp+54,(vlTOPp->clk_TMDS));
        tracep->chgCData(oldp+55,(vlTOPp->TMDSd),4);
        tracep->chgCData(oldp+56,((0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m)
                                            ? ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc) 
                                               - (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc))
                                            : ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc) 
                                               + (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc))))),4);
        tracep->chgCData(oldp+57,((0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m)
                                            ? ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc) 
                                               - (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc))
                                            : ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc) 
                                               + (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc))))),4);
        tracep->chgCData(oldp+58,((0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m)
                                            ? ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc) 
                                               - (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc))
                                            : ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc) 
                                               + (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc))))),4);
        tracep->chgBit(oldp+59,((1U & (~ (IData)(vlTOPp->pixclk)))));
    }
}

void VHDMI_test::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VHDMI_test__Syms* __restrict vlSymsp = static_cast<VHDMI_test__Syms*>(userp);
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
