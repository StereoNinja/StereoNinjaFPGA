// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPI_Reciever.h for the primary calling header

#include "VMIPI_Reciever.h"
#include "VMIPI_Reciever__Syms.h"

//==========

VL_CTOR_IMP(VMIPI_Reciever) {
    VMIPI_Reciever__Syms* __restrict vlSymsp = __VlSymsp = new VMIPI_Reciever__Syms(this, name());
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMIPI_Reciever::__Vconfigure(VMIPI_Reciever__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VMIPI_Reciever::~VMIPI_Reciever() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VMIPI_Reciever::_settle__TOP__3(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_settle__TOP__3\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2 = (1U 
                                                   & (IData)(vlTOPp->MIPI_Reciever__DOT__div2__DOT__counter));
    vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_4 = (1U 
                                                   & (IData)(vlTOPp->MIPI_Reciever__DOT__div4__DOT__counter));
    vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ddr = (
                                                   ((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__D1) 
                                                    << 3U) 
                                                   | (((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__C) 
                                                       << 2U) 
                                                      | (((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__B) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__A))));
    vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ddr = (
                                                   ((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__D1) 
                                                    << 3U) 
                                                   | (((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__C) 
                                                       << 2U) 
                                                      | (((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__B) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__A))));
    vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8 = (1U 
                                                   & (IData)(vlTOPp->MIPI_Reciever__DOT__div8__DOT__counter));
    vlTOPp->data_o = vlTOPp->MIPI_Reciever__DOT__Prot__DOT__data_o_r;
    vlTOPp->adress_out = vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr;
    vlTOPp->cX = vlTOPp->MIPI_Reciever__DOT__Prot__DOT__cX_r;
    vlTOPp->cY = vlTOPp->MIPI_Reciever__DOT__Prot__DOT__cY_r;
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc = (0xbfU 
                                                & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc = (0x7fU 
                                                & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc = ((0xfeU 
                                                 & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc)) 
                                                | (1U 
                                                   & (((((((((((((vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                  ^ 
                                                                  (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                   >> 1U)) 
                                                                 ^ 
                                                                 (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                  >> 2U)) 
                                                                ^ 
                                                                (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                 >> 4U)) 
                                                               ^ 
                                                               (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                >> 5U)) 
                                                              ^ 
                                                              (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                               >> 7U)) 
                                                             ^ 
                                                             (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                              >> 0xaU)) 
                                                            ^ 
                                                            (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                             >> 0xbU)) 
                                                           ^ 
                                                           (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                            >> 0xdU)) 
                                                          ^ 
                                                          (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                           >> 0x10U)) 
                                                         ^ 
                                                         (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                          >> 0x14U)) 
                                                        ^ 
                                                        (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                         >> 0x15U)) 
                                                       ^ 
                                                       (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                        >> 0x16U)) 
                                                      ^ 
                                                      (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                       >> 0x17U))));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc = ((0xfdU 
                                                 & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc)) 
                                                | (2U 
                                                   & ((((((((((((((vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                   << 1U) 
                                                                  ^ 
                                                                  (0xfffffffeU 
                                                                   & vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r)) 
                                                                 ^ 
                                                                 (0x3ffffffeU 
                                                                  & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                     >> 2U))) 
                                                                ^ 
                                                                (0x1ffffffeU 
                                                                 & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                    >> 3U))) 
                                                               ^ 
                                                               (0x7fffffeU 
                                                                & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                   >> 5U))) 
                                                              ^ 
                                                              (0x1fffffeU 
                                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                  >> 7U))) 
                                                             ^ 
                                                             (0x7ffffeU 
                                                              & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                 >> 9U))) 
                                                            ^ 
                                                            (0x1ffffeU 
                                                             & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                >> 0xbU))) 
                                                           ^ 
                                                           (0x7fffeU 
                                                            & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                               >> 0xdU))) 
                                                          ^ 
                                                          (0xfffeU 
                                                           & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                              >> 0x10U))) 
                                                         ^ 
                                                         (0x1ffeU 
                                                          & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                             >> 0x13U))) 
                                                        ^ 
                                                        (0xffeU 
                                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                            >> 0x14U))) 
                                                       ^ 
                                                       (0x7feU 
                                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                           >> 0x15U))) 
                                                      ^ 
                                                      (0x3feU 
                                                       & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                          >> 0x16U)))));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc = ((0xfbU 
                                                 & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc)) 
                                                | (4U 
                                                   & (((((((((((((vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                  << 2U) 
                                                                 ^ 
                                                                 (0xfffffffcU 
                                                                  & vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r)) 
                                                                ^ 
                                                                (0x7ffffffcU 
                                                                 & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                    >> 1U))) 
                                                               ^ 
                                                               (0x1ffffffcU 
                                                                & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                   >> 3U))) 
                                                              ^ 
                                                              (0xffffffcU 
                                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                  >> 4U))) 
                                                             ^ 
                                                             (0x1fffffcU 
                                                              & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                 >> 7U))) 
                                                            ^ 
                                                            (0x7ffffcU 
                                                             & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                >> 9U))) 
                                                           ^ 
                                                           (0x3ffffcU 
                                                            & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                               >> 0xaU))) 
                                                          ^ 
                                                          (0x7fffcU 
                                                           & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                              >> 0xdU))) 
                                                         ^ 
                                                         (0xfffcU 
                                                          & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                             >> 0x10U))) 
                                                        ^ 
                                                        (0x3ffcU 
                                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                            >> 0x12U))) 
                                                       ^ 
                                                       (0x1ffcU 
                                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                           >> 0x13U))) 
                                                      ^ 
                                                      (0xffcU 
                                                       & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                          >> 0x14U)))));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc = ((0xf7U 
                                                 & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc)) 
                                                | (8U 
                                                   & (((((((((((((0xfffffff8U 
                                                                  & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                     << 2U)) 
                                                                 ^ 
                                                                 (0xfffffff8U 
                                                                  & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                     << 1U))) 
                                                                ^ 
                                                                (0xfffffff8U 
                                                                 & vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r)) 
                                                               ^ 
                                                               (0xffffff8U 
                                                                & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                   >> 4U))) 
                                                              ^ 
                                                              (0x7fffff8U 
                                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                  >> 5U))) 
                                                             ^ 
                                                             (0x3fffff8U 
                                                              & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                 >> 6U))) 
                                                            ^ 
                                                            (0x3ffff8U 
                                                             & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                >> 0xaU))) 
                                                           ^ 
                                                           (0x1ffff8U 
                                                            & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                               >> 0xbU))) 
                                                          ^ 
                                                          (0xffff8U 
                                                           & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                              >> 0xcU))) 
                                                         ^ 
                                                         (0xfff8U 
                                                          & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                             >> 0x10U))) 
                                                        ^ 
                                                        (0x7ff8U 
                                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                            >> 0x11U))) 
                                                       ^ 
                                                       (0x3ff8U 
                                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                           >> 0x12U))) 
                                                      ^ 
                                                      (0xff8U 
                                                       & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                          >> 0x14U)))));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc = ((0xefU 
                                                 & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc)) 
                                                | (0x10U 
                                                   & (((((((((((((0xfffffff0U 
                                                                  & vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r) 
                                                                 ^ 
                                                                 (0x7ffffff0U 
                                                                  & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                     >> 1U))) 
                                                                ^ 
                                                                (0x3ffffff0U 
                                                                 & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                    >> 2U))) 
                                                               ^ 
                                                               (0x1ffffff0U 
                                                                & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                   >> 3U))) 
                                                              ^ 
                                                              (0xffffff0U 
                                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                  >> 4U))) 
                                                             ^ 
                                                             (0x7fffff0U 
                                                              & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                 >> 5U))) 
                                                            ^ 
                                                            (0xffff0U 
                                                             & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                >> 0xcU))) 
                                                           ^ 
                                                           (0x7fff0U 
                                                            & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                               >> 0xdU))) 
                                                          ^ 
                                                          (0x3fff0U 
                                                           & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                              >> 0xeU))) 
                                                         ^ 
                                                         (0x1fff0U 
                                                          & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                             >> 0xfU))) 
                                                        ^ 
                                                        (0xfff0U 
                                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                            >> 0x10U))) 
                                                       ^ 
                                                       (0x3ff0U 
                                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                           >> 0x12U))) 
                                                      ^ 
                                                      (0x1ff0U 
                                                       & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                          >> 0x13U)))));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc = ((0xdfU 
                                                 & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc)) 
                                                | (0x20U 
                                                   & (((((((((((((0x7ffffe0U 
                                                                  & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                     >> 5U)) 
                                                                 ^ 
                                                                 (0x3ffffe0U 
                                                                  & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                     >> 6U))) 
                                                                ^ 
                                                                (0x1ffffe0U 
                                                                 & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                    >> 7U))) 
                                                               ^ 
                                                               (0xffffe0U 
                                                                & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                   >> 8U))) 
                                                              ^ 
                                                              (0x7fffe0U 
                                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                  >> 9U))) 
                                                             ^ 
                                                             (0x3fffe0U 
                                                              & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                 >> 0xaU))) 
                                                            ^ 
                                                            (0x1fffe0U 
                                                             & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                                >> 0xbU))) 
                                                           ^ 
                                                           (0xfffe0U 
                                                            & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                               >> 0xcU))) 
                                                          ^ 
                                                          (0x7ffe0U 
                                                           & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                              >> 0xdU))) 
                                                         ^ 
                                                         (0x3ffe0U 
                                                          & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                             >> 0xeU))) 
                                                        ^ 
                                                        (0xffe0U 
                                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                            >> 0x10U))) 
                                                       ^ 
                                                       (0x7fe0U 
                                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                           >> 0x11U))) 
                                                      ^ 
                                                      (0x3fe0U 
                                                       & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                          >> 0x12U)))));
    vlTOPp->termination = vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__term_r;
    vlTOPp->debug0 = vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__debug0_r;
    vlTOPp->MIPI_Reciever__DOT__sync = ((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__sync_r) 
                                        & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r)));
    vlTOPp->MIPI_Reciever__DOT__valid = ((IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r) 
                                         & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r)));
    vlTOPp->MIPI_Reciever__DOT__rec_data = ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r) 
                                            & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r)));
    vlTOPp->ram_clk = vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8;
    vlTOPp->rec_data_o = vlTOPp->MIPI_Reciever__DOT__rec_data;
    vlTOPp->debug1 = vlTOPp->MIPI_Reciever__DOT__rec_data;
}

void VMIPI_Reciever::_initial__TOP__4(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_initial__TOP__4\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte = 0U;
    vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte = 0U;
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c = 0xffffU;
    vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = 0U;
    vlTOPp->lane0_p = 0U;
    vlTOPp->lane0_n = 0U;
    vlTOPp->lane1_p = 0U;
    vlTOPp->lane1_n = 0U;
}

void VMIPI_Reciever::_settle__TOP__7(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_settle__TOP__7\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xfffeU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (1U & ((((((((((((((((((vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                   >> 0x15U) ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 0xaU)) 
                                 ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                    >> 0xaU)) ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 >> 0x1cU)) 
                               ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                  >> 6U)) ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                             >> 6U)) 
                             ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                >> 0x18U)) ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 0xdU)) 
                           ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                              >> 0xdU)) ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           >> 0x14U)) 
                         ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                            >> 5U)) ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                       >> 5U)) ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0xcU)) 
                      ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                         >> 0xcU)) ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      >> 4U)) ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 >> 4U)) 
                   ^ vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r) 
                  ^ (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xfffdU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (2U & ((((((((((((((((((((0x7feU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                               >> 0x15U)) 
                                    ^ (0x3ffffeU & 
                                       (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                        >> 0xaU))) 
                                   ^ (0x3ffffeU & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                   >> 0xaU))) 
                                  ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                     << 1U)) ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                << 1U)) 
                                ^ (0xeU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           >> 0x1cU))) 
                               ^ (0x3fffffeU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 6U))) 
                              ^ (0x3fffffeU & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                               >> 6U))) 
                             ^ (0xfeU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                         >> 0x18U))) 
                            ^ (0x7fffeU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           >> 0xdU))) 
                           ^ (0x7fffeU & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          >> 0xdU))) 
                          ^ (0xffeU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                       >> 0x14U))) 
                         ^ (0x7fffffeU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          >> 5U))) 
                        ^ (0x7fffffeU & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         >> 5U))) ^ 
                       (0xffffeU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                    >> 0xcU))) ^ (0xffffeU 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     >> 0xcU))) 
                     ^ (0xffffffeU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      >> 4U))) ^ (0xffffffeU 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     >> 4U))) 
                   ^ (0xfffffffeU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r)) 
                  ^ (0xfffffffeU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xfffbU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (4U & ((((((((((((((((((((0x7fcU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                               >> 0x15U)) 
                                    ^ (0x3ffffcU & 
                                       (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                        >> 0xaU))) 
                                   ^ (0x3ffffcU & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                   >> 0xaU))) 
                                  ^ (0xfffffffcU & 
                                     (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      << 1U))) ^ (0xfffffffcU 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     << 1U))) 
                                ^ (0xcU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           >> 0x1cU))) 
                               ^ (0x3fffffcU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 6U))) 
                              ^ (0x3fffffcU & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                               >> 6U))) 
                             ^ (0xfcU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                         >> 0x18U))) 
                            ^ (0x7fffcU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           >> 0xdU))) 
                           ^ (0x7fffcU & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          >> 0xdU))) 
                          ^ (0xffcU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                       >> 0x14U))) 
                         ^ (0x7fffffcU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          >> 5U))) 
                        ^ (0x7fffffcU & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         >> 5U))) ^ 
                       (0xffffcU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                    >> 0xcU))) ^ (0xffffcU 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     >> 0xcU))) 
                     ^ (0xffffffcU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      >> 4U))) ^ (0xffffffcU 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     >> 4U))) 
                   ^ (0xfffffffcU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r)) 
                  ^ (0xfffffffcU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xfff7U & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (8U & (((((((((((((((((((((0x7f8U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 0x15U)) 
                                     ^ (0x3ffff8U & 
                                        (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                         >> 0xaU))) 
                                    ^ (0x3ffff8U & 
                                       ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                        >> 0xaU))) 
                                   ^ (0xfffffff8U & 
                                      (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                       << 1U))) ^ (0xfffffff8U 
                                                   & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                      << 1U))) 
                                 ^ (8U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          >> 0x1cU))) 
                                ^ (0x3fffff8U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 >> 6U))) 
                               ^ (0x3fffff8U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                >> 6U))) 
                              ^ (0xf8U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          >> 0x18U))) 
                             ^ (0x7fff8U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 0xdU))) 
                            ^ (0xff8U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                         >> 0x14U))) 
                           ^ (0x7fffff8U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 5U))) 
                          ^ (0x7fffff8U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           >> 5U))) 
                         ^ (0xffff8U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                        >> 0xcU))) 
                        ^ (0xffff8U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                       >> 0xcU))) ^ 
                       (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                        << 3U)) ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                   << 3U)) ^ (0xffffff8U 
                                              & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 >> 4U))) 
                    ^ (0xffffff8U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                     >> 4U))) ^ (0xfffffff8U 
                                                 & vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r)) 
                  ^ (0xfffffff8U & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xffefU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x10U & (((((((((((((((((((((((((0xfff0U 
                                             & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 0x10U)) 
                                            ^ (0xffff0U 
                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0xcU))) 
                                           ^ (0xfffff0U 
                                              & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 >> 8U))) 
                                          ^ (0xfffff0U 
                                             & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                >> 8U))) 
                                         ^ (0xffffff0U 
                                            & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                               >> 4U))) 
                                        ^ (0xffffff0U 
                                           & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                              >> 4U))) 
                                       ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          << 4U)) ^ 
                                      ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                       << 4U)) ^ (0x7f0U 
                                                  & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                     >> 0x15U))) 
                                    ^ (0x3ffff0U & 
                                       (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                        >> 0xaU))) 
                                   ^ (0x3ffff0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                   >> 0xaU))) 
                                  ^ (0xfffffff0U & 
                                     (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      << 1U))) ^ (0xfffffff0U 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     << 1U))) 
                                ^ (0x7ff0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 0x11U))) 
                               ^ (0x7fff0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 0xdU))) 
                              ^ (0x3ffffff0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 2U))) 
                             ^ (0x3ffffff0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                               >> 2U))) 
                            ^ (0x7ffff0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 9U))) 
                           ^ (0x7ffff0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           >> 9U))) 
                          ^ (0x7fffff0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           >> 5U))) 
                         ^ (0x7fffff0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          >> 5U))) 
                        ^ (0x7ffffff0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          >> 1U))) 
                       ^ (0x7ffffff0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         >> 1U))) ^ 
                      (0xfffffff0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      << 3U))) ^ (0xfffffff0U 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     << 3U)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xffdfU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x20U & (((((((((((((((((((((((((((0xffe0U 
                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0x10U)) 
                                              ^ (0xfffe0U 
                                                 & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                    >> 0xcU))) 
                                             ^ (0xffffe0U 
                                                & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                   >> 8U))) 
                                            ^ (0xffffe0U 
                                               & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                  >> 8U))) 
                                           ^ (0xfffffe0U 
                                              & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 >> 4U))) 
                                          ^ (0xfffffe0U 
                                             & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                >> 4U))) 
                                         ^ (0xffffffe0U 
                                            & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                               << 4U))) 
                                        ^ (0xffffffe0U 
                                           & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                              << 4U))) 
                                       ^ (0x7e0U & 
                                          (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           >> 0x15U))) 
                                      ^ (0x3fffe0U 
                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 0xaU))) 
                                     ^ (0x3fffe0U & 
                                        ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         >> 0xaU))) 
                                    ^ (0xffffffe0U 
                                       & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          << 1U))) 
                                   ^ (0xffffffe0U & 
                                      ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                       << 1U))) ^ (0x7fe0U 
                                                   & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                      >> 0x11U))) 
                                 ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                    << 5U)) ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                               << 5U)) 
                               ^ (0x7ffe0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 0xdU))) 
                              ^ (0x3fffffe0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 2U))) 
                             ^ (0x3fffffe0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                               >> 2U))) 
                            ^ (0x7fffe0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 9U))) 
                           ^ (0x7fffe0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           >> 9U))) 
                          ^ (0x7ffffe0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           >> 5U))) 
                         ^ (0x7ffffe0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          >> 5U))) 
                        ^ (0x7fffffe0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          >> 1U))) 
                       ^ (0x7fffffe0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         >> 1U))) ^ 
                      (0xffffffe0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      << 3U))) ^ (0xffffffe0U 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     << 3U)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xffbfU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x40U & ((((((((((((((((((((((((((0xffc0U 
                                              & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 >> 0x10U)) 
                                             ^ (0xfffc0U 
                                                & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                   >> 0xcU))) 
                                            ^ (0xffffc0U 
                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 8U))) 
                                           ^ (0xffffc0U 
                                              & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 >> 8U))) 
                                          ^ (0xfffffc0U 
                                             & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 4U))) 
                                         ^ (0xfffffc0U 
                                            & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                               >> 4U))) 
                                        ^ (0xffffffc0U 
                                           & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              << 4U))) 
                                       ^ (0xffffffc0U 
                                          & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                             << 4U))) 
                                      ^ (0x7c0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                   >> 0x15U))) 
                                     ^ (0x3fffc0U & 
                                        (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                         >> 0xaU))) 
                                    ^ (0xffffffc0U 
                                       & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          << 1U))) 
                                   ^ (0xffffffc0U & 
                                      ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                       << 1U))) ^ (0x7fc0U 
                                                   & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                      >> 0x11U))) 
                                 ^ (0xffffffc0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                   << 5U))) 
                                ^ (0xffffffc0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                  << 5U))) 
                               ^ (0x7ffc0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 0xdU))) 
                              ^ (0x3fffffc0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 2U))) 
                             ^ (0x3fffffc0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                               >> 2U))) 
                            ^ (0x7fffc0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 9U))) 
                           ^ (0x7fffc0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           >> 9U))) 
                          ^ (0x7ffffc0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           >> 5U))) 
                         ^ (0x7ffffc0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          >> 5U))) 
                        ^ (0x7fffffc0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          >> 1U))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         >> 1U))) ^ 
                      (0xffffffc0U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      << 3U))) ^ (0xffffffc0U 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     << 3U)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xff7fU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x80U & (((((((((((((((((((((((((((0xff80U 
                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0x10U)) 
                                              ^ (0xfff80U 
                                                 & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                    >> 0xcU))) 
                                             ^ (0xffff80U 
                                                & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                   >> 8U))) 
                                            ^ (0xffff80U 
                                               & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                  >> 8U))) 
                                           ^ (0xfffff80U 
                                              & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 >> 4U))) 
                                          ^ (0xfffff80U 
                                             & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                >> 4U))) 
                                         ^ (0xffffff80U 
                                            & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                               << 4U))) 
                                        ^ (0xffffff80U 
                                           & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                              << 4U))) 
                                       ^ (0x780U & 
                                          (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           >> 0x15U))) 
                                      ^ (0x3fff80U 
                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 0xaU))) 
                                     ^ (0xffffff80U 
                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           << 1U))) 
                                    ^ (0xffffff80U 
                                       & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          << 1U))) 
                                   ^ (0x7f80U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 >> 0x11U))) 
                                  ^ (0xffffff80U & 
                                     (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      << 5U))) ^ (0xffffff80U 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     << 5U))) 
                                ^ (0x7ff80U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                               >> 0xdU))) 
                               ^ (0x3fffff80U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 >> 2U))) 
                              ^ (0x3fffff80U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                >> 2U))) 
                             ^ (0x7fff80U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                             >> 9U))) 
                            ^ (0x7ffff80U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                             >> 5U))) 
                           ^ (0x7ffff80U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                            >> 5U))) 
                          ^ (0x7fffff80U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 1U))) 
                         ^ (0x7fffff80U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           >> 1U))) 
                        ^ (0xffffff80U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          << 3U))) 
                       ^ (0xffffff80U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         << 3U))) ^ 
                      (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                       << 7U)) ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                  << 7U))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xfeffU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x100U & ((((((((((((((((((((((((((0xff00U 
                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0x10U)) 
                                              ^ (0xfff00U 
                                                 & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                    >> 0xcU))) 
                                             ^ (0xffff00U 
                                                & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                   >> 8U))) 
                                            ^ (0xfffff00U 
                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 4U))) 
                                           ^ (0xfffff00U 
                                              & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 >> 4U))) 
                                          ^ (0xffffff00U 
                                             & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                << 4U))) 
                                         ^ (0xffffff00U 
                                            & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                               << 4U))) 
                                        ^ (0x700U & 
                                           (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 0x15U))) 
                                       ^ (0x3fff00U 
                                          & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                             >> 0xaU))) 
                                      ^ (0xffffff00U 
                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            << 1U))) 
                                     ^ (0xffffff00U 
                                        & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           << 1U))) 
                                    ^ (0x7f00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0x11U))) 
                                   ^ (0xffffff00U & 
                                      (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                       << 5U))) ^ (0xffffff00U 
                                                   & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                      << 5U))) 
                                 ^ (0x7ff00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 0xdU))) 
                                ^ (0x3fffff00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 2U))) 
                               ^ (0x3fffff00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 >> 2U))) 
                              ^ (0x7fff00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 9U))) 
                             ^ (0x7ffff00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 5U))) 
                            ^ (0x7ffff00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                             >> 5U))) 
                           ^ (0x7fffff00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                             >> 1U))) 
                          ^ (0x7fffff00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                            >> 1U))) 
                         ^ (0xffffff00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           << 3U))) 
                        ^ (0xffffff00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          << 3U))) 
                       ^ (0xffffff00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                         << 7U))) ^ 
                      (0xffffff00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                      << 7U)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xfdffU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x200U & ((((((((((((((((((((((((((0xfe00U 
                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0x10U)) 
                                              ^ (0xffe00U 
                                                 & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                    >> 0xcU))) 
                                             ^ (0xfffe00U 
                                                & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                   >> 8U))) 
                                            ^ (0xffffe00U 
                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 4U))) 
                                           ^ (0xffffe00U 
                                              & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 >> 4U))) 
                                          ^ (0xfffffe00U 
                                             & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                << 4U))) 
                                         ^ (0xfffffe00U 
                                            & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                               << 4U))) 
                                        ^ (0x600U & 
                                           (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 0x15U))) 
                                       ^ (0x3ffe00U 
                                          & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                             >> 0xaU))) 
                                      ^ (0xfffffe00U 
                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            << 1U))) 
                                     ^ (0xfffffe00U 
                                        & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           << 1U))) 
                                    ^ (0x7e00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0x11U))) 
                                   ^ (0xfffffe00U & 
                                      (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                       << 5U))) ^ (0xfffffe00U 
                                                   & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                      << 5U))) 
                                 ^ (0x7fe00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 0xdU))) 
                                ^ (0x3ffffe00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 2U))) 
                               ^ (0x3ffffe00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 >> 2U))) 
                              ^ (0x7ffe00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 9U))) 
                             ^ (0x7fffe00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 5U))) 
                            ^ (0x7fffe00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                             >> 5U))) 
                           ^ (0x7ffffe00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                             >> 1U))) 
                          ^ (0x7ffffe00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                            >> 1U))) 
                         ^ (0xfffffe00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           << 3U))) 
                        ^ (0xfffffe00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          << 3U))) 
                       ^ (0xfffffe00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                         << 7U))) ^ 
                      (0xfffffe00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                      << 7U)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xfbffU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x400U & ((((((((((((((((((((((((((((0xfc00U 
                                                 & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                    >> 0x10U)) 
                                                ^ (0xffc00U 
                                                   & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                      >> 0xcU))) 
                                               ^ (0xfffc00U 
                                                  & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                     >> 8U))) 
                                              ^ (0xffffc00U 
                                                 & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                    >> 4U))) 
                                             ^ (0xffffc00U 
                                                & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                   >> 4U))) 
                                            ^ (0xfffffc00U 
                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  << 4U))) 
                                           ^ (0xfffffc00U 
                                              & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 << 4U))) 
                                          ^ (0x400U 
                                             & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 0x15U))) 
                                         ^ (0x3ffc00U 
                                            & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                               >> 0xaU))) 
                                        ^ (0xfffffc00U 
                                           & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              << 1U))) 
                                       ^ (0xfffffc00U 
                                          & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                             << 1U))) 
                                      ^ (0x7c00U & 
                                         (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          >> 0x11U))) 
                                     ^ (0xfffffc00U 
                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           << 5U))) 
                                    ^ (0xfffffc00U 
                                       & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          << 5U))) 
                                   ^ (0x7fc00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0xdU))) 
                                  ^ (0x3ffffc00U & 
                                     (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      >> 2U))) ^ (0x3ffffc00U 
                                                  & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                     >> 2U))) 
                                ^ (0x7ffc00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 9U))) 
                               ^ (0x7fffc00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 5U))) 
                              ^ (0x7fffc00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                               >> 5U))) 
                             ^ (0x7ffffc00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                               >> 1U))) 
                            ^ (0x7ffffc00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                              >> 1U))) 
                           ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                              << 0xaU)) ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           << 0xaU)) 
                         ^ (0xfffffc00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           << 3U))) 
                        ^ (0xfffffc00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          << 3U))) 
                       ^ (0xfffffc00U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                         << 7U))) ^ 
                      (0xfffffc00U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                      << 7U)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xf7ffU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x800U & ((((((((((((((((0xf800U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 0x10U)) 
                                    ^ (0x7fff800U & 
                                       (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                        >> 5U))) ^ 
                                   (0xfffff800U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                   << 6U))) 
                                  ^ (0xfffff800U & 
                                     ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                      << 6U))) ^ (0xff800U 
                                                  & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                     >> 0xcU))) 
                                ^ (0xfffff800U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  << 0xaU))) 
                               ^ (0xfffff800U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 << 0xaU))) 
                              ^ (0xfff800U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 8U))) 
                             ^ (0xfffff800U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                               << 3U))) 
                            ^ (0xfffff800U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                              << 3U))) 
                           ^ (0xffff800U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 4U))) 
                          ^ (0xffff800U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           >> 4U))) 
                         ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                            << 0xbU)) ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         << 0xbU)) 
                       ^ (0xfffff800U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                         << 4U))) ^ 
                      (0xfffff800U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                      << 4U)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xefffU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x1000U & (((((((((((((((((0xf000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0x10U)) 
                                      ^ (0x7fff000U 
                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 5U))) 
                                     ^ (0xfffff000U 
                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           << 6U))) 
                                    ^ (0xfffff000U 
                                       & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          << 6U))) 
                                   ^ (0xff000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0xcU))) 
                                  ^ (0xfffff000U & 
                                     (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      << 0xaU))) ^ 
                                 (0xfffff000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 << 0xaU))) 
                                ^ (0xfff000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 8U))) 
                               ^ (0xfffff000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 << 3U))) 
                              ^ (0xfffff000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                << 3U))) 
                             ^ (0xffff000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 4U))) 
                            ^ (0xfffff000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              << 0xbU))) 
                           ^ (0xfffff000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                             << 0xbU))) 
                          ^ (0xfffff000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            << 4U))) 
                         ^ (0xfffff000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           << 4U))) 
                        ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                           << 0xcU)) ^ ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                        << 0xcU))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xdfffU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x2000U & (((((((((((((((((0xe000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0x10U)) 
                                      ^ (0x7ffe000U 
                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 5U))) 
                                     ^ (0xffffe000U 
                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           << 6U))) 
                                    ^ (0xffffe000U 
                                       & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          << 6U))) 
                                   ^ (0xfe000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0xcU))) 
                                  ^ (0xffffe000U & 
                                     (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      << 0xaU))) ^ 
                                 (0xffffe000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 << 0xaU))) 
                                ^ (0xffe000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 8U))) 
                               ^ (0xffffe000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 << 3U))) 
                              ^ (0xffffe000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                << 3U))) 
                             ^ (0xfffe000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 4U))) 
                            ^ (0xffffe000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              << 0xbU))) 
                           ^ (0xffffe000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                             << 0xbU))) 
                          ^ (0xffffe000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            << 4U))) 
                         ^ (0xffffe000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           << 4U))) 
                        ^ (0xffffe000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          << 0xcU))) 
                       ^ (0xffffe000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         << 0xcU)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0xbfffU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x4000U & (((((((((((((((((0xc000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0x10U)) 
                                      ^ (0x7ffc000U 
                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 5U))) 
                                     ^ (0xffffc000U 
                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           << 6U))) 
                                    ^ (0xffffc000U 
                                       & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          << 6U))) 
                                   ^ (0xfc000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0xcU))) 
                                  ^ (0xffffc000U & 
                                     (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      << 0xaU))) ^ 
                                 (0xffffc000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 << 0xaU))) 
                                ^ (0xffc000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 8U))) 
                               ^ (0xffffc000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 << 3U))) 
                              ^ (0xffffc000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                << 3U))) 
                             ^ (0xfffc000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 4U))) 
                            ^ (0xffffc000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              << 0xbU))) 
                           ^ (0xffffc000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                             << 0xbU))) 
                          ^ (0xffffc000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            << 4U))) 
                         ^ (0xffffc000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           << 4U))) 
                        ^ (0xffffc000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          << 0xcU))) 
                       ^ (0xffffc000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         << 0xcU)))));
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk = 
        ((0x7fffU & (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk)) 
         | (0x8000U & (((((((((((((((((0x8000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0x10U)) 
                                      ^ (0x7ff8000U 
                                         & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            >> 5U))) 
                                     ^ (0xffff8000U 
                                        & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                           << 6U))) 
                                    ^ (0xffff8000U 
                                       & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                          << 6U))) 
                                   ^ (0xf8000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                  >> 0xcU))) 
                                  ^ (0xffff8000U & 
                                     (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                      << 0xaU))) ^ 
                                 (0xffff8000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                 << 0xaU))) 
                                ^ (0xff8000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                >> 8U))) 
                               ^ (0xffff8000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                                 << 3U))) 
                              ^ (0xffff8000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                                << 3U))) 
                             ^ (0xfff8000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              >> 4U))) 
                            ^ (0xffff8000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                              << 0xbU))) 
                           ^ (0xffff8000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                             << 0xbU))) 
                          ^ (0xffff8000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                            << 4U))) 
                         ^ (0xffff8000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                           << 4U))) 
                        ^ (0xffff8000U & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                                          << 0xcU))) 
                       ^ (0xffff8000U & ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c) 
                                         << 0xcU)))));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom = 
        (0xffU & ((IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc) 
                  ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                     >> 0x18U)));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfffffeU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | (7U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfffffdU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0xbU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 1U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfffffbU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0xdU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 2U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfffff7U & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0xeU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 3U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xffffefU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x13U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 4U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xffffcfU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | (((0x15U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
               << 5U) | ((0x16U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
                         << 4U)));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xffff7fU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x19U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 7U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfffeffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x1aU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 8U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfffdffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x1cU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 9U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfffbffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x23U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0xaU));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfff7ffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x25U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0xbU));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xffefffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x26U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0xcU));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xffdfffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x29U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0xdU));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xffbfffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x2aU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0xeU));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xff7fffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x2cU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0xfU));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfeffffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x31U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0x10U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfdffffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x32U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0x11U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xfbffffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x34U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0x12U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xf7ffffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x38U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0x13U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xefffffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x1fU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0x14U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xdfffffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x2fU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0x15U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0xbfffffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x37U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0x16U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction 
        = ((0x7fffffU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction) 
           | ((0x3bU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom)) 
              << 0x17U));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__regheader_correct 
        = (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
           ^ vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction);
}

void VMIPI_Reciever::_eval_initial(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_eval_initial\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__sys_clk = vlTOPp->sys_clk;
    vlTOPp->__Vclklast__TOP__mipi_clk = vlTOPp->mipi_clk;
    vlTOPp->_initial__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[8U] = 1U;
    vlTOPp->__Vm_traceActivity[7U] = 1U;
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__MIPI_Reciever__DOT__SYNC__DOT__eclki_r2 
        = vlTOPp->__VinpClk__TOP__MIPI_Reciever__DOT__SYNC__DOT__eclki_r2;
    vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_2 
        = vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2;
    vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_4 
        = vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_4;
    vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_8 
        = vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8;
}

void VMIPI_Reciever::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::final\n"); );
    // Variables
    VMIPI_Reciever__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMIPI_Reciever::_eval_settle(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_eval_settle\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[8U] = 1U;
    vlTOPp->__Vm_traceActivity[7U] = 1U;
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__7(vlSymsp);
}

void VMIPI_Reciever::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_ctor_var_reset\n"); );
    // Body
    sys_clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    lane0_d = VL_RAND_RESET_I(1);
    mipi_clk = VL_RAND_RESET_I(1);
    mipi_clk_8 = VL_RAND_RESET_I(1);
    lane1_d = VL_RAND_RESET_I(1);
    lane0_p = VL_RAND_RESET_I(1);
    lane0_n = VL_RAND_RESET_I(1);
    lane1_p = VL_RAND_RESET_I(1);
    lane1_n = VL_RAND_RESET_I(1);
    data_o = VL_RAND_RESET_I(32);
    adress_out = VL_RAND_RESET_I(32);
    ram_clk = VL_RAND_RESET_I(1);
    debug0 = VL_RAND_RESET_I(1);
    debug1 = VL_RAND_RESET_I(1);
    debug3 = VL_RAND_RESET_I(1);
    debug2 = VL_RAND_RESET_I(1);
    termination = VL_RAND_RESET_I(1);
    rec_data_o = VL_RAND_RESET_I(1);
    cX = VL_RAND_RESET_I(32);
    cY = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__rec_data = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane0byte = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__lane1byte = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__sync = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__sync_mipi_clk_2 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__sync_mipi_clk_4 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__sync_mipi_clk_8 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__valid = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__stop_tran = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__term_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__debug0_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__debug1_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__timer_tou = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__RxFSM__DOT__timer_term = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__RxFSM__DOT__timer_hs = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__SYNC__DOT__eclki_r0 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__SYNC__DOT__eclki_r1 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__SYNC__DOT__eclki_r2 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__div2__DOT__counter = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__div4__DOT__counter = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__div8__DOT__counter = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__lane0__DOT__ddr = VL_RAND_RESET_I(4);
    MIPI_Reciever__DOT__lane0__DOT__sync_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane0__DOT__even_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane0__DOT__q_o_r = VL_RAND_RESET_I(4);
    MIPI_Reciever__DOT__lane0__DOT__ov_fl_r0 = VL_RAND_RESET_I(2);
    MIPI_Reciever__DOT__lane0__DOT__ov_fl_r1 = VL_RAND_RESET_I(2);
    MIPI_Reciever__DOT__lane0__DOT__syncbyte = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__lane0__DOT__delay_lane = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__A = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__B = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__C = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__D1 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane1__DOT__ddr = VL_RAND_RESET_I(4);
    MIPI_Reciever__DOT__lane1__DOT__sync_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane1__DOT__even_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane1__DOT__q_o_r = VL_RAND_RESET_I(4);
    MIPI_Reciever__DOT__lane1__DOT__ov_fl_r0 = VL_RAND_RESET_I(2);
    MIPI_Reciever__DOT__lane1__DOT__ov_fl_r1 = VL_RAND_RESET_I(2);
    MIPI_Reciever__DOT__lane1__DOT__syncbyte = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__lane1__DOT__delay_lane = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__A = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__B = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__C = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__D1 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__BA0__DOT__byte0_r = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BA0__DOT__byte1_r = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BA1__DOT__byte0_r = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BA1__DOT__byte1_r = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BAL0__DOT__byte_o_r = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BAL0__DOT__counter = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BAL0__DOT__byte_o_r_old = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BAL0__DOT__byte_o_r_s = VL_RAND_RESET_I(16);
    MIPI_Reciever__DOT__BAL1__DOT__byte_o_r = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BAL1__DOT__counter = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BAL1__DOT__byte_o_r_old = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BAL1__DOT__byte_o_r_s = VL_RAND_RESET_I(16);
    MIPI_Reciever__DOT__DE__DOT__out_r = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__DE__DOT__out_r_old = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__DE__DOT__valid_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__DE__DOT__start = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__DE__DOT__counter = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__DE__DOT__ecc = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__DE__DOT__data_r = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__DE__DOT__type_o_r = VL_RAND_RESET_I(6);
    MIPI_Reciever__DOT__DE__DOT__wordcount_r = VL_RAND_RESET_I(16);
    MIPI_Reciever__DOT__DE__DOT__syndrom = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__DE__DOT__correction = VL_RAND_RESET_I(24);
    MIPI_Reciever__DOT__DE__DOT__regheader_correct = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__rec_data_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__Prot__DOT__state = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__Prot__DOT__valid_old = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__Prot__DOT__counter = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__count_val = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__data_o_r = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__counter_addr = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__cX_r = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__cY_r = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__c = VL_RAND_RESET_I(16);
    MIPI_Reciever__DOT__Prot__DOT__c_calk = VL_RAND_RESET_I(16);
    __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = VL_RAND_RESET_I(8);
    __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou = VL_RAND_RESET_I(32);
    __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_term = VL_RAND_RESET_I(32);
    __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_hs = VL_RAND_RESET_I(32);
    __Vdly__MIPI_Reciever__DOT__BAL0__DOT__byte_o_r = VL_RAND_RESET_I(8);
    __Vdly__MIPI_Reciever__DOT__BAL1__DOT__byte_o_r = VL_RAND_RESET_I(8);
    __Vdly__MIPI_Reciever__DOT__DE__DOT__out_r = VL_RAND_RESET_I(32);
    __Vdly__MIPI_Reciever__DOT__DE__DOT__counter = VL_RAND_RESET_I(32);
    __Vdly__MIPI_Reciever__DOT__DE__DOT__type_o_r = VL_RAND_RESET_I(6);
    __Vdly__MIPI_Reciever__DOT__DE__DOT__wordcount_r = VL_RAND_RESET_I(16);
    __VinpClk__TOP__MIPI_Reciever__DOT__SYNC__DOT__eclki_r2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__MIPI_Reciever__DOT__SYNC__DOT__eclki_r2 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
