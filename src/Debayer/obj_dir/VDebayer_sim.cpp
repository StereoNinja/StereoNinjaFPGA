// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDebayer_sim.h for the primary calling header

#include "VDebayer_sim.h"
#include "VDebayer_sim__Syms.h"

//==========

void VDebayer_sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDebayer_sim::eval\n"); );
    VDebayer_sim__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("Debayer_sim.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDebayer_sim::_eval_initial_loop(VDebayer_sim__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("Debayer_sim.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDebayer_sim::_sequent__TOP__1(VDebayer_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_sequent__TOP__1\n"); );
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__Debayer_sim__DOT__DPR__DOT__ram__v0 = 0U;
    if (vlTOPp->Debayer_sim__DOT__DPR__DOT__we_a) {
        vlTOPp->Debayer_sim__DOT__DPR__DOT____Vlvbound1 
            = vlTOPp->Debayer_sim__DOT__DPR__DOT__data_a;
        if ((0x12bffU >= vlTOPp->Debayer_sim__DOT__DPR__DOT__addr_a)) {
            vlTOPp->__Vdlyvval__Debayer_sim__DOT__DPR__DOT__ram__v0 
                = vlTOPp->Debayer_sim__DOT__DPR__DOT____Vlvbound1;
            vlTOPp->__Vdlyvset__Debayer_sim__DOT__DPR__DOT__ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__Debayer_sim__DOT__DPR__DOT__ram__v0 
                = vlTOPp->Debayer_sim__DOT__DPR__DOT__addr_a;
        }
    }
}

VL_INLINE_OPT void VDebayer_sim::_sequent__TOP__2(VDebayer_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_sequent__TOP__2\n"); );
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__Debayer_sim__DOT__counter;
    CData/*1:0*/ __Vdly__Debayer_sim__DOT__debay__DOT__line_sel;
    CData/*7:0*/ __Vdlyvval__Debayer_sim__DOT__debay__DOT__line0__v0;
    CData/*0:0*/ __Vdlyvset__Debayer_sim__DOT__debay__DOT__line0__v0;
    CData/*7:0*/ __Vdlyvval__Debayer_sim__DOT__debay__DOT__line1__v0;
    CData/*0:0*/ __Vdlyvset__Debayer_sim__DOT__debay__DOT__line1__v0;
    CData/*7:0*/ __Vdlyvval__Debayer_sim__DOT__debay__DOT__line2__v0;
    CData/*0:0*/ __Vdlyvset__Debayer_sim__DOT__debay__DOT__line2__v0;
    CData/*7:0*/ __Vdlyvval__Debayer_sim__DOT__debay__DOT__line3__v0;
    CData/*0:0*/ __Vdlyvset__Debayer_sim__DOT__debay__DOT__line3__v0;
    SData/*9:0*/ __Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line0__v0;
    SData/*9:0*/ __Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line1__v0;
    SData/*9:0*/ __Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line2__v0;
    SData/*9:0*/ __Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line3__v0;
    IData/*31:0*/ __Vdly__Debayer_sim__DOT__color_w;
    IData/*31:0*/ __Vdly__Debayer_sim__DOT__debay__DOT__cX;
    IData/*31:0*/ __Vdly__Debayer_sim__DOT__debay__DOT__cY;
    // Body
    __Vdly__Debayer_sim__DOT__color_w = vlTOPp->Debayer_sim__DOT__color_w;
    __Vdly__Debayer_sim__DOT__counter = vlTOPp->Debayer_sim__DOT__counter;
    __Vdly__Debayer_sim__DOT__debay__DOT__cY = vlTOPp->Debayer_sim__DOT__debay__DOT__cY;
    __Vdly__Debayer_sim__DOT__debay__DOT__cX = vlTOPp->Debayer_sim__DOT__debay__DOT__cX;
    __Vdly__Debayer_sim__DOT__debay__DOT__line_sel 
        = vlTOPp->Debayer_sim__DOT__debay__DOT__line_sel;
    __Vdlyvset__Debayer_sim__DOT__debay__DOT__line3__v0 = 0U;
    __Vdlyvset__Debayer_sim__DOT__debay__DOT__line2__v0 = 0U;
    __Vdlyvset__Debayer_sim__DOT__debay__DOT__line1__v0 = 0U;
    __Vdlyvset__Debayer_sim__DOT__debay__DOT__line0__v0 = 0U;
    vlTOPp->Debayer_sim__DOT__debay__DOT__address_out_r 
        = ((IData)(vlTOPp->reset) ? 0U : ((0x500U == vlTOPp->address_in)
                                           ? 0U : (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      + vlTOPp->Debayer_sim__DOT__debay__DOT__address_out_r))));
    if (vlTOPp->reset) {
        __Vdly__Debayer_sim__DOT__debay__DOT__cX = 0U;
        __Vdly__Debayer_sim__DOT__debay__DOT__cY = 0U;
        __Vdly__Debayer_sim__DOT__debay__DOT__line_sel = 0U;
    } else {
        if ((0x4afffU <= vlTOPp->address_in)) {
            __Vdly__Debayer_sim__DOT__debay__DOT__cX = 0U;
            __Vdly__Debayer_sim__DOT__debay__DOT__cY = 0U;
            __Vdly__Debayer_sim__DOT__debay__DOT__line_sel = 0U;
        }
        if ((0x27fU <= vlTOPp->Debayer_sim__DOT__debay__DOT__cX)) {
            __Vdly__Debayer_sim__DOT__debay__DOT__cY 
                = ((IData)(1U) + vlTOPp->Debayer_sim__DOT__debay__DOT__cY);
            __Vdly__Debayer_sim__DOT__debay__DOT__cX = 0U;
        } else {
            __Vdly__Debayer_sim__DOT__debay__DOT__cX 
                = ((IData)(1U) + vlTOPp->Debayer_sim__DOT__debay__DOT__cX);
        }
        if ((0U == (IData)(vlTOPp->Debayer_sim__DOT__debay__DOT__line_sel))) {
            vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound5 
                = vlTOPp->Debayer_sim__DOT__raw_v;
            if ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))) {
                __Vdlyvval__Debayer_sim__DOT__debay__DOT__line0__v0 
                    = vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound5;
                __Vdlyvset__Debayer_sim__DOT__debay__DOT__line0__v0 = 1U;
                __Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line0__v0 
                    = (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX);
            }
            if ((0x27fU <= vlTOPp->Debayer_sim__DOT__debay__DOT__cX)) {
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[8U] 
                    = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                             + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                       [(0x3ffU & ((IData)(1U) + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[7U] 
                    = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                       [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                        : 0U);
                __Vdly__Debayer_sim__DOT__debay__DOT__line_sel = 1U;
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[6U] 
                    = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                             - (IData)(1U))))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                       [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                   - (IData)(1U)))]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[5U] 
                    = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                             + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                       [(0x3ffU & ((IData)(1U) + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[4U] 
                    = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                       [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[3U] 
                    = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                             - (IData)(1U))))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                       [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                   - (IData)(1U)))]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[2U] 
                    = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                             + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                       [(0x3ffU & ((IData)(1U) + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[1U] 
                    = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                       [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[0U] 
                    = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                             - (IData)(1U))))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                       [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                   - (IData)(1U)))]
                        : 0U);
            } else {
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[8U] 
                    = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                             + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                       [(0x3ffU & ((IData)(1U) + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[7U] 
                    = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                       [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[6U] 
                    = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                             - (IData)(1U))))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                       [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                   - (IData)(1U)))]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[5U] 
                    = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                             + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                       [(0x3ffU & ((IData)(1U) + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[4U] 
                    = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                       [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[3U] 
                    = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                             - (IData)(1U))))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                       [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                   - (IData)(1U)))]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[2U] 
                    = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                             + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                       [(0x3ffU & ((IData)(1U) + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[1U] 
                    = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                       [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                        : 0U);
                vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[0U] 
                    = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                             - (IData)(1U))))
                        ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                       [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                   - (IData)(1U)))]
                        : 0U);
            }
        } else {
            if ((1U == (IData)(vlTOPp->Debayer_sim__DOT__debay__DOT__line_sel))) {
                vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound6 
                    = vlTOPp->Debayer_sim__DOT__raw_v;
                if ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))) {
                    __Vdlyvval__Debayer_sim__DOT__debay__DOT__line1__v0 
                        = vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound6;
                    __Vdlyvset__Debayer_sim__DOT__debay__DOT__line1__v0 = 1U;
                    __Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line1__v0 
                        = (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX);
                }
                if ((0x27fU <= vlTOPp->Debayer_sim__DOT__debay__DOT__cX)) {
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[8U] 
                        = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                                 + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                           [(0x3ffU & ((IData)(1U) 
                                       + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[7U] 
                        = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                           [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                            : 0U);
                    __Vdly__Debayer_sim__DOT__debay__DOT__line_sel = 2U;
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[6U] 
                        = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                 - (IData)(1U))))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                           [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                       - (IData)(1U)))]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[5U] 
                        = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                                 + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                           [(0x3ffU & ((IData)(1U) 
                                       + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[4U] 
                        = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                           [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[3U] 
                        = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                 - (IData)(1U))))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                           [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                       - (IData)(1U)))]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[2U] 
                        = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                                 + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                           [(0x3ffU & ((IData)(1U) 
                                       + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[1U] 
                        = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                           [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[0U] 
                        = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                 - (IData)(1U))))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                           [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                       - (IData)(1U)))]
                            : 0U);
                } else {
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[8U] 
                        = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                                 + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                           [(0x3ffU & ((IData)(1U) 
                                       + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[7U] 
                        = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                           [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[6U] 
                        = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                 - (IData)(1U))))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                           [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                       - (IData)(1U)))]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[5U] 
                        = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                                 + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                           [(0x3ffU & ((IData)(1U) 
                                       + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[4U] 
                        = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                           [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[3U] 
                        = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                 - (IData)(1U))))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                           [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                       - (IData)(1U)))]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[2U] 
                        = ((0x27fU >= (0x3ffU & ((IData)(1U) 
                                                 + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                           [(0x3ffU & ((IData)(1U) 
                                       + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[1U] 
                        = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                           [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                            : 0U);
                    vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[0U] 
                        = ((0x27fU >= (0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                 - (IData)(1U))))
                            ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                           [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                       - (IData)(1U)))]
                            : 0U);
                }
            } else {
                if ((2U == (IData)(vlTOPp->Debayer_sim__DOT__debay__DOT__line_sel))) {
                    vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound7 
                        = vlTOPp->Debayer_sim__DOT__raw_v;
                    if ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))) {
                        __Vdlyvval__Debayer_sim__DOT__debay__DOT__line2__v0 
                            = vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound7;
                        __Vdlyvset__Debayer_sim__DOT__debay__DOT__line2__v0 = 1U;
                        __Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line2__v0 
                            = (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX);
                    }
                    if ((0x27fU <= vlTOPp->Debayer_sim__DOT__debay__DOT__cX)) {
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[8U] 
                            = ((0x27fU >= (0x3ffU & 
                                           ((IData)(1U) 
                                            + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                               [(0x3ffU & ((IData)(1U) 
                                           + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[7U] 
                            = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                               [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                : 0U);
                        __Vdly__Debayer_sim__DOT__debay__DOT__line_sel = 3U;
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[6U] 
                            = ((0x27fU >= (0x3ffU & 
                                           (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                            - (IData)(1U))))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                               [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                           - (IData)(1U)))]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[5U] 
                            = ((0x27fU >= (0x3ffU & 
                                           ((IData)(1U) 
                                            + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                               [(0x3ffU & ((IData)(1U) 
                                           + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[4U] 
                            = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                               [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[3U] 
                            = ((0x27fU >= (0x3ffU & 
                                           (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                            - (IData)(1U))))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                               [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                           - (IData)(1U)))]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[2U] 
                            = ((0x27fU >= (0x3ffU & 
                                           ((IData)(1U) 
                                            + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                               [(0x3ffU & ((IData)(1U) 
                                           + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[1U] 
                            = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                               [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[0U] 
                            = ((0x27fU >= (0x3ffU & 
                                           (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                            - (IData)(1U))))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                               [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                           - (IData)(1U)))]
                                : 0U);
                    } else {
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[8U] 
                            = ((0x27fU >= (0x3ffU & 
                                           ((IData)(1U) 
                                            + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                               [(0x3ffU & ((IData)(1U) 
                                           + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[7U] 
                            = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                               [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[6U] 
                            = ((0x27fU >= (0x3ffU & 
                                           (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                            - (IData)(1U))))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                               [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                           - (IData)(1U)))]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[5U] 
                            = ((0x27fU >= (0x3ffU & 
                                           ((IData)(1U) 
                                            + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                               [(0x3ffU & ((IData)(1U) 
                                           + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[4U] 
                            = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                               [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[3U] 
                            = ((0x27fU >= (0x3ffU & 
                                           (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                            - (IData)(1U))))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                               [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                           - (IData)(1U)))]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[2U] 
                            = ((0x27fU >= (0x3ffU & 
                                           ((IData)(1U) 
                                            + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                               [(0x3ffU & ((IData)(1U) 
                                           + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[1U] 
                            = ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                               [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                : 0U);
                        vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[0U] 
                            = ((0x27fU >= (0x3ffU & 
                                           (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                            - (IData)(1U))))
                                ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                               [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                           - (IData)(1U)))]
                                : 0U);
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Debayer_sim__DOT__debay__DOT__line_sel))) {
                        vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound8 
                            = vlTOPp->Debayer_sim__DOT__raw_v;
                        if ((0x27fU >= (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))) {
                            __Vdlyvval__Debayer_sim__DOT__debay__DOT__line3__v0 
                                = vlTOPp->Debayer_sim__DOT__debay__DOT____Vlvbound8;
                            __Vdlyvset__Debayer_sim__DOT__debay__DOT__line3__v0 = 1U;
                            __Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line3__v0 
                                = (0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX);
                        }
                        if ((0x27fU <= vlTOPp->Debayer_sim__DOT__debay__DOT__cX)) {
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[8U] 
                                = ((0x27fU >= (0x3ffU 
                                               & ((IData)(1U) 
                                                  + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                                   [(0x3ffU & ((IData)(1U) 
                                               + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[7U] 
                                = ((0x27fU >= (0x3ffU 
                                               & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                                   [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                    : 0U);
                            __Vdly__Debayer_sim__DOT__debay__DOT__line_sel = 0U;
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[6U] 
                                = ((0x27fU >= (0x3ffU 
                                               & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                  - (IData)(1U))))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                                   [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                               - (IData)(1U)))]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[5U] 
                                = ((0x27fU >= (0x3ffU 
                                               & ((IData)(1U) 
                                                  + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                                   [(0x3ffU & ((IData)(1U) 
                                               + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[4U] 
                                = ((0x27fU >= (0x3ffU 
                                               & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                                   [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[3U] 
                                = ((0x27fU >= (0x3ffU 
                                               & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                  - (IData)(1U))))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line3
                                   [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                               - (IData)(1U)))]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[2U] 
                                = ((0x27fU >= (0x3ffU 
                                               & ((IData)(1U) 
                                                  + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                                   [(0x3ffU & ((IData)(1U) 
                                               + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[1U] 
                                = ((0x27fU >= (0x3ffU 
                                               & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                                   [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[0U] 
                                = ((0x27fU >= (0x3ffU 
                                               & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                  - (IData)(1U))))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                                   [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                               - (IData)(1U)))]
                                    : 0U);
                        } else {
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[8U] 
                                = ((0x27fU >= (0x3ffU 
                                               & ((IData)(1U) 
                                                  + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                                   [(0x3ffU & ((IData)(1U) 
                                               + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[7U] 
                                = ((0x27fU >= (0x3ffU 
                                               & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                                   [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[6U] 
                                = ((0x27fU >= (0x3ffU 
                                               & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                  - (IData)(1U))))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line2
                                   [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                               - (IData)(1U)))]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[5U] 
                                = ((0x27fU >= (0x3ffU 
                                               & ((IData)(1U) 
                                                  + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                                   [(0x3ffU & ((IData)(1U) 
                                               + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[4U] 
                                = ((0x27fU >= (0x3ffU 
                                               & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                                   [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[3U] 
                                = ((0x27fU >= (0x3ffU 
                                               & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                  - (IData)(1U))))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line1
                                   [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                               - (IData)(1U)))]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[2U] 
                                = ((0x27fU >= (0x3ffU 
                                               & ((IData)(1U) 
                                                  + vlTOPp->Debayer_sim__DOT__debay__DOT__cX)))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                                   [(0x3ffU & ((IData)(1U) 
                                               + vlTOPp->Debayer_sim__DOT__debay__DOT__cX))]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[1U] 
                                = ((0x27fU >= (0x3ffU 
                                               & vlTOPp->Debayer_sim__DOT__debay__DOT__cX))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                                   [(0x3ffU & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)]
                                    : 0U);
                            vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix[0U] 
                                = ((0x27fU >= (0x3ffU 
                                               & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                                  - (IData)(1U))))
                                    ? vlTOPp->Debayer_sim__DOT__debay__DOT__line0
                                   [(0x3ffU & (vlTOPp->Debayer_sim__DOT__debay__DOT__cX 
                                               - (IData)(1U)))]
                                    : 0U);
                        }
                    }
                }
            }
        }
        vlTOPp->Debayer_sim__DOT__debay__DOT__red_r = 0U;
        vlTOPp->Debayer_sim__DOT__debay__DOT__green_r = 0U;
        vlTOPp->Debayer_sim__DOT__debay__DOT__blue_r = 0U;
        if ((1U & vlTOPp->Debayer_sim__DOT__debay__DOT__cX)) {
            if ((1U & vlTOPp->Debayer_sim__DOT__debay__DOT__cY)) {
                vlTOPp->Debayer_sim__DOT__debay__DOT__red_r 
                    = (0xffU & ((vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [3U] + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [5U]) >> 1U));
                vlTOPp->Debayer_sim__DOT__debay__DOT__green_r 
                    = vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                    [4U];
                vlTOPp->Debayer_sim__DOT__debay__DOT__blue_r 
                    = (0xffU & ((vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [1U] + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [7U]) >> 1U));
            } else {
                vlTOPp->Debayer_sim__DOT__debay__DOT__red_r 
                    = (0xffU & ((((vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                   [0U] + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                   [2U]) + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                  [6U]) + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [8U]) >> 2U));
                vlTOPp->Debayer_sim__DOT__debay__DOT__green_r 
                    = (0xffU & ((vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [1U] + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [7U]) >> 1U));
                vlTOPp->Debayer_sim__DOT__debay__DOT__blue_r 
                    = vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                    [4U];
            }
        } else {
            if ((1U & vlTOPp->Debayer_sim__DOT__debay__DOT__cY)) {
                vlTOPp->Debayer_sim__DOT__debay__DOT__red_r 
                    = vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                    [4U];
                vlTOPp->Debayer_sim__DOT__debay__DOT__green_r 
                    = vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                    [4U];
                vlTOPp->Debayer_sim__DOT__debay__DOT__blue_r 
                    = (0xffU & ((((vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                   [1U] + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                   [3U]) + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                  [5U]) + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [7U]) >> 2U));
            } else {
                vlTOPp->Debayer_sim__DOT__debay__DOT__red_r 
                    = (0xffU & ((vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [1U] + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [7U]) >> 1U));
                vlTOPp->Debayer_sim__DOT__debay__DOT__green_r 
                    = vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                    [4U];
                vlTOPp->Debayer_sim__DOT__debay__DOT__blue_r 
                    = (0xffU & ((vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [3U] + vlTOPp->Debayer_sim__DOT__debay__DOT__raw_pix
                                 [5U]) >> 1U));
            }
        }
    }
    vlTOPp->Debayer_sim__DOT__debay__DOT__cX = __Vdly__Debayer_sim__DOT__debay__DOT__cX;
    vlTOPp->Debayer_sim__DOT__debay__DOT__cY = __Vdly__Debayer_sim__DOT__debay__DOT__cY;
    vlTOPp->Debayer_sim__DOT__debay__DOT__line_sel 
        = __Vdly__Debayer_sim__DOT__debay__DOT__line_sel;
    if (__Vdlyvset__Debayer_sim__DOT__debay__DOT__line0__v0) {
        vlTOPp->Debayer_sim__DOT__debay__DOT__line0[__Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line0__v0] 
            = __Vdlyvval__Debayer_sim__DOT__debay__DOT__line0__v0;
    }
    if (__Vdlyvset__Debayer_sim__DOT__debay__DOT__line3__v0) {
        vlTOPp->Debayer_sim__DOT__debay__DOT__line3[__Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line3__v0] 
            = __Vdlyvval__Debayer_sim__DOT__debay__DOT__line3__v0;
    }
    if (__Vdlyvset__Debayer_sim__DOT__debay__DOT__line2__v0) {
        vlTOPp->Debayer_sim__DOT__debay__DOT__line2[__Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line2__v0] 
            = __Vdlyvval__Debayer_sim__DOT__debay__DOT__line2__v0;
    }
    if (__Vdlyvset__Debayer_sim__DOT__debay__DOT__line1__v0) {
        vlTOPp->Debayer_sim__DOT__debay__DOT__line1[__Vdlyvdim0__Debayer_sim__DOT__debay__DOT__line1__v0] 
            = __Vdlyvval__Debayer_sim__DOT__debay__DOT__line1__v0;
    }
    vlTOPp->red = vlTOPp->Debayer_sim__DOT__debay__DOT__red_r;
    vlTOPp->blue = vlTOPp->Debayer_sim__DOT__debay__DOT__blue_r;
    if ((3U <= (IData)(vlTOPp->Debayer_sim__DOT__counter))) {
        __Vdly__Debayer_sim__DOT__counter = 0U;
        __Vdly__Debayer_sim__DOT__color_w = vlTOPp->Debayer_sim__DOT__ramdata;
    } else {
        __Vdly__Debayer_sim__DOT__counter = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlTOPp->Debayer_sim__DOT__counter)));
        __Vdly__Debayer_sim__DOT__color_w = (0xffffffU 
                                             & (vlTOPp->Debayer_sim__DOT__color_w 
                                                >> 8U));
    }
    vlTOPp->Debayer_sim__DOT__raw_v = (0xffU & vlTOPp->Debayer_sim__DOT__color_w);
    vlTOPp->Debayer_sim__DOT__color_w = __Vdly__Debayer_sim__DOT__color_w;
    vlTOPp->Debayer_sim__DOT__counter = __Vdly__Debayer_sim__DOT__counter;
    vlTOPp->Debayer_sim__DOT__ramdata = ((0x12bffU 
                                          >= (0x1ffffU 
                                              & (vlTOPp->address_in 
                                                 >> 2U)))
                                          ? vlTOPp->Debayer_sim__DOT__DPR__DOT__ram
                                         [(0x1ffffU 
                                           & (vlTOPp->address_in 
                                              >> 2U))]
                                          : 0U);
}

VL_INLINE_OPT void VDebayer_sim::_sequent__TOP__5(VDebayer_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_sequent__TOP__5\n"); );
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__Debayer_sim__DOT__DPR__DOT__ram__v0) {
        vlTOPp->Debayer_sim__DOT__DPR__DOT__ram[vlTOPp->__Vdlyvdim0__Debayer_sim__DOT__DPR__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__Debayer_sim__DOT__DPR__DOT__ram__v0;
    }
}

void VDebayer_sim::_eval(VDebayer_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_eval\n"); );
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->Debayer_sim__DOT__DPR__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Debayer_sim__DOT__DPR__DOT__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->Debayer_sim__DOT__DPR__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Debayer_sim__DOT__DPR__DOT__clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__Debayer_sim__DOT__DPR__DOT__clk 
        = vlTOPp->Debayer_sim__DOT__DPR__DOT__clk;
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VDebayer_sim::_change_request(VDebayer_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_change_request\n"); );
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDebayer_sim::_change_request_1(VDebayer_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_change_request_1\n"); );
    VDebayer_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDebayer_sim::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebayer_sim::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((address_in & 0xfff80000U))) {
        Verilated::overWidthError("address_in");}
}
#endif  // VL_DEBUG
