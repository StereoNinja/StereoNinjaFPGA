// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vulx3s_pass_through__Syms.h"


void Vulx3s_pass_through::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vulx3s_pass_through__Syms* __restrict vlSymsp = static_cast<Vulx3s_pass_through__Syms*>(userp);
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vulx3s_pass_through::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vulx3s_pass_through__Syms* __restrict vlSymsp = static_cast<Vulx3s_pass_through__Syms*>(userp);
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_r));
            tracep->chgBit(oldp+1,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_b));
            tracep->chgBit(oldp+2,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_g));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+3,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sda0));
            tracep->chgBit(oldp+4,(((IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sending)
                                     ? (1U & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__clk400)))
                                     : 1U)));
            tracep->chgBit(oldp+5,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam_ready0));
            tracep->chgBit(oldp+6,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__send_data));
            tracep->chgBit(oldp+7,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__ready0));
            tracep->chgBit(oldp+8,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__ready_old));
            tracep->chgCData(oldp+9,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__datain),8);
            tracep->chgCData(oldp+10,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__slave_addr),8);
            tracep->chgCData(oldp+11,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__state),8);
            tracep->chgSData(oldp+12,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__register_in),16);
            tracep->chgBit(oldp+13,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__initia));
            tracep->chgBit(oldp+14,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__init_old));
            tracep->chgIData(oldp+15,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__counter),32);
            tracep->chgBit(oldp+16,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__valid_r));
            tracep->chgCData(oldp+17,((0x7fU & (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__slave_addr))),7);
            tracep->chgCData(oldp+18,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__state),8);
            tracep->chgBit(oldp+19,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__send_data_old));
            tracep->chgBit(oldp+20,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__rising_edge));
            tracep->chgIData(oldp+21,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__counter),32);
            tracep->chgBit(oldp+22,(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__cam0__DOT__sending));
            tracep->chgQData(oldp+23,((((QData)((IData)(
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__slave_addr)))) 
                                        << 0x1eU) | (QData)((IData)(
                                                                    (0x10080402U 
                                                                     | ((0xff00000U 
                                                                         & ((IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__register_in) 
                                                                            << 0xcU)) 
                                                                        | ((0x7f800U 
                                                                            & ((IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__register_in) 
                                                                               << 0xbU)) 
                                                                           | ((IData)(vlTOPp->ulx3s_pass_through__DOT__i2c__DOT__datain) 
                                                                              << 2U)))))))),37);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+25,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_mod10),4);
            tracep->chgSData(oldp+26,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_red),10);
            tracep->chgSData(oldp+27,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_green),10);
            tracep->chgSData(oldp+28,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_blue),10);
            tracep->chgBit(oldp+29,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_load));
            tracep->chgBit(oldp+30,((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_red))));
            tracep->chgBit(oldp+31,((1U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_red) 
                                           >> 1U))));
            tracep->chgBit(oldp+32,((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_green))));
            tracep->chgBit(oldp+33,((1U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_green) 
                                           >> 1U))));
            tracep->chgBit(oldp+34,((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_blue))));
            tracep->chgBit(oldp+35,((1U & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__TMDS_shift_blue) 
                                           >> 1U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+36,((0xffU & ((((
                                                   ((((1U 
                                                       & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                          >> 1U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                         >> 2U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                        >> 3U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 4U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 5U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                     >> 6U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 7U))))),8);
            tracep->chgCData(oldp+37,((0xffU & ((((
                                                   ((((1U 
                                                       & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m))) 
                                                      + 
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                           >> 1U)))) 
                                                     + 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                          >> 2U)))) 
                                                    + 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                         >> 3U)))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                        >> 4U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 5U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 6U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 7U)))))),8);
            tracep->chgSData(oldp+38,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m),9);
            tracep->chgBit(oldp+39,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p1));
            tracep->chgBit(oldp+40,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p2));
            tracep->chgCData(oldp+41,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p3),8);
            tracep->chgIData(oldp+42,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt0),32);
            tracep->chgIData(oldp+43,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt1),32);
            tracep->chgIData(oldp+44,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt2),32);
            tracep->chgIData(oldp+45,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt3),32);
            tracep->chgIData(oldp+46,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt),32);
            tracep->chgCData(oldp+47,((0xffU & ((((
                                                   ((((1U 
                                                       & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                          >> 1U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                         >> 2U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                        >> 3U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 4U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 5U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                     >> 6U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 7U))))),8);
            tracep->chgCData(oldp+48,((0xffU & ((((
                                                   ((((1U 
                                                       & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m))) 
                                                      + 
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                           >> 1U)))) 
                                                     + 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                          >> 2U)))) 
                                                    + 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                         >> 3U)))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                        >> 4U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 5U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 6U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 7U)))))),8);
            tracep->chgSData(oldp+49,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m),9);
            tracep->chgBit(oldp+50,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p1));
            tracep->chgBit(oldp+51,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p2));
            tracep->chgCData(oldp+52,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p3),8);
            tracep->chgIData(oldp+53,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt0),32);
            tracep->chgIData(oldp+54,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt1),32);
            tracep->chgIData(oldp+55,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt2),32);
            tracep->chgIData(oldp+56,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt3),32);
            tracep->chgIData(oldp+57,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt),32);
            tracep->chgCData(oldp+58,((0xffU & ((((
                                                   ((((1U 
                                                       & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                          >> 1U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                         >> 2U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                        >> 3U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 4U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 5U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                     >> 6U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 7U))))),8);
            tracep->chgCData(oldp+59,((0xffU & ((((
                                                   ((((1U 
                                                       & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m))) 
                                                      + 
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                           >> 1U)))) 
                                                     + 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                          >> 2U)))) 
                                                    + 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                         >> 3U)))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                        >> 4U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 5U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 6U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 7U)))))),8);
            tracep->chgSData(oldp+60,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m),9);
            tracep->chgBit(oldp+61,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p1));
            tracep->chgBit(oldp+62,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p2));
            tracep->chgCData(oldp+63,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p3),8);
            tracep->chgIData(oldp+64,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt0),32);
            tracep->chgIData(oldp+65,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt1),32);
            tracep->chgIData(oldp+66,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt2),32);
            tracep->chgIData(oldp+67,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt3),32);
            tracep->chgIData(oldp+68,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgIData(oldp+69,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r),21);
            tracep->chgCData(oldp+70,(vlTOPp->ulx3s_pass_through__DOT__red_v),8);
            tracep->chgIData(oldp+71,(vlTOPp->ulx3s_pass_through__DOT__ramdata),32);
            tracep->chgIData(oldp+72,(vlTOPp->ulx3s_pass_through__DOT__color_w),32);
            tracep->chgCData(oldp+73,(vlTOPp->ulx3s_pass_through__DOT__counter),8);
            tracep->chgIData(oldp+74,((0x1ffffU & (vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__addr_r 
                                                   >> 2U))),17);
            tracep->chgSData(oldp+75,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX),11);
            tracep->chgSData(oldp+76,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY),11);
            tracep->chgBit(oldp+77,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__hSync));
            tracep->chgBit(oldp+78,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__vSync));
            tracep->chgCData(oldp+79,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__DrawArea),2);
            tracep->chgSData(oldp+80,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out1),10);
            tracep->chgSData(oldp+81,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out1),10);
            tracep->chgSData(oldp+82,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out1),10);
            tracep->chgCData(oldp+83,(((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY))
                                        ? 0U : ((1U 
                                                 & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX))
                                                 ? 
                                                (0xffU 
                                                 & (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))
                                                 : 0U))),8);
            tracep->chgCData(oldp+84,((0xffU & ((1U 
                                                 & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX))
                                                  ? (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v)
                                                  : 0U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX))
                                                  ? 0U
                                                  : (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))))),8);
            tracep->chgCData(oldp+85,(((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterY))
                                        ? ((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__CounterX))
                                            ? 0U : 
                                           (0xffU & (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v)))
                                        : 0U)),8);
            tracep->chgCData(oldp+86,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr),2);
            tracep->chgIData(oldp+87,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__cnt_old),32);
            tracep->chgCData(oldp+88,((0xffU & ((((
                                                   ((((1U 
                                                       & (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                          >> 1U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                         >> 2U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                        >> 3U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                       >> 4U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                      >> 5U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                     >> 6U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                      >> 7U))))),8);
            tracep->chgCData(oldp+89,((0xffU & ((((
                                                   ((((1U 
                                                       & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))) 
                                                      + 
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                           >> 1U)))) 
                                                     + 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                          >> 2U)))) 
                                                    + 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                         >> 3U)))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                        >> 4U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                       >> 5U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                      >> 6U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through__DOT__red_v) 
                                                       >> 7U)))))),8);
            tracep->chgBit(oldp+90,((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__red_v))));
            tracep->chgBit(oldp+91,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m1));
            tracep->chgBit(oldp+92,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m2));
            tracep->chgBit(oldp+93,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m3));
            tracep->chgBit(oldp+94,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m4));
            tracep->chgBit(oldp+95,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m5));
            tracep->chgBit(oldp+96,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m6));
            tracep->chgBit(oldp+97,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m7));
            tracep->chgBit(oldp+98,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_m8));
            tracep->chgSData(oldp+99,(((2U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                        ? ((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                            ? 0x2abU
                                            : 0x154U)
                                        : ((1U & (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                            ? 0xabU
                                            : 0x354U))),11);
            tracep->chgIData(oldp+100,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__cnt_old),32);
            tracep->chgBit(oldp+101,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m1));
            tracep->chgBit(oldp+102,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m2));
            tracep->chgBit(oldp+103,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m3));
            tracep->chgBit(oldp+104,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m4));
            tracep->chgBit(oldp+105,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m5));
            tracep->chgBit(oldp+106,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m6));
            tracep->chgBit(oldp+107,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m7));
            tracep->chgBit(oldp+108,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_m8));
            tracep->chgIData(oldp+109,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__cnt_old),32);
            tracep->chgBit(oldp+110,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m1));
            tracep->chgBit(oldp+111,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m2));
            tracep->chgBit(oldp+112,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m3));
            tracep->chgBit(oldp+113,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m4));
            tracep->chgBit(oldp+114,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m5));
            tracep->chgBit(oldp+115,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m6));
            tracep->chgBit(oldp+116,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m7));
            tracep->chgBit(oldp+117,(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_m8));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+118,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r2));
            tracep->chgBit(oldp+119,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r0));
            tracep->chgBit(oldp+120,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__SYNC__DOT__eclki_r1));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+121,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_2));
            tracep->chgCData(oldp+122,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div2__DOT__counter),8);
            tracep->chgBit(oldp+123,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__A));
            tracep->chgBit(oldp+124,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__C));
            tracep->chgBit(oldp+125,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__A));
            tracep->chgBit(oldp+126,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__C));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+127,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__B));
            tracep->chgBit(oldp+128,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__D1));
            tracep->chgBit(oldp+129,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__B));
            tracep->chgBit(oldp+130,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__D1));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgCData(oldp+131,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__q_o_r),4);
            tracep->chgCData(oldp+132,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__q_o_r),4);
            tracep->chgCData(oldp+133,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__ov_fl_r),2);
            tracep->chgCData(oldp+134,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__ov_fl_r),2);
            tracep->chgBit(oldp+135,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__even_r));
            tracep->chgBit(oldp+136,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_4));
            tracep->chgCData(oldp+137,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r),8);
            tracep->chgCData(oldp+138,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte1_r),8);
            tracep->chgCData(oldp+139,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r),8);
            tracep->chgCData(oldp+140,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte1_r),8);
            tracep->chgCData(oldp+141,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div4__DOT__counter),8);
            tracep->chgBit(oldp+142,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__sync_r));
            tracep->chgCData(oldp+143,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__syncbyte),8);
            tracep->chgCData(oldp+144,((0xb8U ^ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__syncbyte))),8);
            tracep->chgCData(oldp+145,((0x2eU ^ (0x3fU 
                                                 & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__syncbyte)))),8);
            tracep->chgBit(oldp+146,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__even_r));
            tracep->chgBit(oldp+147,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r));
            tracep->chgCData(oldp+148,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__syncbyte),8);
            tracep->chgCData(oldp+149,((0xb8U ^ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__syncbyte))),8);
            tracep->chgCData(oldp+150,((0x2eU ^ (0x3fU 
                                                 & (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__syncbyte)))),8);
            tracep->chgCData(oldp+151,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__counter),8);
            tracep->chgCData(oldp+152,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r_old),8);
            tracep->chgSData(oldp+153,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r_s),16);
            tracep->chgCData(oldp+154,(((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__even_r)
                                         ? (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte0_r)
                                         : (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA0__DOT__byte1_r))),8);
            tracep->chgCData(oldp+155,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__counter),8);
            tracep->chgCData(oldp+156,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r_old),8);
            tracep->chgSData(oldp+157,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r_s),16);
            tracep->chgCData(oldp+158,(((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__even_r)
                                         ? (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte0_r)
                                         : (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BA1__DOT__byte1_r))),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgBit(oldp+159,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync_mipi_clk_8));
            tracep->chgCData(oldp+160,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__div8__DOT__counter),8);
            tracep->chgBit(oldp+161,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__valid_r));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgIData(oldp+162,((0x1ffffU & vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr)),17);
            tracep->chgIData(oldp+163,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__data_o_r),32);
            tracep->chgIData(oldp+164,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cX_r),32);
            tracep->chgIData(oldp+165,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__cY_r),32);
            tracep->chgIData(oldp+166,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter_addr),32);
            tracep->chgBit(oldp+167,(vlTOPp->ulx3s_pass_through__DOT__debug3__out__out11));
            tracep->chgBit(oldp+168,(vlTOPp->ulx3s_pass_through__DOT__debug2__out__out10));
            tracep->chgBit(oldp+169,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__rec_data_r));
            tracep->chgBit(oldp+170,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__state));
            tracep->chgBit(oldp+171,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__valid_old));
            tracep->chgIData(oldp+172,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__counter),32);
            tracep->chgIData(oldp+173,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__count_val),32);
            tracep->chgSData(oldp+174,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgIData(oldp+175,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__data_r),32);
            tracep->chgCData(oldp+176,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__type_o_r),6);
            tracep->chgSData(oldp+177,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__wordcount_r),16);
            tracep->chgIData(oldp+178,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r),32);
            tracep->chgIData(oldp+179,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__out_r_old),32);
            tracep->chgBit(oldp+180,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__start));
            tracep->chgIData(oldp+181,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__counter),32);
            tracep->chgCData(oldp+182,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__ecc),8);
            tracep->chgCData(oldp+183,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__syndrom),8);
            tracep->chgIData(oldp+184,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__correction),24);
            tracep->chgIData(oldp+185,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__DE__DOT__regheader_correct),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+186,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__term_r));
            tracep->chgBit(oldp+187,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__debug0_r));
            tracep->chgBit(oldp+188,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r));
            tracep->chgCData(oldp+189,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__state_mipi),8);
            tracep->chgIData(oldp+190,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_tou),32);
            tracep->chgIData(oldp+191,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_term),32);
            tracep->chgIData(oldp+192,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__timer_hs),32);
        }
        tracep->chgBit(oldp+193,(vlTOPp->pixclk));
        tracep->chgBit(oldp+194,(vlTOPp->cam0_sda));
        tracep->chgBit(oldp+195,(vlTOPp->cam0_scl));
        tracep->chgBit(oldp+196,(vlTOPp->debug0));
        tracep->chgBit(oldp+197,(vlTOPp->debug1));
        tracep->chgBit(oldp+198,(vlTOPp->debug2));
        tracep->chgBit(oldp+199,(vlTOPp->debug3));
        tracep->chgBit(oldp+200,(vlTOPp->reset));
        tracep->chgBit(oldp+201,(vlTOPp->btn));
        tracep->chgBit(oldp+202,(vlTOPp->fire));
        tracep->chgBit(oldp+203,(vlTOPp->cam0_clk));
        tracep->chgBit(oldp+204,(vlTOPp->cam0_d0));
        tracep->chgBit(oldp+205,(vlTOPp->cam0_d1));
        tracep->chgBit(oldp+206,(vlTOPp->cam0_d0_r_p));
        tracep->chgBit(oldp+207,(vlTOPp->cam0_d0_r_n));
        tracep->chgBit(oldp+208,(vlTOPp->cam0_d1_r_p));
        tracep->chgBit(oldp+209,(vlTOPp->cam0_d1_r_n));
        tracep->chgBit(oldp+210,(vlTOPp->cam0_clk_r_p));
        tracep->chgBit(oldp+211,(vlTOPp->cam0_clk_r_n));
        tracep->chgCData(oldp+212,(vlTOPp->led),8);
        tracep->chgCData(oldp+213,(vlTOPp->TMDSd),4);
        tracep->chgBit(oldp+214,(vlTOPp->ftdi_rxd));
        tracep->chgBit(oldp+215,(vlTOPp->ftdi_txden));
        tracep->chgBit(oldp+216,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__rec_data));
        tracep->chgBit(oldp+217,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__sync));
        tracep->chgCData(oldp+218,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL0__DOT__byte_o_r),8);
        tracep->chgCData(oldp+219,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__BAL1__DOT__byte_o_r),8);
        tracep->chgBit(oldp+220,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__valid));
        tracep->chgCData(oldp+221,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane0__DOT__ddr),4);
        tracep->chgBit(oldp+222,(((IData)(vlTOPp->reset) 
                                  | (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))));
        tracep->chgBit(oldp+223,(((IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__sync_r) 
                                  & (~ (IData)(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r)))));
        tracep->chgCData(oldp+224,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__lane1__DOT__ddr),4);
        tracep->chgSData(oldp+225,(vlTOPp->ulx3s_pass_through__DOT__mipi__DOT__Prot__DOT__c_calk),16);
        tracep->chgSData(oldp+226,(((IData)(vlTOPp->reset)
                                     ? 0U : (0x3ffU 
                                             & (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p1) 
                                                 << 9U) 
                                                | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p2) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder0__DOT__q_out2p3)))))),10);
        tracep->chgSData(oldp+227,(((IData)(vlTOPp->reset)
                                     ? 0U : (0x3ffU 
                                             & (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p1) 
                                                 << 9U) 
                                                | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p2) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder1__DOT__q_out2p3)))))),10);
        tracep->chgSData(oldp+228,(((IData)(vlTOPp->reset)
                                     ? 0U : (0x3ffU 
                                             & (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p1) 
                                                 << 9U) 
                                                | (((IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p2) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->ulx3s_pass_through__DOT__HDMI__DOT__encoder2__DOT__q_out2p3)))))),10);
    }
}

void Vulx3s_pass_through::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vulx3s_pass_through__Syms* __restrict vlSymsp = static_cast<Vulx3s_pass_through__Syms*>(userp);
    Vulx3s_pass_through* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
        vlTOPp->__Vm_traceActivity[7U] = 0U;
        vlTOPp->__Vm_traceActivity[8U] = 0U;
        vlTOPp->__Vm_traceActivity[9U] = 0U;
        vlTOPp->__Vm_traceActivity[0xaU] = 0U;
        vlTOPp->__Vm_traceActivity[0xbU] = 0U;
        vlTOPp->__Vm_traceActivity[0xcU] = 0U;
        vlTOPp->__Vm_traceActivity[0xdU] = 0U;
    }
}
