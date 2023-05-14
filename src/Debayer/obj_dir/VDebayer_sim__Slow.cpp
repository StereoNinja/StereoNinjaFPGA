// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDebayer_sim.h for the primary calling header

#include "VDebayer_sim.h"
#include "VDebayer_sim__Syms.h"

//==========

VL_CTOR_IMP(VDebayer_sim) {
    VDebayer_sim__Syms* __restrict vlSymsp = __VlSymsp = new VDebayer_sim__Syms(this, name());
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDebayer_sim::__Vconfigure(VDebayer_sim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VDebayer_sim::~VDebayer_sim() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VDebayer_sim::_initial__TOP__3(VDebayer_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_initial__TOP__3\n"); );
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Debayer_sim__DOT__debay__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x280U, vlTOPp->Debayer_sim__DOT__debay__DOT__i)) {
        vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound1 = 0U;
        if (VL_LIKELY((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__i)))) {
            vlTOPp->Debayer_sim__DOT__debay__DOT__line0[(0x3ffU 
                                                         & vlTOPp->Debayer_sim__DOT__debay__DOT__i)] 
                = vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound1;
        }
        vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound2 = 0U;
        if (VL_LIKELY((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__i)))) {
            vlTOPp->Debayer_sim__DOT__debay__DOT__line1[(0x3ffU 
                                                         & vlTOPp->Debayer_sim__DOT__debay__DOT__i)] 
                = vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound2;
        }
        vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound3 = 0U;
        if (VL_LIKELY((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__i)))) {
            vlTOPp->Debayer_sim__DOT__debay__DOT__line2[(0x3ffU 
                                                         & vlTOPp->Debayer_sim__DOT__debay__DOT__i)] 
                = vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound3;
        }
        vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound4 = 0U;
        if (VL_LIKELY((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__i)))) {
            vlTOPp->Debayer_sim__DOT__debay__DOT__line3[(0x3ffU 
                                                         & vlTOPp->Debayer_sim__DOT__debay__DOT__i)] 
                = vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound4;
        }
        vlTOPp->Debayer_sim__DOT__debay__DOT__i = ((IData)(1U) 
                                                   + vlTOPp->Debayer_sim__DOT__debay__DOT__i);
    }
    vlTOPp->Debayer_sim__DOT__debay__DOT__line_sel = 0U;
    vlTOPp->Debayer_sim__DOT__counter = 0U;
    VL_READMEM_N(true, 32, 76800, 0, std::string("raw.mem")
                 , vlTOPp->Debayer_sim__DOT__DPR__DOT__ram
                 , 0, ~0ULL);
}

void VDebayer_sim::_settle__TOP__4(VDebayer_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_settle__TOP__4\n"); );
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->red = vlTOPp->Debayer_sim__DOT__debay__DOT__red_r;
    vlTOPp->blue = vlTOPp->Debayer_sim__DOT__debay__DOT__blue_r;
}

void VDebayer_sim::_eval_initial(VDebayer_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_eval_initial\n"); );
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__Debayer_sim__DOT__DPR__DOT__clk 
        = vlTOPp->Debayer_sim__DOT__DPR__DOT__clk;
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->_initial__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VDebayer_sim::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::final\n"); );
    // Variables
    VDebayer_sim__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDebayer_sim::_eval_settle(VDebayer_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_eval_settle\n"); );
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void VDebayer_sim::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    address_in = VL_RAND_RESET_I(19);
    red = VL_RAND_RESET_I(8);
    green = VL_RAND_RESET_I(8);
    blue = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__ramdata = VL_RAND_RESET_I(32);
    Debayer_sim__DOT__counter = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__color_w = VL_RAND_RESET_I(32);
    Debayer_sim__DOT__raw_v = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<640; ++__Vi0) {
            Debayer_sim__DOT__debay__DOT__line0[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<640; ++__Vi0) {
            Debayer_sim__DOT__debay__DOT__line1[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<640; ++__Vi0) {
            Debayer_sim__DOT__debay__DOT__line2[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<640; ++__Vi0) {
            Debayer_sim__DOT__debay__DOT__line3[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Debayer_sim__DOT__debay__DOT__red_r = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__debay__DOT__green_r = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__debay__DOT__blue_r = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__debay__DOT__cX = VL_RAND_RESET_I(32);
    Debayer_sim__DOT__debay__DOT__cY = VL_RAND_RESET_I(32);
    Debayer_sim__DOT__debay__DOT__line_sel = VL_RAND_RESET_I(2);
    Debayer_sim__DOT__debay__DOT__address_out_r = VL_RAND_RESET_I(19);
    Debayer_sim__DOT__debay__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            Debayer_sim__DOT__debay__DOT__raw_pix[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Debayer_sim__DOT__debay__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__debay__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__debay__DOT____Vlvbound3 = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__debay__DOT____Vlvbound4 = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__debay__DOT____Vlvbound5 = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__debay__DOT____Vlvbound6 = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__debay__DOT____Vlvbound7 = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__debay__DOT____Vlvbound8 = VL_RAND_RESET_I(8);
    Debayer_sim__DOT__DPR__DOT__data_a = VL_RAND_RESET_I(32);
    Debayer_sim__DOT__DPR__DOT__data_b = VL_RAND_RESET_I(32);
    Debayer_sim__DOT__DPR__DOT__addr_a = VL_RAND_RESET_I(17);
    Debayer_sim__DOT__DPR__DOT__bank = VL_RAND_RESET_I(2);
    Debayer_sim__DOT__DPR__DOT__we_a = VL_RAND_RESET_I(1);
    Debayer_sim__DOT__DPR__DOT__clk = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<76800; ++__Vi0) {
            Debayer_sim__DOT__DPR__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Debayer_sim__DOT__DPR__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    __Vdlyvdim0__Debayer_sim__DOT__DPR__DOT__ram__v0 = 0;
    __Vdlyvval__Debayer_sim__DOT__DPR__DOT__ram__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__Debayer_sim__DOT__DPR__DOT__ram__v0 = 0;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
