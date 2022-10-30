// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHDMI_Transciever.h for the primary calling header

#include "VHDMI_Transciever.h"
#include "VHDMI_Transciever__Syms.h"

//==========

void VHDMI_Transciever::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHDMI_Transciever::eval\n"); );
    VHDMI_Transciever__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("HDMI_Transciever.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VHDMI_Transciever::_eval_initial_loop(VHDMI_Transciever__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("HDMI_Transciever.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VHDMI_Transciever::_sequent__TOP__1(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_sequent__TOP__1\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
            = (0x3ffU & (IData)((QData)((IData)((0x1ffU 
                                                 & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out) 
                                                    >> 1U))))));
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
            = (0x3ffU & (IData)((QData)((IData)((0x1ffU 
                                                 & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out) 
                                                    >> 1U))))));
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
            = (0x3ffU & (IData)((QData)((IData)((0x1ffU 
                                                 & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out) 
                                                    >> 1U))))));
    }
}

VL_INLINE_OPT void VHDMI_Transciever::_sequent__TOP__2(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_sequent__TOP__2\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    CData/*7:0*/ __Vfunc_N1__16__data;
    CData/*7:0*/ __Vfunc_N1__17__data;
    CData/*7:0*/ __Vfunc_N1__18__data;
    CData/*7:0*/ __Vfunc_N0__19__data;
    CData/*7:0*/ __Vfunc_N1__20__data;
    CData/*7:0*/ __Vfunc_N0__21__data;
    CData/*7:0*/ __Vfunc_N0__22__data;
    CData/*7:0*/ __Vfunc_N1__23__data;
    CData/*7:0*/ __Vfunc_N1__24__data;
    CData/*7:0*/ __Vfunc_N0__25__data;
    CData/*7:0*/ __Vfunc_N0__26__data;
    CData/*7:0*/ __Vfunc_N1__27__data;
    CData/*7:0*/ __Vfunc_N1__28__data;
    CData/*7:0*/ __Vfunc_N0__29__data;
    CData/*7:0*/ __Vfunc_N1__30__data;
    CData/*7:0*/ __Vfunc_N0__31__data;
    CData/*7:0*/ __Vfunc_N1__32__data;
    CData/*7:0*/ __Vfunc_N1__33__data;
    CData/*7:0*/ __Vfunc_N1__34__data;
    CData/*7:0*/ __Vfunc_N0__35__data;
    CData/*7:0*/ __Vfunc_N1__36__data;
    CData/*7:0*/ __Vfunc_N0__37__data;
    CData/*7:0*/ __Vfunc_N0__38__data;
    CData/*7:0*/ __Vfunc_N1__39__data;
    CData/*7:0*/ __Vfunc_N1__40__data;
    CData/*7:0*/ __Vfunc_N0__41__data;
    CData/*7:0*/ __Vfunc_N0__42__data;
    CData/*7:0*/ __Vfunc_N1__43__data;
    CData/*7:0*/ __Vfunc_N1__44__data;
    CData/*7:0*/ __Vfunc_N0__45__data;
    CData/*7:0*/ __Vfunc_N1__46__data;
    CData/*7:0*/ __Vfunc_N0__47__data;
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
    IData/*31:0*/ __Vfunc_N1__16__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__17__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__18__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__19__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__20__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__21__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__22__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__23__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__24__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__25__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__26__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__27__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__28__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__29__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__30__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__31__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__32__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__33__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__34__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__35__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__36__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__37__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__38__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__39__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__40__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__41__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__42__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__43__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__44__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__45__Vfuncout;
    IData/*31:0*/ __Vfunc_N1__46__Vfuncout;
    IData/*31:0*/ __Vfunc_N0__47__Vfuncout;
    // Body
    if (((VL_LTES_III(1,32,32, 0x2fU, vlTOPp->HDMI_Transciever__DOT__h) 
          & VL_LTES_III(1,32,32, 0x21U, vlTOPp->HDMI_Transciever__DOT__v)) 
         & (VL_GTS_III(1,32,32, 0x2afU, vlTOPp->HDMI_Transciever__DOT__h) 
            & VL_GTS_III(1,32,32, 0x201U, vlTOPp->HDMI_Transciever__DOT__v)))) {
        vlTOPp->HDMI_Transciever__DOT__state = 2U;
        vlTOPp->HDMI_Transciever__DOT__addr = (0x3ffffffU 
                                               & ((IData)(1U) 
                                                  + vlTOPp->HDMI_Transciever__DOT__addr));
    } else {
        vlTOPp->HDMI_Transciever__DOT__state = 0U;
        vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_1 
            = (1U | (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_1));
        vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_2 
            = (2U & (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_2));
        vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_1 
            = (1U & (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_1));
        vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_2 
            = (1U & (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_2));
    }
    vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0 = 
        ((2U & (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0)) 
         | VL_LTES_III(32,32,32, 0x2bfU, vlTOPp->HDMI_Transciever__DOT__h));
    vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0 = 
        ((1U & (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0)) 
         | (VL_LTES_III(1,32,32, 0x20bU, vlTOPp->HDMI_Transciever__DOT__v) 
            << 1U));
    if ((VL_LTES_III(1,32,32, 0x31fU, vlTOPp->HDMI_Transciever__DOT__h) 
         & VL_LTES_III(1,32,32, 0x20cU, vlTOPp->HDMI_Transciever__DOT__v))) {
        vlTOPp->HDMI_Transciever__DOT__h = 0U;
        vlTOPp->HDMI_Transciever__DOT__v = 0U;
    }
    if (VL_LTES_III(1,32,32, 0x31fU, vlTOPp->HDMI_Transciever__DOT__h)) {
        vlTOPp->HDMI_Transciever__DOT__v = ((IData)(1U) 
                                            + vlTOPp->HDMI_Transciever__DOT__v);
        vlTOPp->HDMI_Transciever__DOT__h = 0U;
        vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0 
            = (2U & (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0));
        vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0 
            = (1U & (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0));
    } else {
        if (vlTOPp->HDMI_Transciever__DOT__first) {
            vlTOPp->HDMI_Transciever__DOT__h = ((IData)(1U) 
                                                + vlTOPp->HDMI_Transciever__DOT__h);
        }
    }
    vlTOPp->HDMI_Transciever__DOT__first = 1U;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__state))) {
            if ((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out = 0x354U;
            } else {
                if ((1U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                    vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out = 0xabU;
                } else {
                    if ((2U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out = 0x154U;
                    } else {
                        if ((3U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                            vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out = 0x2abU;
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->HDMI_Transciever__DOT__state))) {
                if (((((((((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data)) 
                           | (1U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                          | (2U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                         | (3U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                        | (4U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                       | (5U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                      | (6U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                     | (7U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data)))) {
                    vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                        = ((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                            ? 0x29cU : ((1U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                         ? 0x263U : 
                                        ((2U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                          ? 0x2e4U : 
                                         ((3U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                           ? 0x2e2U
                                           : ((4U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                               ? 0x171U
                                               : ((5U 
                                                   == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                                   ? 0x11eU
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                                    ? 0x18eU
                                                    : 0x13cU)))))));
                } else {
                    if (((((((((8U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data)) 
                               | (9U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                              | (0xaU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                             | (0xbU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                            | (0xcU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                           | (0xdU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                          | (0xeU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))) 
                         | (0xfU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data)))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                            = ((8U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                ? 0x2ccU : ((9U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                             ? 0x139U
                                             : ((0xaU 
                                                 == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                                 ? 0x19cU
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                                  ? 0x2c6U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                                   ? 0x28eU
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                                    ? 0x271U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__aux_data))
                                                     ? 0x163U
                                                     : 0x2c3U)))))));
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->HDMI_Transciever__DOT__state))) {
                    vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old 
                        = vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt;
                    __Vfunc_N1__1__data = vlTOPp->ram_blue;
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
                    __Vfunc_N1__0__data = vlTOPp->ram_blue;
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
                            & (~ (IData)(vlTOPp->ram_blue))))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3feU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (1U & (IData)(vlTOPp->ram_blue)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3fdU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (2U & (((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                         ^ ~ ((IData)(vlTOPp->ram_blue) 
                                              >> 1U)) 
                                        << 1U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3fbU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (4U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                          >> 1U) ^ ~ 
                                         ((IData)(vlTOPp->ram_blue) 
                                          >> 2U)) << 2U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3f7U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (8U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                          >> 2U) ^ ~ 
                                         ((IData)(vlTOPp->ram_blue) 
                                          >> 3U)) << 3U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3efU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (0x10U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                             >> 3U) 
                                            ^ ~ ((IData)(vlTOPp->ram_blue) 
                                                 >> 4U)) 
                                           << 4U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3dfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (0x20U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                             >> 4U) 
                                            ^ ~ ((IData)(vlTOPp->ram_blue) 
                                                 >> 5U)) 
                                           << 5U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3bfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (0x40U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                             >> 5U) 
                                            ^ ~ ((IData)(vlTOPp->ram_blue) 
                                                 >> 6U)) 
                                           << 6U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x37fU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (0x80U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                             >> 6U) 
                                            ^ ~ ((IData)(vlTOPp->ram_blue) 
                                                 >> 7U)) 
                                           << 7U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = (0x100U | (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
                    } else {
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3feU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (1U & (IData)(vlTOPp->ram_blue)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3fdU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (2U & (((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlTOPp->ram_blue)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3fbU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (4U & ((0xfffffffcU 
                                         & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                            << 1U)) 
                                        ^ (0xfffffffcU 
                                           & (IData)(vlTOPp->ram_blue)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3f7U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (8U & ((0xfffffff8U 
                                         & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                            << 1U)) 
                                        ^ (0xfffffff8U 
                                           & (IData)(vlTOPp->ram_blue)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3efU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (0x10U & ((0xfffffff0U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xfffffff0U 
                                              & (IData)(vlTOPp->ram_blue)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3dfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (0x20U & ((0xffffffe0U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffffe0U 
                                              & (IData)(vlTOPp->ram_blue)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x3bfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (0x40U & ((0xffffffc0U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffffc0U 
                                              & (IData)(vlTOPp->ram_blue)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = ((0x37fU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
                               | (0x80U & ((0xffffff80U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffff80U 
                                              & (IData)(vlTOPp->ram_blue)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m 
                            = (0x100U | (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
                    }
                    __Vfunc_N0__3__data = (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                    __Vfunc_N1__2__data = (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                    if (((0U == vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old) 
                         ^ (__Vfunc_N1__2__Vfuncout 
                            == __Vfunc_N0__3__Vfuncout))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                            = ((0x1ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out)) 
                               | (0x200U & ((~ ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                                >> 8U)) 
                                            << 9U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                            = ((0x2ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out)) 
                               | (0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)));
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                            = ((0x303U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out)) 
                               | (0xfcU & (((0x100U 
                                             & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m))
                                             ? (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)
                                             : (~ (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m))) 
                                           << 2U)));
                        __Vfunc_N1__7__data = (0xffU 
                                               & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                                               & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                                               & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                                               & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                        vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt 
                            = ((0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m))
                                ? (vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old 
                                   + (__Vfunc_N1__4__Vfuncout 
                                      - __Vfunc_N0__5__Vfuncout))
                                : (vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old 
                                   + (__Vfunc_N0__6__Vfuncout 
                                      - __Vfunc_N1__7__Vfuncout)));
                    } else {
                        __Vfunc_N1__14__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
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
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)) 
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
                        if (((VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old) 
                              & (0U != __Vfunc_N1__8__Vfuncout)) 
                             | (VL_GTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old) 
                                & (0U != __Vfunc_N0__9__Vfuncout)))) {
                            vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                                = (0x200U | (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out));
                            vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                                = ((0x2ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out)) 
                                   | (0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)));
                            vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                                = ((0x300U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out)) 
                                   | (0xffU & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m))));
                            __Vfunc_N1__11__data = 
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                            vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt 
                                = (((vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old 
                                     + (2U & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                              >> 7U))) 
                                    + __Vfunc_N0__10__Vfuncout) 
                                   - __Vfunc_N1__11__Vfuncout);
                        } else {
                            vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                                = (0x1ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out));
                            vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                                = ((0x2ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out)) 
                                   | (0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m)));
                            vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out 
                                = ((0x300U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out)) 
                                   | (0xffU & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m))));
                            __Vfunc_N0__13__data = 
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m));
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
                            vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt 
                                = (((vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old 
                                     + ((~ (1U & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_m) 
                                                  >> 8U))) 
                                        << 1U)) + __Vfunc_N1__12__Vfuncout) 
                                   - __Vfunc_N0__13__Vfuncout);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__state))) {
            if ((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out = 0x354U;
            } else {
                if ((1U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                    vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out = 0xabU;
                } else {
                    if ((2U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out = 0x154U;
                    } else {
                        if ((3U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                            vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out = 0x2abU;
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->HDMI_Transciever__DOT__state))) {
                if (((((((((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data)) 
                           | (1U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                          | (2U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                         | (3U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                        | (4U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                       | (5U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                      | (6U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                     | (7U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data)))) {
                    vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                        = ((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                            ? 0x29cU : ((1U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                         ? 0x263U : 
                                        ((2U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                          ? 0x2e4U : 
                                         ((3U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                           ? 0x2e2U
                                           : ((4U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                               ? 0x171U
                                               : ((5U 
                                                   == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                                   ? 0x11eU
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                                    ? 0x18eU
                                                    : 0x13cU)))))));
                } else {
                    if (((((((((8U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data)) 
                               | (9U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                              | (0xaU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                             | (0xbU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                            | (0xcU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                           | (0xdU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                          | (0xeU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))) 
                         | (0xfU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data)))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                            = ((8U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                ? 0x2ccU : ((9U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                             ? 0x139U
                                             : ((0xaU 
                                                 == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                                 ? 0x19cU
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                                  ? 0x2c6U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                                   ? 0x28eU
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                                    ? 0x271U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__aux_data))
                                                     ? 0x163U
                                                     : 0x2c3U)))))));
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->HDMI_Transciever__DOT__state))) {
                    vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old 
                        = vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt;
                    __Vfunc_N1__17__data = vlTOPp->ram_green;
                    if ((1U & (IData)(__Vfunc_N1__17__data))) {
                        __Vfunc_N1__17__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__17__Vfuncout);
                    }
                    if ((2U & (IData)(__Vfunc_N1__17__data))) {
                        __Vfunc_N1__17__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__17__Vfuncout);
                    }
                    if ((4U & (IData)(__Vfunc_N1__17__data))) {
                        __Vfunc_N1__17__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__17__Vfuncout);
                    }
                    if ((8U & (IData)(__Vfunc_N1__17__data))) {
                        __Vfunc_N1__17__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__17__Vfuncout);
                    }
                    if ((0x10U & (IData)(__Vfunc_N1__17__data))) {
                        __Vfunc_N1__17__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__17__Vfuncout);
                    }
                    if ((0x20U & (IData)(__Vfunc_N1__17__data))) {
                        __Vfunc_N1__17__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__17__Vfuncout);
                    }
                    if ((0x40U & (IData)(__Vfunc_N1__17__data))) {
                        __Vfunc_N1__17__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__17__Vfuncout);
                    }
                    if ((0x80U & (IData)(__Vfunc_N1__17__data))) {
                        __Vfunc_N1__17__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__17__Vfuncout);
                    }
                    __Vfunc_N1__16__data = vlTOPp->ram_green;
                    if ((1U & (IData)(__Vfunc_N1__16__data))) {
                        __Vfunc_N1__16__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__16__Vfuncout);
                    }
                    if ((2U & (IData)(__Vfunc_N1__16__data))) {
                        __Vfunc_N1__16__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__16__Vfuncout);
                    }
                    if ((4U & (IData)(__Vfunc_N1__16__data))) {
                        __Vfunc_N1__16__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__16__Vfuncout);
                    }
                    if ((8U & (IData)(__Vfunc_N1__16__data))) {
                        __Vfunc_N1__16__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__16__Vfuncout);
                    }
                    if ((0x10U & (IData)(__Vfunc_N1__16__data))) {
                        __Vfunc_N1__16__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__16__Vfuncout);
                    }
                    if ((0x20U & (IData)(__Vfunc_N1__16__data))) {
                        __Vfunc_N1__16__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__16__Vfuncout);
                    }
                    if ((0x40U & (IData)(__Vfunc_N1__16__data))) {
                        __Vfunc_N1__16__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__16__Vfuncout);
                    }
                    if ((0x80U & (IData)(__Vfunc_N1__16__data))) {
                        __Vfunc_N1__16__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__16__Vfuncout);
                    }
                    if ((VL_LTS_III(1,32,32, 4U, __Vfunc_N1__16__Vfuncout) 
                         | ((4U == __Vfunc_N1__17__Vfuncout) 
                            & (~ (IData)(vlTOPp->ram_green))))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3feU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (1U & (IData)(vlTOPp->ram_green)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3fdU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (2U & (((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                         ^ ~ ((IData)(vlTOPp->ram_green) 
                                              >> 1U)) 
                                        << 1U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3fbU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (4U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                          >> 1U) ^ ~ 
                                         ((IData)(vlTOPp->ram_green) 
                                          >> 2U)) << 2U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3f7U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (8U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                          >> 2U) ^ ~ 
                                         ((IData)(vlTOPp->ram_green) 
                                          >> 3U)) << 3U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3efU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (0x10U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                             >> 3U) 
                                            ^ ~ ((IData)(vlTOPp->ram_green) 
                                                 >> 4U)) 
                                           << 4U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3dfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (0x20U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                             >> 4U) 
                                            ^ ~ ((IData)(vlTOPp->ram_green) 
                                                 >> 5U)) 
                                           << 5U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3bfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (0x40U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                             >> 5U) 
                                            ^ ~ ((IData)(vlTOPp->ram_green) 
                                                 >> 6U)) 
                                           << 6U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x37fU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (0x80U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                             >> 6U) 
                                            ^ ~ ((IData)(vlTOPp->ram_green) 
                                                 >> 7U)) 
                                           << 7U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = (0x100U | (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                    } else {
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3feU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (1U & (IData)(vlTOPp->ram_green)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3fdU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (2U & (((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlTOPp->ram_green)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3fbU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (4U & ((0xfffffffcU 
                                         & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                            << 1U)) 
                                        ^ (0xfffffffcU 
                                           & (IData)(vlTOPp->ram_green)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3f7U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (8U & ((0xfffffff8U 
                                         & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                            << 1U)) 
                                        ^ (0xfffffff8U 
                                           & (IData)(vlTOPp->ram_green)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3efU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (0x10U & ((0xfffffff0U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xfffffff0U 
                                              & (IData)(vlTOPp->ram_green)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3dfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (0x20U & ((0xffffffe0U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffffe0U 
                                              & (IData)(vlTOPp->ram_green)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x3bfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (0x40U & ((0xffffffc0U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffffc0U 
                                              & (IData)(vlTOPp->ram_green)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = ((0x37fU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                               | (0x80U & ((0xffffff80U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffff80U 
                                              & (IData)(vlTOPp->ram_green)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m 
                            = (0x100U | (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                    }
                    __Vfunc_N0__19__data = (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                    if ((1U & (~ (IData)(__Vfunc_N0__19__data)))) {
                        __Vfunc_N0__19__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__19__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__19__data) 
                                  >> 1U)))) {
                        __Vfunc_N0__19__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__19__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__19__data) 
                                  >> 2U)))) {
                        __Vfunc_N0__19__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__19__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__19__data) 
                                  >> 3U)))) {
                        __Vfunc_N0__19__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__19__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__19__data) 
                                  >> 4U)))) {
                        __Vfunc_N0__19__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__19__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__19__data) 
                                  >> 5U)))) {
                        __Vfunc_N0__19__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__19__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__19__data) 
                                  >> 6U)))) {
                        __Vfunc_N0__19__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__19__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__19__data) 
                                  >> 7U)))) {
                        __Vfunc_N0__19__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__19__Vfuncout);
                    }
                    __Vfunc_N1__18__data = (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                    if ((1U & (IData)(__Vfunc_N1__18__data))) {
                        __Vfunc_N1__18__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__18__Vfuncout);
                    }
                    if ((2U & (IData)(__Vfunc_N1__18__data))) {
                        __Vfunc_N1__18__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__18__Vfuncout);
                    }
                    if ((4U & (IData)(__Vfunc_N1__18__data))) {
                        __Vfunc_N1__18__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__18__Vfuncout);
                    }
                    if ((8U & (IData)(__Vfunc_N1__18__data))) {
                        __Vfunc_N1__18__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__18__Vfuncout);
                    }
                    if ((0x10U & (IData)(__Vfunc_N1__18__data))) {
                        __Vfunc_N1__18__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__18__Vfuncout);
                    }
                    if ((0x20U & (IData)(__Vfunc_N1__18__data))) {
                        __Vfunc_N1__18__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__18__Vfuncout);
                    }
                    if ((0x40U & (IData)(__Vfunc_N1__18__data))) {
                        __Vfunc_N1__18__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__18__Vfuncout);
                    }
                    if ((0x80U & (IData)(__Vfunc_N1__18__data))) {
                        __Vfunc_N1__18__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__18__Vfuncout);
                    }
                    if (((0U == vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old) 
                         ^ (__Vfunc_N1__18__Vfuncout 
                            == __Vfunc_N0__19__Vfuncout))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                            = ((0x1ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out)) 
                               | (0x200U & ((~ ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                                >> 8U)) 
                                            << 9U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                            = ((0x2ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out)) 
                               | (0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)));
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                            = ((0x303U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out)) 
                               | (0xfcU & (((0x100U 
                                             & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m))
                                             ? (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)
                                             : (~ (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m))) 
                                           << 2U)));
                        __Vfunc_N1__23__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                        if ((1U & (IData)(__Vfunc_N1__23__data))) {
                            __Vfunc_N1__23__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__23__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__23__data))) {
                            __Vfunc_N1__23__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__23__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__23__data))) {
                            __Vfunc_N1__23__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__23__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__23__data))) {
                            __Vfunc_N1__23__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__23__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__23__data))) {
                            __Vfunc_N1__23__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__23__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__23__data))) {
                            __Vfunc_N1__23__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__23__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__23__data))) {
                            __Vfunc_N1__23__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__23__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__23__data))) {
                            __Vfunc_N1__23__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__23__Vfuncout);
                        }
                        __Vfunc_N0__22__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                        if ((1U & (~ (IData)(__Vfunc_N0__22__data)))) {
                            __Vfunc_N0__22__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__22__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__22__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__22__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__22__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__22__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__22__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__22__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__22__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__22__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__22__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__22__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__22__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__22__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__22__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__22__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__22__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__22__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__22__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__22__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__22__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__22__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__22__Vfuncout);
                        }
                        __Vfunc_N0__21__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                        if ((1U & (~ (IData)(__Vfunc_N0__21__data)))) {
                            __Vfunc_N0__21__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__21__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__21__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__21__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__21__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__21__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__21__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__21__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__21__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__21__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__21__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__21__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__21__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__21__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__21__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__21__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__21__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__21__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__21__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__21__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__21__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__21__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__21__Vfuncout);
                        }
                        __Vfunc_N1__20__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                        if ((1U & (IData)(__Vfunc_N1__20__data))) {
                            __Vfunc_N1__20__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__20__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__20__data))) {
                            __Vfunc_N1__20__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__20__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__20__data))) {
                            __Vfunc_N1__20__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__20__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__20__data))) {
                            __Vfunc_N1__20__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__20__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__20__data))) {
                            __Vfunc_N1__20__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__20__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__20__data))) {
                            __Vfunc_N1__20__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__20__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__20__data))) {
                            __Vfunc_N1__20__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__20__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__20__data))) {
                            __Vfunc_N1__20__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__20__Vfuncout);
                        }
                        vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt 
                            = ((0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m))
                                ? (vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old 
                                   + (__Vfunc_N1__20__Vfuncout 
                                      - __Vfunc_N0__21__Vfuncout))
                                : (vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old 
                                   + (__Vfunc_N0__22__Vfuncout 
                                      - __Vfunc_N1__23__Vfuncout)));
                    } else {
                        __Vfunc_N1__30__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                        if ((1U & (IData)(__Vfunc_N1__30__data))) {
                            __Vfunc_N1__30__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__30__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__30__data))) {
                            __Vfunc_N1__30__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__30__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__30__data))) {
                            __Vfunc_N1__30__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__30__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__30__data))) {
                            __Vfunc_N1__30__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__30__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__30__data))) {
                            __Vfunc_N1__30__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__30__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__30__data))) {
                            __Vfunc_N1__30__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__30__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__30__data))) {
                            __Vfunc_N1__30__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__30__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__30__data))) {
                            __Vfunc_N1__30__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__30__Vfuncout);
                        }
                        __Vfunc_N0__25__data = ((0xffU 
                                                 & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                                                > __Vfunc_N1__30__Vfuncout);
                        if ((1U & (~ (IData)(__Vfunc_N0__25__data)))) {
                            __Vfunc_N0__25__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__25__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__25__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__25__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__25__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__25__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__25__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__25__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__25__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__25__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__25__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__25__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__25__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__25__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__25__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__25__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__25__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__25__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__25__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__25__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__25__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__25__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__25__Vfuncout);
                        }
                        __Vfunc_N0__31__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                        if ((1U & (~ (IData)(__Vfunc_N0__31__data)))) {
                            __Vfunc_N0__31__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__31__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__31__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__31__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__31__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__31__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__31__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__31__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__31__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__31__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__31__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__31__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__31__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__31__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__31__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__31__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__31__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__31__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__31__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__31__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__31__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__31__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__31__Vfuncout);
                        }
                        __Vfunc_N1__24__data = ((0xffU 
                                                 & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)) 
                                                > __Vfunc_N0__31__Vfuncout);
                        if ((1U & (IData)(__Vfunc_N1__24__data))) {
                            __Vfunc_N1__24__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__24__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__24__data))) {
                            __Vfunc_N1__24__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__24__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__24__data))) {
                            __Vfunc_N1__24__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__24__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__24__data))) {
                            __Vfunc_N1__24__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__24__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__24__data))) {
                            __Vfunc_N1__24__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__24__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__24__data))) {
                            __Vfunc_N1__24__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__24__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__24__data))) {
                            __Vfunc_N1__24__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__24__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__24__data))) {
                            __Vfunc_N1__24__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__24__Vfuncout);
                        }
                        if (((VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old) 
                              & (0U != __Vfunc_N1__24__Vfuncout)) 
                             | (VL_GTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old) 
                                & (0U != __Vfunc_N0__25__Vfuncout)))) {
                            vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                                = (0x200U | (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out));
                            vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                                = ((0x2ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out)) 
                                   | (0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)));
                            vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                                = ((0x300U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out)) 
                                   | (0xffU & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m))));
                            __Vfunc_N1__27__data = 
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                            if ((1U & (IData)(__Vfunc_N1__27__data))) {
                                __Vfunc_N1__27__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__27__Vfuncout);
                            }
                            if ((2U & (IData)(__Vfunc_N1__27__data))) {
                                __Vfunc_N1__27__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__27__Vfuncout);
                            }
                            if ((4U & (IData)(__Vfunc_N1__27__data))) {
                                __Vfunc_N1__27__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__27__Vfuncout);
                            }
                            if ((8U & (IData)(__Vfunc_N1__27__data))) {
                                __Vfunc_N1__27__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__27__Vfuncout);
                            }
                            if ((0x10U & (IData)(__Vfunc_N1__27__data))) {
                                __Vfunc_N1__27__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__27__Vfuncout);
                            }
                            if ((0x20U & (IData)(__Vfunc_N1__27__data))) {
                                __Vfunc_N1__27__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__27__Vfuncout);
                            }
                            if ((0x40U & (IData)(__Vfunc_N1__27__data))) {
                                __Vfunc_N1__27__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__27__Vfuncout);
                            }
                            if ((0x80U & (IData)(__Vfunc_N1__27__data))) {
                                __Vfunc_N1__27__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__27__Vfuncout);
                            }
                            __Vfunc_N0__26__data = 
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                            if ((1U & (~ (IData)(__Vfunc_N0__26__data)))) {
                                __Vfunc_N0__26__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__26__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__26__data) 
                                          >> 1U)))) {
                                __Vfunc_N0__26__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__26__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__26__data) 
                                          >> 2U)))) {
                                __Vfunc_N0__26__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__26__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__26__data) 
                                          >> 3U)))) {
                                __Vfunc_N0__26__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__26__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__26__data) 
                                          >> 4U)))) {
                                __Vfunc_N0__26__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__26__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__26__data) 
                                          >> 5U)))) {
                                __Vfunc_N0__26__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__26__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__26__data) 
                                          >> 6U)))) {
                                __Vfunc_N0__26__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__26__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__26__data) 
                                          >> 7U)))) {
                                __Vfunc_N0__26__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__26__Vfuncout);
                            }
                            vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt 
                                = (((vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old 
                                     + (2U & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                              >> 7U))) 
                                    + __Vfunc_N0__26__Vfuncout) 
                                   - __Vfunc_N1__27__Vfuncout);
                        } else {
                            vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                                = (0x1ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out));
                            vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                                = ((0x2ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out)) 
                                   | (0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m)));
                            vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out 
                                = ((0x300U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out)) 
                                   | (0xffU & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m))));
                            __Vfunc_N0__29__data = 
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                            if ((1U & (~ (IData)(__Vfunc_N0__29__data)))) {
                                __Vfunc_N0__29__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__29__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__29__data) 
                                          >> 1U)))) {
                                __Vfunc_N0__29__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__29__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__29__data) 
                                          >> 2U)))) {
                                __Vfunc_N0__29__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__29__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__29__data) 
                                          >> 3U)))) {
                                __Vfunc_N0__29__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__29__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__29__data) 
                                          >> 4U)))) {
                                __Vfunc_N0__29__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__29__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__29__data) 
                                          >> 5U)))) {
                                __Vfunc_N0__29__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__29__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__29__data) 
                                          >> 6U)))) {
                                __Vfunc_N0__29__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__29__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__29__data) 
                                          >> 7U)))) {
                                __Vfunc_N0__29__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__29__Vfuncout);
                            }
                            __Vfunc_N1__28__data = 
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m));
                            if ((1U & (IData)(__Vfunc_N1__28__data))) {
                                __Vfunc_N1__28__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__28__Vfuncout);
                            }
                            if ((2U & (IData)(__Vfunc_N1__28__data))) {
                                __Vfunc_N1__28__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__28__Vfuncout);
                            }
                            if ((4U & (IData)(__Vfunc_N1__28__data))) {
                                __Vfunc_N1__28__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__28__Vfuncout);
                            }
                            if ((8U & (IData)(__Vfunc_N1__28__data))) {
                                __Vfunc_N1__28__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__28__Vfuncout);
                            }
                            if ((0x10U & (IData)(__Vfunc_N1__28__data))) {
                                __Vfunc_N1__28__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__28__Vfuncout);
                            }
                            if ((0x20U & (IData)(__Vfunc_N1__28__data))) {
                                __Vfunc_N1__28__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__28__Vfuncout);
                            }
                            if ((0x40U & (IData)(__Vfunc_N1__28__data))) {
                                __Vfunc_N1__28__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__28__Vfuncout);
                            }
                            if ((0x80U & (IData)(__Vfunc_N1__28__data))) {
                                __Vfunc_N1__28__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__28__Vfuncout);
                            }
                            vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt 
                                = (((vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old 
                                     + ((~ (1U & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_m) 
                                                  >> 8U))) 
                                        << 1U)) + __Vfunc_N1__28__Vfuncout) 
                                   - __Vfunc_N0__29__Vfuncout);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__state))) {
            if ((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out = 0x354U;
            } else {
                if ((1U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                    vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out = 0xabU;
                } else {
                    if ((2U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out = 0x154U;
                    } else {
                        if ((3U == (IData)(vlTOPp->HDMI_Transciever__DOT__H_VSync_Ctr_0))) {
                            vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out = 0x2abU;
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->HDMI_Transciever__DOT__state))) {
                if (((((((((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data)) 
                           | (1U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                          | (2U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                         | (3U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                        | (4U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                       | (5U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                      | (6U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                     | (7U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data)))) {
                    vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                        = ((0U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                            ? 0x29cU : ((1U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                         ? 0x263U : 
                                        ((2U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                          ? 0x2e4U : 
                                         ((3U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                           ? 0x2e2U
                                           : ((4U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                               ? 0x171U
                                               : ((5U 
                                                   == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                                   ? 0x11eU
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                                    ? 0x18eU
                                                    : 0x13cU)))))));
                } else {
                    if (((((((((8U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data)) 
                               | (9U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                              | (0xaU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                             | (0xbU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                            | (0xcU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                           | (0xdU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                          | (0xeU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))) 
                         | (0xfU == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data)))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                            = ((8U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                ? 0x2ccU : ((9U == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                             ? 0x139U
                                             : ((0xaU 
                                                 == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                                 ? 0x19cU
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                                  ? 0x2c6U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                                   ? 0x28eU
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                                    ? 0x271U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__aux_data))
                                                     ? 0x163U
                                                     : 0x2c3U)))))));
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->HDMI_Transciever__DOT__state))) {
                    vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old 
                        = vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt;
                    __Vfunc_N1__33__data = vlTOPp->ram_red;
                    if ((1U & (IData)(__Vfunc_N1__33__data))) {
                        __Vfunc_N1__33__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__33__Vfuncout);
                    }
                    if ((2U & (IData)(__Vfunc_N1__33__data))) {
                        __Vfunc_N1__33__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__33__Vfuncout);
                    }
                    if ((4U & (IData)(__Vfunc_N1__33__data))) {
                        __Vfunc_N1__33__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__33__Vfuncout);
                    }
                    if ((8U & (IData)(__Vfunc_N1__33__data))) {
                        __Vfunc_N1__33__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__33__Vfuncout);
                    }
                    if ((0x10U & (IData)(__Vfunc_N1__33__data))) {
                        __Vfunc_N1__33__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__33__Vfuncout);
                    }
                    if ((0x20U & (IData)(__Vfunc_N1__33__data))) {
                        __Vfunc_N1__33__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__33__Vfuncout);
                    }
                    if ((0x40U & (IData)(__Vfunc_N1__33__data))) {
                        __Vfunc_N1__33__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__33__Vfuncout);
                    }
                    if ((0x80U & (IData)(__Vfunc_N1__33__data))) {
                        __Vfunc_N1__33__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__33__Vfuncout);
                    }
                    __Vfunc_N1__32__data = vlTOPp->ram_red;
                    if ((1U & (IData)(__Vfunc_N1__32__data))) {
                        __Vfunc_N1__32__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__32__Vfuncout);
                    }
                    if ((2U & (IData)(__Vfunc_N1__32__data))) {
                        __Vfunc_N1__32__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__32__Vfuncout);
                    }
                    if ((4U & (IData)(__Vfunc_N1__32__data))) {
                        __Vfunc_N1__32__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__32__Vfuncout);
                    }
                    if ((8U & (IData)(__Vfunc_N1__32__data))) {
                        __Vfunc_N1__32__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__32__Vfuncout);
                    }
                    if ((0x10U & (IData)(__Vfunc_N1__32__data))) {
                        __Vfunc_N1__32__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__32__Vfuncout);
                    }
                    if ((0x20U & (IData)(__Vfunc_N1__32__data))) {
                        __Vfunc_N1__32__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__32__Vfuncout);
                    }
                    if ((0x40U & (IData)(__Vfunc_N1__32__data))) {
                        __Vfunc_N1__32__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__32__Vfuncout);
                    }
                    if ((0x80U & (IData)(__Vfunc_N1__32__data))) {
                        __Vfunc_N1__32__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__32__Vfuncout);
                    }
                    if ((VL_LTS_III(1,32,32, 4U, __Vfunc_N1__32__Vfuncout) 
                         | ((4U == __Vfunc_N1__33__Vfuncout) 
                            & (~ (IData)(vlTOPp->ram_red))))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3feU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (1U & (IData)(vlTOPp->ram_red)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3fdU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (2U & (((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                         ^ ~ ((IData)(vlTOPp->ram_red) 
                                              >> 1U)) 
                                        << 1U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3fbU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (4U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                          >> 1U) ^ ~ 
                                         ((IData)(vlTOPp->ram_red) 
                                          >> 2U)) << 2U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3f7U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (8U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                          >> 2U) ^ ~ 
                                         ((IData)(vlTOPp->ram_red) 
                                          >> 3U)) << 3U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3efU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (0x10U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                             >> 3U) 
                                            ^ ~ ((IData)(vlTOPp->ram_red) 
                                                 >> 4U)) 
                                           << 4U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3dfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (0x20U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                             >> 4U) 
                                            ^ ~ ((IData)(vlTOPp->ram_red) 
                                                 >> 5U)) 
                                           << 5U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3bfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (0x40U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                             >> 5U) 
                                            ^ ~ ((IData)(vlTOPp->ram_red) 
                                                 >> 6U)) 
                                           << 6U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x37fU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (0x80U & ((((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                             >> 6U) 
                                            ^ ~ ((IData)(vlTOPp->ram_red) 
                                                 >> 7U)) 
                                           << 7U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = (0x100U | (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                    } else {
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3feU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (1U & (IData)(vlTOPp->ram_red)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3fdU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (2U & (((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlTOPp->ram_red)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3fbU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (4U & ((0xfffffffcU 
                                         & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                            << 1U)) 
                                        ^ (0xfffffffcU 
                                           & (IData)(vlTOPp->ram_red)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3f7U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (8U & ((0xfffffff8U 
                                         & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                            << 1U)) 
                                        ^ (0xfffffff8U 
                                           & (IData)(vlTOPp->ram_red)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3efU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (0x10U & ((0xfffffff0U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xfffffff0U 
                                              & (IData)(vlTOPp->ram_red)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3dfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (0x20U & ((0xffffffe0U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffffe0U 
                                              & (IData)(vlTOPp->ram_red)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x3bfU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (0x40U & ((0xffffffc0U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffffc0U 
                                              & (IData)(vlTOPp->ram_red)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = ((0x37fU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                               | (0x80U & ((0xffffff80U 
                                            & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                               << 1U)) 
                                           ^ (0xffffff80U 
                                              & (IData)(vlTOPp->ram_red)))));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m 
                            = (0x100U | (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                    }
                    __Vfunc_N0__35__data = (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                    if ((1U & (~ (IData)(__Vfunc_N0__35__data)))) {
                        __Vfunc_N0__35__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__35__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__35__data) 
                                  >> 1U)))) {
                        __Vfunc_N0__35__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__35__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__35__data) 
                                  >> 2U)))) {
                        __Vfunc_N0__35__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__35__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__35__data) 
                                  >> 3U)))) {
                        __Vfunc_N0__35__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__35__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__35__data) 
                                  >> 4U)))) {
                        __Vfunc_N0__35__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__35__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__35__data) 
                                  >> 5U)))) {
                        __Vfunc_N0__35__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__35__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__35__data) 
                                  >> 6U)))) {
                        __Vfunc_N0__35__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__35__Vfuncout);
                    }
                    if ((1U & (~ ((IData)(__Vfunc_N0__35__data) 
                                  >> 7U)))) {
                        __Vfunc_N0__35__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N0__35__Vfuncout);
                    }
                    __Vfunc_N1__34__data = (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                    if ((1U & (IData)(__Vfunc_N1__34__data))) {
                        __Vfunc_N1__34__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__34__Vfuncout);
                    }
                    if ((2U & (IData)(__Vfunc_N1__34__data))) {
                        __Vfunc_N1__34__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__34__Vfuncout);
                    }
                    if ((4U & (IData)(__Vfunc_N1__34__data))) {
                        __Vfunc_N1__34__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__34__Vfuncout);
                    }
                    if ((8U & (IData)(__Vfunc_N1__34__data))) {
                        __Vfunc_N1__34__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__34__Vfuncout);
                    }
                    if ((0x10U & (IData)(__Vfunc_N1__34__data))) {
                        __Vfunc_N1__34__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__34__Vfuncout);
                    }
                    if ((0x20U & (IData)(__Vfunc_N1__34__data))) {
                        __Vfunc_N1__34__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__34__Vfuncout);
                    }
                    if ((0x40U & (IData)(__Vfunc_N1__34__data))) {
                        __Vfunc_N1__34__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__34__Vfuncout);
                    }
                    if ((0x80U & (IData)(__Vfunc_N1__34__data))) {
                        __Vfunc_N1__34__Vfuncout = 
                            ((IData)(1U) + __Vfunc_N1__34__Vfuncout);
                    }
                    if (((0U == vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old) 
                         ^ (__Vfunc_N1__34__Vfuncout 
                            == __Vfunc_N0__35__Vfuncout))) {
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                            = ((0x1ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out)) 
                               | (0x200U & ((~ ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                                >> 8U)) 
                                            << 9U)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                            = ((0x2ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out)) 
                               | (0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)));
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                            = ((0x303U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out)) 
                               | (0xfcU & (((0x100U 
                                             & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m))
                                             ? (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)
                                             : (~ (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m))) 
                                           << 2U)));
                        __Vfunc_N1__39__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                        if ((1U & (IData)(__Vfunc_N1__39__data))) {
                            __Vfunc_N1__39__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__39__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__39__data))) {
                            __Vfunc_N1__39__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__39__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__39__data))) {
                            __Vfunc_N1__39__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__39__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__39__data))) {
                            __Vfunc_N1__39__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__39__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__39__data))) {
                            __Vfunc_N1__39__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__39__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__39__data))) {
                            __Vfunc_N1__39__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__39__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__39__data))) {
                            __Vfunc_N1__39__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__39__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__39__data))) {
                            __Vfunc_N1__39__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__39__Vfuncout);
                        }
                        __Vfunc_N0__38__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                        if ((1U & (~ (IData)(__Vfunc_N0__38__data)))) {
                            __Vfunc_N0__38__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__38__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__38__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__38__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__38__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__38__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__38__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__38__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__38__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__38__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__38__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__38__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__38__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__38__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__38__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__38__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__38__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__38__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__38__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__38__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__38__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__38__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__38__Vfuncout);
                        }
                        __Vfunc_N0__37__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                        if ((1U & (~ (IData)(__Vfunc_N0__37__data)))) {
                            __Vfunc_N0__37__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__37__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__37__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__37__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__37__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__37__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__37__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__37__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__37__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__37__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__37__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__37__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__37__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__37__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__37__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__37__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__37__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__37__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__37__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__37__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__37__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__37__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__37__Vfuncout);
                        }
                        __Vfunc_N1__36__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                        if ((1U & (IData)(__Vfunc_N1__36__data))) {
                            __Vfunc_N1__36__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__36__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__36__data))) {
                            __Vfunc_N1__36__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__36__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__36__data))) {
                            __Vfunc_N1__36__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__36__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__36__data))) {
                            __Vfunc_N1__36__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__36__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__36__data))) {
                            __Vfunc_N1__36__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__36__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__36__data))) {
                            __Vfunc_N1__36__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__36__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__36__data))) {
                            __Vfunc_N1__36__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__36__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__36__data))) {
                            __Vfunc_N1__36__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__36__Vfuncout);
                        }
                        vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt 
                            = ((0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m))
                                ? (vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old 
                                   + (__Vfunc_N1__36__Vfuncout 
                                      - __Vfunc_N0__37__Vfuncout))
                                : (vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old 
                                   + (__Vfunc_N0__38__Vfuncout 
                                      - __Vfunc_N1__39__Vfuncout)));
                    } else {
                        __Vfunc_N1__46__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                        if ((1U & (IData)(__Vfunc_N1__46__data))) {
                            __Vfunc_N1__46__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__46__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__46__data))) {
                            __Vfunc_N1__46__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__46__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__46__data))) {
                            __Vfunc_N1__46__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__46__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__46__data))) {
                            __Vfunc_N1__46__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__46__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__46__data))) {
                            __Vfunc_N1__46__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__46__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__46__data))) {
                            __Vfunc_N1__46__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__46__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__46__data))) {
                            __Vfunc_N1__46__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__46__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__46__data))) {
                            __Vfunc_N1__46__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__46__Vfuncout);
                        }
                        __Vfunc_N0__41__data = ((0xffU 
                                                 & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                                                > __Vfunc_N1__46__Vfuncout);
                        if ((1U & (~ (IData)(__Vfunc_N0__41__data)))) {
                            __Vfunc_N0__41__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__41__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__41__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__41__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__41__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__41__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__41__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__41__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__41__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__41__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__41__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__41__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__41__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__41__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__41__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__41__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__41__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__41__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__41__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__41__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__41__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__41__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__41__Vfuncout);
                        }
                        __Vfunc_N0__47__data = (0xffU 
                                                & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                        if ((1U & (~ (IData)(__Vfunc_N0__47__data)))) {
                            __Vfunc_N0__47__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__47__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__47__data) 
                                      >> 1U)))) {
                            __Vfunc_N0__47__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__47__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__47__data) 
                                      >> 2U)))) {
                            __Vfunc_N0__47__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__47__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__47__data) 
                                      >> 3U)))) {
                            __Vfunc_N0__47__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__47__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__47__data) 
                                      >> 4U)))) {
                            __Vfunc_N0__47__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__47__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__47__data) 
                                      >> 5U)))) {
                            __Vfunc_N0__47__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__47__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__47__data) 
                                      >> 6U)))) {
                            __Vfunc_N0__47__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__47__Vfuncout);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_N0__47__data) 
                                      >> 7U)))) {
                            __Vfunc_N0__47__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N0__47__Vfuncout);
                        }
                        __Vfunc_N1__40__data = ((0xffU 
                                                 & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)) 
                                                > __Vfunc_N0__47__Vfuncout);
                        if ((1U & (IData)(__Vfunc_N1__40__data))) {
                            __Vfunc_N1__40__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__40__Vfuncout);
                        }
                        if ((2U & (IData)(__Vfunc_N1__40__data))) {
                            __Vfunc_N1__40__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__40__Vfuncout);
                        }
                        if ((4U & (IData)(__Vfunc_N1__40__data))) {
                            __Vfunc_N1__40__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__40__Vfuncout);
                        }
                        if ((8U & (IData)(__Vfunc_N1__40__data))) {
                            __Vfunc_N1__40__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__40__Vfuncout);
                        }
                        if ((0x10U & (IData)(__Vfunc_N1__40__data))) {
                            __Vfunc_N1__40__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__40__Vfuncout);
                        }
                        if ((0x20U & (IData)(__Vfunc_N1__40__data))) {
                            __Vfunc_N1__40__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__40__Vfuncout);
                        }
                        if ((0x40U & (IData)(__Vfunc_N1__40__data))) {
                            __Vfunc_N1__40__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__40__Vfuncout);
                        }
                        if ((0x80U & (IData)(__Vfunc_N1__40__data))) {
                            __Vfunc_N1__40__Vfuncout 
                                = ((IData)(1U) + __Vfunc_N1__40__Vfuncout);
                        }
                        if (((VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old) 
                              & (0U != __Vfunc_N1__40__Vfuncout)) 
                             | (VL_GTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old) 
                                & (0U != __Vfunc_N0__41__Vfuncout)))) {
                            vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                                = (0x200U | (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out));
                            vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                                = ((0x2ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out)) 
                                   | (0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)));
                            vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                                = ((0x300U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out)) 
                                   | (0xffU & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m))));
                            __Vfunc_N1__43__data = 
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                            if ((1U & (IData)(__Vfunc_N1__43__data))) {
                                __Vfunc_N1__43__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__43__Vfuncout);
                            }
                            if ((2U & (IData)(__Vfunc_N1__43__data))) {
                                __Vfunc_N1__43__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__43__Vfuncout);
                            }
                            if ((4U & (IData)(__Vfunc_N1__43__data))) {
                                __Vfunc_N1__43__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__43__Vfuncout);
                            }
                            if ((8U & (IData)(__Vfunc_N1__43__data))) {
                                __Vfunc_N1__43__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__43__Vfuncout);
                            }
                            if ((0x10U & (IData)(__Vfunc_N1__43__data))) {
                                __Vfunc_N1__43__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__43__Vfuncout);
                            }
                            if ((0x20U & (IData)(__Vfunc_N1__43__data))) {
                                __Vfunc_N1__43__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__43__Vfuncout);
                            }
                            if ((0x40U & (IData)(__Vfunc_N1__43__data))) {
                                __Vfunc_N1__43__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__43__Vfuncout);
                            }
                            if ((0x80U & (IData)(__Vfunc_N1__43__data))) {
                                __Vfunc_N1__43__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__43__Vfuncout);
                            }
                            __Vfunc_N0__42__data = 
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                            if ((1U & (~ (IData)(__Vfunc_N0__42__data)))) {
                                __Vfunc_N0__42__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__42__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__42__data) 
                                          >> 1U)))) {
                                __Vfunc_N0__42__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__42__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__42__data) 
                                          >> 2U)))) {
                                __Vfunc_N0__42__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__42__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__42__data) 
                                          >> 3U)))) {
                                __Vfunc_N0__42__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__42__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__42__data) 
                                          >> 4U)))) {
                                __Vfunc_N0__42__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__42__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__42__data) 
                                          >> 5U)))) {
                                __Vfunc_N0__42__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__42__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__42__data) 
                                          >> 6U)))) {
                                __Vfunc_N0__42__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__42__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__42__data) 
                                          >> 7U)))) {
                                __Vfunc_N0__42__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__42__Vfuncout);
                            }
                            vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt 
                                = (((vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old 
                                     + (2U & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                              >> 7U))) 
                                    + __Vfunc_N0__42__Vfuncout) 
                                   - __Vfunc_N1__43__Vfuncout);
                        } else {
                            vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                                = (0x1ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out));
                            vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                                = ((0x2ffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out)) 
                                   | (0x100U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m)));
                            vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out 
                                = ((0x300U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out)) 
                                   | (0xffU & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m))));
                            __Vfunc_N0__45__data = 
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                            if ((1U & (~ (IData)(__Vfunc_N0__45__data)))) {
                                __Vfunc_N0__45__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__45__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__45__data) 
                                          >> 1U)))) {
                                __Vfunc_N0__45__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__45__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__45__data) 
                                          >> 2U)))) {
                                __Vfunc_N0__45__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__45__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__45__data) 
                                          >> 3U)))) {
                                __Vfunc_N0__45__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__45__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__45__data) 
                                          >> 4U)))) {
                                __Vfunc_N0__45__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__45__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__45__data) 
                                          >> 5U)))) {
                                __Vfunc_N0__45__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__45__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__45__data) 
                                          >> 6U)))) {
                                __Vfunc_N0__45__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__45__Vfuncout);
                            }
                            if ((1U & (~ ((IData)(__Vfunc_N0__45__data) 
                                          >> 7U)))) {
                                __Vfunc_N0__45__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N0__45__Vfuncout);
                            }
                            __Vfunc_N1__44__data = 
                                (0xffU & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m));
                            if ((1U & (IData)(__Vfunc_N1__44__data))) {
                                __Vfunc_N1__44__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__44__Vfuncout);
                            }
                            if ((2U & (IData)(__Vfunc_N1__44__data))) {
                                __Vfunc_N1__44__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__44__Vfuncout);
                            }
                            if ((4U & (IData)(__Vfunc_N1__44__data))) {
                                __Vfunc_N1__44__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__44__Vfuncout);
                            }
                            if ((8U & (IData)(__Vfunc_N1__44__data))) {
                                __Vfunc_N1__44__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__44__Vfuncout);
                            }
                            if ((0x10U & (IData)(__Vfunc_N1__44__data))) {
                                __Vfunc_N1__44__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__44__Vfuncout);
                            }
                            if ((0x20U & (IData)(__Vfunc_N1__44__data))) {
                                __Vfunc_N1__44__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__44__Vfuncout);
                            }
                            if ((0x40U & (IData)(__Vfunc_N1__44__data))) {
                                __Vfunc_N1__44__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__44__Vfuncout);
                            }
                            if ((0x80U & (IData)(__Vfunc_N1__44__data))) {
                                __Vfunc_N1__44__Vfuncout 
                                    = ((IData)(1U) 
                                       + __Vfunc_N1__44__Vfuncout);
                            }
                            vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt 
                                = (((vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old 
                                     + ((~ (1U & ((IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_m) 
                                                  >> 8U))) 
                                        << 1U)) + __Vfunc_N1__44__Vfuncout) 
                                   - __Vfunc_N0__45__Vfuncout);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ram_addr = vlTOPp->HDMI_Transciever__DOT__addr;
}

VL_INLINE_OPT void VHDMI_Transciever::_multiclk__TOP__5(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_multiclk__TOP__5\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->blue = (1U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out));
    vlTOPp->green = (1U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out));
    vlTOPp->red = (1U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out));
}

void VHDMI_Transciever::_eval(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_eval\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_high) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_high)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if (((IData)(vlTOPp->clk_low) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_low)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_high) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_high))) 
         | ((IData)(vlTOPp->clk_low) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_low))))) {
        vlTOPp->_multiclk__TOP__5(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk_high = vlTOPp->clk_high;
    vlTOPp->__Vclklast__TOP__clk_low = vlTOPp->clk_low;
}

VL_INLINE_OPT QData VHDMI_Transciever::_change_request(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_change_request\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VHDMI_Transciever::_change_request_1(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_change_request_1\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VHDMI_Transciever::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_low & 0xfeU))) {
        Verilated::overWidthError("clk_low");}
    if (VL_UNLIKELY((clk_high & 0xfeU))) {
        Verilated::overWidthError("clk_high");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
