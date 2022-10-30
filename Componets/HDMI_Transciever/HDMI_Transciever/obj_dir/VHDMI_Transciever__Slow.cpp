// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHDMI_Transciever.h for the primary calling header

#include "VHDMI_Transciever.h"
#include "VHDMI_Transciever__Syms.h"

//==========

VL_CTOR_IMP(VHDMI_Transciever) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = __VlSymsp = new VHDMI_Transciever__Syms(this, name());
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VHDMI_Transciever::__Vconfigure(VHDMI_Transciever__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VHDMI_Transciever::~VHDMI_Transciever() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VHDMI_Transciever::_initial__TOP__3(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_initial__TOP__3\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HDMI_Transciever__DOT__v = 0U;
    vlTOPp->HDMI_Transciever__DOT__first = 0U;
    vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt = 0U;
    vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__cnt_old = 0U;
    vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt = 0U;
    vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__cnt_old = 0U;
    vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt = 0U;
    vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__cnt_old = 0U;
}

void VHDMI_Transciever::_settle__TOP__4(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_settle__TOP__4\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ram_addr = vlTOPp->HDMI_Transciever__DOT__addr;
    vlTOPp->blue = (1U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder0__DOT__q_out));
    vlTOPp->green = (1U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder1__DOT__q_out));
    vlTOPp->red = (1U & (IData)(vlTOPp->HDMI_Transciever__DOT__encoder2__DOT__q_out));
}

void VHDMI_Transciever::_eval_initial(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_eval_initial\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_high = vlTOPp->clk_high;
    vlTOPp->__Vclklast__TOP__clk_low = vlTOPp->clk_low;
    vlTOPp->_initial__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VHDMI_Transciever::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::final\n"); );
    // Variables
    VHDMI_Transciever__Syms* __restrict vlSymsp = this->__VlSymsp;
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHDMI_Transciever::_eval_settle(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_eval_settle\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void VHDMI_Transciever::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_ctor_var_reset\n"); );
    // Body
    clk_low = VL_RAND_RESET_I(1);
    clk_high = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    red = VL_RAND_RESET_I(1);
    green = VL_RAND_RESET_I(1);
    blue = VL_RAND_RESET_I(1);
    clock = VL_RAND_RESET_I(1);
    ram_addr = VL_RAND_RESET_I(26);
    ram_green = VL_RAND_RESET_I(8);
    ram_blue = VL_RAND_RESET_I(8);
    ram_red = VL_RAND_RESET_I(8);
    HDMI_Transciever__DOT__h = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__v = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__state = VL_RAND_RESET_I(2);
    HDMI_Transciever__DOT__H_VSync_Ctr_0 = VL_RAND_RESET_I(2);
    HDMI_Transciever__DOT__H_VSync_Ctr_1 = VL_RAND_RESET_I(2);
    HDMI_Transciever__DOT__H_VSync_Ctr_2 = VL_RAND_RESET_I(2);
    HDMI_Transciever__DOT__addr = VL_RAND_RESET_I(26);
    HDMI_Transciever__DOT__first = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__encoder0__DOT__aux_data = VL_RAND_RESET_I(4);
    HDMI_Transciever__DOT__encoder0__DOT__q_m = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__encoder0__DOT__q_out = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__encoder0__DOT__cnt = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__encoder0__DOT__cnt_old = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__encoder1__DOT__aux_data = VL_RAND_RESET_I(4);
    HDMI_Transciever__DOT__encoder1__DOT__q_m = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__encoder1__DOT__q_out = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__encoder1__DOT__cnt = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__encoder1__DOT__cnt_old = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__encoder2__DOT__aux_data = VL_RAND_RESET_I(4);
    HDMI_Transciever__DOT__encoder2__DOT__q_m = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__encoder2__DOT__q_out = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__encoder2__DOT__cnt = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__encoder2__DOT__cnt_old = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
