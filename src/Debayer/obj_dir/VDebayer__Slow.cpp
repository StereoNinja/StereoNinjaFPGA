// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDebayer.h for the primary calling header

#include "VDebayer.h"
#include "VDebayer__Syms.h"

//==========

VL_CTOR_IMP(VDebayer) {
    VDebayer__Syms* __restrict vlSymsp = __VlSymsp = new VDebayer__Syms(this, name());
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDebayer::__Vconfigure(VDebayer__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VDebayer::~VDebayer() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VDebayer::_eval_initial(VDebayer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_eval_initial\n"); );
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDebayer::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::final\n"); );
    // Variables
    VDebayer__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDebayer::_eval_settle(VDebayer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_eval_settle\n"); );
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VDebayer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    address_in = VL_RAND_RESET_I(19);
    address_out = VL_RAND_RESET_I(19);
    raw = VL_RAND_RESET_I(8);
    red = VL_RAND_RESET_I(8);
    green = VL_RAND_RESET_I(8);
    blue = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
