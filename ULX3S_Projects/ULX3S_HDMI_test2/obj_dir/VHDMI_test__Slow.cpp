// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHDMI_test.h for the primary calling header

#include "VHDMI_test.h"
#include "VHDMI_test__Syms.h"

//==========

VL_CTOR_IMP(VHDMI_test) {
    VHDMI_test__Syms* __restrict vlSymsp = __VlSymsp = new VHDMI_test__Syms(this, name());
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VHDMI_test::__Vconfigure(VHDMI_test__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VHDMI_test::~VHDMI_test() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VHDMI_test::_settle__TOP__2(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_settle__TOP__2\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HDMI_test__DOT__encode_R__DOT__balance 
        = (0xfU & (((((((((1U & (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m)) 
                          + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                             >> 7U))) - (IData)(4U)));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__balance 
        = (0xfU & (((((((((1U & (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m)) 
                          + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                             >> 7U))) - (IData)(4U)));
    vlTOPp->HDMI_test__DOT__encode_B__DOT__balance 
        = (0xfU & (((((((((1U & (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m)) 
                          + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                             >> 7U))) - (IData)(4U)));
    vlTOPp->TMDSd = ((7U & (IData)(vlTOPp->TMDSd)) 
                     | ((IData)(vlTOPp->pixclk) << 3U));
    vlTOPp->HDMI_test__DOT__encode_R__DOT__Nb1s = (0xfU 
                                                   & ((((((((1U 
                                                             & (IData)(vlTOPp->HDMI_test__DOT__red)) 
                                                            + 
                                                            (1U 
                                                             & ((IData)(vlTOPp->HDMI_test__DOT__red) 
                                                                >> 1U))) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlTOPp->HDMI_test__DOT__red) 
                                                               >> 2U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlTOPp->HDMI_test__DOT__red) 
                                                              >> 3U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlTOPp->HDMI_test__DOT__red) 
                                                             >> 4U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlTOPp->HDMI_test__DOT__red) 
                                                            >> 5U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlTOPp->HDMI_test__DOT__red) 
                                                           >> 6U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->HDMI_test__DOT__red) 
                                                          >> 7U))));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__Nb1s = (0xfU 
                                                   & ((((((((1U 
                                                             & (IData)(vlTOPp->HDMI_test__DOT__green)) 
                                                            + 
                                                            (1U 
                                                             & ((IData)(vlTOPp->HDMI_test__DOT__green) 
                                                                >> 1U))) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlTOPp->HDMI_test__DOT__green) 
                                                               >> 2U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlTOPp->HDMI_test__DOT__green) 
                                                              >> 3U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlTOPp->HDMI_test__DOT__green) 
                                                             >> 4U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlTOPp->HDMI_test__DOT__green) 
                                                            >> 5U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlTOPp->HDMI_test__DOT__green) 
                                                           >> 6U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->HDMI_test__DOT__green) 
                                                          >> 7U))));
    vlTOPp->HDMI_test__DOT__encode_B__DOT__Nb1s = (0xfU 
                                                   & ((((((((1U 
                                                             & (IData)(vlTOPp->HDMI_test__DOT__blue)) 
                                                            + 
                                                            (1U 
                                                             & ((IData)(vlTOPp->HDMI_test__DOT__blue) 
                                                                >> 1U))) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlTOPp->HDMI_test__DOT__blue) 
                                                               >> 2U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlTOPp->HDMI_test__DOT__blue) 
                                                              >> 3U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlTOPp->HDMI_test__DOT__blue) 
                                                             >> 4U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlTOPp->HDMI_test__DOT__blue) 
                                                            >> 5U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlTOPp->HDMI_test__DOT__blue) 
                                                           >> 6U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->HDMI_test__DOT__blue) 
                                                          >> 7U))));
    vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD 
        = (((IData)(vlTOPp->HDMI_test__DOT__vSync) 
            << 1U) | (IData)(vlTOPp->HDMI_test__DOT__hSync));
    vlTOPp->HDMI_test__DOT__W = (0xffU & (- (IData)(
                                                    ((0xffU 
                                                      & (IData)(vlTOPp->HDMI_test__DOT__CounterX)) 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->HDMI_test__DOT__CounterY))))));
    vlTOPp->HDMI_test__DOT__A = (0xffU & (- (IData)(
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->HDMI_test__DOT__CounterX) 
                                                          >> 5U))) 
                                                     & (2U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->HDMI_test__DOT__CounterY) 
                                                            >> 5U)))))));
    vlTOPp->HDMI_test__DOT__encode_R__DOT__XNOR = (
                                                   (4U 
                                                    < (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__Nb1s)) 
                                                   | ((4U 
                                                       == (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__Nb1s)) 
                                                      & (~ (IData)(vlTOPp->HDMI_test__DOT__red))));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__XNOR = (
                                                   (4U 
                                                    < (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__Nb1s)) 
                                                   | ((4U 
                                                       == (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__Nb1s)) 
                                                      & (~ (IData)(vlTOPp->HDMI_test__DOT__green))));
    vlTOPp->HDMI_test__DOT__encode_B__DOT__XNOR = (
                                                   (4U 
                                                    < (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__Nb1s)) 
                                                   | ((4U 
                                                       == (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__Nb1s)) 
                                                      & (~ (IData)(vlTOPp->HDMI_test__DOT__blue))));
    vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m = ((0x100U 
                                                   & ((~ (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__XNOR)) 
                                                      << 8U)) 
                                                  | ((0xfeU 
                                                      & ((((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                                                           << 1U) 
                                                          ^ 
                                                          (0xfffffffeU 
                                                           & (IData)(vlTOPp->HDMI_test__DOT__red))) 
                                                         ^ 
                                                         ((- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__XNOR))) 
                                                          << 1U))) 
                                                     | (1U 
                                                        & (IData)(vlTOPp->HDMI_test__DOT__red))));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m = ((0x100U 
                                                   & ((~ (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__XNOR)) 
                                                      << 8U)) 
                                                  | ((0xfeU 
                                                      & ((((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                                                           << 1U) 
                                                          ^ 
                                                          (0xfffffffeU 
                                                           & (IData)(vlTOPp->HDMI_test__DOT__green))) 
                                                         ^ 
                                                         ((- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__XNOR))) 
                                                          << 1U))) 
                                                     | (1U 
                                                        & (IData)(vlTOPp->HDMI_test__DOT__green))));
    vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m = ((0x100U 
                                                   & ((~ (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__XNOR)) 
                                                      << 8U)) 
                                                  | ((0xfeU 
                                                      & ((((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                                                           << 1U) 
                                                          ^ 
                                                          (0xfffffffeU 
                                                           & (IData)(vlTOPp->HDMI_test__DOT__blue))) 
                                                         ^ 
                                                         ((- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__XNOR))) 
                                                          << 1U))) 
                                                     | (1U 
                                                        & (IData)(vlTOPp->HDMI_test__DOT__blue))));
}

void VHDMI_test::_initial__TOP__3(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_initial__TOP__3\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc = 0U;
    vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc = 0U;
    vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc = 0U;
    vlTOPp->HDMI_test__DOT__TMDS_shift_load = 0U;
    vlTOPp->HDMI_test__DOT__TMDS_red = 0U;
    vlTOPp->HDMI_test__DOT__TMDS_green = 0U;
    vlTOPp->HDMI_test__DOT__TMDS_blue = 0U;
    vlTOPp->HDMI_test__DOT__TMDS_shift_red = 0U;
    vlTOPp->HDMI_test__DOT__TMDS_shift_green = 0U;
    vlTOPp->HDMI_test__DOT__TMDS_shift_blue = 0U;
    vlTOPp->HDMI_test__DOT__TMDS_mod10 = 0U;
}

void VHDMI_test::_settle__TOP__6(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_settle__TOP__6\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_sign_eq 
        = ((1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance) 
                  >> 3U)) == (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc) 
                                    >> 3U)));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_sign_eq 
        = ((1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance) 
                  >> 3U)) == (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc) 
                                    >> 3U)));
    vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_sign_eq 
        = ((1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance) 
                  >> 3U)) == (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc) 
                                    >> 3U)));
    vlTOPp->TMDSd = ((8U & (IData)(vlTOPp->TMDSd)) 
                     | ((4U & ((IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_red) 
                               << 2U)) | ((2U & ((IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_green) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_blue)))));
    vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m 
        = (1U & (((0U == (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance)) 
                  | (0U == (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc)))
                  ? (~ ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                        >> 8U)) : (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_sign_eq)));
    vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc 
        = (0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance) 
                   - (1U & ((((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                              >> 8U) ^ (~ (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_sign_eq))) 
                            & (~ ((0U == (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance)) 
                                  | (0U == (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc))))))));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m 
        = (1U & (((0U == (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance)) 
                  | (0U == (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc)))
                  ? (~ ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                        >> 8U)) : (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_sign_eq)));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc 
        = (0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance) 
                   - (1U & ((((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                              >> 8U) ^ (~ (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_sign_eq))) 
                            & (~ ((0U == (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance)) 
                                  | (0U == (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc))))))));
    vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m 
        = (1U & (((0U == (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance)) 
                  | (0U == (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc)))
                  ? (~ ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                        >> 8U)) : (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_sign_eq)));
    vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc 
        = (0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance) 
                   - (1U & ((((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                              >> 8U) ^ (~ (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_sign_eq))) 
                            & (~ ((0U == (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance)) 
                                  | (0U == (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc))))))));
    vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_new 
        = (0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m)
                    ? ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc) 
                       - (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc))
                    : ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc) 
                       + (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc))));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_new 
        = (0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m)
                    ? ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc) 
                       - (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc))
                    : ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc) 
                       + (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc))));
    vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_new 
        = (0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m)
                    ? ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc) 
                       - (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc))
                    : ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc) 
                       + (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc))));
}

void VHDMI_test::_eval_initial(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_eval_initial\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk_TMDS = vlTOPp->clk_TMDS;
    vlTOPp->__Vclklast__TOP__pixclk = vlTOPp->pixclk;
}

void VHDMI_test::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::final\n"); );
    // Variables
    VHDMI_test__Syms* __restrict vlSymsp = this->__VlSymsp;
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHDMI_test::_eval_settle(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_eval_settle\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__6(vlSymsp);
}

void VHDMI_test::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_ctor_var_reset\n"); );
    // Body
    pixclk = VL_RAND_RESET_I(1);
    clk_TMDS = VL_RAND_RESET_I(1);
    TMDSd = VL_RAND_RESET_I(4);
    HDMI_test__DOT__CounterX = VL_RAND_RESET_I(10);
    HDMI_test__DOT__CounterY = VL_RAND_RESET_I(10);
    HDMI_test__DOT__hSync = VL_RAND_RESET_I(1);
    HDMI_test__DOT__vSync = VL_RAND_RESET_I(1);
    HDMI_test__DOT__DrawArea = VL_RAND_RESET_I(1);
    HDMI_test__DOT__W = VL_RAND_RESET_I(8);
    HDMI_test__DOT__A = VL_RAND_RESET_I(8);
    HDMI_test__DOT__red = VL_RAND_RESET_I(8);
    HDMI_test__DOT__green = VL_RAND_RESET_I(8);
    HDMI_test__DOT__blue = VL_RAND_RESET_I(8);
    HDMI_test__DOT__TMDS_red = VL_RAND_RESET_I(10);
    HDMI_test__DOT__TMDS_green = VL_RAND_RESET_I(10);
    HDMI_test__DOT__TMDS_blue = VL_RAND_RESET_I(10);
    HDMI_test__DOT____Vcellinp__encode_B__CD = VL_RAND_RESET_I(2);
    HDMI_test__DOT__DCM_TMDS_CLKFX = VL_RAND_RESET_I(1);
    HDMI_test__DOT__TMDS_mod10 = VL_RAND_RESET_I(4);
    HDMI_test__DOT__TMDS_shift_red = VL_RAND_RESET_I(10);
    HDMI_test__DOT__TMDS_shift_green = VL_RAND_RESET_I(10);
    HDMI_test__DOT__TMDS_shift_blue = VL_RAND_RESET_I(10);
    HDMI_test__DOT__TMDS_shift_load = VL_RAND_RESET_I(1);
    HDMI_test__DOT__encode_R__DOT__Nb1s = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_R__DOT__XNOR = VL_RAND_RESET_I(1);
    HDMI_test__DOT__encode_R__DOT__q_m = VL_RAND_RESET_I(9);
    HDMI_test__DOT__encode_R__DOT__balance_acc = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_R__DOT__balance = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_R__DOT__balance_sign_eq = VL_RAND_RESET_I(1);
    HDMI_test__DOT__encode_R__DOT__invert_q_m = VL_RAND_RESET_I(1);
    HDMI_test__DOT__encode_R__DOT__balance_acc_inc = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_R__DOT__balance_acc_new = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_G__DOT__Nb1s = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_G__DOT__XNOR = VL_RAND_RESET_I(1);
    HDMI_test__DOT__encode_G__DOT__q_m = VL_RAND_RESET_I(9);
    HDMI_test__DOT__encode_G__DOT__balance_acc = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_G__DOT__balance = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_G__DOT__balance_sign_eq = VL_RAND_RESET_I(1);
    HDMI_test__DOT__encode_G__DOT__invert_q_m = VL_RAND_RESET_I(1);
    HDMI_test__DOT__encode_G__DOT__balance_acc_inc = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_G__DOT__balance_acc_new = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_B__DOT__Nb1s = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_B__DOT__XNOR = VL_RAND_RESET_I(1);
    HDMI_test__DOT__encode_B__DOT__q_m = VL_RAND_RESET_I(9);
    HDMI_test__DOT__encode_B__DOT__balance_acc = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_B__DOT__balance = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_B__DOT__balance_sign_eq = VL_RAND_RESET_I(1);
    HDMI_test__DOT__encode_B__DOT__invert_q_m = VL_RAND_RESET_I(1);
    HDMI_test__DOT__encode_B__DOT__balance_acc_inc = VL_RAND_RESET_I(4);
    HDMI_test__DOT__encode_B__DOT__balance_acc_new = VL_RAND_RESET_I(4);
    __Vchglast__TOP__HDMI_test__DOT__encode_R__DOT__q_m = VL_RAND_RESET_I(9);
    __Vchglast__TOP__HDMI_test__DOT__encode_G__DOT__q_m = VL_RAND_RESET_I(9);
    __Vchglast__TOP__HDMI_test__DOT__encode_B__DOT__q_m = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
