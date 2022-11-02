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

void VHDMI_Transciever::_initial__TOP__1(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_initial__TOP__1\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_load = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_red = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_green = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_blue = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_mod10 = 0U;
}

void VHDMI_Transciever::_settle__TOP__2(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_settle__TOP__2\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m8 = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m8 = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m8 = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m1 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m1 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m1 = 1U;
    vlTOPp->HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd 
        = ((7U & (IData)(vlTOPp->HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd)) 
           | ((IData)(vlTOPp->clk_low) << 3U));
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT____Vcellinp__encoder0__H_VSync_Ctr 
        = (((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__vSync) 
            << 1U) | (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__hSync));
    vlTOPp->HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd 
        = ((8U & (IData)(vlTOPp->HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd)) 
           | ((4U & ((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_red) 
                     << 2U)) | ((2U & ((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_green) 
                                       << 1U)) | (1U 
                                                  & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_blue)))));
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m2 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m2 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m2 = 1U;
    vlTOPp->clock = (1U & ((IData)(vlTOPp->HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd) 
                           >> 3U));
    vlTOPp->red = (1U & ((IData)(vlTOPp->HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd) 
                         >> 2U));
    vlTOPp->green = (1U & ((IData)(vlTOPp->HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd) 
                           >> 1U));
    vlTOPp->blue = (1U & (IData)(vlTOPp->HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd));
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m3 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m3 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m3 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m4 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m4 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m4 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m5 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m5 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m5 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m6 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m6 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m6 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m7 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m7 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m7 = 1U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m = 0xffU;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m = 0xffU;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__21__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__21__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__20__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__20__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__19__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__19__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__18__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__18__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__17__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__17__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__16__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__16__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p1 
        = ((0U == vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old)
            ? 1U : (VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old)
                     ? 1U : 0U));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__27__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__27__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__26__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__26__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__25__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__25__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__24__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__24__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__23__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__23__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__22__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__22__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p2 = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__33__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__33__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__32__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__32__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__31__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__31__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__30__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__30__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__29__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__29__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__28__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__28__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p3 
        = ((0U == vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old)
            ? 0U : (VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old)
                     ? 0U : 0xffU));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__35__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__35__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__34__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__34__Vfuncout = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt0 
        = ((IData)(0xfffffff8U) + vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old);
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__37__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__37__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__36__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__36__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt1 
        = ((IData)(8U) + vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old);
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__39__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__39__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__38__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__38__Vfuncout = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt2 
        = (vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old 
           - (IData)(8U));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__41__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__41__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__40__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__40__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt3 
        = ((IData)(8U) + (vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old 
                          - (IData)(2U)));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__69__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__69__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__68__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__68__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__67__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__67__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__66__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__66__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__65__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__65__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__64__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__64__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p1 
        = ((0U == vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old)
            ? 1U : (VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old)
                     ? 1U : 0U));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__75__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__75__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__74__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__74__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__73__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__73__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__72__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__72__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__71__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__71__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__70__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__70__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p2 = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__81__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__81__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__80__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__80__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__79__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__79__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__78__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__78__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__77__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__77__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__76__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__76__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p3 
        = ((0U == vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old)
            ? 0U : (VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old)
                     ? 0U : 0xffU));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__83__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__83__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__82__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__82__Vfuncout = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt0 
        = ((IData)(0xfffffff8U) + vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old);
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__85__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__85__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__84__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__84__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt1 
        = ((IData)(8U) + vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old);
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__87__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__87__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__86__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__86__Vfuncout = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt2 
        = (vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old 
           - (IData)(8U));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__89__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__89__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__88__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__88__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt3 
        = ((IData)(8U) + (vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old 
                          - (IData)(2U)));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__117__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__117__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__116__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__116__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__115__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__115__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__114__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__114__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__113__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__113__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__112__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__112__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p1 
        = ((0U == vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old)
            ? 1U : (VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old)
                     ? 1U : 0U));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__123__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__123__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__122__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__122__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__121__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__121__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__120__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__120__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__119__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__119__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__118__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__118__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p2 = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__129__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__129__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__128__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__128__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__127__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__127__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__126__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__126__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__125__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__125__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__124__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__124__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p3 
        = ((0U == vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old)
            ? 0U : (VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old)
                     ? 0U : 0xffU));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__131__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__131__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__130__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__130__Vfuncout = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt0 
        = ((IData)(0xfffffff8U) + vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old);
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__133__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__133__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__132__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__132__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt1 
        = ((IData)(8U) + vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old);
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__135__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__135__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__134__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__134__Vfuncout = 0U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt2 
        = (vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old 
           - (IData)(8U));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__137__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__137__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__136__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__136__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt3 
        = ((IData)(8U) + (vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old 
                          - (IData)(2U)));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__46__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__46__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__45__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__45__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__47__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__47__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__44__data = 1U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__44__Vfuncout = 1U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__43__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__43__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__42__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__42__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt 
        = ((0U == vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old)
            ? vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt0
            : (VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old)
                ? vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt2
                : vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt3));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__94__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__94__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__93__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__93__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__95__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__95__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__92__data = 1U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__92__Vfuncout = 1U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__91__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__91__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__90__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__90__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt 
        = ((0U == vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old)
            ? vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt0
            : (VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old)
                ? vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt2
                : vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt3));
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__142__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__142__Vfuncout = 8U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__141__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__141__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__143__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__143__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__140__data = 1U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__140__Vfuncout = 1U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__139__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__139__Vfuncout = 0U;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__138__data = 0xffU;
    vlTOPp->__Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__138__Vfuncout = 8U;
    vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt 
        = ((0U == vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old)
            ? vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt0
            : (VL_LTS_III(1,32,32, 0U, vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old)
                ? vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt2
                : vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt3));
}

void VHDMI_Transciever::_eval_initial(VHDMI_Transciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHDMI_Transciever::_eval_initial\n"); );
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk_low = vlTOPp->clk_low;
    vlTOPp->__Vclklast__TOP__clk_high = vlTOPp->clk_high;
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
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
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
    blue_r = VL_RAND_RESET_I(10);
    green_r = VL_RAND_RESET_I(10);
    red_r = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd = VL_RAND_RESET_I(4);
    HDMI_Transciever__DOT__hdmi__DOT__CounterX = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__hdmi__DOT__CounterY = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__hdmi__DOT__hSync = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__vSync = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__DrawArea = VL_RAND_RESET_I(2);
    HDMI_Transciever__DOT__hdmi__DOT__DCM_TMDS_CLKFX = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__TMDS_mod10 = VL_RAND_RESET_I(4);
    HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_red = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_green = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_blue = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_load = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT____Vcellinp__encoder0__H_VSync_Ctr = VL_RAND_RESET_I(2);
    HDMI_Transciever__DOT__hdmi__DOT__reset = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__aux_data = VL_RAND_RESET_I(4);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__data_o = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out1 = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m = VL_RAND_RESET_I(9);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m1 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m2 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m3 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m4 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m5 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m6 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m7 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m8 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p1 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p2 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p3 = VL_RAND_RESET_I(8);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt0 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt1 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt2 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt3 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__aux_data = VL_RAND_RESET_I(4);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__data_o = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out1 = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m = VL_RAND_RESET_I(9);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m1 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m2 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m3 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m4 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m5 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m6 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m7 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m8 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p1 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p2 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p3 = VL_RAND_RESET_I(8);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt0 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt1 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt2 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt3 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__aux_data = VL_RAND_RESET_I(4);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__data_o = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out1 = VL_RAND_RESET_I(10);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m = VL_RAND_RESET_I(9);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m1 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m2 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m3 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m4 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m5 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m6 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m7 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m8 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p1 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p2 = VL_RAND_RESET_I(1);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p3 = VL_RAND_RESET_I(8);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt0 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt1 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt2 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt3 = VL_RAND_RESET_I(32);
    HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt = VL_RAND_RESET_I(32);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__16__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__16__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__17__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__17__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__18__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__18__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__19__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__19__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__20__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__20__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__21__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__21__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__22__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__22__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__23__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__23__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__24__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__24__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__25__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__25__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__26__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__26__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__27__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__27__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__28__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__28__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__29__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__29__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__30__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__30__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__31__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__31__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__32__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__32__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__33__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__33__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__34__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__34__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__35__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__35__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__36__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__36__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__37__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__37__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__38__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__38__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__39__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__39__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__40__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__40__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__41__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__41__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__42__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__42__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__43__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__43__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__44__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__44__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__45__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__45__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__46__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N1__46__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__47__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__N0__47__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__64__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__64__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__65__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__65__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__66__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__66__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__67__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__67__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__68__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__68__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__69__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__69__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__70__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__70__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__71__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__71__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__72__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__72__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__73__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__73__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__74__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__74__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__75__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__75__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__76__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__76__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__77__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__77__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__78__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__78__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__79__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__79__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__80__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__80__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__81__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__81__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__82__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__82__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__83__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__83__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__84__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__84__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__85__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__85__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__86__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__86__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__87__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__87__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__88__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__88__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__89__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__89__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__90__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__90__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__91__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__91__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__92__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__92__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__93__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__93__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__94__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N1__94__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__95__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__N0__95__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__112__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__112__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__113__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__113__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__114__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__114__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__115__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__115__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__116__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__116__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__117__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__117__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__118__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__118__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__119__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__119__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__120__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__120__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__121__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__121__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__122__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__122__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__123__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__123__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__124__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__124__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__125__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__125__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__126__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__126__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__127__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__127__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__128__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__128__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__129__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__129__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__130__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__130__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__131__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__131__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__132__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__132__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__133__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__133__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__134__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__134__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__135__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__135__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__136__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__136__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__137__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__137__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__138__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__138__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__139__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__139__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__140__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__140__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__141__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__141__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__142__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N1__142__data = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__143__Vfuncout = VL_RAND_RESET_I(8);
    __Vfunc_HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__N0__143__data = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
