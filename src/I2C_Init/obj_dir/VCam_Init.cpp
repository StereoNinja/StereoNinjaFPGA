// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCam_Init.h for the primary calling header

#include "VCam_Init.h"
#include "VCam_Init__Syms.h"

//==========

void VCam_Init::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCam_Init::eval\n"); );
    VCam_Init__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("Cam_Init.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCam_Init::_eval_initial_loop(VCam_Init__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("Cam_Init.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCam_Init::_sequent__TOP__2(VCam_Init__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_sequent__TOP__2\n"); );
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__Cam_Init__DOT__state;
    CData/*0:0*/ __Vdly__Cam_Init__DOT__initia;
    CData/*7:0*/ __Vdly__Cam_Init__DOT__cam0__DOT__state;
    CData/*0:0*/ __Vdly__Cam_Init__DOT__cam0__DOT__ready0;
    IData/*31:0*/ __Vdly__Cam_Init__DOT__counter;
    // Body
    __Vdly__Cam_Init__DOT__counter = vlTOPp->Cam_Init__DOT__counter;
    __Vdly__Cam_Init__DOT__state = vlTOPp->Cam_Init__DOT__state;
    __Vdly__Cam_Init__DOT__initia = vlTOPp->Cam_Init__DOT__initia;
    __Vdly__Cam_Init__DOT__cam0__DOT__ready0 = vlTOPp->Cam_Init__DOT__cam0__DOT__ready0;
    __Vdly__Cam_Init__DOT__cam0__DOT__state = vlTOPp->Cam_Init__DOT__cam0__DOT__state;
    if (vlTOPp->reset) {
        vlTOPp->Cam_Init__DOT__cam_ready0 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->Cam_Init__DOT__cam0__DOT__counter = 0U;
        vlTOPp->Cam_Init__DOT__cam0__DOT__valid_r = 0U;
        __Vdly__Cam_Init__DOT__cam0__DOT__state = 0U;
        vlTOPp->Cam_Init__DOT__cam0__DOT__sda0 = 1U;
    } else {
        vlTOPp->Cam_Init__DOT__cam0__DOT__rising_edge 
            = (((IData)(vlTOPp->Cam_Init__DOT__send_data) 
                & (~ (IData)(vlTOPp->Cam_Init__DOT__cam0__DOT__send_data_old)))
                ? 1U : 0U);
        if ((0U == (IData)(vlTOPp->Cam_Init__DOT__cam0__DOT__state))) {
            vlTOPp->Cam_Init__DOT__cam0__DOT__valid_r = 0U;
            vlTOPp->Cam_Init__DOT__cam0__DOT__sending = 0U;
            __Vdly__Cam_Init__DOT__cam0__DOT__ready0 = 1U;
            vlTOPp->Cam_Init__DOT__cam0__DOT__sda0 = 1U;
            if (vlTOPp->Cam_Init__DOT__cam0__DOT__rising_edge) {
                vlTOPp->Cam_Init__DOT__cam0__DOT__counter = 0U;
                __Vdly__Cam_Init__DOT__cam0__DOT__state = 1U;
                __Vdly__Cam_Init__DOT__cam0__DOT__ready0 = 0U;
                vlTOPp->Cam_Init__DOT__cam0__DOT__sda0 = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Cam_Init__DOT__cam0__DOT__state))) {
                if (VL_LTES_III(1,32,32, 0x24U, vlTOPp->Cam_Init__DOT__cam0__DOT__counter)) {
                    vlTOPp->Cam_Init__DOT__cam0__DOT__sending = 0U;
                    vlTOPp->Cam_Init__DOT__cam0__DOT__sda0 = 0U;
                } else {
                    vlTOPp->Cam_Init__DOT__cam0__DOT__sending = 1U;
                    vlTOPp->Cam_Init__DOT__cam0__DOT__sda0 
                        = (1U & ((0x24U >= (0x3fU & 
                                            ((IData)(0x24U) 
                                             - vlTOPp->Cam_Init__DOT__cam0__DOT__counter))) 
                                 & (IData)(((((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(vlTOPp->Cam_Init__DOT__slave_addr)))) 
                                              << 0x1eU) 
                                             | (QData)((IData)(
                                                               (0x10080402U 
                                                                | ((0xff00000U 
                                                                    & ((IData)(vlTOPp->Cam_Init__DOT__register_in) 
                                                                       << 0xcU)) 
                                                                   | ((0x7f800U 
                                                                       & ((IData)(vlTOPp->Cam_Init__DOT__register_in) 
                                                                          << 0xbU)) 
                                                                      | ((IData)(vlTOPp->Cam_Init__DOT__datain) 
                                                                         << 2U))))))) 
                                            >> (0x3fU 
                                                & ((IData)(0x24U) 
                                                   - vlTOPp->Cam_Init__DOT__cam0__DOT__counter))))));
                }
                if (VL_LTES_III(1,32,32, 0x24U, vlTOPp->Cam_Init__DOT__cam0__DOT__counter)) {
                    vlTOPp->Cam_Init__DOT__cam0__DOT__counter = 0U;
                    __Vdly__Cam_Init__DOT__cam0__DOT__state = 6U;
                } else {
                    vlTOPp->Cam_Init__DOT__cam0__DOT__counter 
                        = ((IData)(1U) + vlTOPp->Cam_Init__DOT__cam0__DOT__counter);
                    __Vdly__Cam_Init__DOT__cam0__DOT__state = 1U;
                }
            } else {
                if ((6U == (IData)(vlTOPp->Cam_Init__DOT__cam0__DOT__state))) {
                    vlTOPp->Cam_Init__DOT__cam0__DOT__valid_r = 1U;
                    __Vdly__Cam_Init__DOT__cam0__DOT__state = 0U;
                    vlTOPp->Cam_Init__DOT__cam0__DOT__sda0 = 0U;
                }
            }
        }
    }
    vlTOPp->Cam_Init__DOT__cam0__DOT__state = __Vdly__Cam_Init__DOT__cam0__DOT__state;
    vlTOPp->cam_ready = vlTOPp->Cam_Init__DOT__cam_ready0;
    vlTOPp->sda = vlTOPp->Cam_Init__DOT__cam0__DOT__sda0;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->Cam_Init__DOT__cam0__DOT__send_data_old 
            = vlTOPp->Cam_Init__DOT__send_data;
    }
    if (vlTOPp->reset) {
        __Vdly__Cam_Init__DOT__state = 0U;
        vlTOPp->Cam_Init__DOT__send_data = 0U;
        __Vdly__Cam_Init__DOT__initia = 1U;
    } else {
        if ((0U == (IData)(vlTOPp->Cam_Init__DOT__state))) {
            __Vdly__Cam_Init__DOT__state = (((~ (IData)(vlTOPp->Cam_Init__DOT__init_old)) 
                                             & (IData)(vlTOPp->init))
                                             ? 1U : 0U);
            __Vdly__Cam_Init__DOT__counter = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Cam_Init__DOT__state))) {
                vlTOPp->Cam_Init__DOT__send_data = 0U;
                if ((((IData)(vlTOPp->Cam_Init__DOT__cam0__DOT__ready0) 
                      & (~ (IData)(vlTOPp->Cam_Init__DOT__ready_old))) 
                     | (IData)(vlTOPp->Cam_Init__DOT__initia))) {
                    __Vdly__Cam_Init__DOT__counter 
                        = ((IData)(1U) + vlTOPp->Cam_Init__DOT__counter);
                    __Vdly__Cam_Init__DOT__initia = 0U;
                    vlTOPp->Cam_Init__DOT__send_data = 1U;
                    vlTOPp->Cam_Init__DOT__slave_addr = 0x10U;
                    vlTOPp->Cam_Init__DOT__datain = 
                        ((0x3dU >= (0x3fU & vlTOPp->Cam_Init__DOT__counter))
                          ? (0xffU & vlTOPp->Cam_Init__DOT__data_init
                             [(0x3fU & vlTOPp->Cam_Init__DOT__counter)])
                          : 0U);
                    vlTOPp->Cam_Init__DOT__register_in 
                        = (0xffffU & (((0x3dU >= (0x3fU 
                                                  & vlTOPp->Cam_Init__DOT__counter))
                                        ? vlTOPp->Cam_Init__DOT__data_init
                                       [(0x3fU & vlTOPp->Cam_Init__DOT__counter)]
                                        : 0U) >> 8U));
                }
                __Vdly__Cam_Init__DOT__state = (VL_LTS_III(1,32,32, 0x3cU, vlTOPp->Cam_Init__DOT__counter)
                                                 ? 0U
                                                 : 1U);
            } else {
                if ((2U == (IData)(vlTOPp->Cam_Init__DOT__state))) {
                    vlTOPp->Cam_Init__DOT__send_data = 0U;
                    if (VL_LTS_III(1,32,32, 0x3cU, vlTOPp->Cam_Init__DOT__counter)) {
                        __Vdly__Cam_Init__DOT__state = 0U;
                        vlTOPp->Cam_Init__DOT__send_data = 1U;
                        vlTOPp->Cam_Init__DOT__slave_addr = 0x10U;
                        __Vdly__Cam_Init__DOT__counter = 0U;
                        vlTOPp->Cam_Init__DOT__datain 
                            = (0xffU & vlTOPp->Cam_Init__DOT__data_init
                               [0x3bU]);
                        vlTOPp->Cam_Init__DOT__register_in 
                            = (0xffffU & vlTOPp->Cam_Init__DOT__data_init
                               [0x3bU]);
                    }
                    __Vdly__Cam_Init__DOT__counter 
                        = ((IData)(1U) + vlTOPp->Cam_Init__DOT__counter);
                }
            }
        }
    }
    vlTOPp->Cam_Init__DOT__state = __Vdly__Cam_Init__DOT__state;
    vlTOPp->Cam_Init__DOT__counter = __Vdly__Cam_Init__DOT__counter;
    vlTOPp->Cam_Init__DOT__initia = __Vdly__Cam_Init__DOT__initia;
    vlTOPp->Cam_Init__DOT__init_old = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(vlTOPp->init));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->Cam_Init__DOT__ready_old = vlTOPp->Cam_Init__DOT__cam0__DOT__ready0;
    }
    vlTOPp->Cam_Init__DOT__cam0__DOT__ready0 = __Vdly__Cam_Init__DOT__cam0__DOT__ready0;
}

VL_INLINE_OPT void VCam_Init::_combo__TOP__4(VCam_Init__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_combo__TOP__4\n"); );
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->scl = ((IData)(vlTOPp->Cam_Init__DOT__cam0__DOT__sending)
                    ? (1U & (~ (IData)(vlTOPp->clk400)))
                    : 1U);
}

void VCam_Init::_eval(VCam_Init__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_eval\n"); );
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk400) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk400)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk400 = vlTOPp->clk400;
}

VL_INLINE_OPT QData VCam_Init::_change_request(VCam_Init__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_change_request\n"); );
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCam_Init::_change_request_1(VCam_Init__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_change_request_1\n"); );
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCam_Init::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk400 & 0xfeU))) {
        Verilated::overWidthError("clk400");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((init & 0xfeU))) {
        Verilated::overWidthError("init");}
    if (VL_UNLIKELY((sda & 0xfeU))) {
        Verilated::overWidthError("sda");}
    if (VL_UNLIKELY((scl & 0xfeU))) {
        Verilated::overWidthError("scl");}
}
#endif  // VL_DEBUG
