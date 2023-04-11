// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTMDS_Encoder.h for the primary calling header

#include "VTMDS_Encoder.h"
#include "VTMDS_Encoder__Syms.h"

//==========

void VTMDS_Encoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTMDS_Encoder::eval\n"); );
    VTMDS_Encoder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("TMDS_Encoder.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTMDS_Encoder::_eval_initial_loop(VTMDS_Encoder__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("TMDS_Encoder.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTMDS_Encoder::_sequent__TOP__1(VTMDS_Encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_sequent__TOP__1\n"); );
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->TMDS_Encoder__DOT__q_out = (0x3ffU 
                                            & (IData)((QData)((IData)(
                                                                      (0x1ffU 
                                                                       & ((IData)(vlTOPp->TMDS_Encoder__DOT__q_out) 
                                                                          >> 1U))))));
    }
}

VL_INLINE_OPT void VTMDS_Encoder::_sequent__TOP__2(VTMDS_Encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_sequent__TOP__2\n"); );
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vfunc_N1__0__data;
    CData/*7:0*/ __Vfunc_N1__1__data;
    CData/*7:0*/ __Vfunc_N1__2__data;
    CData/*7:0*/ __Vfunc_N0__3__data;
    CData/*7:0*/ __Vfunc_N1__4__data;
    CData/*7:0*/ __Vfunc_N0__5__data;
    CData/*7:0*/ __Vfunc_N0__6__data;
    CData/*7:0*/ __Vfunc_N1__7__data;
    CData/*7:0*/ __Vfunc_N1__8__data;
    CData/*7:0*/ __Vfunc_N0__9__data;
    CData/*7:0*/ __Vfunc_N0__10__data;
    CData/*7:0*/ __Vfunc_N1__11__data;
    CData/*7:0*/ __Vfunc_N1__12__data;
    CData/*7:0*/ __Vfunc_N0__13__data;
    CData/*7:0*/ __Vfunc_N1__14__data;
    CData/*7:0*/ __Vfunc_N0__15__data;
    IData/*31:0*/ __Vfunc_N1__0__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__1__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__2__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__3__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__4__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__5__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__6__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__7__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__8__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__9__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__10__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__11__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__12__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__13__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__14__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__15__Vfuncout;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((0U == (IData)(vlTOPp->state))) {
            if ((0U == (IData)(vlTOPp->H_VSync_Ctr))) {
                vlTOPp->TMDS_Encoder__DOT__q_out = 0x354U;
            } else {
                if ((1U == (IData)(vlTOPp->H_VSync_Ctr))) {
                    vlTOPp->TMDS_Encoder__DOT__q_out = 0xabU;
                } else {
                    if ((2U == (IData)(vlTOPp->H_VSync_Ctr))) {
                        vlTOPp->TMDS_Encoder__DOT__q_out = 0x154U;
                    } else {
                        if ((3U == (IData)(vlTOPp->H_VSync_Ctr))) {
                            vlTOPp->TMDS_Encoder__DOT__q_out = 0x2abU;
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->state))) {
                if (((((((((0U == (IData)(vlTOPp->aux_data)) 
                           | (1U == (IData)(vlTOPp->aux_data))) 
                          | (2U == (IData)(vlTOPp->aux_data))) 
                         | (3U == (IData)(vlTOPp->aux_data))) 
                        | (4U == (IData)(vlTOPp->aux_data))) 
                       | (5U == (IData)(vlTOPp->aux_data))) 
                      | (6U == (IData)(vlTOPp->aux_data))) 
                     | (7U == (IData)(vlTOPp->aux_data)))) {
                    vlTOPp->TMDS_Encoder__DOT__q_out 
                        = ((0U == (IData)(vlTOPp->aux_data))
                            ? 0x29cU : ((1U == (IData)(vlTOPp->aux_data))
                                         ? 0x263U : 
                                        ((2U == (IData)(vlTOPp->aux_data))
                                          ? 0x2e4U : 
                                         ((3U == (IData)(vlTOPp->aux_data))
                                           ? 0x2e2U
                                           : ((4U == (IData)(vlTOPp->aux_data))
                                               ? 0x171U
                                               : ((5U 
                                                   == (IData)(vlTOPp->aux_data))
                                                   ? 0x11eU
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->aux_data))
                                                    ? 0x18eU
                                                    : 0x13cU)))))));
                } else {
                    if (((((((((8U == (IData)(vlTOPp->aux_data)) 
                               | (9U == (IData)(vlTOPp->aux_data))) 
                              | (0xaU == (IData)(vlTOPp->aux_data))) 
                             | (0xbU == (IData)(vlTOPp->aux_data))) 
                            | (0xcU == (IData)(vlTOPp->aux_data))) 
                           | (0xdU == (IData)(vlTOPp->aux_data))) 
                          | (0xeU == (IData)(vlTOPp->aux_data))) 
                         | (0xfU == (IData)(vlTOPp->aux_data)))) {
                        vlTOPp->TMDS_Encoder__DOT__q_out 
                            = ((8U == (IData)(vlTOPp->aux_data))
                                ? 0x2ccU : ((9U == (IData)(vlTOPp->aux_data))
                                             ? 0x139U
                                             : ((0xaU 
                                                 == (IData)(vlTOPp->aux_data))
                                                 ? 0x19cU
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlTOPp->aux_data))
                                                  ? 0x2c6U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlTOPp->aux_data))
                                                   ? 0x28eU
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlTOPp->aux_data))
                                                    ? 0x271U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->aux_data))
                                                     ? 0x163U
                                                     : 0x2c3U)))))));
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->state))) {
                    vlTOPp->TMDS_Encoder__DOT__cnt_old 
                        = vlTOPp->TMDS_Encoder__DOT__cnt;
                    __Vfunc_N1__1__data = vlTOPp->pix_data;
                    if ((1U & (IData)(__Vfunc_N1__1__data))) {
                        __Vfunc_N1__1__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__1__Vfuncout);
                    }
                    if ((2U & (IData)(__Vfunc_N1__1__data))) {
                        __Vfunc_N1__1__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__1__Vfuncout);
                    }
                    if ((4U & (IData)(__Vfunc_N1__1__data))) {
                        __Vfunc_N1__1__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__1__Vfuncout);
                    }
                    if ((8U & (IData)(__Vfunc_N1__1__data))) {
                        __Vfunc_N1__1__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__1__Vfuncout);
                    }
                    if ((0x10U & (IData)(__Vfunc_N1__1__data))) {
                        __Vfunc_N1__1__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__1__Vfuncout);
                    }
                    if ((0x20U & (IData)(__Vfunc_N1__1__data))) {
                        __Vfunc_N1__1__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__1__Vfuncout);
                    }
                    if ((0x40U & (IData)(__Vfunc_N1__1__data))) {
                        __Vfunc_N1__1__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__1__Vfuncout);
                    }
                    if ((0x80U & (IData)(__Vfunc_N1__1__data))) {
                        __Vfunc_N1__1__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__1__Vfuncout);
                    }
                    __Vfunc_N1__0__data = vlTOPp->pix_data;
                    if ((1U & (IData)(__Vfunc_N1__0__data))) {
                        __Vfunc_N1__0__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__0__Vfuncout);
                    }
                    if ((2U & (IData)(__Vfunc_N1__0__data))) {
                        __Vfunc_N1__0__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__0__Vfuncout);
                    }
                    if ((4U & (IData)(__Vfunc_N1__0__data))) {
                        __Vfunc_N1__0__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__0__Vfuncout);
                    }
                    if ((8U & (IData)(__Vfunc_N1__0__data))) {
                        __Vfunc_N1__0__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__0__Vfuncout);
                    }
                    if ((0x10U & (IData)(__Vfunc_N1__0__data))) {
                        __Vfunc_N1__0__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__0__Vfuncout);
                    }
                    if ((0x20U & (IData)(__Vfunc_N1__0__data))) {
                        __Vfunc_N1__0__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__0__Vfuncout);
                    }
                    if ((0x40U & (IData)(__Vfunc_N1__0__data))) {
                        __Vfunc_N1__0__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__0__Vfuncout);
                    }
                    if ((0x80U & (IData)(__Vfunc_N1__0__data))) {
                        __Vfunc_N1__0__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__0__Vfuncout);
                    }
                    if ((VL_LTS_III(1,32,32, 4U, __Vfunc_N1__0__Vfuncout) 
                         | ((4U == __Vfunc_N1__1__Vfuncout) 
                            & (~ (IData)(vlTOPp->pix_data))))) {
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3feU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (1U & (IData)(vlTOPp->pix_data)));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3fdU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (2U & (((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                         ^ ~ ((IData)(vlTOPp->pix_data) 
                                              >> 1U)) 
                                        << 1U)));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3fbU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (4U & ((((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                          >> 1U) ^ ~ 
                                         ((IData)(vlTOPp->pix_data) 
                                          >> 2U)) << 2U)));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3f7U & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (8U & ((((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                          >> 2U) ^ ~ 
                                         ((IData)(vlTOPp->pix_data) 
                                          >> 3U)) << 3U)));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3efU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (0x10U & ((((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                             >> 3U) 
                                            ^ ~ ((IData)(vlTOPp->pix_data) 
                                                 >> 4U)) 
                                           << 4U)));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3dfU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (0x20U & ((((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                             >> 4U) 
                                            ^ ~ ((IData)(vlTOPp->pix_data) 
                                                 >> 5U)) 
                                           << 5U)));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3bfU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (0x40U & ((((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                             >> 5U) 
                                            ^ ~ ((IData)(vlTOPp->pix_data) 
                                                 >> 6U)) 
                                           << 6U)));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x37fU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (0x80U & ((((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                             >> 6U) 
                                            ^ ~ ((IData)(vlTOPp->pix_data) 
                                                 >> 7U)) 
                                           << 7U)));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = (0x100U | (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                    } else {
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3feU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (1U & (IData)(vlTOPp->pix_data)));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3fdU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (2U & (((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlTOPp->pix_data)))));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3fbU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (4U & ((0xfffffffcU 
                                         & ((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                            << 1U)) 
                                        ^ (0xfffffffcU 
                                           & (IData)(vlTOPp->pix_data)))));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3f7U & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (8U & ((0xfffffff8U 
                                         & ((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                            << 1U)) 
                                        ^ (0xfffffff8U 
                                           & (IData)(vlTOPp->pix_data)))));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3efU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (0x10U & ((0xfffffff0U 
                                            & ((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xfffffff0U 
                                              & (IData)(vlTOPp->pix_data)))));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3dfU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (0x20U & ((0xffffffe0U 
                                            & ((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffffe0U 
                                              & (IData)(vlTOPp->pix_data)))));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x3bfU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (0x40U & ((0xffffffc0U 
                                            & ((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffffc0U 
                                              & (IData)(vlTOPp->pix_data)))));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = ((0x37fU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                               | (0x80U & ((0xffffff80U 
                                            & ((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffff80U 
                                              & (IData)(vlTOPp->pix_data)))));
                        vlTOPp->TMDS_Encoder__DOT__q_m 
                            = (0x100U | (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                    }
                    __Vfunc_N0__3__data = (0xffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                    if ((1U & (~ (IData)(__Vfunc_N0__3__data)))) {
                        __Vfunc_N0__3__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N0__3__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__3__data) 
                                  >> 1U)))) {
                        __Vfunc_N0__3__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N0__3__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__3__data) 
                                  >> 2U)))) {
                        __Vfunc_N0__3__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N0__3__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__3__data) 
                                  >> 3U)))) {
                        __Vfunc_N0__3__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N0__3__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__3__data) 
                                  >> 4U)))) {
                        __Vfunc_N0__3__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N0__3__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__3__data) 
                                  >> 5U)))) {
                        __Vfunc_N0__3__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N0__3__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__3__data) 
                                  >> 6U)))) {
                        __Vfunc_N0__3__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N0__3__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__3__data) 
                                  >> 7U)))) {
                        __Vfunc_N0__3__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N0__3__Vfuncout);
                    }
                    __Vfunc_N1__2__data = (0xffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                    if ((1U & (IData)(__Vfunc_N1__2__data))) {
                        __Vfunc_N1__2__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__2__Vfuncout);
                    }
                    if ((2U & (IData)(__Vfunc_N1__2__data))) {
                        __Vfunc_N1__2__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__2__Vfuncout);
                    }
                    if ((4U & (IData)(__Vfunc_N1__2__data))) {
                        __Vfunc_N1__2__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__2__Vfuncout);
                    }
                    if ((8U & (IData)(__Vfunc_N1__2__data))) {
                        __Vfunc_N1__2__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__2__Vfuncout);
                    }
                    if ((0x10U & (IData)(__Vfunc_N1__2__data))) {
                        __Vfunc_N1__2__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__2__Vfuncout);
                    }
                    if ((0x20U & (IData)(__Vfunc_N1__2__data))) {
                        __Vfunc_N1__2__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__2__Vfuncout);
                    }
                    if ((0x40U & (IData)(__Vfunc_N1__2__data))) {
                        __Vfunc_N1__2__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__2__Vfuncout);
                    }
                    if ((0x80U & (IData)(__Vfunc_N1__2__data))) {
                        __Vfunc_N1__2__Vfuncout = ((IData)(1U) 
                                                   + __Vfunc_N1__2__Vfuncout);
                    }
                    if (((0U == vlTOPp->TMDS_Encoder__DOT__cnt_old) 
                         ^ (__Vfunc_N1__2__Vfuncout 
                            == __Vfunc_N0__3__Vfuncout))) {
                        vlTOPp->TMDS_Encoder__DOT__q_out 
                            = ((0x1ffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_out)) 
                               | (0x200U & ((~ ((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                                >> 8U)) 
                                            << 9U)));
                        vlTOPp->TMDS_Encoder__DOT__q_out 
                            = ((0x2ffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_out)) 
                               | (0x100U & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)));
                        vlTOPp->TMDS_Encoder__DOT__q_out 
                            = ((0x303U & (IData)(vlTOPp->TMDS_Encoder__DOT__q_out)) 
                               | (0xfcU & (((0x100U 
                                             & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m))
                                             ? (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)
                                             : (~ (IData)(vlTOPp->TMDS_Encoder__DOT__q_m))) 
                                           << 2U)));
                        __Vfunc_N1__7__data = (0xffU 
                                               & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                        if ((1U & (IData)(__Vfunc_N1__7__data))) {
                            __Vfunc_N1__7__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__7__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__7__data))) {
                            __Vfunc_N1__7__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__7__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__7__data))) {
                            __Vfunc_N1__7__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__7__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__7__data))) {
                            __Vfunc_N1__7__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__7__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__7__data))) {
                            __Vfunc_N1__7__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__7__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__7__data))) {
                            __Vfunc_N1__7__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__7__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__7__data))) {
                            __Vfunc_N1__7__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__7__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__7__data))) {
                            __Vfunc_N1__7__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__7__Vfuncout);
                        }
                        __Vfunc_N0__6__data = (0xffU 
                                               & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                        if ((1U & (~ (IData)(__Vfunc_N0__6__data)))) {
                            __Vfunc_N0__6__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__6__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__6__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__6__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__6__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__6__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__6__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__6__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__6__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__6__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__6__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__6__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__6__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__6__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__6__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__6__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__6__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__6__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__6__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__6__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__6__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__6__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__6__Vfuncout);
                        }
                        __Vfunc_N0__5__data = (0xffU 
                                               & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                        if ((1U & (~ (IData)(__Vfunc_N0__5__data)))) {
                            __Vfunc_N0__5__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__5__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__5__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__5__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__5__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__5__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__5__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__5__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__5__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__5__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__5__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__5__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__5__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__5__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__5__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__5__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__5__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__5__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__5__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__5__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__5__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__5__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__5__Vfuncout);
                        }
                        __Vfunc_N1__4__data = (0xffU 
                                               & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                        if ((1U & (IData)(__Vfunc_N1__4__data))) {
                            __Vfunc_N1__4__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__4__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__4__data))) {
                            __Vfunc_N1__4__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__4__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__4__data))) {
                            __Vfunc_N1__4__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__4__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__4__data))) {
                            __Vfunc_N1__4__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__4__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__4__data))) {
                            __Vfunc_N1__4__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__4__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__4__data))) {
                            __Vfunc_N1__4__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__4__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__4__data))) {
                            __Vfunc_N1__4__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__4__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__4__data))) {
                            __Vfunc_N1__4__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__4__Vfuncout);
                        }
                        vlTOPp->TMDS_Encoder__DOT__cnt 
                            = ((0x100U & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m))
                                ? (vlTOPp->TMDS_Encoder__DOT__cnt_old 
                                   + (__Vfunc_N1__4__Vfuncout 
                                      - __Vfunc_N0__5__Vfuncout))
                                : (vlTOPp->TMDS_Encoder__DOT__cnt_old 
                                   + (__Vfunc_N0__6__Vfuncout 
                                      - __Vfunc_N1__7__Vfuncout)));
                    } else {
                        __Vfunc_N1__14__data = (0xffU 
                                                & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                        if ((1U & (IData)(__Vfunc_N1__14__data))) {
                            __Vfunc_N1__14__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__14__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__14__data))) {
                            __Vfunc_N1__14__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__14__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__14__data))) {
                            __Vfunc_N1__14__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__14__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__14__data))) {
                            __Vfunc_N1__14__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__14__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__14__data))) {
                            __Vfunc_N1__14__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__14__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__14__data))) {
                            __Vfunc_N1__14__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__14__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__14__data))) {
                            __Vfunc_N1__14__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__14__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__14__data))) {
                            __Vfunc_N1__14__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__14__Vfuncout);
                        }
                        __Vfunc_N0__9__data = ((0xffU 
                                                & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                                               > __Vfunc_N1__14__Vfuncout);
                        if ((1U & (~ (IData)(__Vfunc_N0__9__data)))) {
                            __Vfunc_N0__9__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__9__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__9__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__9__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__9__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__9__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__9__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__9__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__9__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__9__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__9__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__9__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__9__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__9__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__9__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__9__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__9__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__9__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__9__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__9__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__9__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__9__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__9__Vfuncout);
                        }
                        __Vfunc_N0__15__data = (0xffU 
                                                & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                        if ((1U & (~ (IData)(__Vfunc_N0__15__data)))) {
                            __Vfunc_N0__15__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__15__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__15__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__15__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__15__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__15__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__15__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__15__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__15__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__15__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__15__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__15__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__15__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__15__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__15__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__15__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__15__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__15__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__15__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__15__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__15__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__15__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__15__Vfuncout);
                        }
                        __Vfunc_N1__8__data = ((0xffU 
                                                & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)) 
                                               > __Vfunc_N0__15__Vfuncout);
                        if ((1U & (IData)(__Vfunc_N1__8__data))) {
                            __Vfunc_N1__8__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__8__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__8__data))) {
                            __Vfunc_N1__8__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__8__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__8__data))) {
                            __Vfunc_N1__8__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__8__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__8__data))) {
                            __Vfunc_N1__8__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__8__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__8__data))) {
                            __Vfunc_N1__8__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__8__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__8__data))) {
                            __Vfunc_N1__8__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__8__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__8__data))) {
                            __Vfunc_N1__8__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__8__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__8__data))) {
                            __Vfunc_N1__8__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__8__Vfuncout);
                        }
                        if (((VL_LTS_III(1,32,32, 0U, vlTOPp->TMDS_Encoder__DOT__cnt_old) 
                              & (0U != __Vfunc_N1__8__Vfuncout)) 
                             | (VL_GTS_III(1,32,32, 0U, vlTOPp->TMDS_Encoder__DOT__cnt_old) 
                                & (0U != __Vfunc_N0__9__Vfuncout)))) {
                            vlTOPp->TMDS_Encoder__DOT__q_out 
                                = (0x200U | (IData)(vlTOPp->TMDS_Encoder__DOT__q_out));
                            vlTOPp->TMDS_Encoder__DOT__q_out 
                                = ((0x2ffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_out)) 
                                   | (0x100U & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)));
                            vlTOPp->TMDS_Encoder__DOT__q_out 
                                = ((0x300U & (IData)(vlTOPp->TMDS_Encoder__DOT__q_out)) 
                                   | (0xffU & (~ (IData)(vlTOPp->TMDS_Encoder__DOT__q_m))));
                            __Vfunc_N1__11__data = 
                                (0xffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                            if ((1U & (IData)(__Vfunc_N1__11__data))) {
                                __Vfunc_N1__11__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__11__Vfuncout);
                            }
                            if ((2U & (IData)(__Vfunc_N1__11__data))) {
                                __Vfunc_N1__11__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__11__Vfuncout);
                            }
                            if ((4U & (IData)(__Vfunc_N1__11__data))) {
                                __Vfunc_N1__11__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__11__Vfuncout);
                            }
                            if ((8U & (IData)(__Vfunc_N1__11__data))) {
                                __Vfunc_N1__11__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__11__Vfuncout);
                            }
                            if ((0x10U & (IData)(__Vfunc_N1__11__data))) {
                                __Vfunc_N1__11__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__11__Vfuncout);
                            }
                            if ((0x20U & (IData)(__Vfunc_N1__11__data))) {
                                __Vfunc_N1__11__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__11__Vfuncout);
                            }
                            if ((0x40U & (IData)(__Vfunc_N1__11__data))) {
                                __Vfunc_N1__11__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__11__Vfuncout);
                            }
                            if ((0x80U & (IData)(__Vfunc_N1__11__data))) {
                                __Vfunc_N1__11__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__11__Vfuncout);
                            }
                            __Vfunc_N0__10__data = 
                                (0xffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                            if ((1U & (~ (IData)(__Vfunc_N0__10__data)))) {
                                __Vfunc_N0__10__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__10__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__10__data) 
                                          >> 1U)))) {
                                __Vfunc_N0__10__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__10__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__10__data) 
                                          >> 2U)))) {
                                __Vfunc_N0__10__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__10__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__10__data) 
                                          >> 3U)))) {
                                __Vfunc_N0__10__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__10__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__10__data) 
                                          >> 4U)))) {
                                __Vfunc_N0__10__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__10__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__10__data) 
                                          >> 5U)))) {
                                __Vfunc_N0__10__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__10__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__10__data) 
                                          >> 6U)))) {
                                __Vfunc_N0__10__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__10__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__10__data) 
                                          >> 7U)))) {
                                __Vfunc_N0__10__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__10__Vfuncout);
                            }
                            vlTOPp->TMDS_Encoder__DOT__cnt 
                                = (((vlTOPp->TMDS_Encoder__DOT__cnt_old 
                                     + (2U & ((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                              >> 7U))) 
                                    + __Vfunc_N0__10__Vfuncout) 
                                   - __Vfunc_N1__11__Vfuncout);
                        } else {
                            vlTOPp->TMDS_Encoder__DOT__q_out 
                                = (0x1ffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_out));
                            vlTOPp->TMDS_Encoder__DOT__q_out 
                                = ((0x2ffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_out)) 
                                   | (0x100U & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m)));
                            vlTOPp->TMDS_Encoder__DOT__q_out 
                                = ((0x300U & (IData)(vlTOPp->TMDS_Encoder__DOT__q_out)) 
                                   | (0xffU & (~ (IData)(vlTOPp->TMDS_Encoder__DOT__q_m))));
                            __Vfunc_N0__13__data = 
                                (0xffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                            if ((1U & (~ (IData)(__Vfunc_N0__13__data)))) {
                                __Vfunc_N0__13__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__13__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__13__data) 
                                          >> 1U)))) {
                                __Vfunc_N0__13__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__13__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__13__data) 
                                          >> 2U)))) {
                                __Vfunc_N0__13__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__13__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__13__data) 
                                          >> 3U)))) {
                                __Vfunc_N0__13__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__13__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__13__data) 
                                          >> 4U)))) {
                                __Vfunc_N0__13__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__13__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__13__data) 
                                          >> 5U)))) {
                                __Vfunc_N0__13__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__13__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__13__data) 
                                          >> 6U)))) {
                                __Vfunc_N0__13__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__13__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__13__data) 
                                          >> 7U)))) {
                                __Vfunc_N0__13__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__13__Vfuncout);
                            }
                            __Vfunc_N1__12__data = 
                                (0xffU & (IData)(vlTOPp->TMDS_Encoder__DOT__q_m));
                            if ((1U & (IData)(__Vfunc_N1__12__data))) {
                                __Vfunc_N1__12__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__12__Vfuncout);
                            }
                            if ((2U & (IData)(__Vfunc_N1__12__data))) {
                                __Vfunc_N1__12__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__12__Vfuncout);
                            }
                            if ((4U & (IData)(__Vfunc_N1__12__data))) {
                                __Vfunc_N1__12__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__12__Vfuncout);
                            }
                            if ((8U & (IData)(__Vfunc_N1__12__data))) {
                                __Vfunc_N1__12__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__12__Vfuncout);
                            }
                            if ((0x10U & (IData)(__Vfunc_N1__12__data))) {
                                __Vfunc_N1__12__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__12__Vfuncout);
                            }
                            if ((0x20U & (IData)(__Vfunc_N1__12__data))) {
                                __Vfunc_N1__12__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__12__Vfuncout);
                            }
                            if ((0x40U & (IData)(__Vfunc_N1__12__data))) {
                                __Vfunc_N1__12__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__12__Vfuncout);
                            }
                            if ((0x80U & (IData)(__Vfunc_N1__12__data))) {
                                __Vfunc_N1__12__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__12__Vfuncout);
                            }
                            vlTOPp->TMDS_Encoder__DOT__cnt 
                                = (((vlTOPp->TMDS_Encoder__DOT__cnt_old 
                                     + ((~ (1U & ((IData)(vlTOPp->TMDS_Encoder__DOT__q_m) 
                                                  >> 8U))) 
                                        << 1U)) + __Vfunc_N1__12__Vfuncout) 
                                   - __Vfunc_N0__13__Vfuncout);
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTMDS_Encoder::_settle__TOP__4(VTMDS_Encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_settle__TOP__4\n"); );
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_o = (1U & (IData)(vlTOPp->TMDS_Encoder__DOT__q_out));
}

void VTMDS_Encoder::_eval(VTMDS_Encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_eval\n"); );
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clkhigh) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkhigh)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if (((IData)(vlTOPp->clklow) & (~ (IData)(vlTOPp->__Vclklast__TOP__clklow)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlTOPp->clkhigh) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkhigh))) 
         | ((IData)(vlTOPp->clklow) & (~ (IData)(vlTOPp->__Vclklast__TOP__clklow))))) {
        vlTOPp->_settle__TOP__4(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clkhigh = vlTOPp->clkhigh;
    vlTOPp->__Vclklast__TOP__clklow = vlTOPp->clklow;
}

VL_INLINE_OPT QData VTMDS_Encoder::_change_request(VTMDS_Encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_change_request\n"); );
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTMDS_Encoder::_change_request_1(VTMDS_Encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_change_request_1\n"); );
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTMDS_Encoder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clklow & 0xfeU))) {
        Verilated::overWidthError("clklow");}
    if (VL_UNLIKELY((clkhigh & 0xfeU))) {
        Verilated::overWidthError("clkhigh");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((state & 0xfcU))) {
        Verilated::overWidthError("state");}
    if (VL_UNLIKELY((H_VSync_Ctr & 0xfcU))) {
        Verilated::overWidthError("H_VSync_Ctr");}
    if (VL_UNLIKELY((aux_data & 0xf0U))) {
        Verilated::overWidthError("aux_data");}
}
#endif  // VL_DEBUG
