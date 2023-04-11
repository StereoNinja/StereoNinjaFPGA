// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vulx3s_pass_through.h for the primary calling header

#include "Vulx3s_pass_through.h"
#include "Vulx3s_pass_through__Syms.h"

//==========

void Vulx3s_pass_through::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vulx3s_pass_through::eval\n"); );
    Vulx3s_pass_through__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("ulx3s_pass_through.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vulx3s_pass_through::_eval_initial_loop(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("ulx3s_pass_through.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__3(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__3\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ulx3s_pass_through__DOT__clk250) {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_b 
            = (1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_blue));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_g 
            = (1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_green));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_r 
            = (1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_red));
    } else {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_b 
            = (1U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_blue) 
                     >> 1U));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_g 
            = (1U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_green) 
                     >> 1U));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_r 
            = (1U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_red) 
                     >> 1U));
    }
    vlTOPp->TMDSd = ((8U & (IData)(vlTOPp->TMDSd)) 
                     | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_r) 
                         << 2U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_g) 
                                    << 1U) | (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_b))));
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__4(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__4\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__ulx3s_pass_through__DOT__i2c__DOT__state;
    CData/*0:0*/ __Vdly__ulx3s_pass_through__DOT__i2c__DOT__initia;
    CData/*7:0*/ __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state;
    CData/*0:0*/ __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__ready0;
    IData/*31:0*/ __Vdly__ulx3s_pass_through__DOT__i2c__DOT__counter;
    // Body
    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__counter 
        = vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter;
    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__state 
        = vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__state;
    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__initia 
        = vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__initia;
    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__ready0 
        = vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__ready0;
    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state 
        = vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state;
    if (vlTOPp->reset) {
        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam_ready0 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__counter = 0U;
        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__valid_r = 0U;
        __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state = 0U;
        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sda0 = 1U;
    } else {
        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__rising_edge 
            = (((IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__send_data) 
                & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__send_data_old)))
                ? 1U : 0U);
        if ((0U == (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state))) {
            vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__valid_r = 0U;
            vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sending = 0U;
            __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__ready0 = 1U;
            vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sda0 = 1U;
            if (vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__rising_edge) {
                vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__counter = 0U;
                __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state = 1U;
                __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__ready0 = 0U;
                vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sda0 = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state))) {
                if (VL_LTES_III(1,32,32, 0x24U, vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__counter)) {
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sending = 0U;
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sda0 = 0U;
                } else {
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sending = 1U;
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sda0 
                        = (1U & ((0x24U >= (0x3fU & 
                                            ((IData)(0x24U) 
                                             - vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__counter))) 
                                 & (IData)(((((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__slave_addr)))) 
                                              << 0x1eU) 
                                             | (QData)((IData)(
                                                               (0x10080402U 
                                                                | ((0xff00000U 
                                                                    & ((IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__register_in) 
                                                                       << 0xcU)) 
                                                                   | ((0x7f800U 
                                                                       & ((IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__register_in) 
                                                                          << 0xbU)) 
                                                                      | ((IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__datain) 
                                                                         << 2U))))))) 
                                            >> (0x3fU 
                                                & ((IData)(0x24U) 
                                                   - vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__counter))))));
                }
                if (VL_LTES_III(1,32,32, 0x24U, vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__counter)) {
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__counter = 0U;
                    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state = 6U;
                } else {
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__counter 
                        = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__counter);
                    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state = 1U;
                }
            } else {
                if ((6U == (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state))) {
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__valid_r = 1U;
                    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state = 0U;
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sda0 = 0U;
                }
            }
        }
    }
    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state 
        = __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state;
    vlTOPp->cam0_scl = ((IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sending)
                         ? (1U & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__clk400)))
                         : 1U);
    vlTOPp->cam0_sda = vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sda0;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__send_data_old 
            = vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__send_data;
    }
    if (vlTOPp->reset) {
        __Vdly__ulx3s_pass_through__DOT__i2c__DOT__state = 0U;
        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__send_data = 0U;
        __Vdly__ulx3s_pass_through__DOT__i2c__DOT__initia = 1U;
    } else {
        if ((0U == (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__state))) {
            __Vdly__ulx3s_pass_through__DOT__i2c__DOT__state 
                = (((~ (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__init_old)) 
                    & (IData)(vlTOPp->fire)) ? 1U : 0U);
            __Vdly__ulx3s_pass_through__DOT__i2c__DOT__counter = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__state))) {
                vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__send_data = 0U;
                if ((((IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__ready0) 
                      & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__ready_old))) 
                     | (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__initia))) {
                    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__counter 
                        = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter);
                    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__initia = 0U;
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__send_data = 1U;
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__slave_addr = 0x10U;
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__datain 
                        = ((0x3dU >= (0x3fU & vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter))
                            ? (0xffU & vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__data_init
                               [(0x3fU & vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter)])
                            : 0U);
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__register_in 
                        = (0xffffU & (((0x3dU >= (0x3fU 
                                                  & vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter))
                                        ? vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__data_init
                                       [(0x3fU & vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter)]
                                        : 0U) >> 8U));
                }
                __Vdly__ulx3s_pass_through__DOT__i2c__DOT__state 
                    = (VL_LTS_III(1,32,32, 0x3cU, vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter)
                        ? 0U : 1U);
            } else {
                if ((2U == (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__state))) {
                    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__send_data = 0U;
                    if (VL_LTS_III(1,32,32, 0x3cU, vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter)) {
                        __Vdly__ulx3s_pass_through__DOT__i2c__DOT__state = 0U;
                        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__send_data = 1U;
                        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__slave_addr = 0x10U;
                        __Vdly__ulx3s_pass_through__DOT__i2c__DOT__counter = 0U;
                        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__datain 
                            = (0xffU & vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__data_init
                               [0x3bU]);
                        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__register_in 
                            = (0xffffU & vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__data_init
                               [0x3bU]);
                    }
                    __Vdly__ulx3s_pass_through__DOT__i2c__DOT__counter 
                        = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter);
                }
            }
        }
    }
    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__state 
        = __Vdly__ulx3s_pass_through__DOT__i2c__DOT__state;
    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter 
        = __Vdly__ulx3s_pass_through__DOT__i2c__DOT__counter;
    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__initia 
        = __Vdly__ulx3s_pass_through__DOT__i2c__DOT__initia;
    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__init_old 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->fire));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__ready_old 
            = vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__ready0;
    }
    vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__ready0 
        = __Vdly__ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__ready0;
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__5(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__5\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10;
    // Body
    __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10 
        = vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10;
    if (vlTOPp->reset) {
        __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10 = 0U;
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_blue = 0U;
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_green = 0U;
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_red = 0U;
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_load = 0U;
    } else {
        __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10 
            = ((4U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10))));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_blue 
            = ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_load)
                ? (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out1)
                : (0xffU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_blue) 
                            >> 2U)));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_green 
            = ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_load)
                ? (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out1)
                : (0xffU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_green) 
                            >> 2U)));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_red 
            = ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_load)
                ? (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out1)
                : (0xffU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_red) 
                            >> 2U)));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_load 
            = (1U & (4U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10)));
    }
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10 
        = __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10;
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__6(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__6\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs;
    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term;
    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou;
    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi;
}

VL_INLINE_OPT void Vulx3s_pass_through::_combo__TOP__7(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_combo__TOP__7\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TMDSd = ((7U & (IData)(vlTOPp->TMDSd)) 
                     | ((IData)(vlTOPp->pixclk) << 3U));
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__8(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__8\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__ulx3s_pass_through__DOT__counter;
    SData/*10:0*/ __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterX;
    SData/*10:0*/ __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterY;
    IData/*31:0*/ __Vdly__ulx3s_pass_through__DOT__color_w;
    // Body
    __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterY 
        = vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY;
    __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterX 
        = vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX;
    __Vdly__ulx3s_pass_through__DOT__color_w = vlTOPp->ulx3s_pass_through__DOT__color_w;
    __Vdly__ulx3s_pass_through__DOT__counter = vlTOPp->ulx3s_pass_through__DOT__counter;
    if (vlTOPp->reset) {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out1 = 0U;
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out1 = 0U;
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out1 = 0U;
    } else {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out1 
            = ((0U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea))
                ? 0x354U : ((1U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea))
                             ? ((IData)(vlTOPp->reset)
                                 ? 0U : (0x3ffU & (
                                                   ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p1) 
                                                    << 9U) 
                                                   | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p2) 
                                                       << 8U) 
                                                      | (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p3)))))
                             : 0U));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out1 
            = ((0U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea))
                ? 0x354U : ((1U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea))
                             ? ((IData)(vlTOPp->reset)
                                 ? 0U : (0x3ffU & (
                                                   ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p1) 
                                                    << 9U) 
                                                   | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p2) 
                                                       << 8U) 
                                                      | (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p3)))))
                             : 0U));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out1 
            = (0x3ffU & ((0U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea))
                          ? ((2U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                              ? ((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                  ? 0x2abU : 0x154U)
                              : ((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                  ? 0xabU : 0x354U))
                          : ((1U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea))
                              ? ((IData)(vlTOPp->reset)
                                  ? 0U : (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p1) 
                                           << 9U) | 
                                          (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p2) 
                                            << 8U) 
                                           | (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p3))))
                              : 0U)));
    }
    if (vlTOPp->reset) {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old = 0U;
    } else {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old 
            = vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt;
        if ((0U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea))) {
            vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old = 0U;
    } else {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old 
            = vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt;
        if ((0U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea))) {
            vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old = 0U;
    } else {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old 
            = vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt;
        if ((0U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea))) {
            vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old = 0U;
        }
    }
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__hSync 
        = ((IData)(vlTOPp->reset) ? 0U : (1U & ((0x290U 
                                                 <= (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX)) 
                                                & (0x2f0U 
                                                   > (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX)))));
    if (vlTOPp->reset) {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r = 0U;
        __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterX = 0U;
    } else {
        if ((0x31fU == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX))) {
            __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterX = 0U;
        } else {
            __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterX 
                = (0x7ffU & ((IData)(1U) + (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX)));
            vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r 
                = (0x1fffffU & ((1U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea))
                                 ? ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r)
                                 : vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r));
        }
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__vSync 
            = ((((0x1eaU <= (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY)) 
                 & (0x1ecU > (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY))) 
                & (0x31eU > (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX))) 
               | ((0x1e9U == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY)) 
                  & (0x31eU <= (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX))));
        if ((0x31fU == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX))) {
            if ((0x20cU == (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY))) {
                __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterY = 0U;
                vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r = 0U;
            } else {
                __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterY 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY)));
                vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r 
                    = (0x1fffffU & vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r);
            }
        }
    }
    if ((3U <= (IData)(vlTOPp->ulx3s_pass_through__DOT__counter))) {
        __Vdly__ulx3s_pass_through__DOT__counter = 0U;
        __Vdly__ulx3s_pass_through__DOT__color_w = vlTOPp->ulx3s_pass_through__DOT__ramdata;
    } else {
        __Vdly__ulx3s_pass_through__DOT__counter = 
            (0xffU & ((IData)(1U) + (IData)(vlTOPp->ulx3s_pass_through__DOT__counter)));
        __Vdly__ulx3s_pass_through__DOT__color_w = 
            (0xffffffU & (vlTOPp->ulx3s_pass_through__DOT__color_w 
                          >> 8U));
    }
    vlTOPp->ulx3s_pass_through__DOT__red_v = (0xffU 
                                              & vlTOPp->ulx3s_pass_through__DOT__color_w);
    vlTOPp->ulx3s_pass_through__DOT__color_w = __Vdly__ulx3s_pass_through__DOT__color_w;
    vlTOPp->ulx3s_pass_through__DOT__counter = __Vdly__ulx3s_pass_through__DOT__counter;
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr 
        = (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__vSync) 
            << 1U) | (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__hSync));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea 
        = ((IData)(vlTOPp->reset) ? 0U : (3U & ((0x280U 
                                                 > (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX)) 
                                                & (0x1e0U 
                                                   > (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY)))));
    vlTOPp->ulx3s_pass_through__DOT__ramdata = ((0x12bffU 
                                                 >= 
                                                 (0x1ffffU 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r 
                                                     >> 2U)))
                                                 ? 
                                                vlTOPp->ulx3s_pass_through__DOT__DPR__DOT__ram
                                                [(0x1ffffU 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r 
                                                     >> 2U))]
                                                 : 0U);
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m8 
        = (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__14__Vfuncout)) 
            | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__15__Vfuncout)) 
               & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
            ? 0U : 1U);
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m8 
        = (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__62__Vfuncout)) 
            | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__63__Vfuncout)) 
               & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
            ? 0U : 1U);
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m8 
        = (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__110__Vfuncout)) 
            | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__111__Vfuncout)) 
               & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
            ? 0U : 1U);
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m1 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__0__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__1__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 1U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 1U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m1 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__48__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__49__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 1U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 1U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m1 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__96__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__97__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 1U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 1U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY 
        = __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterY;
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX 
        = __Vdly__ulx3s_pass_through__DOT__HDMI__DOT__CounterX;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m2 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__2__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__3__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m1) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 2U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m1) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 2U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m2 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__50__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__51__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m1) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 2U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m1) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 2U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m2 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__98__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__99__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m1) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 2U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m1) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 2U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m3 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__4__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__5__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m2) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 3U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m2) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 3U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m3 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__52__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__53__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m2) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 3U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m2) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 3U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m3 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__100__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__101__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m2) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 3U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m2) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 3U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m4 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__6__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__7__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m3) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 4U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m3) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 4U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m4 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__54__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__55__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m3) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 4U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m3) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 4U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m4 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__102__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__103__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m3) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 4U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m3) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 4U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m5 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__8__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__9__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m4) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 5U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m4) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 5U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m5 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__56__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__57__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m4) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 5U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m4) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 5U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m5 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__104__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__105__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m4) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 5U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m4) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 5U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m6 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__10__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__11__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m5) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 6U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m5) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 6U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m6 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__58__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__59__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m5) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 6U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m5) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 6U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m6 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__106__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__107__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m5) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 6U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m5) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 6U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m7 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__12__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__13__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m6) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 7U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m6) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m7 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__60__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__61__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m6) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 7U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m6) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__data 
        = vlTOPp->ulx3s_pass_through__DOT__red_v;
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m7 
        = (1U & (((4U < (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__108__Vfuncout)) 
                  | ((4U == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__109__Vfuncout)) 
                     & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m6) 
                     ^ ~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                          >> 7U)) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m6) 
                                     ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                        >> 7U))));
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__9(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__9\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r1;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r1 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r0;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r0 
        = ((~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r)) 
           & (IData)(vlTOPp->cam0_clk));
}

VL_INLINE_OPT void Vulx3s_pass_through::_combo__TOP__10(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_combo__TOP__10\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m = 0U;
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m = 0U;
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m = 0U;
    } else {
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m 
            = (0x1ffU & (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m8) 
                          << 8U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m7) 
                                     << 7U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m6) 
                                                << 6U) 
                                               | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m5) 
                                                   << 5U) 
                                                  | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m4) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m3) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m2) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m1) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v)))))))))));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m 
            = (0x1ffU & (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m8) 
                          << 8U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m7) 
                                     << 7U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m6) 
                                                << 6U) 
                                               | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m5) 
                                                   << 5U) 
                                                  | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m4) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m3) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m2) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m1) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v)))))))))));
        vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m 
            = (0x1ffU & (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m8) 
                          << 8U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m7) 
                                     << 7U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m6) 
                                                << 6U) 
                                               | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m5) 
                                                   << 5U) 
                                                  | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m4) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m3) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m2) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m1) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v)))))))))));
    }
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p1 
        = (1U & (((0U == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                  | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__16__Vfuncout) 
                     == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__17__Vfuncout)))
                  ? (1U & (~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                              >> 8U))) : (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                                            & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__18__Vfuncout) 
                                               > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__19__Vfuncout))) 
                                           | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                                              & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__20__Vfuncout) 
                                                 > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__21__Vfuncout))))
                                           ? 1U : 0U)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p2 
        = (1U & (((0U == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                  | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__22__Vfuncout) 
                     == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__23__Vfuncout)))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                     >> 8U) : (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                                 & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__24__Vfuncout) 
                                    > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__25__Vfuncout))) 
                                | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                                   & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__26__Vfuncout) 
                                      > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__27__Vfuncout))))
                                ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                   >> 8U) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                             >> 8U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p3 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffU & (
                                                   ((0U 
                                                     == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                                                    | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__28__Vfuncout) 
                                                       == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__29__Vfuncout)))
                                                    ? 
                                                   ((0x100U 
                                                     & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m))
                                                     ? 
                                                    (0xffU 
                                                     & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m))
                                                     : 
                                                    (~ 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m))))
                                                    : 
                                                   (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                                                      & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__30__Vfuncout) 
                                                         > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__31__Vfuncout))) 
                                                     | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                                                        & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__32__Vfuncout) 
                                                           > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__33__Vfuncout))))
                                                     ? 
                                                    (~ 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m)))
                                                     : 
                                                    (0xffU 
                                                     & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m))))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__data) 
                                >> 7U)))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt0 
        = (vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old 
           + ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__34__Vfuncout) 
              - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__35__Vfuncout)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt1 
        = (vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old 
           + ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__36__Vfuncout) 
              - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__37__Vfuncout)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__data) 
                                >> 7U)))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt2 
        = (((vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old 
             + (2U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                      >> 7U))) + (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__38__Vfuncout)) 
           - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__39__Vfuncout));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt3 
        = (((vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old 
             - (2U & ((~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                          >> 8U)) << 1U))) + (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__40__Vfuncout)) 
           - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__41__Vfuncout));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p1 
        = (1U & (((0U == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                  | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__64__Vfuncout) 
                     == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__65__Vfuncout)))
                  ? (1U & (~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                              >> 8U))) : (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                                            & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__66__Vfuncout) 
                                               > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__67__Vfuncout))) 
                                           | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                                              & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__68__Vfuncout) 
                                                 > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__69__Vfuncout))))
                                           ? 1U : 0U)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p2 
        = (1U & (((0U == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                  | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__70__Vfuncout) 
                     == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__71__Vfuncout)))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                     >> 8U) : (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                                 & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__72__Vfuncout) 
                                    > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__73__Vfuncout))) 
                                | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                                   & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__74__Vfuncout) 
                                      > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__75__Vfuncout))))
                                ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                   >> 8U) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                             >> 8U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p3 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffU & (
                                                   ((0U 
                                                     == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                                                    | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__76__Vfuncout) 
                                                       == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__77__Vfuncout)))
                                                    ? 
                                                   ((0x100U 
                                                     & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m))
                                                     ? 
                                                    (0xffU 
                                                     & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m))
                                                     : 
                                                    (~ 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m))))
                                                    : 
                                                   (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                                                      & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__78__Vfuncout) 
                                                         > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__79__Vfuncout))) 
                                                     | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                                                        & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__80__Vfuncout) 
                                                           > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__81__Vfuncout))))
                                                     ? 
                                                    (~ 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m)))
                                                     : 
                                                    (0xffU 
                                                     & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m))))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__data) 
                                >> 7U)))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt0 
        = (vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old 
           + ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__82__Vfuncout) 
              - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__83__Vfuncout)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt1 
        = (vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old 
           + ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__84__Vfuncout) 
              - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__85__Vfuncout)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__data) 
                                >> 7U)))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt2 
        = (((vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old 
             + (2U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                      >> 7U))) + (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__86__Vfuncout)) 
           - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__87__Vfuncout));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt3 
        = (((vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old 
             - (2U & ((~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                          >> 8U)) << 1U))) + (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__88__Vfuncout)) 
           - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__89__Vfuncout));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p1 
        = (1U & (((0U == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                  | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__112__Vfuncout) 
                     == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__113__Vfuncout)))
                  ? (1U & (~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                              >> 8U))) : (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                                            & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__114__Vfuncout) 
                                               > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__115__Vfuncout))) 
                                           | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                                              & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__116__Vfuncout) 
                                                 > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__117__Vfuncout))))
                                           ? 1U : 0U)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p2 
        = (1U & (((0U == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                  | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__118__Vfuncout) 
                     == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__119__Vfuncout)))
                  ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                     >> 8U) : (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                                 & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__120__Vfuncout) 
                                    > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__121__Vfuncout))) 
                                | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                                   & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__122__Vfuncout) 
                                      > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__123__Vfuncout))))
                                ? ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                   >> 8U) : ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                             >> 8U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p3 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffU & (
                                                   ((0U 
                                                     == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                                                    | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__124__Vfuncout) 
                                                       == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__125__Vfuncout)))
                                                    ? 
                                                   ((0x100U 
                                                     & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m))
                                                     ? 
                                                    (0xffU 
                                                     & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m))
                                                     : 
                                                    (~ 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m))))
                                                    : 
                                                   (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                                                      & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__126__Vfuncout) 
                                                         > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__127__Vfuncout))) 
                                                     | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                                                        & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__128__Vfuncout) 
                                                           > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__129__Vfuncout))))
                                                     ? 
                                                    (~ 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m)))
                                                     : 
                                                    (0xffU 
                                                     & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m))))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__data) 
                                >> 7U)))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt0 
        = (vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old 
           + ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__130__Vfuncout) 
              - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__131__Vfuncout)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt1 
        = (vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old 
           + ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__132__Vfuncout) 
              - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__133__Vfuncout)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__data) 
                                >> 7U)))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt2 
        = (((vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old 
             + (2U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                      >> 7U))) + (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__134__Vfuncout)) 
           - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__135__Vfuncout));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt3 
        = (((vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old 
             - (2U & ((~ ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                          >> 8U)) << 1U))) + (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__136__Vfuncout)) 
           - (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__137__Vfuncout));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt 
        = ((IData)(vlTOPp->reset) ? 0U : (((0U == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                                           | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__42__Vfuncout) 
                                              == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__43__Vfuncout)))
                                           ? ((0x100U 
                                               & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m))
                                               ? vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt1
                                               : vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt0)
                                           : (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                                                & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__44__Vfuncout) 
                                                   > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__45__Vfuncout))) 
                                               | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old) 
                                                  & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N0__46__Vfuncout) 
                                                     > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__N1__47__Vfuncout))))
                                               ? vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt2
                                               : vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt3)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt 
        = ((IData)(vlTOPp->reset) ? 0U : (((0U == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                                           | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__90__Vfuncout) 
                                              == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__91__Vfuncout)))
                                           ? ((0x100U 
                                               & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m))
                                               ? vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt1
                                               : vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt0)
                                           : (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                                                & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__92__Vfuncout) 
                                                   > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__93__Vfuncout))) 
                                               | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old) 
                                                  & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N0__94__Vfuncout) 
                                                     > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__N1__95__Vfuncout))))
                                               ? vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt2
                                               : vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt3)));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__data) 
                             >> 7U))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__Vfuncout 
        = (0xffU & ((((((((1U & (~ (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__data))) 
                          + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__data) 
                                      >> 1U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__data) 
                                                       >> 2U)))) 
                        + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__data) 
                                    >> 3U)))) + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__data) 
                                                     >> 4U)))) 
                      + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__data) 
                                  >> 5U)))) + (1U & 
                                               (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__data) 
                                                   >> 6U)))) 
                    + (1U & (~ ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__data) 
                                >> 7U)))));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__data 
        = (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m));
    vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__Vfuncout 
        = (0xffU & ((((((((1U & (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__data)) 
                          + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__data) 
                                   >> 1U))) + (1U & 
                                               ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__data) 
                                                >> 2U))) 
                        + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__data) 
                                 >> 3U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__data) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__data) 
                               >> 5U))) + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__data) 
                                                 >> 6U))) 
                    + (1U & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__data) 
                             >> 7U))));
    vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt 
        = ((IData)(vlTOPp->reset) ? 0U : (((0U == vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                                           | ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__138__Vfuncout) 
                                              == (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__139__Vfuncout)))
                                           ? ((0x100U 
                                               & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m))
                                               ? vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt1
                                               : vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt0)
                                           : (((VL_LTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                                                & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__140__Vfuncout) 
                                                   > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__141__Vfuncout))) 
                                               | (VL_GTS_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old) 
                                                  & ((IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N0__142__Vfuncout) 
                                                     > (IData)(vlTOPp->__Vfunc_ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__N1__143__Vfuncout))))
                                               ? vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt2
                                               : vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt3)));
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__11(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__11\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__C 
            = vlTOPp->cam0_d1;
    }
    if ((1U & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2)))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__A 
            = vlTOPp->cam0_d1;
    }
    if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__C 
            = vlTOPp->cam0_d0;
    }
    if ((1U & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2)))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__A 
            = vlTOPp->cam0_d0;
    }
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div2__DOT__counter 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div2__DOT__counter))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2 
        = (1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div2__DOT__counter));
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__12(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__12\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2)))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__D1 
            = vlTOPp->cam0_d1;
    }
    if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__B 
            = vlTOPp->cam0_d1;
    }
    if ((1U & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2)))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__D1 
            = vlTOPp->cam0_d0;
    }
    if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__B 
            = vlTOPp->cam0_d0;
    }
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__13(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__13\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r;
    CData/*0:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r;
    CData/*7:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r;
    CData/*7:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r;
    CData/*7:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter;
    CData/*7:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter;
    // Body
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r;
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r;
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r;
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r;
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter;
    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r;
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter;
    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r;
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__syncbyte = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__syncbyte = 0U;
    } else {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__syncbyte 
            = (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__ddr) 
                << 4U) | (0xfU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__syncbyte) 
                                  >> 4U)));
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__syncbyte 
            = (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__ddr) 
                << 4U) | (0xfU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__syncbyte) 
                                  >> 4U)));
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r_s = 0U;
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r_old = 0xb8U;
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r_s = 0U;
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r_old = 0xb8U;
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__even_r = 0U;
    } else {
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r 
            = (((0U == (0xb8U ^ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__syncbyte))) 
                | (0U == (0x2eU ^ (0x3fU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__syncbyte)))))
                ? 1U : (1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r)));
        if (((0U == (0xb8U ^ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__syncbyte))) 
             & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r)))) {
            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__even_r = 1U;
        }
        if (((0U == (0x2eU ^ (0x3fU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__syncbyte)))) 
             & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r)))) {
            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__even_r = 0U;
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r = 0U;
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r = 0U;
    } else {
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r 
            = (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__q_o_r) 
                << 4U) | (0xfU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r) 
                                  >> 4U)));
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r 
            = (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__q_o_r) 
                << 4U) | (0xfU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r) 
                                  >> 4U)));
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r = 0U;
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter = 0U;
    } else {
        if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync) {
            __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter 
                = ((1U <= (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter))
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter))));
            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r 
                = ((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter))
                    ? (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r)
                    : ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__even_r)
                        ? (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r)
                        : (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte1_r)));
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r = 0U;
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter = 0U;
    } else {
        if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync) {
            __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter 
                = ((1U <= (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter))
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter))));
            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r 
                = ((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter))
                    ? (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r)
                    : ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__even_r)
                        ? (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r)
                        : (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte1_r)));
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte1_r = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte1_r = 0U;
    } else {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte1_r 
            = ((0xc0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__q_o_r) 
                         << 6U)) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__ov_fl_r) 
                                     << 4U) | (0xfU 
                                               & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte1_r) 
                                                  >> 4U))));
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte1_r 
            = ((0xc0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__q_o_r) 
                         << 6U)) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__ov_fl_r) 
                                     << 4U) | (0xfU 
                                               & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte1_r) 
                                                  >> 4U))));
    }
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div4__DOT__counter 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div4__DOT__counter))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r;
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__even_r = 0U;
    } else {
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r 
            = (((0U == (0xb8U ^ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__syncbyte))) 
                | (0U == (0x2eU ^ (0x3fU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__syncbyte)))))
                ? 1U : (1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r)));
        if (((0U == (0xb8U ^ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__syncbyte))) 
             & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r)))) {
            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__even_r = 1U;
        }
        if (((0U == (0x2eU ^ (0x3fU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__syncbyte)))) 
             & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r)))) {
            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__even_r = 0U;
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__ov_fl_r = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__ov_fl_r = 0U;
    } else {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__ov_fl_r 
            = (3U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__q_o_r) 
                     >> 2U));
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__ov_fl_r 
            = (3U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__q_o_r) 
                     >> 2U));
    }
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4 
        = (1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div4__DOT__counter));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r;
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__q_o_r = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__q_o_r = 0U;
    } else {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__q_o_r 
            = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__ddr;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__q_o_r 
            = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__ddr;
    }
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__14(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__14\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__valid_r;
    // Body
    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__wordcount_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__wordcount_r;
    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r;
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__valid_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__valid_r;
    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter;
    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r;
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__wordcount_r = 0U;
    } else {
        if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync) {
            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__wordcount_r 
                = (0xffffU & ((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc) 
                                == (0xffU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct 
                                             >> 0x18U))) 
                               & (0U != vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct))
                               ? (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct 
                                  >> 8U) : (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__wordcount_r)));
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r = 0U;
    } else {
        if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync) {
            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r 
                = (0x3fU & ((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc) 
                              == (0xffU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct 
                                           >> 0x18U))) 
                             & (0U != vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct))
                             ? vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct
                             : (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r)));
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__valid_r = 0U;
    } else {
        if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync) {
            __Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__valid_r 
                = ((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc) 
                     == (0xffU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct 
                                  >> 0x18U))) & (0U 
                                                 != vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct))
                    ? 1U : (1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__valid_r)));
        }
    }
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div8__DOT__counter 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div8__DOT__counter))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__valid_r 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__valid_r;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_8 
        = (1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div8__DOT__counter));
}

VL_INLINE_OPT void Vulx3s_pass_through::_multiclk__TOP__15(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_multiclk__TOP__15\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__ddr 
        = (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__D1) 
            << 3U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__C) 
                       << 2U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__B) 
                                  << 1U) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__A))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__ddr 
        = (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__D1) 
            << 3U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__C) 
                       << 2U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__B) 
                                  << 1U) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__A))));
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__16(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__16\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state;
    CData/*0:0*/ __Vdlyvset__ulx3s_pass_through__DOT__DPR__DOT__ram__v0;
    SData/*15:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c;
    IData/*31:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr;
    IData/*31:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r;
    IData/*31:0*/ __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cY_r;
    IData/*16:0*/ __Vdlyvdim0__ulx3s_pass_through__DOT__DPR__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__ulx3s_pass_through__DOT__DPR__DOT__ram__v0;
    // Body
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cY_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cY_r;
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r;
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr;
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state;
    __Vdlyvset__ulx3s_pass_through__DOT__DPR__DOT__ram__v0 = 0U;
    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c;
    if (vlTOPp->btn) {
        vlTOPp->ulx3s_pass_through__DOT__DPR__DOT____Vlvbound1 
            = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__data_o_r;
        if ((0x12bffU >= (0x1ffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr))) {
            __Vdlyvval__ulx3s_pass_through__DOT__DPR__DOT__ram__v0 
                = vlTOPp->ulx3s_pass_through__DOT__DPR__DOT____Vlvbound1;
            __Vdlyvset__ulx3s_pass_through__DOT__DPR__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ulx3s_pass_through__DOT__DPR__DOT__ram__v0 
                = (0x1ffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr);
        }
    }
    if (__Vdlyvset__ulx3s_pass_through__DOT__DPR__DOT__ram__v0) {
        vlTOPp->ulx3s_pass_through__DOT__DPR__DOT__ram[__Vdlyvdim0__ulx3s_pass_through__DOT__DPR__DOT__ram__v0] 
            = __Vdlyvval__ulx3s_pass_through__DOT__DPR__DOT__ram__v0;
    }
    if (vlTOPp->reset) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__rec_data_r = 0U;
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__data_o_r = 0U;
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr = 0U;
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r = 0U;
        __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cY_r = 0U;
        vlTOPp->ulx3s_pass_through__DOT__debug2__out__out10 = 0U;
    } else {
        if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state) {
            if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state) {
                if ((vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter 
                     < vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__count_val)) {
                    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r 
                        = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r);
                    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr 
                        = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr);
                    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter 
                        = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter);
                    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__rec_data_r = 1U;
                    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__data_o_r 
                        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r;
                    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c 
                        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk;
                } else {
                    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter = 0U;
                    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__rec_data_r = 0U;
                    __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state = 0U;
                    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                         == (0xffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r))) {
                        vlTOPp->ulx3s_pass_through__DOT__debug3__out__out11 = 1U;
                    }
                }
            }
        } else {
            __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c = 0xffffU;
            if (((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__valid) 
                   & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__valid_old))) 
                  & ((0U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r)) 
                     | (1U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r)))) 
                 | (0x12bffU < vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr))) {
                __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr = 0U;
                __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r = 0U;
                __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cY_r = 0U;
                vlTOPp->ulx3s_pass_through__DOT__debug2__out__out10 = 1U;
            }
            if (((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__valid) 
                   & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__valid_old))) 
                  & (0x2aU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r))) 
                 & (0x280U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__wordcount_r)))) {
                __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cY_r 
                    = ((IData)(0x280U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cY_r);
                __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state = 1U;
                vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__count_val = 0xa0U;
                __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r = 0U;
                vlTOPp->ulx3s_pass_through__DOT__debug2__out__out10 = 0U;
                vlTOPp->ulx3s_pass_through__DOT__debug3__out__out11 = 0U;
            }
        }
    }
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cY_r 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cY_r;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c 
        = __Vdly__ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c;
    vlTOPp->debug2 = vlTOPp->ulx3s_pass_through__DOT__debug2__out__out10;
    vlTOPp->debug3 = vlTOPp->ulx3s_pass_through__DOT__debug3__out__out11;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__valid_old 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__valid));
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__17(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__17\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r 
        = vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__wordcount_r 
        = vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__wordcount_r;
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))) {
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__start = 0U;
        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r_old = 0U;
        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r = 0U;
    } else {
        if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync) {
            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r_old 
                = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r;
            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                = (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r) 
                    << 0x18U) | (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r) 
                                  << 0x10U) | (0xffffU 
                                               & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                  >> 0x10U))));
            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__start 
                = ((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc) 
                     == (0xffU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct 
                                  >> 0x18U))) & (0U 
                                                 != vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct))
                    ? 1U : (1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__start)));
            if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__start) {
                vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter 
                    = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter);
                if ((1U & ((~ vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter) 
                           & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter 
                              >> 1U)))) {
                    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter = 1U;
                    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r;
                } else {
                    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter 
                        = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter);
                }
            }
        }
    }
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter 
        = vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
        = vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc 
        = ((0xfeU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc)) 
           | (1U & (((((((((((((vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                   >> 1U)) ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                              >> 2U)) 
                              ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                 >> 4U)) ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                            >> 5U)) 
                            ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                               >> 7U)) ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                          >> 0xaU)) 
                          ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                             >> 0xbU)) ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                          >> 0xdU)) 
                        ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                           >> 0x10U)) ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                         >> 0x14U)) 
                      ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                         >> 0x15U)) ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                       >> 0x16U)) ^ 
                    (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                     >> 0x17U))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc 
        = ((0xfdU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc)) 
           | (2U & ((((((((((((((vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                 << 1U) ^ (0xfffffffeU 
                                           & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r)) 
                               ^ (0x3ffffffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                 >> 2U))) 
                              ^ (0x1ffffffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                >> 3U))) 
                             ^ (0x7fffffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                              >> 5U))) 
                            ^ (0x1fffffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                             >> 7U))) 
                           ^ (0x7ffffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                           >> 9U))) 
                          ^ (0x1ffffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                          >> 0xbU))) 
                         ^ (0x7fffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                        >> 0xdU))) 
                        ^ (0xfffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                      >> 0x10U))) ^ 
                       (0x1ffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                   >> 0x13U))) ^ (0xffeU 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                     >> 0x14U))) 
                     ^ (0x7feU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                  >> 0x15U))) ^ (0x3feU 
                                                 & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                    >> 0x16U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc 
        = ((0xfbU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc)) 
           | (4U & (((((((((((((vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                << 2U) ^ (0xfffffffcU 
                                          & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r)) 
                              ^ (0x7ffffffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                >> 1U))) 
                             ^ (0x1ffffffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                               >> 3U))) 
                            ^ (0xffffffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                             >> 4U))) 
                           ^ (0x1fffffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                            >> 7U))) 
                          ^ (0x7ffffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                          >> 9U))) 
                         ^ (0x3ffffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                         >> 0xaU))) 
                        ^ (0x7fffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                       >> 0xdU))) ^ 
                       (0xfffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                   >> 0x10U))) ^ (0x3ffcU 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                     >> 0x12U))) 
                     ^ (0x1ffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                   >> 0x13U))) ^ (0xffcU 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                     >> 0x14U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc 
        = ((0xf7U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc)) 
           | (8U & (((((((((((((0xfffffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                               << 2U)) 
                               ^ (0xfffffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                 << 1U))) 
                              ^ (0xfffffff8U & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r)) 
                             ^ (0xffffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                              >> 4U))) 
                            ^ (0x7fffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                             >> 5U))) 
                           ^ (0x3fffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                            >> 6U))) 
                          ^ (0x3ffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                          >> 0xaU))) 
                         ^ (0x1ffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                         >> 0xbU))) 
                        ^ (0xffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                       >> 0xcU))) ^ 
                       (0xfff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                   >> 0x10U))) ^ (0x7ff8U 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                     >> 0x11U))) 
                     ^ (0x3ff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                   >> 0x12U))) ^ (0xff8U 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                     >> 0x14U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc 
        = ((0xefU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc)) 
           | (0x10U & (((((((((((((0xfffffff0U & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r) 
                                  ^ (0x7ffffff0U & 
                                     (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                      >> 1U))) ^ (0x3ffffff0U 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                     >> 2U))) 
                                ^ (0x1ffffff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                  >> 3U))) 
                               ^ (0xffffff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                >> 4U))) 
                              ^ (0x7fffff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                               >> 5U))) 
                             ^ (0xffff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                            >> 0xcU))) 
                            ^ (0x7fff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                           >> 0xdU))) 
                           ^ (0x3fff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                          >> 0xeU))) 
                          ^ (0x1fff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                         >> 0xfU))) 
                         ^ (0xfff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                       >> 0x10U))) 
                        ^ (0x3ff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                      >> 0x12U))) ^ 
                       (0x1ff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                   >> 0x13U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc 
        = ((0xdfU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc)) 
           | (0x20U & (((((((((((((0x7ffffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                 >> 5U)) 
                                  ^ (0x3ffffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                   >> 6U))) 
                                 ^ (0x1ffffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                  >> 7U))) 
                                ^ (0xffffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                                >> 8U))) 
                               ^ (0x7fffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                               >> 9U))) 
                              ^ (0x3fffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                              >> 0xaU))) 
                             ^ (0x1fffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                             >> 0xbU))) 
                            ^ (0xfffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                           >> 0xcU))) 
                           ^ (0x7ffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                          >> 0xdU))) 
                          ^ (0x3ffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                         >> 0xeU))) 
                         ^ (0xffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                       >> 0x10U))) 
                        ^ (0x7fe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                      >> 0x11U))) ^ 
                       (0x3fe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                                   >> 0x12U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom 
        = (0xffU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc) 
                    ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
                       >> 0x18U)));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfffffeU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | (7U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfffffdU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0xbU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 1U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfffffbU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0xdU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 2U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfffff7U & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0xeU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 3U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xffffefU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x13U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 4U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xffffcfU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | (((0x15U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
               << 5U) | ((0x16U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
                         << 4U)));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xffff7fU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x19U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 7U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfffeffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x1aU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 8U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfffdffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x1cU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 9U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfffbffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x23U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0xaU));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfff7ffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x25U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0xbU));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xffefffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x26U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0xcU));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xffdfffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x29U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0xdU));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xffbfffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x2aU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0xeU));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xff7fffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x2cU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0xfU));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfeffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x31U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0x10U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfdffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x32U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0x11U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xfbffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x34U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0x12U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xf7ffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x38U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0x13U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xefffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x1fU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0x14U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xdfffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x2fU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0x15U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0xbfffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x37U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0x16U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction 
        = ((0x7fffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction) 
           | ((0x3bU == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom)) 
              << 0x17U));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct 
        = (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r 
           ^ vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction);
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__18(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__18\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r 
        = vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r 
        = vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r;
}

VL_INLINE_OPT void Vulx3s_pass_through::_sequent__TOP__19(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_sequent__TOP__19\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi = 0U;
        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou = 0U;
        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term = 0U;
        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r = 0U;
        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r = 1U;
    } else {
        if ((0U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi))) {
            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi 
                = (((((IData)(vlTOPp->cam0_d0_r_p) 
                      & (IData)(vlTOPp->cam0_d0_r_n)) 
                     & (IData)(vlTOPp->cam0_d1_r_p)) 
                    & (IData)(vlTOPp->cam0_d1_r_n))
                    ? 1U : 0U);
            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou = 0U;
            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term = 0U;
            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs = 0U;
            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r = 0U;
            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__debug0_r = 0U;
            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r = 1U;
        } else {
            if ((1U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi))) {
                vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi 
                    = (((((~ (IData)(vlTOPp->cam0_d0_r_p)) 
                          & (IData)(vlTOPp->cam0_d0_r_n)) 
                         & (~ (IData)(vlTOPp->cam0_d1_r_p))) 
                        & (IData)(vlTOPp->cam0_d1_r_n))
                        ? 2U : 1U);
                vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__debug0_r = 0U;
                vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r = 1U;
            } else {
                if ((2U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi))) {
                    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term 
                        = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term);
                    if ((0x181U <= vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou)) {
                        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi = 0U;
                    } else {
                        if ((1U & ((((~ (IData)(vlTOPp->cam0_d0_r_p)) 
                                     & (~ (IData)(vlTOPp->cam0_d0_r_n))) 
                                    & (~ (IData)(vlTOPp->cam0_d1_r_p))) 
                                   & (~ (IData)(vlTOPp->cam0_d1_r_n))))) {
                            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi = 3U;
                            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou = 0U;
                            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs = 0U;
                        }
                    }
                    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r = 1U;
                    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou 
                        = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou);
                } else {
                    if ((3U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi))) {
                        vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r = 1U;
                        if (VL_LTES_III(1,32,32, 0U, vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term)) {
                            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r = 1U;
                        }
                        if (VL_LTES_III(1,32,32, 1U, vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs)) {
                            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi = 4U;
                            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou = 0U;
                            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r = 0U;
                        }
                        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term 
                            = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term);
                        if ((0x181U <= vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou)) {
                            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi = 0U;
                        }
                        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou 
                            = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou);
                        vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs 
                            = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs);
                    } else {
                        if ((4U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi))) {
                            vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__debug0_r = 1U;
                            if ((0x181U <= vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou)) {
                                vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi = 0U;
                                vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r = 1U;
                            }
                            vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou 
                                = ((IData)(1U) + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou);
                            if (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__rec_data) {
                                vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi = 5U;
                                vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou = 0U;
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi))) {
                                vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou 
                                    = ((IData)(1U) 
                                       + vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou);
                                if ((1U & ((~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__rec_data)) 
                                           | (0x181U 
                                              < vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou)))) {
                                    vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi = 0U;
                                    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou 
        = vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term 
        = vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs 
        = vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs;
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi 
        = vlTOPp->__Vdly__ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi;
    vlTOPp->debug0 = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__debug0_r;
    vlTOPp->cam0_d0_r_n = (1U & ((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                    ? 0U : 0U) & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                     ? 0xffffffffU : 0U)));
    vlTOPp->cam0_d1_r_p = (1U & ((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                    ? 0U : 0U) & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                     ? 0xffffffffU : 0U)));
    vlTOPp->cam0_d1_r_n = (1U & ((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                    ? 0U : 0U) & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                     ? 0xffffffffU : 0U)));
    vlTOPp->cam0_d0_r_p = (1U & ((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                    ? 0U : 0U) & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r)
                                     ? 0xffffffffU : 0U)));
}

VL_INLINE_OPT void Vulx3s_pass_through::_multiclk__TOP__20(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_multiclk__TOP__20\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xfffeU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (1U & ((((((((((((((((((vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                     >> 0x15U) ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 0xaU)) 
                                   ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                      >> 0xaU)) ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   >> 0x1cU)) 
                                 ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                    >> 6U)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                               >> 6U)) 
                               ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                  >> 0x18U)) ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 0xdU)) 
                             ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                >> 0xdU)) ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             >> 0x14U)) 
                           ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                              >> 5U)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                         >> 5U)) ^ 
                         (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                          >> 0xcU)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       >> 0xcU)) ^ 
                       (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                        >> 4U)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                   >> 4U)) ^ vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r) 
                    ^ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xfffdU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (2U & ((((((((((((((((((((0x7feU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                 >> 0x15U)) 
                                      ^ (0x3ffffeU 
                                         & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 0xaU))) 
                                     ^ (0x3ffffeU & 
                                        ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                         >> 0xaU))) 
                                    ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                       << 1U)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                  << 1U)) 
                                  ^ (0xeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             >> 0x1cU))) 
                                 ^ (0x3fffffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 6U))) 
                                ^ (0x3fffffeU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 >> 6U))) 
                               ^ (0xfeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           >> 0x18U))) 
                              ^ (0x7fffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             >> 0xdU))) 
                             ^ (0x7fffeU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            >> 0xdU))) 
                            ^ (0xffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                         >> 0x14U))) 
                           ^ (0x7fffffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 5U))) 
                          ^ (0x7fffffeU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           >> 5U))) 
                         ^ (0xffffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                        >> 0xcU))) 
                        ^ (0xffffeU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       >> 0xcU))) ^ 
                       (0xffffffeU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                      >> 4U))) ^ (0xffffffeU 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                     >> 4U))) 
                     ^ (0xfffffffeU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r)) 
                    ^ (0xfffffffeU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xfffbU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (4U & ((((((((((((((((((((0x7fcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                 >> 0x15U)) 
                                      ^ (0x3ffffcU 
                                         & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 0xaU))) 
                                     ^ (0x3ffffcU & 
                                        ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                         >> 0xaU))) 
                                    ^ (0xfffffffcU 
                                       & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          << 1U))) 
                                   ^ (0xfffffffcU & 
                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       << 1U))) ^ (0xcU 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 0x1cU))) 
                                 ^ (0x3fffffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 6U))) 
                                ^ (0x3fffffcU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 >> 6U))) 
                               ^ (0xfcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           >> 0x18U))) 
                              ^ (0x7fffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             >> 0xdU))) 
                             ^ (0x7fffcU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            >> 0xdU))) 
                            ^ (0xffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                         >> 0x14U))) 
                           ^ (0x7fffffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 5U))) 
                          ^ (0x7fffffcU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           >> 5U))) 
                         ^ (0xffffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                        >> 0xcU))) 
                        ^ (0xffffcU & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       >> 0xcU))) ^ 
                       (0xffffffcU & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                      >> 4U))) ^ (0xffffffcU 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                     >> 4U))) 
                     ^ (0xfffffffcU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r)) 
                    ^ (0xfffffffcU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xfff7U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (8U & (((((((((((((((((((((0x7f8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 0x15U)) 
                                       ^ (0x3ffff8U 
                                          & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             >> 0xaU))) 
                                      ^ (0x3ffff8U 
                                         & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            >> 0xaU))) 
                                     ^ (0xfffffff8U 
                                        & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           << 1U))) 
                                    ^ (0xfffffff8U 
                                       & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                          << 1U))) 
                                   ^ (8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 0x1cU))) 
                                  ^ (0x3fffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   >> 6U))) 
                                 ^ (0x3fffff8U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                  >> 6U))) 
                                ^ (0xf8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 0x18U))) 
                               ^ (0x7fff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 0xdU))) 
                              ^ (0xff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           >> 0x14U))) 
                             ^ (0x7fffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 5U))) 
                            ^ (0x7fffff8U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             >> 5U))) 
                           ^ (0xffff8U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          >> 0xcU))) 
                          ^ (0xffff8U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                         >> 0xcU))) 
                         ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                            << 3U)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       << 3U)) ^ (0xffffff8U 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                     >> 4U))) 
                      ^ (0xffffff8U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       >> 4U))) ^ (0xfffffff8U 
                                                   & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r)) 
                    ^ (0xfffffff8U & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xffefU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x10U & (((((((((((((((((((((((((0xfff0U 
                                               & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 0x10U)) 
                                              ^ (0xffff0U 
                                                 & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                    >> 0xcU))) 
                                             ^ (0xfffff0U 
                                                & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   >> 8U))) 
                                            ^ (0xfffff0U 
                                               & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                  >> 8U))) 
                                           ^ (0xffffff0U 
                                              & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                 >> 4U))) 
                                          ^ (0xffffff0U 
                                             & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                >> 4U))) 
                                         ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            << 4U)) 
                                        ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           << 4U)) 
                                       ^ (0x7f0U & 
                                          (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           >> 0x15U))) 
                                      ^ (0x3ffff0U 
                                         & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 0xaU))) 
                                     ^ (0x3ffff0U & 
                                        ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                         >> 0xaU))) 
                                    ^ (0xfffffff0U 
                                       & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          << 1U))) 
                                   ^ (0xfffffff0U & 
                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       << 1U))) ^ (0x7ff0U 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 0x11U))) 
                                 ^ (0x7fff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 0xdU))) 
                                ^ (0x3ffffff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 2U))) 
                               ^ (0x3ffffff0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 >> 2U))) 
                              ^ (0x7ffff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 9U))) 
                             ^ (0x7ffff0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             >> 9U))) 
                            ^ (0x7fffff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             >> 5U))) 
                           ^ (0x7fffff0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            >> 5U))) 
                          ^ (0x7ffffff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 1U))) 
                         ^ (0x7ffffff0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           >> 1U))) 
                        ^ (0xfffffff0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          << 3U))) 
                       ^ (0xfffffff0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                         << 3U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xffdfU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x20U & (((((((((((((((((((((((((((0xffe0U 
                                                 & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                    >> 0x10U)) 
                                                ^ (0xfffe0U 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 0xcU))) 
                                               ^ (0xffffe0U 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                     >> 8U))) 
                                              ^ (0xffffe0U 
                                                 & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                    >> 8U))) 
                                             ^ (0xfffffe0U 
                                                & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   >> 4U))) 
                                            ^ (0xfffffe0U 
                                               & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                  >> 4U))) 
                                           ^ (0xffffffe0U 
                                              & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                 << 4U))) 
                                          ^ (0xffffffe0U 
                                             & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                << 4U))) 
                                         ^ (0x7e0U 
                                            & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                               >> 0x15U))) 
                                        ^ (0x3fffe0U 
                                           & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 0xaU))) 
                                       ^ (0x3fffe0U 
                                          & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             >> 0xaU))) 
                                      ^ (0xffffffe0U 
                                         & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            << 1U))) 
                                     ^ (0xffffffe0U 
                                        & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           << 1U))) 
                                    ^ (0x7fe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 0x11U))) 
                                   ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                      << 5U)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 << 5U)) 
                                 ^ (0x7ffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 0xdU))) 
                                ^ (0x3fffffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 2U))) 
                               ^ (0x3fffffe0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 >> 2U))) 
                              ^ (0x7fffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 9U))) 
                             ^ (0x7fffe0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             >> 9U))) 
                            ^ (0x7ffffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             >> 5U))) 
                           ^ (0x7ffffe0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            >> 5U))) 
                          ^ (0x7fffffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 1U))) 
                         ^ (0x7fffffe0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           >> 1U))) 
                        ^ (0xffffffe0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          << 3U))) 
                       ^ (0xffffffe0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                         << 3U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xffbfU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x40U & ((((((((((((((((((((((((((0xffc0U 
                                                & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   >> 0x10U)) 
                                               ^ (0xfffc0U 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                     >> 0xcU))) 
                                              ^ (0xffffc0U 
                                                 & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                    >> 8U))) 
                                             ^ (0xffffc0U 
                                                & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                   >> 8U))) 
                                            ^ (0xfffffc0U 
                                               & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 4U))) 
                                           ^ (0xfffffc0U 
                                              & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 >> 4U))) 
                                          ^ (0xffffffc0U 
                                             & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                << 4U))) 
                                         ^ (0xffffffc0U 
                                            & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                               << 4U))) 
                                        ^ (0x7c0U & 
                                           (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 0x15U))) 
                                       ^ (0x3fffc0U 
                                          & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             >> 0xaU))) 
                                      ^ (0xffffffc0U 
                                         & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            << 1U))) 
                                     ^ (0xffffffc0U 
                                        & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           << 1U))) 
                                    ^ (0x7fc0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 0x11U))) 
                                   ^ (0xffffffc0U & 
                                      (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                       << 5U))) ^ (0xffffffc0U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                      << 5U))) 
                                 ^ (0x7ffc0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 0xdU))) 
                                ^ (0x3fffffc0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 2U))) 
                               ^ (0x3fffffc0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 >> 2U))) 
                              ^ (0x7fffc0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 9U))) 
                             ^ (0x7fffc0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             >> 9U))) 
                            ^ (0x7ffffc0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             >> 5U))) 
                           ^ (0x7ffffc0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            >> 5U))) 
                          ^ (0x7fffffc0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 1U))) 
                         ^ (0x7fffffc0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           >> 1U))) 
                        ^ (0xffffffc0U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          << 3U))) 
                       ^ (0xffffffc0U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                         << 3U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xff7fU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x80U & (((((((((((((((((((((((((((0xff80U 
                                                 & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                    >> 0x10U)) 
                                                ^ (0xfff80U 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 0xcU))) 
                                               ^ (0xffff80U 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                     >> 8U))) 
                                              ^ (0xffff80U 
                                                 & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                    >> 8U))) 
                                             ^ (0xfffff80U 
                                                & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   >> 4U))) 
                                            ^ (0xfffff80U 
                                               & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                  >> 4U))) 
                                           ^ (0xffffff80U 
                                              & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                 << 4U))) 
                                          ^ (0xffffff80U 
                                             & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                << 4U))) 
                                         ^ (0x780U 
                                            & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                               >> 0x15U))) 
                                        ^ (0x3fff80U 
                                           & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 0xaU))) 
                                       ^ (0xffffff80U 
                                          & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             << 1U))) 
                                      ^ (0xffffff80U 
                                         & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            << 1U))) 
                                     ^ (0x7f80U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   >> 0x11U))) 
                                    ^ (0xffffff80U 
                                       & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          << 5U))) 
                                   ^ (0xffffff80U & 
                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       << 5U))) ^ (0x7ff80U 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 0xdU))) 
                                 ^ (0x3fffff80U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   >> 2U))) 
                                ^ (0x3fffff80U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                  >> 2U))) 
                               ^ (0x7fff80U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                               >> 9U))) 
                              ^ (0x7ffff80U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                               >> 5U))) 
                             ^ (0x7ffff80U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                              >> 5U))) 
                            ^ (0x7fffff80U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 1U))) 
                           ^ (0x7fffff80U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             >> 1U))) 
                          ^ (0xffffff80U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            << 3U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           << 3U))) 
                        ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                           << 7U)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                      << 7U))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xfeffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x100U & ((((((((((((((((((((((((((0xff00U 
                                                 & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                    >> 0x10U)) 
                                                ^ (0xfff00U 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 0xcU))) 
                                               ^ (0xffff00U 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                     >> 8U))) 
                                              ^ (0xfffff00U 
                                                 & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                    >> 4U))) 
                                             ^ (0xfffff00U 
                                                & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                   >> 4U))) 
                                            ^ (0xffffff00U 
                                               & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  << 4U))) 
                                           ^ (0xffffff00U 
                                              & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 << 4U))) 
                                          ^ (0x700U 
                                             & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 0x15U))) 
                                         ^ (0x3fff00U 
                                            & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                               >> 0xaU))) 
                                        ^ (0xffffff00U 
                                           & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              << 1U))) 
                                       ^ (0xffffff00U 
                                          & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             << 1U))) 
                                      ^ (0x7f00U & 
                                         (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          >> 0x11U))) 
                                     ^ (0xffffff00U 
                                        & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           << 5U))) 
                                    ^ (0xffffff00U 
                                       & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                          << 5U))) 
                                   ^ (0x7ff00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 0xdU))) 
                                  ^ (0x3fffff00U & 
                                     (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                      >> 2U))) ^ (0x3fffff00U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                     >> 2U))) 
                                ^ (0x7fff00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 9U))) 
                               ^ (0x7ffff00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 5U))) 
                              ^ (0x7ffff00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                               >> 5U))) 
                             ^ (0x7fffff00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                               >> 1U))) 
                            ^ (0x7fffff00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                              >> 1U))) 
                           ^ (0xffffff00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             << 3U))) 
                          ^ (0xffffff00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            << 3U))) 
                         ^ (0xffffff00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           << 7U))) 
                        ^ (0xffffff00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                          << 7U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xfdffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x200U & ((((((((((((((((((((((((((0xfe00U 
                                                 & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                    >> 0x10U)) 
                                                ^ (0xffe00U 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 0xcU))) 
                                               ^ (0xfffe00U 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                     >> 8U))) 
                                              ^ (0xffffe00U 
                                                 & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                    >> 4U))) 
                                             ^ (0xffffe00U 
                                                & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                   >> 4U))) 
                                            ^ (0xfffffe00U 
                                               & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  << 4U))) 
                                           ^ (0xfffffe00U 
                                              & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 << 4U))) 
                                          ^ (0x600U 
                                             & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 0x15U))) 
                                         ^ (0x3ffe00U 
                                            & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                               >> 0xaU))) 
                                        ^ (0xfffffe00U 
                                           & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              << 1U))) 
                                       ^ (0xfffffe00U 
                                          & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             << 1U))) 
                                      ^ (0x7e00U & 
                                         (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          >> 0x11U))) 
                                     ^ (0xfffffe00U 
                                        & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           << 5U))) 
                                    ^ (0xfffffe00U 
                                       & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                          << 5U))) 
                                   ^ (0x7fe00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 0xdU))) 
                                  ^ (0x3ffffe00U & 
                                     (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                      >> 2U))) ^ (0x3ffffe00U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                     >> 2U))) 
                                ^ (0x7ffe00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 9U))) 
                               ^ (0x7fffe00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 5U))) 
                              ^ (0x7fffe00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                               >> 5U))) 
                             ^ (0x7ffffe00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                               >> 1U))) 
                            ^ (0x7ffffe00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                              >> 1U))) 
                           ^ (0xfffffe00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             << 3U))) 
                          ^ (0xfffffe00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            << 3U))) 
                         ^ (0xfffffe00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           << 7U))) 
                        ^ (0xfffffe00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                          << 7U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xfbffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x400U & ((((((((((((((((((((((((((((0xfc00U 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  (0xffc00U 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 0xcU))) 
                                                 ^ 
                                                 (0xfffc00U 
                                                  & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                     >> 8U))) 
                                                ^ (0xffffc00U 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 4U))) 
                                               ^ (0xffffc00U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                     >> 4U))) 
                                              ^ (0xfffffc00U 
                                                 & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                    << 4U))) 
                                             ^ (0xfffffc00U 
                                                & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                   << 4U))) 
                                            ^ (0x400U 
                                               & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 0x15U))) 
                                           ^ (0x3ffc00U 
                                              & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                 >> 0xaU))) 
                                          ^ (0xfffffc00U 
                                             & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                << 1U))) 
                                         ^ (0xfffffc00U 
                                            & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                               << 1U))) 
                                        ^ (0x7c00U 
                                           & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 0x11U))) 
                                       ^ (0xfffffc00U 
                                          & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             << 5U))) 
                                      ^ (0xfffffc00U 
                                         & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            << 5U))) 
                                     ^ (0x7fc00U & 
                                        (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                         >> 0xdU))) 
                                    ^ (0x3ffffc00U 
                                       & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          >> 2U))) 
                                   ^ (0x3ffffc00U & 
                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       >> 2U))) ^ (0x7ffc00U 
                                                   & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                      >> 9U))) 
                                 ^ (0x7fffc00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 5U))) 
                                ^ (0x7fffc00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 >> 5U))) 
                               ^ (0x7ffffc00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                 >> 1U))) 
                              ^ (0x7ffffc00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                >> 1U))) 
                             ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                << 0xaU)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             << 0xaU)) 
                           ^ (0xfffffc00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             << 3U))) 
                          ^ (0xfffffc00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            << 3U))) 
                         ^ (0xfffffc00U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           << 7U))) 
                        ^ (0xfffffc00U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                          << 7U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xf7ffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x800U & ((((((((((((((((0xf800U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 0x10U)) 
                                      ^ (0x7fff800U 
                                         & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            >> 5U))) 
                                     ^ (0xfffff800U 
                                        & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           << 6U))) 
                                    ^ (0xfffff800U 
                                       & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                          << 6U))) 
                                   ^ (0xff800U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                  >> 0xcU))) 
                                  ^ (0xfffff800U & 
                                     (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                      << 0xaU))) ^ 
                                 (0xfffff800U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                 << 0xaU))) 
                                ^ (0xfff800U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 8U))) 
                               ^ (0xfffff800U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                 << 3U))) 
                              ^ (0xfffff800U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                << 3U))) 
                             ^ (0xffff800U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 4U))) 
                            ^ (0xffff800U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             >> 4U))) 
                           ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                              << 0xbU)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           << 0xbU)) 
                         ^ (0xfffff800U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                           << 4U))) 
                        ^ (0xfffff800U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                          << 4U)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xefffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x1000U & (((((((((((((((((0xf000U & 
                                         (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          >> 0x10U)) 
                                        ^ (0x7fff000U 
                                           & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 5U))) 
                                       ^ (0xfffff000U 
                                          & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             << 6U))) 
                                      ^ (0xfffff000U 
                                         & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            << 6U))) 
                                     ^ (0xff000U & 
                                        (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                         >> 0xcU))) 
                                    ^ (0xfffff000U 
                                       & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          << 0xaU))) 
                                   ^ (0xfffff000U & 
                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       << 0xaU))) ^ 
                                  (0xfff000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 8U))) 
                                 ^ (0xfffff000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   << 3U))) 
                                ^ (0xfffff000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                  << 3U))) 
                               ^ (0xffff000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 4U))) 
                              ^ (0xfffff000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                << 0xbU))) 
                             ^ (0xfffff000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                               << 0xbU))) 
                            ^ (0xfffff000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              << 4U))) 
                           ^ (0xfffff000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             << 4U))) 
                          ^ (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                             << 0xcU)) ^ ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                          << 0xcU))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xdfffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x2000U & (((((((((((((((((0xe000U & 
                                         (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          >> 0x10U)) 
                                        ^ (0x7ffe000U 
                                           & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 5U))) 
                                       ^ (0xffffe000U 
                                          & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             << 6U))) 
                                      ^ (0xffffe000U 
                                         & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            << 6U))) 
                                     ^ (0xfe000U & 
                                        (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                         >> 0xcU))) 
                                    ^ (0xffffe000U 
                                       & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          << 0xaU))) 
                                   ^ (0xffffe000U & 
                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       << 0xaU))) ^ 
                                  (0xffe000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 8U))) 
                                 ^ (0xffffe000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   << 3U))) 
                                ^ (0xffffe000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                  << 3U))) 
                               ^ (0xfffe000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 4U))) 
                              ^ (0xffffe000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                << 0xbU))) 
                             ^ (0xffffe000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                               << 0xbU))) 
                            ^ (0xffffe000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              << 4U))) 
                           ^ (0xffffe000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             << 4U))) 
                          ^ (0xffffe000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            << 0xcU))) 
                         ^ (0xffffe000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           << 0xcU)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0xbfffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x4000U & (((((((((((((((((0xc000U & 
                                         (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          >> 0x10U)) 
                                        ^ (0x7ffc000U 
                                           & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 5U))) 
                                       ^ (0xffffc000U 
                                          & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             << 6U))) 
                                      ^ (0xffffc000U 
                                         & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            << 6U))) 
                                     ^ (0xfc000U & 
                                        (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                         >> 0xcU))) 
                                    ^ (0xffffc000U 
                                       & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          << 0xaU))) 
                                   ^ (0xffffc000U & 
                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       << 0xaU))) ^ 
                                  (0xffc000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 8U))) 
                                 ^ (0xffffc000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   << 3U))) 
                                ^ (0xffffc000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                  << 3U))) 
                               ^ (0xfffc000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 4U))) 
                              ^ (0xffffc000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                << 0xbU))) 
                             ^ (0xffffc000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                               << 0xbU))) 
                            ^ (0xffffc000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              << 4U))) 
                           ^ (0xffffc000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             << 4U))) 
                          ^ (0xffffc000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            << 0xcU))) 
                         ^ (0xffffc000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           << 0xcU)))));
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk 
        = ((0x7fffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk)) 
           | (0x8000U & (((((((((((((((((0x8000U & 
                                         (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          >> 0x10U)) 
                                        ^ (0x7ff8000U 
                                           & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              >> 5U))) 
                                       ^ (0xffff8000U 
                                          & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                             << 6U))) 
                                      ^ (0xffff8000U 
                                         & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                            << 6U))) 
                                     ^ (0xf8000U & 
                                        (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                         >> 0xcU))) 
                                    ^ (0xffff8000U 
                                       & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                          << 0xaU))) 
                                   ^ (0xffff8000U & 
                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                       << 0xaU))) ^ 
                                  (0xff8000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 8U))) 
                                 ^ (0xffff8000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                   << 3U))) 
                                ^ (0xffff8000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                                  << 3U))) 
                               ^ (0xfff8000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                >> 4U))) 
                              ^ (0xffff8000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                                << 0xbU))) 
                             ^ (0xffff8000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                               << 0xbU))) 
                            ^ (0xffff8000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                              << 4U))) 
                           ^ (0xffff8000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                             << 4U))) 
                          ^ (0xffff8000U & (vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r 
                                            << 0xcU))) 
                         ^ (0xffff8000U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c) 
                                           << 0xcU)))));
}

VL_INLINE_OPT void Vulx3s_pass_through::_multiclk__TOP__21(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_multiclk__TOP__21\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync 
        = ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r) 
           & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r)));
}

VL_INLINE_OPT void Vulx3s_pass_through::_multiclk__TOP__22(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_multiclk__TOP__22\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__valid 
        = ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__valid_r) 
           & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r)));
}

VL_INLINE_OPT void Vulx3s_pass_through::_multiclk__TOP__23(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_multiclk__TOP__23\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__rec_data 
        = ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__rec_data_r) 
           & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r)));
    vlTOPp->debug1 = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__rec_data;
}

void Vulx3s_pass_through::_eval(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_eval\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__clk250) 
         ^ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk250))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__clk400) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk400)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__clk250) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk250)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__clk100Mhz) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk100Mhz)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    if (((IData)(vlTOPp->pixclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__pixclk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    if (((IData)(vlTOPp->cam0_clk) ^ (IData)(vlTOPp->__Vclklast__TOP__cam0_clk))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    if (((IData)(vlTOPp->__VinpClk__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2)))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    if (((~ (IData)(vlTOPp->__VinpClk__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2)) 
         & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2))) {
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2)))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4)))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2) 
         ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2))) {
        vlTOPp->_multiclk__TOP__15(vlSymsp);
    }
    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_8) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_8)))) {
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    }
    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4)))) {
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    }
    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2)))) {
        vlTOPp->_sequent__TOP__18(vlSymsp);
    }
    if (((IData)(vlTOPp->ulx3s_pass_through__DOT__clk100Mhz) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk100Mhz)))) {
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4))) 
         | ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_8) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_8))))) {
        vlTOPp->_multiclk__TOP__20(vlSymsp);
    }
    if ((((IData)(vlTOPp->ulx3s_pass_through__DOT__clk100Mhz) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk100Mhz))) 
         | ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2))))) {
        vlTOPp->_multiclk__TOP__21(vlSymsp);
    }
    if ((((IData)(vlTOPp->ulx3s_pass_through__DOT__clk100Mhz) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk100Mhz))) 
         | ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4))))) {
        vlTOPp->_multiclk__TOP__22(vlSymsp);
    }
    if ((((IData)(vlTOPp->ulx3s_pass_through__DOT__clk100Mhz) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk100Mhz))) 
         | ((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_8) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_8))))) {
        vlTOPp->_multiclk__TOP__23(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk250 
        = vlTOPp->ulx3s_pass_through__DOT__clk250;
    vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk400 
        = vlTOPp->ulx3s_pass_through__DOT__clk400;
    vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__clk100Mhz 
        = vlTOPp->ulx3s_pass_through__DOT__clk100Mhz;
    vlTOPp->__Vclklast__TOP__pixclk = vlTOPp->pixclk;
    vlTOPp->__Vclklast__TOP__cam0_clk = vlTOPp->cam0_clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2 
        = vlTOPp->__VinpClk__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2;
    vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2;
    vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4;
    vlTOPp->__Vclklast__TOP__ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_8 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_8;
    vlTOPp->__VinpClk__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2;
}

VL_INLINE_OPT QData Vulx3s_pass_through::_change_request(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_change_request\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vulx3s_pass_through::_change_request_1(Vulx3s_pass_through__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_change_request_1\n"); );
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2 ^ vlTOPp->__Vchglast__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2));
    VL_DEBUG_IF( if(__req && ((vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2 ^ vlTOPp->__Vchglast__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2))) VL_DBG_MSGF("        CHANGE: MIPI/IDDR2/ECLKSYNCB.v:2: ulx3s_pass_through.mipi.SYNC.eclki_r2\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2 
        = vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2;
    return __req;
}

#ifdef VL_DEBUG
void Vulx3s_pass_through::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vulx3s_pass_through::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((pixclk & 0xfeU))) {
        Verilated::overWidthError("pixclk");}
    if (VL_UNLIKELY((cam0_sda & 0xfeU))) {
        Verilated::overWidthError("cam0_sda");}
    if (VL_UNLIKELY((cam0_scl & 0xfeU))) {
        Verilated::overWidthError("cam0_scl");}
    if (VL_UNLIKELY((debug0 & 0xfeU))) {
        Verilated::overWidthError("debug0");}
    if (VL_UNLIKELY((debug1 & 0xfeU))) {
        Verilated::overWidthError("debug1");}
    if (VL_UNLIKELY((debug2 & 0xfeU))) {
        Verilated::overWidthError("debug2");}
    if (VL_UNLIKELY((debug3 & 0xfeU))) {
        Verilated::overWidthError("debug3");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((btn & 0xfeU))) {
        Verilated::overWidthError("btn");}
    if (VL_UNLIKELY((fire & 0xfeU))) {
        Verilated::overWidthError("fire");}
    if (VL_UNLIKELY((cam0_clk & 0xfeU))) {
        Verilated::overWidthError("cam0_clk");}
    if (VL_UNLIKELY((cam0_d0 & 0xfeU))) {
        Verilated::overWidthError("cam0_d0");}
    if (VL_UNLIKELY((cam0_d1 & 0xfeU))) {
        Verilated::overWidthError("cam0_d1");}
    if (VL_UNLIKELY((cam0_d0_r_p & 0xfeU))) {
        Verilated::overWidthError("cam0_d0_r_p");}
    if (VL_UNLIKELY((cam0_d0_r_n & 0xfeU))) {
        Verilated::overWidthError("cam0_d0_r_n");}
    if (VL_UNLIKELY((cam0_d1_r_p & 0xfeU))) {
        Verilated::overWidthError("cam0_d1_r_p");}
    if (VL_UNLIKELY((cam0_d1_r_n & 0xfeU))) {
        Verilated::overWidthError("cam0_d1_r_n");}
    if (VL_UNLIKELY((cam0_clk_r_p & 0xfeU))) {
        Verilated::overWidthError("cam0_clk_r_p");}
    if (VL_UNLIKELY((cam0_clk_r_n & 0xfeU))) {
        Verilated::overWidthError("cam0_clk_r_n");}
}
#endif  // VL_DEBUG
