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

void VDebayer::_initial__TOP__2(VDebayer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_initial__TOP__2\n"); );
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Debayer__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x280U, vlTOPp->Debayer__DOT__i)) {
        vlTOPp->Debayer__DOT____Vlvbound1 = 0U;
        if (VL_LIKELY((0x27fU >= (0x3ffU & vlTOPp->Debayer__DOT__i)))) {
            vlTOPp->Debayer__DOT__line0[(0x3ffU & vlTOPp->Debayer__DOT__i)] 
                = vlTOPp->Debayer__DOT____Vlvbound1;
        }
        vlTOPp->Debayer__DOT____Vlvbound2 = 0U;
        if (VL_LIKELY((0x27fU >= (0x3ffU & vlTOPp->Debayer__DOT__i)))) {
            vlTOPp->Debayer__DOT__line1[(0x3ffU & vlTOPp->Debayer__DOT__i)] 
                = vlTOPp->Debayer__DOT____Vlvbound2;
        }
        vlTOPp->Debayer__DOT____Vlvbound3 = 0U;
        if (VL_LIKELY((0x27fU >= (0x3ffU & vlTOPp->Debayer__DOT__i)))) {
            vlTOPp->Debayer__DOT__line2[(0x3ffU & vlTOPp->Debayer__DOT__i)] 
                = vlTOPp->Debayer__DOT____Vlvbound3;
        }
        vlTOPp->Debayer__DOT____Vlvbound4 = 0U;
        if (VL_LIKELY((0x27fU >= (0x3ffU & vlTOPp->Debayer__DOT__i)))) {
            vlTOPp->Debayer__DOT__line3[(0x3ffU & vlTOPp->Debayer__DOT__i)] 
                = vlTOPp->Debayer__DOT____Vlvbound4;
        }
        vlTOPp->Debayer__DOT__i = ((IData)(1U) + vlTOPp->Debayer__DOT__i);
    }
    vlTOPp->Debayer__DOT__line_sel = 0U;
}

void VDebayer::_settle__TOP__3(VDebayer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_settle__TOP__3\n"); );
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->address_out = vlTOPp->Debayer__DOT__address_out_r;
    vlTOPp->red = vlTOPp->Debayer__DOT__red_r;
    vlTOPp->green = vlTOPp->Debayer__DOT__green_r;
    vlTOPp->blue = vlTOPp->Debayer__DOT__blue_r;
}

void VDebayer::_eval_initial(VDebayer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer::_eval_initial\n"); );
    VDebayer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
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
    vlTOPp->_settle__TOP__3(vlSymsp);
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
    { int __Vi0=0; for (; __Vi0<640; ++__Vi0) {
            Debayer__DOT__line0[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<640; ++__Vi0) {
            Debayer__DOT__line1[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<640; ++__Vi0) {
            Debayer__DOT__line2[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<640; ++__Vi0) {
            Debayer__DOT__line3[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Debayer__DOT__red_r = VL_RAND_RESET_I(8);
    Debayer__DOT__green_r = VL_RAND_RESET_I(8);
    Debayer__DOT__blue_r = VL_RAND_RESET_I(8);
    Debayer__DOT__cX = VL_RAND_RESET_I(32);
    Debayer__DOT__cY = VL_RAND_RESET_I(32);
    Debayer__DOT__line_sel = VL_RAND_RESET_I(2);
    Debayer__DOT__address_out_r = VL_RAND_RESET_I(19);
    Debayer__DOT__i = VL_RAND_RESET_I(32);
    Debayer__DOT__raw_pix = VL_RAND_RESET_I(9);
    Debayer__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    Debayer__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    Debayer__DOT____Vlvbound3 = VL_RAND_RESET_I(8);
    Debayer__DOT____Vlvbound4 = VL_RAND_RESET_I(8);
    Debayer__DOT____Vlvbound5 = VL_RAND_RESET_I(8);
    Debayer__DOT____Vlvbound6 = VL_RAND_RESET_I(8);
    Debayer__DOT____Vlvbound7 = VL_RAND_RESET_I(8);
    Debayer__DOT____Vlvbound8 = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
