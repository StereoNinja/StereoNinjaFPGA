// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCam_I2C.h for the primary calling header

#include "VCam_I2C.h"
#include "VCam_I2C__Syms.h"

//==========

VL_CTOR_IMP(VCam_I2C) {
    VCam_I2C__Syms* __restrict vlSymsp = __VlSymsp = new VCam_I2C__Syms(this, name());
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCam_I2C::__Vconfigure(VCam_I2C__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VCam_I2C::~VCam_I2C() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VCam_I2C::_initial__TOP__1(VCam_I2C__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_initial__TOP__1\n"); );
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Cam_I2C__DOT__sda0 = 1U;
    vlTOPp->Cam_I2C__DOT__sending = 0U;
    vlTOPp->Cam_I2C__DOT__state = 0U;
    vlTOPp->Cam_I2C__DOT__send_data_old = 0U;
    vlTOPp->Cam_I2C__DOT__rising_edge = 0U;
    vlTOPp->Cam_I2C__DOT__counter = 0U;
}

void VCam_I2C::_settle__TOP__3(VCam_I2C__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_settle__TOP__3\n"); );
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->valid = vlTOPp->Cam_I2C__DOT__valid_r;
    vlTOPp->ready = vlTOPp->Cam_I2C__DOT__ready0;
    vlTOPp->sda = vlTOPp->Cam_I2C__DOT__sda0;
    vlTOPp->scl = ((IData)(vlTOPp->Cam_I2C__DOT__sending)
                    ? (1U & (~ (IData)(vlTOPp->clk400kHz)))
                    : 1U);
}

void VCam_I2C::_eval_initial(VCam_I2C__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_eval_initial\n"); );
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk400kHz = vlTOPp->clk400kHz;
}

void VCam_I2C::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::final\n"); );
    // Variables
    VCam_I2C__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCam_I2C::_eval_settle(VCam_I2C__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_eval_settle\n"); );
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VCam_I2C::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_I2C::_ctor_var_reset\n"); );
    // Body
    valid = VL_RAND_RESET_I(1);
    clk400kHz = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    send_data = VL_RAND_RESET_I(1);
    r_w = VL_RAND_RESET_I(1);
    datain = VL_RAND_RESET_I(8);
    register_in = VL_RAND_RESET_I(16);
    slave_addr = VL_RAND_RESET_I(7);
    ackn = VL_RAND_RESET_I(1);
    scl = VL_RAND_RESET_I(1);
    sda = VL_RAND_RESET_I(1);
    ready = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__valid_r = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__state = VL_RAND_RESET_I(8);
    Cam_I2C__DOT__send_data_old = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__rising_edge = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__counter = VL_RAND_RESET_I(32);
    Cam_I2C__DOT__sda0 = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__sending = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__ready0 = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__clkdelay0 = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__clkdelay1 = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__scl0 = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__scl1 = VL_RAND_RESET_I(1);
    Cam_I2C__DOT__scl2 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
