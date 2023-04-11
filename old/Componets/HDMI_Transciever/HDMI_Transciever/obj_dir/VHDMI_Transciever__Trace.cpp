// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHDMI_Transciever__Syms.h"


void VHDMI_Transciever::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VHDMI_Transciever::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgSData(oldp+0,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m),9);
            tracep->chgBit(oldp+1,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m1));
            tracep->chgBit(oldp+2,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m2));
            tracep->chgBit(oldp+3,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m3));
            tracep->chgBit(oldp+4,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m4));
            tracep->chgBit(oldp+5,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m5));
            tracep->chgBit(oldp+6,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m6));
            tracep->chgBit(oldp+7,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m7));
            tracep->chgBit(oldp+8,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_m8));
            tracep->chgSData(oldp+9,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m),9);
            tracep->chgBit(oldp+10,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m1));
            tracep->chgBit(oldp+11,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m2));
            tracep->chgBit(oldp+12,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m3));
            tracep->chgBit(oldp+13,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m4));
            tracep->chgBit(oldp+14,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m5));
            tracep->chgBit(oldp+15,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m6));
            tracep->chgBit(oldp+16,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m7));
            tracep->chgBit(oldp+17,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_m8));
            tracep->chgSData(oldp+18,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m),9);
            tracep->chgBit(oldp+19,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m1));
            tracep->chgBit(oldp+20,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m2));
            tracep->chgBit(oldp+21,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m3));
            tracep->chgBit(oldp+22,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m4));
            tracep->chgBit(oldp+23,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m5));
            tracep->chgBit(oldp+24,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m6));
            tracep->chgBit(oldp+25,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m7));
            tracep->chgBit(oldp+26,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_m8));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+27,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterX),10);
            tracep->chgSData(oldp+28,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterY),10);
            tracep->chgBit(oldp+29,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__hSync));
            tracep->chgBit(oldp+30,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__vSync));
            tracep->chgCData(oldp+31,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__DrawArea),2);
            tracep->chgCData(oldp+32,((0xffU & (- (IData)(
                                                          ((0xffU 
                                                            & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterX)) 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterY))))))),8);
            tracep->chgCData(oldp+33,((0xffU & (- (IData)(
                                                          ((2U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterX) 
                                                                >> 5U))) 
                                                           & (2U 
                                                              == 
                                                              (7U 
                                                               & ((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__CounterY) 
                                                                  >> 5U)))))))),8);
            tracep->chgSData(oldp+34,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out1),10);
            tracep->chgSData(oldp+35,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out1),10);
            tracep->chgSData(oldp+36,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out1),10);
            tracep->chgCData(oldp+37,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT____Vcellinp__encoder0__H_VSync_Ctr),2);
            tracep->chgIData(oldp+38,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt_old),32);
            tracep->chgBit(oldp+39,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p1));
            tracep->chgBit(oldp+40,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p2));
            tracep->chgCData(oldp+41,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p3),8);
            tracep->chgSData(oldp+42,((((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p1) 
                                        << 9U) | (((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p2) 
                                                   << 8U) 
                                                  | (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__q_out2p3)))),10);
            tracep->chgIData(oldp+43,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt0),32);
            tracep->chgIData(oldp+44,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt1),32);
            tracep->chgIData(oldp+45,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt2),32);
            tracep->chgIData(oldp+46,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt3),32);
            tracep->chgIData(oldp+47,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder0__DOT__cnt),32);
            tracep->chgIData(oldp+48,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt_old),32);
            tracep->chgBit(oldp+49,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p1));
            tracep->chgBit(oldp+50,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p2));
            tracep->chgCData(oldp+51,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p3),8);
            tracep->chgSData(oldp+52,((((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p1) 
                                        << 9U) | (((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p2) 
                                                   << 8U) 
                                                  | (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__q_out2p3)))),10);
            tracep->chgIData(oldp+53,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt0),32);
            tracep->chgIData(oldp+54,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt1),32);
            tracep->chgIData(oldp+55,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt2),32);
            tracep->chgIData(oldp+56,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt3),32);
            tracep->chgIData(oldp+57,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder1__DOT__cnt),32);
            tracep->chgIData(oldp+58,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt_old),32);
            tracep->chgBit(oldp+59,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p1));
            tracep->chgBit(oldp+60,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p2));
            tracep->chgCData(oldp+61,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p3),8);
            tracep->chgSData(oldp+62,((((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p1) 
                                        << 9U) | (((IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p2) 
                                                   << 8U) 
                                                  | (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__q_out2p3)))),10);
            tracep->chgIData(oldp+63,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt0),32);
            tracep->chgIData(oldp+64,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt1),32);
            tracep->chgIData(oldp+65,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt2),32);
            tracep->chgIData(oldp+66,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt3),32);
            tracep->chgIData(oldp+67,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__encoder2__DOT__cnt),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+68,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_mod10),4);
            tracep->chgSData(oldp+69,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_red),10);
            tracep->chgSData(oldp+70,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_green),10);
            tracep->chgSData(oldp+71,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_blue),10);
            tracep->chgBit(oldp+72,(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_load));
            tracep->chgBit(oldp+73,((1U & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_red))));
            tracep->chgBit(oldp+74,((1U & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_red)))));
            tracep->chgBit(oldp+75,((1U & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_green))));
            tracep->chgBit(oldp+76,((1U & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_green)))));
            tracep->chgBit(oldp+77,((1U & (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_blue))));
            tracep->chgBit(oldp+78,((1U & (~ (IData)(vlTOPp->HDMI_Transciever__DOT__hdmi__DOT__TMDS_shift_blue)))));
        }
        tracep->chgBit(oldp+79,(vlTOPp->clk_low));
        tracep->chgBit(oldp+80,(vlTOPp->clk_high));
        tracep->chgBit(oldp+81,(vlTOPp->reset));
        tracep->chgBit(oldp+82,(vlTOPp->red));
        tracep->chgBit(oldp+83,(vlTOPp->green));
        tracep->chgBit(oldp+84,(vlTOPp->blue));
        tracep->chgBit(oldp+85,(vlTOPp->clock));
        tracep->chgIData(oldp+86,(vlTOPp->ram_addr),26);
        tracep->chgCData(oldp+87,(vlTOPp->ram_green),8);
        tracep->chgCData(oldp+88,(vlTOPp->ram_blue),8);
        tracep->chgCData(oldp+89,(vlTOPp->ram_red),8);
        tracep->chgSData(oldp+90,(vlTOPp->blue_r),10);
        tracep->chgSData(oldp+91,(vlTOPp->green_r),10);
        tracep->chgSData(oldp+92,(vlTOPp->red_r),10);
        tracep->chgCData(oldp+93,(vlTOPp->HDMI_Transciever__DOT____Vcellout__hdmi__TMDSd),4);
        tracep->chgBit(oldp+94,((1U & (~ (IData)(vlTOPp->clk_low)))));
    }
}

void VHDMI_Transciever::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VHDMI_Transciever__Syms* __restrict vlSymsp = static_cast<VHDMI_Transciever__Syms*>(userp);
    VHDMI_Transciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
