// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblinky.h for the primary calling header

#include "Vblinky.h"
#include "Vblinky__Syms.h"

//==========

VL_CTOR_IMP(Vblinky) {
    Vblinky__Syms* __restrict vlSymsp = __VlSymsp = new Vblinky__Syms(this, name());
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vblinky::__Vconfigure(Vblinky__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vblinky::~Vblinky() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vblinky::_initial__TOP__2(Vblinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_initial__TOP__2\n"); );
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->blinky__DOT__ctr = 0U;
}

void Vblinky::_eval_initial(Vblinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_eval_initial\n"); );
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->_initial__TOP__2(vlSymsp);
}

void Vblinky::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::final\n"); );
    // Variables
    Vblinky__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vblinky::_eval_settle(Vblinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_eval_settle\n"); );
    Vblinky* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vblinky::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    btn = VL_RAND_RESET_I(7);
    o_led = VL_RAND_RESET_I(8);
    blinky__DOT__ctr = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
