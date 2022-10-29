// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTMDS_Encoder.h for the primary calling header

#include "VTMDS_Encoder.h"
#include "VTMDS_Encoder__Syms.h"

//==========

VL_CTOR_IMP(VTMDS_Encoder) {
    VTMDS_Encoder__Syms* __restrict vlSymsp = __VlSymsp = new VTMDS_Encoder__Syms(this, name());
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTMDS_Encoder::__Vconfigure(VTMDS_Encoder__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VTMDS_Encoder::~VTMDS_Encoder() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VTMDS_Encoder::_initial__TOP__3(VTMDS_Encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_initial__TOP__3\n"); );
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TMDS_Encoder__DOT__cnt = 0U;
    vlTOPp->TMDS_Encoder__DOT__cnt_old = 0U;
}

void VTMDS_Encoder::_eval_initial(VTMDS_Encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_eval_initial\n"); );
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clkhigh = vlTOPp->clkhigh;
    vlTOPp->__Vclklast__TOP__clklow = vlTOPp->clklow;
    vlTOPp->_initial__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VTMDS_Encoder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::final\n"); );
    // Variables
    VTMDS_Encoder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTMDS_Encoder::_eval_settle(VTMDS_Encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_eval_settle\n"); );
    VTMDS_Encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void VTMDS_Encoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTMDS_Encoder::_ctor_var_reset\n"); );
    // Body
    clklow = VL_RAND_RESET_I(1);
    clkhigh = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    state = VL_RAND_RESET_I(2);
    pix_data = VL_RAND_RESET_I(8);
    H_VSync_Ctr = VL_RAND_RESET_I(2);
    aux_data = VL_RAND_RESET_I(4);
    data_o = VL_RAND_RESET_I(1);
    TMDS_Encoder__DOT__q_m = VL_RAND_RESET_I(10);
    TMDS_Encoder__DOT__q_out = VL_RAND_RESET_I(10);
    TMDS_Encoder__DOT__cnt = VL_RAND_RESET_I(32);
    TMDS_Encoder__DOT__cnt_old = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
