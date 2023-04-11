// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCam_Init.h for the primary calling header

#include "VCam_Init.h"
#include "VCam_Init__Syms.h"

//==========

VL_CTOR_IMP(VCam_Init) {
    VCam_Init__Syms* __restrict vlSymsp = __VlSymsp = new VCam_Init__Syms(this, name());
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCam_Init::__Vconfigure(VCam_Init__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VCam_Init::~VCam_Init() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VCam_Init::_initial__TOP__1(VCam_Init__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_initial__TOP__1\n"); );
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1[5];
    // Body
    vlTOPp->Cam_Init__DOT__cam0__DOT__sda0 = 1U;
    vlTOPp->Cam_Init__DOT__cam0__DOT__sending = 0U;
    vlTOPp->Cam_Init__DOT__cam0__DOT__state = 0U;
    vlTOPp->Cam_Init__DOT__cam0__DOT__send_data_old = 0U;
    vlTOPp->Cam_Init__DOT__cam0__DOT__rising_edge = 0U;
    vlTOPp->Cam_Init__DOT__cam0__DOT__counter = 0U;
    __Vtemp1[0U] = 0x2e6d656dU;
    __Vtemp1[1U] = 0x77726573U;
    __Vtemp1[2U] = 0x615f6c6fU;
    __Vtemp1[3U] = 0x74646174U;
    __Vtemp1[4U] = 0x696e69U;
    VL_READMEM_N(true, 24, 62, 0, VL_CVT_PACK_STR_NW(5, __Vtemp1)
                 , vlTOPp->Cam_Init__DOT__data_init
                 , 0, ~0ULL);
    vlTOPp->Cam_Init__DOT__initia = 1U;
    vlTOPp->Cam_Init__DOT__init_old = 0U;
}

void VCam_Init::_settle__TOP__3(VCam_Init__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_settle__TOP__3\n"); );
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cam_ready = vlTOPp->Cam_Init__DOT__cam_ready0;
    vlTOPp->sda = vlTOPp->Cam_Init__DOT__cam0__DOT__sda0;
    vlTOPp->scl = ((IData)(vlTOPp->Cam_Init__DOT__cam0__DOT__sending)
                    ? (1U & (~ (IData)(vlTOPp->clk400)))
                    : 1U);
}

void VCam_Init::_eval_initial(VCam_Init__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_eval_initial\n"); );
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk400 = vlTOPp->clk400;
}

void VCam_Init::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::final\n"); );
    // Variables
    VCam_Init__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCam_Init::_eval_settle(VCam_Init__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_eval_settle\n"); );
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VCam_Init::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCam_Init::_ctor_var_reset\n"); );
    // Body
    clk400 = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    init = VL_RAND_RESET_I(1);
    sda = VL_RAND_RESET_I(1);
    scl = VL_RAND_RESET_I(1);
    cam_ready = VL_RAND_RESET_I(1);
    Cam_Init__DOT__send_data = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam_ready_r = VL_RAND_RESET_I(1);
    Cam_Init__DOT__ready_old = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam_ready0 = VL_RAND_RESET_I(1);
    Cam_Init__DOT__datain = VL_RAND_RESET_I(8);
    Cam_Init__DOT__slave_addr = VL_RAND_RESET_I(8);
    Cam_Init__DOT__state = VL_RAND_RESET_I(8);
    Cam_Init__DOT__register_in = VL_RAND_RESET_I(16);
    Cam_Init__DOT__initia = VL_RAND_RESET_I(1);
    Cam_Init__DOT__init_old = VL_RAND_RESET_I(1);
    Cam_Init__DOT__counter = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<62; ++__Vi0) {
            Cam_Init__DOT__data_init[__Vi0] = VL_RAND_RESET_I(24);
    }}
    Cam_Init__DOT__cam0__DOT__r_w = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__valid_r = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__state = VL_RAND_RESET_I(8);
    Cam_Init__DOT__cam0__DOT__send_data_old = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__rising_edge = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__counter = VL_RAND_RESET_I(32);
    Cam_Init__DOT__cam0__DOT__sda0 = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__sending = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__ready0 = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__clkdelay0 = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__clkdelay1 = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__scl0 = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__scl1 = VL_RAND_RESET_I(1);
    Cam_Init__DOT__cam0__DOT__scl2 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
