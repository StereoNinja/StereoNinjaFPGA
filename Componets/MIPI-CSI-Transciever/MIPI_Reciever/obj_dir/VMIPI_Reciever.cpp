// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPI_Reciever.h for the primary calling header

#include "VMIPI_Reciever.h"
#include "VMIPI_Reciever__Syms.h"

//==========

void VMIPI_Reciever::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMIPI_Reciever::eval\n"); );
    VMIPI_Reciever__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("MIPI_Reciever.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMIPI_Reciever::_eval_initial_loop(VMIPI_Reciever__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("MIPI_Reciever.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VMIPI_Reciever::_sequent__TOP__1(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_sequent__TOP__1\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_hs 
        = vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_hs;
    vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_term 
        = vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_term;
    vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou 
        = vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou;
    vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi 
        = vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi;
}

VL_INLINE_OPT void VMIPI_Reciever::_combo__TOP__2(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_combo__TOP__2\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk = ((IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk)
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & (IData)(vlTOPp->mipi_clk)));
}

VL_INLINE_OPT void VMIPI_Reciever::_sequent__TOP__5(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_sequent__TOP__5\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2) {
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__C 
            = vlTOPp->lane1_d;
    }
    if ((1U & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2)))) {
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__A 
            = vlTOPp->lane1_d;
    }
    if (vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2) {
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__C 
            = vlTOPp->lane0_d;
    }
    if ((1U & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2)))) {
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__A 
            = vlTOPp->lane0_d;
    }
    vlTOPp->MIPI_Reciever__DOT__div2__DOT__counter 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->MIPI_Reciever__DOT__div2__DOT__counter))));
    vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2 = (1U 
                                                   & (IData)(vlTOPp->MIPI_Reciever__DOT__div2__DOT__counter));
}

VL_INLINE_OPT void VMIPI_Reciever::_sequent__TOP__6(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_sequent__TOP__6\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2)))) {
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__D1 
            = vlTOPp->lane1_d;
    }
    if (vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2) {
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__B 
            = vlTOPp->lane1_d;
    }
    if ((1U & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2)))) {
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__D1 
            = vlTOPp->lane0_d;
    }
    if (vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2) {
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__B 
            = vlTOPp->lane0_d;
    }
}

VL_INLINE_OPT void VMIPI_Reciever::_sequent__TOP__7(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_sequent__TOP__7\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__MIPI_Reciever__DOT__BA0__DOT__byte0_r;
    CData/*7:0*/ __Vdly__MIPI_Reciever__DOT__BA1__DOT__byte0_r;
    CData/*7:0*/ __Vdly__MIPI_Reciever__DOT__BAL0__DOT__counter;
    CData/*7:0*/ __Vdly__MIPI_Reciever__DOT__BAL1__DOT__counter;
    // Body
    __Vdly__MIPI_Reciever__DOT__BA1__DOT__byte0_r = vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte0_r;
    __Vdly__MIPI_Reciever__DOT__BA0__DOT__byte0_r = vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte0_r;
    __Vdly__MIPI_Reciever__DOT__BAL1__DOT__counter 
        = vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__counter;
    vlTOPp->__Vdly__MIPI_Reciever__DOT__BAL1__DOT__byte_o_r 
        = vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r;
    __Vdly__MIPI_Reciever__DOT__BAL0__DOT__counter 
        = vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__counter;
    vlTOPp->__Vdly__MIPI_Reciever__DOT__BAL0__DOT__byte_o_r 
        = vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r;
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) {
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte = 0U;
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte = 0U;
    } else {
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte 
            = (((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ddr) 
                << 4U) | (0xfU & ((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte) 
                                  >> 4U)));
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte 
            = (((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ddr) 
                << 4U) | (0xfU & ((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte) 
                                  >> 4U)));
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) {
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__even_r = 0U;
    } else {
        if ((0U == (0xb8U ^ (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte)))) {
            vlTOPp->MIPI_Reciever__DOT__lane1__DOT__even_r = 1U;
        }
        if ((0U == (0x2eU ^ (0x3fU & (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte))))) {
            vlTOPp->MIPI_Reciever__DOT__lane1__DOT__even_r = 0U;
        }
    }
    vlTOPp->MIPI_Reciever__DOT__lane1__DOT__sync_r 
        = (1U & ((~ ((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) 
                 & (((0U == (0xb8U ^ (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte))) 
                     | (0U == (0x2eU ^ (0x3fU & (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte)))))
                     ? 1U : (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__sync_r))));
    vlTOPp->MIPI_Reciever__DOT__lane0__DOT__sync_r 
        = (1U & ((~ ((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) 
                 & (((0U == (0xb8U ^ (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte))) 
                     | (0U == (0x2eU ^ (0x3fU & (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte)))))
                     ? 1U : (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__sync_r))));
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) {
        __Vdly__MIPI_Reciever__DOT__BA1__DOT__byte0_r = 0U;
        __Vdly__MIPI_Reciever__DOT__BA0__DOT__byte0_r = 0U;
    } else {
        __Vdly__MIPI_Reciever__DOT__BA1__DOT__byte0_r 
            = (((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__q_o_r) 
                << 4U) | (0xfU & ((IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte0_r) 
                                  >> 4U)));
        __Vdly__MIPI_Reciever__DOT__BA0__DOT__byte0_r 
            = (((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__q_o_r) 
                << 4U) | (0xfU & ((IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte0_r) 
                                  >> 4U)));
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) {
        vlTOPp->__Vdly__MIPI_Reciever__DOT__BAL1__DOT__byte_o_r = 0U;
        __Vdly__MIPI_Reciever__DOT__BAL1__DOT__counter = 0U;
    } else {
        if (vlTOPp->MIPI_Reciever__DOT__sync) {
            __Vdly__MIPI_Reciever__DOT__BAL1__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__counter)));
            vlTOPp->__Vdly__MIPI_Reciever__DOT__BAL1__DOT__byte_o_r 
                = ((1U & (IData)(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__counter))
                    ? (IData)(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r)
                    : ((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r)
                        ? (IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte0_r)
                        : (IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte1_r)));
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) {
        vlTOPp->__Vdly__MIPI_Reciever__DOT__BAL0__DOT__byte_o_r = 0U;
        __Vdly__MIPI_Reciever__DOT__BAL0__DOT__counter = 0U;
    } else {
        if (vlTOPp->MIPI_Reciever__DOT__sync) {
            __Vdly__MIPI_Reciever__DOT__BAL0__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__counter)));
            vlTOPp->__Vdly__MIPI_Reciever__DOT__BAL0__DOT__byte_o_r 
                = ((1U & (IData)(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__counter))
                    ? (IData)(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r)
                    : ((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r)
                        ? (IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte0_r)
                        : (IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte1_r)));
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) {
        vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte1_r = 0U;
        vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte1_r = 0U;
    } else {
        vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte1_r 
            = ((0xc0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__q_o_r) 
                         << 6U)) | (((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ov_fl_r1) 
                                     << 4U) | (0xfU 
                                               & ((IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte1_r) 
                                                  >> 4U))));
        vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte1_r 
            = ((0xc0U & ((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__q_o_r) 
                         << 6U)) | (((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ov_fl_r1) 
                                     << 4U) | (0xfU 
                                               & ((IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte1_r) 
                                                  >> 4U))));
    }
    vlTOPp->MIPI_Reciever__DOT__div4__DOT__counter 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->MIPI_Reciever__DOT__div4__DOT__counter))));
    vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__counter 
        = __Vdly__MIPI_Reciever__DOT__BAL1__DOT__counter;
    vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte0_r = __Vdly__MIPI_Reciever__DOT__BA1__DOT__byte0_r;
    vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__counter 
        = __Vdly__MIPI_Reciever__DOT__BAL0__DOT__counter;
    vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte0_r = __Vdly__MIPI_Reciever__DOT__BA0__DOT__byte0_r;
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) {
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r = 0U;
    } else {
        if ((0U == (0xb8U ^ (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte)))) {
            vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r = 1U;
        }
        if ((0U == (0x2eU ^ (0x3fU & (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte))))) {
            vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r = 0U;
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) {
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__q_o_r = 0U;
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ov_fl_r1 = 0U;
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__q_o_r = 0U;
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ov_fl_r1 = 0U;
    } else {
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__q_o_r 
            = vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ddr;
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ov_fl_r1 
            = vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ov_fl_r0;
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__q_o_r 
            = vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ddr;
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ov_fl_r1 
            = vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ov_fl_r0;
    }
    vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_4 = (1U 
                                                   & (IData)(vlTOPp->MIPI_Reciever__DOT__div4__DOT__counter));
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) {
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ov_fl_r0 = 0U;
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ov_fl_r0 = 0U;
    } else {
        vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ov_fl_r0 
            = (3U & ((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ddr) 
                     >> 2U));
        vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ov_fl_r0 
            = (3U & ((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ddr) 
                     >> 2U));
    }
}

VL_INLINE_OPT void VMIPI_Reciever::_sequent__TOP__8(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_sequent__TOP__8\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__MIPI_Reciever__DOT__DE__DOT__counter;
    IData/*31:0*/ __Vdly__MIPI_Reciever__DOT__DE__DOT__out_r;
    // Body
    vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__wordcount_r 
        = vlTOPp->MIPI_Reciever__DOT__DE__DOT__wordcount_r;
    vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__type_o_r 
        = vlTOPp->MIPI_Reciever__DOT__DE__DOT__type_o_r;
    __Vdly__MIPI_Reciever__DOT__DE__DOT__counter = vlTOPp->MIPI_Reciever__DOT__DE__DOT__counter;
    vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__valid_r 
        = vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r;
    __Vdly__MIPI_Reciever__DOT__DE__DOT__out_r = vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r;
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk))) {
        vlTOPp->MIPI_Reciever__DOT__DE__DOT__start = 0U;
        __Vdly__MIPI_Reciever__DOT__DE__DOT__out_r = 0U;
        vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__valid_r = 0U;
        __Vdly__MIPI_Reciever__DOT__DE__DOT__counter = 0U;
        vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r = 0U;
        vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__type_o_r = 0U;
        vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__wordcount_r = 0U;
    } else {
        if (vlTOPp->MIPI_Reciever__DOT__sync) {
            __Vdly__MIPI_Reciever__DOT__DE__DOT__out_r 
                = (((IData)(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r) 
                    << 0x18U) | (((IData)(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r) 
                                  << 0x10U) | (0xffffU 
                                               & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                                  >> 0x10U))));
            if ((((IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc) 
                  == (0xffU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                               >> 0x18U))) & (0U != vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r))) {
                vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__valid_r = 1U;
                vlTOPp->MIPI_Reciever__DOT__DE__DOT__start = 1U;
                vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__type_o_r 
                    = (0x3fU & vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r);
                vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__wordcount_r 
                    = (0xffffU & (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                  >> 8U));
            } else {
                vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__valid_r 
                    = (1U & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r));
                vlTOPp->MIPI_Reciever__DOT__DE__DOT__start 
                    = (1U & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__start));
                vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__type_o_r 
                    = (0x3fU & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__type_o_r));
                vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__wordcount_r 
                    = (0xffffU & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__wordcount_r));
            }
            if (vlTOPp->MIPI_Reciever__DOT__DE__DOT__start) {
                __Vdly__MIPI_Reciever__DOT__DE__DOT__counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__counter)));
                if ((1U < (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__counter))) {
                    __Vdly__MIPI_Reciever__DOT__DE__DOT__counter = 1U;
                    vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r 
                        = vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r;
                } else {
                    __Vdly__MIPI_Reciever__DOT__DE__DOT__counter 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__counter)));
                }
            }
        }
    }
    vlTOPp->MIPI_Reciever__DOT__div8__DOT__counter 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->MIPI_Reciever__DOT__div8__DOT__counter))));
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__counter = __Vdly__MIPI_Reciever__DOT__DE__DOT__counter;
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r = __Vdly__MIPI_Reciever__DOT__DE__DOT__out_r;
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
    vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8 = (1U 
                                                   & (IData)(vlTOPp->MIPI_Reciever__DOT__div8__DOT__counter));
    vlTOPp->ram_clk = vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8;
}

VL_INLINE_OPT void VMIPI_Reciever::_multiclk__TOP__9(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_multiclk__TOP__9\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ddr = (
                                                   ((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__D1) 
                                                    << 3U) 
                                                   | (((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__C) 
                                                       << 2U) 
                                                      | (((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__B) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__A))));
    vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ddr = (
                                                   ((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__D1) 
                                                    << 3U) 
                                                   | (((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__C) 
                                                       << 2U) 
                                                      | (((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__B) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__A))));
}

VL_INLINE_OPT void VMIPI_Reciever::_sequent__TOP__10(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_sequent__TOP__10\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r 
        = vlTOPp->__Vdly__MIPI_Reciever__DOT__BAL1__DOT__byte_o_r;
    vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r 
        = vlTOPp->__Vdly__MIPI_Reciever__DOT__BAL0__DOT__byte_o_r;
}

VL_INLINE_OPT void VMIPI_Reciever::_combo__TOP__11(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_combo__TOP__11\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPI_Reciever__DOT__sync = ((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__sync_r) 
                                        & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk)));
    vlTOPp->debug2 = vlTOPp->MIPI_Reciever__DOT__sync;
}

VL_INLINE_OPT void VMIPI_Reciever::_sequent__TOP__12(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_sequent__TOP__12\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = 0U;
        vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou = 0U;
        vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_term = 0U;
        vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_hs = 0U;
        vlTOPp->MIPI_Reciever__DOT__termination_r = 0U;
        vlTOPp->MIPI_Reciever__DOT__stop_clk = 1U;
    } else {
        if ((0U == (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi))) {
            vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi 
                = (((((IData)(vlTOPp->lane0_p) & (IData)(vlTOPp->lane0_n)) 
                     & (IData)(vlTOPp->lane1_p)) & (IData)(vlTOPp->lane1_n))
                    ? 1U : 0U);
            vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou = 0U;
            vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_term = 0U;
            vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_hs = 0U;
            vlTOPp->MIPI_Reciever__DOT__termination_r = 0U;
            vlTOPp->debug0 = 0U;
            vlTOPp->MIPI_Reciever__DOT__stop_clk = 1U;
        } else {
            if ((1U == (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi))) {
                vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi 
                    = (((((~ (IData)(vlTOPp->lane0_p)) 
                          & (IData)(vlTOPp->lane0_n)) 
                         & (~ (IData)(vlTOPp->lane1_p))) 
                        & (IData)(vlTOPp->lane1_n))
                        ? 2U : 1U);
                vlTOPp->debug0 = 0U;
                vlTOPp->MIPI_Reciever__DOT__stop_clk = 1U;
            } else {
                if ((2U == (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi))) {
                    vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_term 
                        = ((IData)(1U) + vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_term);
                    if (VL_LTES_III(1,32,32, 0x14U, vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou)) {
                        vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = 0U;
                    } else {
                        if ((1U & ((((~ (IData)(vlTOPp->lane0_p)) 
                                     & (~ (IData)(vlTOPp->lane0_n))) 
                                    & (~ (IData)(vlTOPp->lane1_p))) 
                                   & (~ (IData)(vlTOPp->lane1_n))))) {
                            vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = 3U;
                            vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou = 0U;
                        }
                    }
                    vlTOPp->MIPI_Reciever__DOT__stop_clk = 1U;
                    vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou 
                        = ((IData)(1U) + vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou);
                } else {
                    if ((3U == (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi))) {
                        vlTOPp->MIPI_Reciever__DOT__stop_clk = 1U;
                        if (VL_LTES_III(1,32,32, 2U, vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_term)) {
                            vlTOPp->MIPI_Reciever__DOT__termination_r = 1U;
                        }
                        if (VL_LTES_III(1,32,32, 4U, vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_hs)) {
                            vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = 4U;
                            vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou = 0U;
                            vlTOPp->MIPI_Reciever__DOT__stop_clk = 0U;
                        }
                        vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_term 
                            = ((IData)(1U) + vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_term);
                        if (VL_LTES_III(1,32,32, 0x14U, vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou)) {
                            vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = 0U;
                        }
                        vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou 
                            = ((IData)(1U) + vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou);
                        vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_hs 
                            = ((IData)(1U) + vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_hs);
                    } else {
                        if ((4U == (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi))) {
                            vlTOPp->debug0 = 1U;
                            if (VL_LTES_III(1,32,32, 0x50U, vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou)) {
                                vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = 0U;
                                vlTOPp->MIPI_Reciever__DOT__stop_clk = 1U;
                            }
                            vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou 
                                = ((IData)(1U) + vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou);
                            if (vlTOPp->MIPI_Reciever__DOT__rec_data) {
                                vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = 5U;
                                vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou = 0U;
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi))) {
                                vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou 
                                    = ((IData)(1U) 
                                       + vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou);
                                if ((1U & ((~ (IData)(vlTOPp->MIPI_Reciever__DOT__rec_data)) 
                                           | VL_LTS_III(1,32,32, 0xa0U, vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou)))) {
                                    vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou 
        = vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_tou;
    vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_term 
        = vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_term;
    vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_hs 
        = vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__timer_hs;
    vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi 
        = vlTOPp->__Vdly__MIPI_Reciever__DOT__RxFSM__DOT__state_mipi;
    vlTOPp->termination = vlTOPp->MIPI_Reciever__DOT__termination_r;
}

VL_INLINE_OPT void VMIPI_Reciever::_sequent__TOP__13(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_sequent__TOP__13\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__MIPI_Reciever__DOT__Prot__DOT__state;
    IData/*31:0*/ __Vdly__MIPI_Reciever__DOT__Prot__DOT__counter_addr;
    // Body
    __Vdly__MIPI_Reciever__DOT__Prot__DOT__state = vlTOPp->MIPI_Reciever__DOT__Prot__DOT__state;
    __Vdly__MIPI_Reciever__DOT__Prot__DOT__counter_addr 
        = vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr;
    if (vlTOPp->reset) {
        vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r = 0U;
        __Vdly__MIPI_Reciever__DOT__Prot__DOT__state = 0U;
        vlTOPp->MIPI_Reciever__DOT__Prot__DOT__data_o_r = 0U;
        __Vdly__MIPI_Reciever__DOT__Prot__DOT__counter_addr = 0U;
    } else {
        if (vlTOPp->MIPI_Reciever__DOT__Prot__DOT__state) {
            if (vlTOPp->MIPI_Reciever__DOT__Prot__DOT__state) {
                if ((vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter 
                     < vlTOPp->MIPI_Reciever__DOT__Prot__DOT__count_val)) {
                    __Vdly__MIPI_Reciever__DOT__Prot__DOT__counter_addr 
                        = ((IData)(1U) + vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr);
                    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter 
                        = ((IData)(1U) + vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter);
                    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r = 1U;
                    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__data_o_r 
                        = vlTOPp->MIPI_Reciever__DOT__data;
                } else {
                    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter = 0U;
                    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r = 0U;
                    __Vdly__MIPI_Reciever__DOT__Prot__DOT__state = 0U;
                }
            }
        } else {
            __Vdly__MIPI_Reciever__DOT__Prot__DOT__counter_addr 
                = ((((IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r) 
                     & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__valid_old))) 
                    & (0U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__type_o_r)))
                    ? 0U : vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr);
            __Vdly__MIPI_Reciever__DOT__Prot__DOT__state 
                = (((((IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r) 
                      & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__valid_old))) 
                     & (0x2aU == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__type_o_r))) 
                    & (0x280U == (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__wordcount_r)))
                    ? 1U : 0U);
            vlTOPp->MIPI_Reciever__DOT__Prot__DOT__count_val = 0xa0U;
        }
    }
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__state = __Vdly__MIPI_Reciever__DOT__Prot__DOT__state;
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr 
        = __Vdly__MIPI_Reciever__DOT__Prot__DOT__counter_addr;
    vlTOPp->adress_out = vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr;
    vlTOPp->MIPI_Reciever__DOT__Prot__DOT__valid_old 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r));
}

VL_INLINE_OPT void VMIPI_Reciever::_sequent__TOP__14(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_sequent__TOP__14\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__type_o_r = vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__type_o_r;
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__wordcount_r 
        = vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__wordcount_r;
    vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r = vlTOPp->__Vdly__MIPI_Reciever__DOT__DE__DOT__valid_r;
}

VL_INLINE_OPT void VMIPI_Reciever::_combo__TOP__15(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_combo__TOP__15\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MIPI_Reciever__DOT__rec_data = ((IData)(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r) 
                                            & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk)));
    vlTOPp->debug1 = vlTOPp->MIPI_Reciever__DOT__rec_data;
}

void VMIPI_Reciever::_eval(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_eval\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->sys_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__sys_clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((~ (IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk)) 
         & (IData)(vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_2)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    if (((IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_4) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_4)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    if (((IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk) 
         ^ (IData)(vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk))) {
        vlTOPp->_multiclk__TOP__9(vlSymsp);
    }
    if (((IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_2)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    vlTOPp->_combo__TOP__11(vlSymsp);
    if (((IData)(vlTOPp->sys_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__sys_clk)))) {
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    if (((IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_8)))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    if (((IData)(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_4) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_4)))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    vlTOPp->_combo__TOP__15(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__sys_clk = vlTOPp->sys_clk;
    vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk 
        = vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk;
    vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_2 
        = vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2;
    vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_4 
        = vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_4;
    vlTOPp->__Vclklast__TOP__MIPI_Reciever__DOT__sync_mipi_clk_8 
        = vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8;
}

VL_INLINE_OPT QData VMIPI_Reciever::_change_request(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_change_request\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VMIPI_Reciever::_change_request_1(VMIPI_Reciever__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_change_request_1\n"); );
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->MIPI_Reciever__DOT__stop_clk ^ vlTOPp->__Vchglast__TOP__MIPI_Reciever__DOT__stop_clk));
    VL_DEBUG_IF( if(__req && ((vlTOPp->MIPI_Reciever__DOT__stop_clk ^ vlTOPp->__Vchglast__TOP__MIPI_Reciever__DOT__stop_clk))) VL_DBG_MSGF("        CHANGE: MIPI_Reciever.v:3: MIPI_Reciever.stop_clk\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__MIPI_Reciever__DOT__stop_clk 
        = vlTOPp->MIPI_Reciever__DOT__stop_clk;
    return __req;
}

#ifdef VL_DEBUG
void VMIPI_Reciever::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPI_Reciever::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((sys_clk & 0xfeU))) {
        Verilated::overWidthError("sys_clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((lane0_d & 0xfeU))) {
        Verilated::overWidthError("lane0_d");}
    if (VL_UNLIKELY((mipi_clk & 0xfeU))) {
        Verilated::overWidthError("mipi_clk");}
    if (VL_UNLIKELY((mipi_clk_8 & 0xfeU))) {
        Verilated::overWidthError("mipi_clk_8");}
    if (VL_UNLIKELY((lane1_d & 0xfeU))) {
        Verilated::overWidthError("lane1_d");}
    if (VL_UNLIKELY((lane0_p & 0xfeU))) {
        Verilated::overWidthError("lane0_p");}
    if (VL_UNLIKELY((lane0_n & 0xfeU))) {
        Verilated::overWidthError("lane0_n");}
    if (VL_UNLIKELY((lane1_p & 0xfeU))) {
        Verilated::overWidthError("lane1_p");}
    if (VL_UNLIKELY((lane1_n & 0xfeU))) {
        Verilated::overWidthError("lane1_n");}
}
#endif  // VL_DEBUG
