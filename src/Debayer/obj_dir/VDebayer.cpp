// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDebayer.h for the primary calling header

#include "VDebayer.h"
#include "VDebayer__Syms.h"

//==========

void VDebayer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDebayer::eval\n"); );
    VDebayer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("Debayer.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDebayer::_eval_initial_loop(VDebayer__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("Debayer.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDebayer::_sequent__TOP__1(VDebayer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_sequent__TOP__1\n"); );
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__Debayer__DOT__line_sel;
    CData/*7:0*/ __Vdlyvval__Debayer__DOT__line0__v0;
    CData/*0:0*/ __Vdlyvset__Debayer__DOT__line0__v0;
    CData/*7:0*/ __Vdlyvval__Debayer__DOT__line1__v0;
    CData/*0:0*/ __Vdlyvset__Debayer__DOT__line1__v0;
    CData/*7:0*/ __Vdlyvval__Debayer__DOT__line2__v0;
    CData/*0:0*/ __Vdlyvset__Debayer__DOT__line2__v0;
    CData/*7:0*/ __Vdlyvval__Debayer__DOT__line3__v0;
    CData/*0:0*/ __Vdlyvset__Debayer__DOT__line3__v0;
    SData/*9:0*/ __Vdlyvdim0__Debayer__DOT__line0__v0;
    SData/*9:0*/ __Vdlyvdim0__Debayer__DOT__line1__v0;
    SData/*9:0*/ __Vdlyvdim0__Debayer__DOT__line2__v0;
    SData/*9:0*/ __Vdlyvdim0__Debayer__DOT__line3__v0;
    IData/*31:0*/ __Vdly__Debayer__DOT__cX;
    IData/*31:0*/ __Vdly__Debayer__DOT__cY;
    // Body
    __Vdly__Debayer__DOT__cY = vlTOPp->Debayer__DOT__cY;
    __Vdly__Debayer__DOT__cX = vlTOPp->Debayer__DOT__cX;
    __Vdly__Debayer__DOT__line_sel = vlTOPp->Debayer__DOT__line_sel;
    __Vdlyvset__Debayer__DOT__line3__v0 = 0U;
    __Vdlyvset__Debayer__DOT__line2__v0 = 0U;
    __Vdlyvset__Debayer__DOT__line1__v0 = 0U;
    __Vdlyvset__Debayer__DOT__line0__v0 = 0U;
    vlTOPp->Debayer__DOT__address_out_r = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           ((0x4ffU 
                                             == vlTOPp->address_in)
                                             ? 0U : 
                                            (0x7ffffU 
                                             & ((IData)(1U) 
                                                + vlTOPp->Debayer__DOT__address_out_r))));
    if (vlTOPp->reset) {
        __Vdly__Debayer__DOT__cX = 0U;
        __Vdly__Debayer__DOT__cY = 0U;
        __Vdly__Debayer__DOT__line_sel = 0U;
    } else {
        if ((0x4afffU <= vlTOPp->address_in)) {
            __Vdly__Debayer__DOT__cX = 0U;
            __Vdly__Debayer__DOT__cY = 0U;
            __Vdly__Debayer__DOT__line_sel = 0U;
        }
        if ((0x27fU <= vlTOPp->Debayer__DOT__cX)) {
            __Vdly__Debayer__DOT__cY = ((IData)(1U) 
                                        + vlTOPp->Debayer__DOT__cY);
            __Vdly__Debayer__DOT__line_sel = ((3U > (IData)(vlTOPp->Debayer__DOT__line_sel))
                                               ? (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->Debayer__DOT__line_sel)))
                                               : 0U);
            __Vdly__Debayer__DOT__cX = 0U;
        } else {
            __Vdly__Debayer__DOT__cX = ((IData)(1U) 
                                        + vlTOPp->Debayer__DOT__cX);
        }
        if ((0U == (IData)(vlTOPp->Debayer__DOT__line_sel))) {
            vlTOPp->Debayer__DOT____Vlvbound5 = vlTOPp->raw;
            if ((0x27fU >= (0x3ffU & vlTOPp->Debayer__DOT__cX))) {
                __Vdlyvval__Debayer__DOT__line0__v0 
                    = vlTOPp->Debayer__DOT____Vlvbound5;
                __Vdlyvset__Debayer__DOT__line0__v0 = 1U;
                __Vdlyvdim0__Debayer__DOT__line0__v0 
                    = (0x3ffU & vlTOPp->Debayer__DOT__cX);
            }
        } else {
            if ((1U == (IData)(vlTOPp->Debayer__DOT__line_sel))) {
                vlTOPp->Debayer__DOT____Vlvbound6 = vlTOPp->raw;
                if ((0x27fU >= (0x3ffU & vlTOPp->Debayer__DOT__cX))) {
                    __Vdlyvval__Debayer__DOT__line1__v0 
                        = vlTOPp->Debayer__DOT____Vlvbound6;
                    __Vdlyvset__Debayer__DOT__line1__v0 = 1U;
                    __Vdlyvdim0__Debayer__DOT__line1__v0 
                        = (0x3ffU & vlTOPp->Debayer__DOT__cX);
                }
            } else {
                if ((2U == (IData)(vlTOPp->Debayer__DOT__line_sel))) {
                    vlTOPp->Debayer__DOT____Vlvbound7 
                        = vlTOPp->raw;
                    if ((0x27fU >= (0x3ffU & vlTOPp->Debayer__DOT__cX))) {
                        __Vdlyvval__Debayer__DOT__line2__v0 
                            = vlTOPp->Debayer__DOT____Vlvbound7;
                        __Vdlyvset__Debayer__DOT__line2__v0 = 1U;
                        __Vdlyvdim0__Debayer__DOT__line2__v0 
                            = (0x3ffU & vlTOPp->Debayer__DOT__cX);
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Debayer__DOT__line_sel))) {
                        vlTOPp->Debayer__DOT____Vlvbound8 
                            = vlTOPp->raw;
                        if ((0x27fU >= (0x3ffU & vlTOPp->Debayer__DOT__cX))) {
                            __Vdlyvval__Debayer__DOT__line3__v0 
                                = vlTOPp->Debayer__DOT____Vlvbound8;
                            __Vdlyvset__Debayer__DOT__line3__v0 = 1U;
                            __Vdlyvdim0__Debayer__DOT__line3__v0 
                                = (0x3ffU & vlTOPp->Debayer__DOT__cX);
                        }
                    }
                }
            }
        }
        vlTOPp->Debayer__DOT__red_r = 0U;
        vlTOPp->Debayer__DOT__green_r = 0U;
        vlTOPp->Debayer__DOT__blue_r = 0U;
        if (((((0U != vlTOPp->Debayer__DOT__cX) & (0x27fU 
                                                   != vlTOPp->Debayer__DOT__cX)) 
              & (0U != vlTOPp->Debayer__DOT__cY)) & 
             (0x1dfU != vlTOPp->Debayer__DOT__cY))) {
            if ((0U == (IData)(vlTOPp->Debayer__DOT__line_sel))) {
                vlTOPp->Debayer__DOT__raw_pix = (((
                                                   (0x27fU 
                                                    >= 
                                                    (0x3ffU 
                                                     & vlTOPp->Debayer__DOT__cX))
                                                    ? 
                                                   (1U 
                                                    & vlTOPp->Debayer__DOT__line1
                                                    [
                                                    (0x3ffU 
                                                     & vlTOPp->Debayer__DOT__cX)])
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((0x27fU 
                                                     >= 
                                                     (0x3ffU 
                                                      & (vlTOPp->Debayer__DOT__cX 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlTOPp->Debayer__DOT__line1
                                                    [
                                                    (0x3ffU 
                                                     & (vlTOPp->Debayer__DOT__cX 
                                                        - (IData)(1U)))]
                                                     : 0U));
            } else {
                if ((1U == (IData)(vlTOPp->Debayer__DOT__line_sel))) {
                    vlTOPp->Debayer__DOT__raw_pix = 
                        ((((0x27fU >= (0x3ffU & vlTOPp->Debayer__DOT__cX))
                            ? (1U & vlTOPp->Debayer__DOT__line2
                               [(0x3ffU & vlTOPp->Debayer__DOT__cX)])
                            : 0U) << 8U) | ((0x27fU 
                                             >= (0x3ffU 
                                                 & (vlTOPp->Debayer__DOT__cX 
                                                    - (IData)(1U))))
                                             ? vlTOPp->Debayer__DOT__line2
                                            [(0x3ffU 
                                              & (vlTOPp->Debayer__DOT__cX 
                                                 - (IData)(1U)))]
                                             : 0U));
                } else {
                    if ((2U == (IData)(vlTOPp->Debayer__DOT__line_sel))) {
                        vlTOPp->Debayer__DOT__raw_pix 
                            = ((((0x27fU >= (0x3ffU 
                                             & vlTOPp->Debayer__DOT__cX))
                                  ? (1U & vlTOPp->Debayer__DOT__line3
                                     [(0x3ffU & vlTOPp->Debayer__DOT__cX)])
                                  : 0U) << 8U) | ((0x27fU 
                                                   >= 
                                                   (0x3ffU 
                                                    & (vlTOPp->Debayer__DOT__cX 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlTOPp->Debayer__DOT__line3
                                                  [
                                                  (0x3ffU 
                                                   & (vlTOPp->Debayer__DOT__cX 
                                                      - (IData)(1U)))]
                                                   : 0U));
                    } else {
                        if ((3U == (IData)(vlTOPp->Debayer__DOT__line_sel))) {
                            vlTOPp->Debayer__DOT__raw_pix 
                                = ((((0x27fU >= (0x3ffU 
                                                 & vlTOPp->Debayer__DOT__cX))
                                      ? (1U & vlTOPp->Debayer__DOT__line0
                                         [(0x3ffU & vlTOPp->Debayer__DOT__cX)])
                                      : 0U) << 8U) 
                                   | ((0x27fU >= (0x3ffU 
                                                  & (vlTOPp->Debayer__DOT__cX 
                                                     - (IData)(1U))))
                                       ? vlTOPp->Debayer__DOT__line0
                                      [(0x3ffU & (vlTOPp->Debayer__DOT__cX 
                                                  - (IData)(1U)))]
                                       : 0U));
                        }
                    }
                }
            }
            if ((1U & vlTOPp->Debayer__DOT__cX)) {
                if ((1U & vlTOPp->Debayer__DOT__cY)) {
                    vlTOPp->Debayer__DOT__red_r = (0xffU 
                                                   & (((1U 
                                                        & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                                           >> 3U)) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                                           >> 5U))) 
                                                      >> 1U));
                    vlTOPp->Debayer__DOT__green_r = 
                        vlTOPp->Debayer__DOT__line1
                        [4U];
                    vlTOPp->Debayer__DOT__blue_r = 
                        (0xffU & (((1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                          >> 1U)) + 
                                   (1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                          >> 7U))) 
                                  >> 1U));
                } else {
                    vlTOPp->Debayer__DOT__red_r = (0xffU 
                                                   & (((((1U 
                                                          & (IData)(vlTOPp->Debayer__DOT__raw_pix)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                                             >> 2U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                                            >> 6U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                                           >> 8U))) 
                                                      >> 2U));
                    vlTOPp->Debayer__DOT__green_r = 
                        (0xffU & (((1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                          >> 1U)) + 
                                   (1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                          >> 7U))) 
                                  >> 1U));
                    vlTOPp->Debayer__DOT__blue_r = 
                        (1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                               >> 4U));
                }
            } else {
                if ((1U & vlTOPp->Debayer__DOT__cY)) {
                    vlTOPp->Debayer__DOT__red_r = (1U 
                                                   & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                                      >> 4U));
                    vlTOPp->Debayer__DOT__green_r = 
                        vlTOPp->Debayer__DOT__line1
                        [4U];
                    vlTOPp->Debayer__DOT__blue_r = 
                        (0xffU & (((((1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                            >> 1U)) 
                                     + (1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                              >> 3U))) 
                                    + (1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                             >> 5U))) 
                                   + (1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                            >> 7U))) 
                                  >> 2U));
                } else {
                    vlTOPp->Debayer__DOT__red_r = (0xffU 
                                                   & (((1U 
                                                        & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                                           >> 1U)) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                                           >> 7U))) 
                                                      >> 1U));
                    vlTOPp->Debayer__DOT__green_r = 
                        vlTOPp->Debayer__DOT__line1
                        [4U];
                    vlTOPp->Debayer__DOT__blue_r = 
                        (0xffU & (((1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                          >> 3U)) + 
                                   (1U & ((IData)(vlTOPp->Debayer__DOT__raw_pix) 
                                          >> 5U))) 
                                  >> 1U));
                }
            }
        }
    }
    vlTOPp->Debayer__DOT__cX = __Vdly__Debayer__DOT__cX;
    vlTOPp->Debayer__DOT__cY = __Vdly__Debayer__DOT__cY;
    vlTOPp->Debayer__DOT__line_sel = __Vdly__Debayer__DOT__line_sel;
    if (__Vdlyvset__Debayer__DOT__line1__v0) {
        vlTOPp->Debayer__DOT__line1[__Vdlyvdim0__Debayer__DOT__line1__v0] 
            = __Vdlyvval__Debayer__DOT__line1__v0;
    }
    if (__Vdlyvset__Debayer__DOT__line2__v0) {
        vlTOPp->Debayer__DOT__line2[__Vdlyvdim0__Debayer__DOT__line2__v0] 
            = __Vdlyvval__Debayer__DOT__line2__v0;
    }
    if (__Vdlyvset__Debayer__DOT__line3__v0) {
        vlTOPp->Debayer__DOT__line3[__Vdlyvdim0__Debayer__DOT__line3__v0] 
            = __Vdlyvval__Debayer__DOT__line3__v0;
    }
    if (__Vdlyvset__Debayer__DOT__line0__v0) {
        vlTOPp->Debayer__DOT__line0[__Vdlyvdim0__Debayer__DOT__line0__v0] 
            = __Vdlyvval__Debayer__DOT__line0__v0;
    }
    vlTOPp->address_out = vlTOPp->Debayer__DOT__address_out_r;
    vlTOPp->red = vlTOPp->Debayer__DOT__red_r;
    vlTOPp->green = vlTOPp->Debayer__DOT__green_r;
    vlTOPp->blue = vlTOPp->Debayer__DOT__blue_r;
}

void VDebayer::_eval(VDebayer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_eval\n"); );
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VDebayer::_change_request(VDebayer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_change_request\n"); );
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDebayer::_change_request_1(VDebayer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_change_request_1\n"); );
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDebayer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((address_in & 0xfff80000U))) {
        Verilated::overWidthError("address_in");}
}
#endif  // VL_DEBUG
