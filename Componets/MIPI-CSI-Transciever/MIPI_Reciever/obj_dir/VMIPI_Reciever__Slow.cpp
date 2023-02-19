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
    vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk = ((IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r)
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & (IData)(vlTOPp->mipi_clk)));
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
    vlTOPp->MIPI_Reciever__DOT__sync = ((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__sync_r) 
                                        & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r)));
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
    vlTOPp->MIPI_Reciever__DOT__rec_data = ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r) 
                                            & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r)));
    vlTOPp->termination = vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__term_r;
    vlTOPp->debug0 = vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__debug0_r;
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
    vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = 0U;
    vlTOPp->lane0_p = 0U;
    vlTOPp->lane1_n = 0U;
    vlTOPp->lane0_n = 0U;
    vlTOPp->lane1_p = 0U;
}

void VMIPI_Reciever::_eval_initial(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_eval_initial\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__sys_clk = vlTOPp->sys_clk;
    vlTOPp->_initial__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[7U] = 1U;
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk 
        = vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk;
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
    vlTOPp->__Vm_traceActivity[7U] = 1U;
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
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
    debug2 = VL_RAND_RESET_I(1);
    termination = VL_RAND_RESET_I(1);
    rec_data_o = VL_RAND_RESET_I(1);
    cX = VL_RAND_RESET_I(32);
    cY = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__rec_data = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__lane0byte = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__lane1byte = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__sync = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__sync_mipi_clk = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__sync_mipi_clk_2 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__sync_mipi_clk_4 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__sync_mipi_clk_8 = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__stop_tran = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__term_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__debug0_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__debug1_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__RxFSM__DOT__timer_tou = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__RxFSM__DOT__timer_term = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__RxFSM__DOT__timer_hs = VL_RAND_RESET_I(32);
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
    MIPI_Reciever__DOT__BAL1__DOT__byte_o_r = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__BAL1__DOT__counter = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__DE__DOT__out_r = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__DE__DOT__valid_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__DE__DOT__start = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__DE__DOT__counter = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__DE__DOT__ecc = VL_RAND_RESET_I(8);
    MIPI_Reciever__DOT__DE__DOT__data_r = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__DE__DOT__type_o_r = VL_RAND_RESET_I(6);
    MIPI_Reciever__DOT__DE__DOT__wordcount_r = VL_RAND_RESET_I(16);
    MIPI_Reciever__DOT__Prot__DOT__debug = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__Prot__DOT__rec_data_r = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__Prot__DOT__state = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__Prot__DOT__valid_old = VL_RAND_RESET_I(1);
    MIPI_Reciever__DOT__Prot__DOT__counter = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__count_val = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__data_o_r = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__counter_addr = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__cX_r = VL_RAND_RESET_I(32);
    MIPI_Reciever__DOT__Prot__DOT__cY_r = VL_RAND_RESET_I(32);
    __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = VL_RAND_RESET_I(8);
    __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou = VL_RAND_RESET_I(32);
    __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_term = VL_RAND_RESET_I(32);
    __Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_hs = VL_RAND_RESET_I(32);
    __Vdly__MIPI_Reciever__DOT__BAL0__DOT__byte_o_r = VL_RAND_RESET_I(8);
    __Vdly__MIPI_Reciever__DOT__BAL1__DOT__byte_o_r = VL_RAND_RESET_I(8);
    __Vdly__MIPI_Reciever__DOT__DE__DOT__out_r = VL_RAND_RESET_I(32);
    __Vdly__MIPI_Reciever__DOT__DE__DOT__valid_r = VL_RAND_RESET_I(1);
    __Vdly__MIPI_Reciever__DOT__DE__DOT__counter = VL_RAND_RESET_I(8);
    __Vdly__MIPI_Reciever__DOT__DE__DOT__type_o_r = VL_RAND_RESET_I(6);
    __Vdly__MIPI_Reciever__DOT__DE__DOT__wordcount_r = VL_RAND_RESET_I(16);
    __Vchglast__TOP__MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
