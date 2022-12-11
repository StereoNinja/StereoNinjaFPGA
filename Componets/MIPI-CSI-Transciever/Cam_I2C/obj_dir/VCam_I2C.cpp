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
        vlTOPp->Cam_I2C__DOT__valid_r = 0U;
        __Vdly__Cam_I2C__DOT__state = 0U;
        vlTOPp->Cam_I2C__DOT__sda0 = 1U;
    } else {
        vlTOPp->Cam_I2C__DOT__rising_edge = (((IData)(vlTOPp->send_data) 
                                              & (~ (IData)(vlTOPp->Cam_I2C__DOT__send_data_old)))
                                              ? 1U : 0U);
        if ((0U == (IData)(vlTOPp->Cam_I2C__DOT__state))) {
            vlTOPp->Cam_I2C__DOT__valid_r = 0U;
            vlTOPp->Cam_I2C__DOT__sending = 0U;
            vlTOPp->Cam_I2C__DOT__ready0 = 1U;
            vlTOPp->Cam_I2C__DOT__sda0 = 1U;
            if (vlTOPp->Cam_I2C__DOT__rising_edge) {
                vlTOPp->Cam_I2C__DOT__counter = 0U;
                __Vdly__Cam_I2C__DOT__state = 1U;
                vlTOPp->Cam_I2C__DOT__ready0 = 0U;
                vlTOPp->Cam_I2C__DOT__sda0 = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Cam_I2C__DOT__state))) {
                if (VL_LTES_III(1,32,32, 0x24U, vlTOPp->Cam_I2C__DOT__counter)) {
                    vlTOPp->Cam_I2C__DOT__sending = 0U;
                    vlTOPp->Cam_I2C__DOT__sda0 = 0U;
                } else {
                    vlTOPp->Cam_I2C__DOT__sending = 1U;
                    vlTOPp->Cam_I2C__DOT__sda0 = (1U 
                                                  & ((0x24U 
                                                      >= 
                                                      (0x3fU 
                                                       & ((IData)(0x24U) 
                                                          - vlTOPp->Cam_I2C__DOT__counter))) 
                                                     & (IData)(
                                                               ((((QData)((IData)(vlTOPp->slave_addr)) 
                                                                  << 0x1eU) 
                                                                 | (QData)((IData)(
                                                                                (0x10080402U 
                                                                                | ((0xff00000U 
                                                                                & ((IData)(vlTOPp->register_in) 
                                                                                << 0xcU)) 
                                                                                | ((0x7f800U 
                                                                                & ((IData)(vlTOPp->register_in) 
                                                                                << 0xbU)) 
                                                                                | ((IData)(vlTOPp->datain) 
                                                                                << 2U))))))) 
                                                                >> 
                                                                (0x3fU 
                                                                 & ((IData)(0x24U) 
                                                                    - vlTOPp->Cam_I2C__DOT__counter))))));
                }
                if (VL_LTES_III(1,32,32, 0x24U, vlTOPp->Cam_I2C__DOT__counter)) {
                    vlTOPp->Cam_I2C__DOT__counter = 0U;
                    __Vdly__Cam_I2C__DOT__state = 6U;
                } else {
                    vlTOPp->Cam_I2C__DOT__counter = 
                        ((IData)(1U) + vlTOPp->Cam_I2C__DOT__counter);
                    __Vdly__Cam_I2C__DOT__state = 1U;
                }
            } else {
                if ((6U == (IData)(vlTOPp->Cam_I2C__DOT__state))) {
                    vlTOPp->Cam_I2C__DOT__valid_r = 1U;
                    __Vdly__Cam_I2C__DOT__state = 0U;
                    vlTOPp->Cam_I2C__DOT__sda0 = 0U;
                }
            }
        }
    }
    vlTOPp->valid = vlTOPp->Cam_I2C__DOT__valid_r;
    vlTOPp->Cam_I2C__DOT__state = __Vdly__Cam_I2C__DOT__state;
    vlTOPp->ready = vlTOPp->Cam_I2C__DOT__ready0;
    vlTOPp->sda = vlTOPp->Cam_I2C__DOT__sda0;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->Cam_I2C__DOT__send_data_old = vlTOPp->send_data;
    }
}

VL_INLINE_OPT void VCam_I2C::_combo__TOP__4(VCam_I2C__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_combo__TOP__4\n"); );
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->scl = ((IData)(vlTOPp->Cam_I2C__DOT__sending)
                    ? (1U & (~ (IData)(vlTOPp->clk400kHz)))
                    : 1U);
}

void VCam_I2C::_eval(VCam_I2C__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_eval\n"); );
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk400kHz) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk400kHz)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
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
    if (VL_UNLIKELY((r_w & 0xfeU))) {
        Verilated::overWidthError("r_w");}
    if (VL_UNLIKELY((slave_addr & 0x80U))) {
        Verilated::overWidthError("slave_addr");}
    if (VL_UNLIKELY((ackn & 0xfeU))) {
        Verilated::overWidthError("ackn");}
    if (VL_UNLIKELY((scl & 0xfeU))) {
        Verilated::overWidthError("scl");}
    if (VL_UNLIKELY((sda & 0xfeU))) {
        Verilated::overWidthError("sda");}
}
#endif  // VL_DEBUG
