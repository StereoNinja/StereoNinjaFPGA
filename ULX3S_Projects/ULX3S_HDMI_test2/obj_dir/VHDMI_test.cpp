// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHDMI_test.h for the primary calling header

#include "VHDMI_test.h"
#include "VHDMI_test__Syms.h"

//==========

void VHDMI_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHDMI_test::eval\n"); );
    VHDMI_test__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("HDMI_test.v", 5, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VHDMI_test::_eval_initial_loop(VHDMI_test__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("HDMI_test.v", 5, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VHDMI_test::_combo__TOP__1(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_combo__TOP__1\n"); );
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
}

VL_INLINE_OPT void VHDMI_test::_sequent__TOP__4(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_sequent__TOP__4\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__HDMI_test__DOT__TMDS_mod10;
    // Body
    __Vdly__HDMI_test__DOT__TMDS_mod10 = vlTOPp->HDMI_test__DOT__TMDS_mod10;
    __Vdly__HDMI_test__DOT__TMDS_mod10 = ((9U == (IData)(vlTOPp->HDMI_test__DOT__TMDS_mod10))
                                           ? 0U : (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->HDMI_test__DOT__TMDS_mod10))));
    if (vlTOPp->HDMI_test__DOT__TMDS_shift_load) {
        vlTOPp->HDMI_test__DOT__TMDS_shift_green = vlTOPp->HDMI_test__DOT__TMDS_green;
        vlTOPp->HDMI_test__DOT__TMDS_shift_red = vlTOPp->HDMI_test__DOT__TMDS_red;
        vlTOPp->HDMI_test__DOT__TMDS_shift_blue = vlTOPp->HDMI_test__DOT__TMDS_blue;
    } else {
        vlTOPp->HDMI_test__DOT__TMDS_shift_green = 
            (0x1ffU & ((IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_green) 
                       >> 1U));
        vlTOPp->HDMI_test__DOT__TMDS_shift_red = (0x1ffU 
                                                  & ((IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_red) 
                                                     >> 1U));
        vlTOPp->HDMI_test__DOT__TMDS_shift_blue = (0x1ffU 
                                                   & ((IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_blue) 
                                                      >> 1U));
    }
    vlTOPp->HDMI_test__DOT__TMDS_shift_load = (9U == (IData)(vlTOPp->HDMI_test__DOT__TMDS_mod10));
    vlTOPp->TMDSd = ((8U & (IData)(vlTOPp->TMDSd)) 
                     | ((4U & ((IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_red) 
                               << 2U)) | ((2U & ((IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_green) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_blue)))));
    vlTOPp->HDMI_test__DOT__TMDS_mod10 = __Vdly__HDMI_test__DOT__TMDS_mod10;
}

VL_INLINE_OPT void VHDMI_test::_sequent__TOP__5(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_sequent__TOP__5\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    SData/*9:0*/ __Vdly__HDMI_test__DOT__CounterX;
    SData/*9:0*/ __Vdly__HDMI_test__DOT__CounterY;
    // Body
    __Vdly__HDMI_test__DOT__CounterX = vlTOPp->HDMI_test__DOT__CounterX;
    __Vdly__HDMI_test__DOT__CounterY = vlTOPp->HDMI_test__DOT__CounterY;
    vlTOPp->HDMI_test__DOT__vSync = ((0x1eaU <= (IData)(vlTOPp->HDMI_test__DOT__CounterY)) 
                                     & (0x1ecU > (IData)(vlTOPp->HDMI_test__DOT__CounterY)));
    vlTOPp->HDMI_test__DOT__hSync = ((0x290U <= (IData)(vlTOPp->HDMI_test__DOT__CounterX)) 
                                     & (0x2f0U > (IData)(vlTOPp->HDMI_test__DOT__CounterX)));
    __Vdly__HDMI_test__DOT__CounterX = ((0x31fU == (IData)(vlTOPp->HDMI_test__DOT__CounterX))
                                         ? 0U : (0x3ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->HDMI_test__DOT__CounterX))));
    if ((0x31fU == (IData)(vlTOPp->HDMI_test__DOT__CounterX))) {
        __Vdly__HDMI_test__DOT__CounterY = ((0x20cU 
                                             == (IData)(vlTOPp->HDMI_test__DOT__CounterY))
                                             ? 0U : 
                                            (0x3ffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlTOPp->HDMI_test__DOT__CounterY))));
    }
    if (vlTOPp->HDMI_test__DOT__DrawArea) {
        vlTOPp->HDMI_test__DOT__TMDS_green = (((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m) 
                                               << 9U) 
                                              | ((0x100U 
                                                  & (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m)) 
                                                 | (0xffU 
                                                    & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                                                       ^ 
                                                       (- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m)))))));
        vlTOPp->HDMI_test__DOT__TMDS_red = (((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m) 
                                             << 9U) 
                                            | ((0x100U 
                                                & (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m)) 
                                               | (0xffU 
                                                  & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                                                     ^ 
                                                     (- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m)))))));
        vlTOPp->HDMI_test__DOT__TMDS_blue = (((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m) 
                                              << 9U) 
                                             | ((0x100U 
                                                 & (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m)) 
                                                | (0xffU 
                                                   & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                                                      ^ 
                                                      (- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m)))))));
    } else {
        vlTOPp->HDMI_test__DOT__TMDS_green = 0x354U;
        vlTOPp->HDMI_test__DOT__TMDS_red = 0x354U;
        vlTOPp->HDMI_test__DOT__TMDS_blue = ((2U & (IData)(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD))
                                                  ? 0x2abU
                                                  : 0x154U)
                                              : ((1U 
                                                  & (IData)(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD))
                                                  ? 0xabU
                                                  : 0x354U));
    }
    vlTOPp->HDMI_test__DOT__blue = (0xffU & (((IData)(vlTOPp->HDMI_test__DOT__CounterY) 
                                              | (IData)(vlTOPp->HDMI_test__DOT__W)) 
                                             | (IData)(vlTOPp->HDMI_test__DOT__A)));
    vlTOPp->HDMI_test__DOT__green = (0xffU & ((((IData)(vlTOPp->HDMI_test__DOT__CounterX) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->HDMI_test__DOT__CounterY) 
                                                                 >> 6U))))) 
                                               | (IData)(vlTOPp->HDMI_test__DOT__W)) 
                                              & (~ (IData)(vlTOPp->HDMI_test__DOT__A))));
    vlTOPp->HDMI_test__DOT__red = (((0xfcU & (((IData)(vlTOPp->HDMI_test__DOT__CounterX) 
                                               & (- (IData)(
                                                            ((3U 
                                                              & ((IData)(vlTOPp->HDMI_test__DOT__CounterY) 
                                                                 >> 3U)) 
                                                             == 
                                                             (3U 
                                                              & (~ 
                                                                 ((IData)(vlTOPp->HDMI_test__DOT__CounterX) 
                                                                  >> 3U))))))) 
                                              << 2U)) 
                                    | (IData)(vlTOPp->HDMI_test__DOT__W)) 
                                   & (~ (IData)(vlTOPp->HDMI_test__DOT__A)));
    if (vlTOPp->HDMI_test__DOT__DrawArea) {
        vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc 
            = vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_new;
        vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc 
            = vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_new;
        vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc 
            = vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_new;
    } else {
        vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc = 0U;
        vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc = 0U;
        vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc = 0U;
    }
    vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD 
        = (((IData)(vlTOPp->HDMI_test__DOT__vSync) 
            << 1U) | (IData)(vlTOPp->HDMI_test__DOT__hSync));
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
    vlTOPp->HDMI_test__DOT__DrawArea = ((0x280U > (IData)(vlTOPp->HDMI_test__DOT__CounterX)) 
                                        & (0x1e0U > (IData)(vlTOPp->HDMI_test__DOT__CounterY)));
    vlTOPp->HDMI_test__DOT__encode_B__DOT__XNOR = (
                                                   (4U 
                                                    < (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__Nb1s)) 
                                                   | ((4U 
                                                       == (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__Nb1s)) 
                                                      & (~ (IData)(vlTOPp->HDMI_test__DOT__blue))));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__XNOR = (
                                                   (4U 
                                                    < (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__Nb1s)) 
                                                   | ((4U 
                                                       == (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__Nb1s)) 
                                                      & (~ (IData)(vlTOPp->HDMI_test__DOT__green))));
    vlTOPp->HDMI_test__DOT__encode_R__DOT__XNOR = (
                                                   (4U 
                                                    < (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__Nb1s)) 
                                                   | ((4U 
                                                       == (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__Nb1s)) 
                                                      & (~ (IData)(vlTOPp->HDMI_test__DOT__red))));
    vlTOPp->HDMI_test__DOT__CounterX = __Vdly__HDMI_test__DOT__CounterX;
    vlTOPp->HDMI_test__DOT__CounterY = __Vdly__HDMI_test__DOT__CounterY;
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
}

VL_INLINE_OPT void VHDMI_test::_combo__TOP__7(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_combo__TOP__7\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_sign_eq 
        = ((1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance) 
                  >> 3U)) == (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc) 
                                    >> 3U)));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_sign_eq 
        = ((1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance) 
                  >> 3U)) == (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc) 
                                    >> 3U)));
    vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_sign_eq 
        = ((1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance) 
                  >> 3U)) == (1U & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc) 
                                    >> 3U)));
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
    vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_new 
        = (0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m)
                    ? ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc) 
                       - (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc))
                    : ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc) 
                       + (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc))));
    vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_new 
        = (0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m)
                    ? ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc) 
                       - (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc))
                    : ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc) 
                       + (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc))));
    vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_new 
        = (0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m)
                    ? ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc) 
                       - (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc))
                    : ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc) 
                       + (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc))));
}

void VHDMI_test::_eval(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_eval\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlTOPp->clk_TMDS) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_TMDS)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->pixclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__pixclk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_TMDS = vlTOPp->clk_TMDS;
    vlTOPp->__Vclklast__TOP__pixclk = vlTOPp->pixclk;
}

VL_INLINE_OPT QData VHDMI_test::_change_request(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_change_request\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VHDMI_test::_change_request_1(VHDMI_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_change_request_1\n"); );
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m ^ vlTOPp->__Vchglast__TOP__HDMI_test__DOT__encode_R__DOT__q_m)
         | (vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m ^ vlTOPp->__Vchglast__TOP__HDMI_test__DOT__encode_G__DOT__q_m)
         | (vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m ^ vlTOPp->__Vchglast__TOP__HDMI_test__DOT__encode_B__DOT__q_m));
    VL_DEBUG_IF( if(__req && ((vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m ^ vlTOPp->__Vchglast__TOP__HDMI_test__DOT__encode_R__DOT__q_m))) VL_DBG_MSGF("        CHANGE: HDMI_test.v:76: HDMI_test.encode_R.q_m\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m ^ vlTOPp->__Vchglast__TOP__HDMI_test__DOT__encode_G__DOT__q_m))) VL_DBG_MSGF("        CHANGE: HDMI_test.v:76: HDMI_test.encode_G.q_m\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m ^ vlTOPp->__Vchglast__TOP__HDMI_test__DOT__encode_B__DOT__q_m))) VL_DBG_MSGF("        CHANGE: HDMI_test.v:76: HDMI_test.encode_B.q_m\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__HDMI_test__DOT__encode_R__DOT__q_m 
        = vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m;
    vlTOPp->__Vchglast__TOP__HDMI_test__DOT__encode_G__DOT__q_m 
        = vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m;
    vlTOPp->__Vchglast__TOP__HDMI_test__DOT__encode_B__DOT__q_m 
        = vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m;
    return __req;
}

#ifdef VL_DEBUG
void VHDMI_test::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_test::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((pixclk & 0xfeU))) {
        Verilated::overWidthError("pixclk");}
    if (VL_UNLIKELY((clk_TMDS & 0xfeU))) {
        Verilated::overWidthError("clk_TMDS");}
}
#endif  // VL_DEBUG
