// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCam_I2C.h for the primary calling header

#include "VCam_I2C.h"
#include "VCam_I2C__Syms.h"

//==========

void VCam_I2C::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCam_I2C::eval\n"); );
    VCam_I2C__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("Cam_I2C.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCam_I2C::_eval_initial_loop(VCam_I2C__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("Cam_I2C.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCam_I2C::_sequent__TOP__2(VCam_I2C__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_sequent__TOP__2\n"); );
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__Cam_I2C__DOT__state;
    // Body
    __Vdly__Cam_I2C__DOT__state = vlTOPp->Cam_I2C__DOT__state;
    if (vlTOPp->reset) {
        vlTOPp->Cam_I2C__DOT__counter = 0U;
        __Vdly__Cam_I2C__DOT__state = 0U;
        vlTOPp->Cam_I2C__DOT__sda0 = 1U;
    } else {
        vlTOPp->Cam_I2C__DOT__rising_edge = (((IData)(vlTOPp->send_data) 
                                              & (~ (IData)(vlTOPp->Cam_I2C__DOT__send_data_old)))
                                              ? 1U : 0U);
        if ((0U == (IData)(vlTOPp->Cam_I2C__DOT__state))) {
            vlTOPp->Cam_I2C__DOT__sda0 = 1U;
            if (vlTOPp->Cam_I2C__DOT__rising_edge) {
                vlTOPp->Cam_I2C__DOT__counter = 0U;
                __Vdly__Cam_I2C__DOT__state = 1U;
                vlTOPp->Cam_I2C__DOT__sda0 = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Cam_I2C__DOT__state))) {
                vlTOPp->Cam_I2C__DOT__sda0 = (1U & 
                                              ((IData)(vlTOPp->slave_addr) 
                                               >> (7U 
                                                   & vlTOPp->Cam_I2C__DOT__counter)));
                if (VL_LTES_III(1,32,32, 7U, vlTOPp->Cam_I2C__DOT__counter)) {
                    vlTOPp->Cam_I2C__DOT__counter = 0U;
                    __Vdly__Cam_I2C__DOT__state = 2U;
                } else {
                    vlTOPp->Cam_I2C__DOT__counter = 
                        ((IData)(1U) + vlTOPp->Cam_I2C__DOT__counter);
                    __Vdly__Cam_I2C__DOT__state = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Cam_I2C__DOT__state))) {
                    vlTOPp->Cam_I2C__DOT__sda0 = 0U;
                    __Vdly__Cam_I2C__DOT__state = (
                                                   (((~ (IData)(vlTOPp->sda)) 
                                                     | (IData)(vlTOPp->ackn)) 
                                                    & (1U 
                                                       == vlTOPp->Cam_I2C__DOT__counter))
                                                    ? 3U
                                                    : 2U);
                    vlTOPp->Cam_I2C__DOT__counter = 
                        (VL_LTES_III(1,32,32, 1U, vlTOPp->Cam_I2C__DOT__counter)
                          ? 0U : ((IData)(1U) + vlTOPp->Cam_I2C__DOT__counter));
                } else {
                    if ((3U == (IData)(vlTOPp->Cam_I2C__DOT__state))) {
                        vlTOPp->Cam_I2C__DOT__sda0 
                            = (1U & ((IData)(vlTOPp->register_in) 
                                     >> (0xfU & vlTOPp->Cam_I2C__DOT__counter)));
                        vlTOPp->Cam_I2C__DOT__counter 
                            = (VL_LTES_III(1,32,32, 8U, vlTOPp->Cam_I2C__DOT__counter)
                                ? 0U : ((IData)(1U) 
                                        + vlTOPp->Cam_I2C__DOT__counter));
                        __Vdly__Cam_I2C__DOT__state 
                            = ((VL_LTES_III(1,32,32, 8U, vlTOPp->Cam_I2C__DOT__counter) 
                                & ((~ (IData)(vlTOPp->sda)) 
                                   | (IData)(vlTOPp->ackn)))
                                ? 4U : 3U);
                    } else {
                        if ((4U == (IData)(vlTOPp->Cam_I2C__DOT__state))) {
                            vlTOPp->Cam_I2C__DOT__sda0 
                                = (1U & ((IData)(vlTOPp->register_in) 
                                         >> (0xfU & 
                                             ((IData)(8U) 
                                              + vlTOPp->Cam_I2C__DOT__counter))));
                            vlTOPp->Cam_I2C__DOT__counter 
                                = (VL_LTES_III(1,32,32, 8U, vlTOPp->Cam_I2C__DOT__counter)
                                    ? 0U : ((IData)(1U) 
                                            + vlTOPp->Cam_I2C__DOT__counter));
                            __Vdly__Cam_I2C__DOT__state 
                                = ((VL_LTES_III(1,32,32, 8U, vlTOPp->Cam_I2C__DOT__counter) 
                                    & ((~ (IData)(vlTOPp->sda)) 
                                       | (IData)(vlTOPp->ackn)))
                                    ? 5U : 4U);
                        } else {
                            if ((5U == (IData)(vlTOPp->Cam_I2C__DOT__state))) {
                                vlTOPp->Cam_I2C__DOT__sda0 
                                    = (1U & ((IData)(vlTOPp->datain) 
                                             >> (7U 
                                                 & vlTOPp->Cam_I2C__DOT__counter)));
                                vlTOPp->Cam_I2C__DOT__counter 
                                    = (VL_LTES_III(1,32,32, 8U, vlTOPp->Cam_I2C__DOT__counter)
                                        ? 0U : ((IData)(1U) 
                                                + vlTOPp->Cam_I2C__DOT__counter));
                                __Vdly__Cam_I2C__DOT__state 
                                    = ((VL_LTES_III(1,32,32, 8U, vlTOPp->Cam_I2C__DOT__counter) 
                                        & ((~ (IData)(vlTOPp->sda)) 
                                           | (IData)(vlTOPp->ackn)))
                                        ? 0U : 5U);
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Cam_I2C__DOT__state = __Vdly__Cam_I2C__DOT__state;
    vlTOPp->sda = vlTOPp->Cam_I2C__DOT__sda0;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->Cam_I2C__DOT__send_data_old = vlTOPp->send_data;
    }
}

void VCam_I2C::_eval(VCam_I2C__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_eval\n"); );
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk400kHz) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk400kHz)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk400kHz = vlTOPp->clk400kHz;
}

VL_INLINE_OPT QData VCam_I2C::_change_request(VCam_I2C__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_change_request\n"); );
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCam_I2C::_change_request_1(VCam_I2C__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_change_request_1\n"); );
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCam_I2C::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk400kHz & 0xfeU))) {
        Verilated::overWidthError("clk400kHz");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((send_data & 0xfeU))) {
        Verilated::overWidthError("send_data");}
    if (VL_UNLIKELY((ackn & 0xfeU))) {
        Verilated::overWidthError("ackn");}
    if (VL_UNLIKELY((scl & 0xfeU))) {
        Verilated::overWidthError("scl");}
    if (VL_UNLIKELY((sda & 0xfeU))) {
        Verilated::overWidthError("sda");}
}
#endif  // VL_DEBUG
