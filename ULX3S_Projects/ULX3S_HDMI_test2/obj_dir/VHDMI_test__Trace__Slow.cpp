// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHDMI_test__Syms.h"


//======================

void VHDMI_test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VHDMI_test::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VHDMI_test__Syms* __restrict vlSymsp = static_cast<VHDMI_test__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VHDMI_test::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VHDMI_test::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VHDMI_test__Syms* __restrict vlSymsp = static_cast<VHDMI_test__Syms*>(userp);
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VHDMI_test::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VHDMI_test__Syms* __restrict vlSymsp = static_cast<VHDMI_test__Syms*>(userp);
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+54,"pixclk", false,-1);
        tracep->declBit(c+55,"clk_TMDS", false,-1);
        tracep->declBus(c+56,"TMDSd", false,-1, 3,0);
        tracep->declBit(c+54,"HDMI_test pixclk", false,-1);
        tracep->declBit(c+55,"HDMI_test clk_TMDS", false,-1);
        tracep->declBus(c+56,"HDMI_test TMDSd", false,-1, 3,0);
        tracep->declBus(c+30,"HDMI_test CounterX", false,-1, 9,0);
        tracep->declBus(c+31,"HDMI_test CounterY", false,-1, 9,0);
        tracep->declBit(c+32,"HDMI_test hSync", false,-1);
        tracep->declBit(c+33,"HDMI_test vSync", false,-1);
        tracep->declBit(c+34,"HDMI_test DrawArea", false,-1);
        tracep->declBus(c+35,"HDMI_test W", false,-1, 7,0);
        tracep->declBus(c+36,"HDMI_test A", false,-1, 7,0);
        tracep->declBus(c+37,"HDMI_test red", false,-1, 7,0);
        tracep->declBus(c+38,"HDMI_test green", false,-1, 7,0);
        tracep->declBus(c+39,"HDMI_test blue", false,-1, 7,0);
        tracep->declBus(c+40,"HDMI_test TMDS_red", false,-1, 9,0);
        tracep->declBus(c+41,"HDMI_test TMDS_green", false,-1, 9,0);
        tracep->declBus(c+42,"HDMI_test TMDS_blue", false,-1, 9,0);
        tracep->declBit(c+61,"HDMI_test DCM_TMDS_CLKFX", false,-1);
        tracep->declBus(c+19,"HDMI_test TMDS_mod10", false,-1, 3,0);
        tracep->declBus(c+20,"HDMI_test TMDS_shift_red", false,-1, 9,0);
        tracep->declBus(c+21,"HDMI_test TMDS_shift_green", false,-1, 9,0);
        tracep->declBus(c+22,"HDMI_test TMDS_shift_blue", false,-1, 9,0);
        tracep->declBit(c+23,"HDMI_test TMDS_shift_load", false,-1);
        tracep->declBit(c+54,"HDMI_test encode_R clk", false,-1);
        tracep->declBus(c+37,"HDMI_test encode_R VD", false,-1, 7,0);
        tracep->declBus(c+62,"HDMI_test encode_R CD", false,-1, 1,0);
        tracep->declBit(c+34,"HDMI_test encode_R VDE", false,-1);
        tracep->declBus(c+40,"HDMI_test encode_R TMDS", false,-1, 9,0);
        tracep->declBus(c+43,"HDMI_test encode_R Nb1s", false,-1, 3,0);
        tracep->declBit(c+44,"HDMI_test encode_R XNOR", false,-1);
        tracep->declBus(c+1,"HDMI_test encode_R q_m", false,-1, 8,0);
        tracep->declBus(c+45,"HDMI_test encode_R balance_acc", false,-1, 3,0);
        tracep->declBus(c+2,"HDMI_test encode_R balance", false,-1, 3,0);
        tracep->declBit(c+3,"HDMI_test encode_R balance_sign_eq", false,-1);
        tracep->declBit(c+4,"HDMI_test encode_R invert_q_m", false,-1);
        tracep->declBus(c+5,"HDMI_test encode_R balance_acc_inc", false,-1, 3,0);
        tracep->declBus(c+57,"HDMI_test encode_R balance_acc_new", false,-1, 3,0);
        tracep->declBus(c+6,"HDMI_test encode_R TMDS_data", false,-1, 9,0);
        tracep->declBus(c+63,"HDMI_test encode_R TMDS_code", false,-1, 9,0);
        tracep->declBit(c+54,"HDMI_test encode_G clk", false,-1);
        tracep->declBus(c+38,"HDMI_test encode_G VD", false,-1, 7,0);
        tracep->declBus(c+62,"HDMI_test encode_G CD", false,-1, 1,0);
        tracep->declBit(c+34,"HDMI_test encode_G VDE", false,-1);
        tracep->declBus(c+41,"HDMI_test encode_G TMDS", false,-1, 9,0);
        tracep->declBus(c+46,"HDMI_test encode_G Nb1s", false,-1, 3,0);
        tracep->declBit(c+47,"HDMI_test encode_G XNOR", false,-1);
        tracep->declBus(c+7,"HDMI_test encode_G q_m", false,-1, 8,0);
        tracep->declBus(c+48,"HDMI_test encode_G balance_acc", false,-1, 3,0);
        tracep->declBus(c+8,"HDMI_test encode_G balance", false,-1, 3,0);
        tracep->declBit(c+9,"HDMI_test encode_G balance_sign_eq", false,-1);
        tracep->declBit(c+10,"HDMI_test encode_G invert_q_m", false,-1);
        tracep->declBus(c+11,"HDMI_test encode_G balance_acc_inc", false,-1, 3,0);
        tracep->declBus(c+58,"HDMI_test encode_G balance_acc_new", false,-1, 3,0);
        tracep->declBus(c+12,"HDMI_test encode_G TMDS_data", false,-1, 9,0);
        tracep->declBus(c+63,"HDMI_test encode_G TMDS_code", false,-1, 9,0);
        tracep->declBit(c+54,"HDMI_test encode_B clk", false,-1);
        tracep->declBus(c+39,"HDMI_test encode_B VD", false,-1, 7,0);
        tracep->declBus(c+49,"HDMI_test encode_B CD", false,-1, 1,0);
        tracep->declBit(c+34,"HDMI_test encode_B VDE", false,-1);
        tracep->declBus(c+42,"HDMI_test encode_B TMDS", false,-1, 9,0);
        tracep->declBus(c+50,"HDMI_test encode_B Nb1s", false,-1, 3,0);
        tracep->declBit(c+51,"HDMI_test encode_B XNOR", false,-1);
        tracep->declBus(c+13,"HDMI_test encode_B q_m", false,-1, 8,0);
        tracep->declBus(c+52,"HDMI_test encode_B balance_acc", false,-1, 3,0);
        tracep->declBus(c+14,"HDMI_test encode_B balance", false,-1, 3,0);
        tracep->declBit(c+15,"HDMI_test encode_B balance_sign_eq", false,-1);
        tracep->declBit(c+16,"HDMI_test encode_B invert_q_m", false,-1);
        tracep->declBus(c+17,"HDMI_test encode_B balance_acc_inc", false,-1, 3,0);
        tracep->declBus(c+59,"HDMI_test encode_B balance_acc_new", false,-1, 3,0);
        tracep->declBus(c+18,"HDMI_test encode_B TMDS_data", false,-1, 9,0);
        tracep->declBus(c+53,"HDMI_test encode_B TMDS_code", false,-1, 9,0);
        tracep->declBit(c+24,"HDMI_test OBUFDS_red I", false,-1);
        tracep->declBit(c+24,"HDMI_test OBUFDS_red O", false,-1);
        tracep->declBit(c+25,"HDMI_test OBUFDS_red OB", false,-1);
        tracep->declBit(c+26,"HDMI_test OBUFDS_green I", false,-1);
        tracep->declBit(c+26,"HDMI_test OBUFDS_green O", false,-1);
        tracep->declBit(c+27,"HDMI_test OBUFDS_green OB", false,-1);
        tracep->declBit(c+28,"HDMI_test OBUFDS_blue I", false,-1);
        tracep->declBit(c+28,"HDMI_test OBUFDS_blue O", false,-1);
        tracep->declBit(c+29,"HDMI_test OBUFDS_blue OB", false,-1);
        tracep->declBit(c+54,"HDMI_test OBUFDS_clock I", false,-1);
        tracep->declBit(c+54,"HDMI_test OBUFDS_clock O", false,-1);
        tracep->declBit(c+60,"HDMI_test OBUFDS_clock OB", false,-1);
    }
}

void VHDMI_test::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VHDMI_test::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VHDMI_test__Syms* __restrict vlSymsp = static_cast<VHDMI_test__Syms*>(userp);
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VHDMI_test::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VHDMI_test__Syms* __restrict vlSymsp = static_cast<VHDMI_test__Syms*>(userp);
    VHDMI_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m),9);
        tracep->fullCData(oldp+2,(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance),4);
        tracep->fullBit(oldp+3,(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_sign_eq));
        tracep->fullBit(oldp+4,(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m));
        tracep->fullCData(oldp+5,(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc),4);
        tracep->fullSData(oldp+6,((((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m) 
                                    << 9U) | ((0x100U 
                                               & (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m)) 
                                              | (0xffU 
                                                 & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__q_m) 
                                                    ^ 
                                                    (- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m)))))))),10);
        tracep->fullSData(oldp+7,(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m),9);
        tracep->fullCData(oldp+8,(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance),4);
        tracep->fullBit(oldp+9,(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_sign_eq));
        tracep->fullBit(oldp+10,(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m));
        tracep->fullCData(oldp+11,(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc),4);
        tracep->fullSData(oldp+12,((((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m) 
                                     << 9U) | ((0x100U 
                                                & (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m)) 
                                               | (0xffU 
                                                  & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__q_m) 
                                                     ^ 
                                                     (- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m)))))))),10);
        tracep->fullSData(oldp+13,(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m),9);
        tracep->fullCData(oldp+14,(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance),4);
        tracep->fullBit(oldp+15,(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_sign_eq));
        tracep->fullBit(oldp+16,(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m));
        tracep->fullCData(oldp+17,(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc),4);
        tracep->fullSData(oldp+18,((((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m) 
                                     << 9U) | ((0x100U 
                                                & (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m)) 
                                               | (0xffU 
                                                  & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__q_m) 
                                                     ^ 
                                                     (- (IData)((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m)))))))),10);
        tracep->fullCData(oldp+19,(vlTOPp->HDMI_test__DOT__TMDS_mod10),4);
        tracep->fullSData(oldp+20,(vlTOPp->HDMI_test__DOT__TMDS_shift_red),10);
        tracep->fullSData(oldp+21,(vlTOPp->HDMI_test__DOT__TMDS_shift_green),10);
        tracep->fullSData(oldp+22,(vlTOPp->HDMI_test__DOT__TMDS_shift_blue),10);
        tracep->fullBit(oldp+23,(vlTOPp->HDMI_test__DOT__TMDS_shift_load));
        tracep->fullBit(oldp+24,((1U & (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_red))));
        tracep->fullBit(oldp+25,((1U & (~ (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_red)))));
        tracep->fullBit(oldp+26,((1U & (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_green))));
        tracep->fullBit(oldp+27,((1U & (~ (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_green)))));
        tracep->fullBit(oldp+28,((1U & (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_blue))));
        tracep->fullBit(oldp+29,((1U & (~ (IData)(vlTOPp->HDMI_test__DOT__TMDS_shift_blue)))));
        tracep->fullSData(oldp+30,(vlTOPp->HDMI_test__DOT__CounterX),10);
        tracep->fullSData(oldp+31,(vlTOPp->HDMI_test__DOT__CounterY),10);
        tracep->fullBit(oldp+32,(vlTOPp->HDMI_test__DOT__hSync));
        tracep->fullBit(oldp+33,(vlTOPp->HDMI_test__DOT__vSync));
        tracep->fullBit(oldp+34,(vlTOPp->HDMI_test__DOT__DrawArea));
        tracep->fullCData(oldp+35,(vlTOPp->HDMI_test__DOT__W),8);
        tracep->fullCData(oldp+36,(vlTOPp->HDMI_test__DOT__A),8);
        tracep->fullCData(oldp+37,(vlTOPp->HDMI_test__DOT__red),8);
        tracep->fullCData(oldp+38,(vlTOPp->HDMI_test__DOT__green),8);
        tracep->fullCData(oldp+39,(vlTOPp->HDMI_test__DOT__blue),8);
        tracep->fullSData(oldp+40,(vlTOPp->HDMI_test__DOT__TMDS_red),10);
        tracep->fullSData(oldp+41,(vlTOPp->HDMI_test__DOT__TMDS_green),10);
        tracep->fullSData(oldp+42,(vlTOPp->HDMI_test__DOT__TMDS_blue),10);
        tracep->fullCData(oldp+43,(vlTOPp->HDMI_test__DOT__encode_R__DOT__Nb1s),4);
        tracep->fullBit(oldp+44,(vlTOPp->HDMI_test__DOT__encode_R__DOT__XNOR));
        tracep->fullCData(oldp+45,(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc),4);
        tracep->fullCData(oldp+46,(vlTOPp->HDMI_test__DOT__encode_G__DOT__Nb1s),4);
        tracep->fullBit(oldp+47,(vlTOPp->HDMI_test__DOT__encode_G__DOT__XNOR));
        tracep->fullCData(oldp+48,(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc),4);
        tracep->fullCData(oldp+49,(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD),2);
        tracep->fullCData(oldp+50,(vlTOPp->HDMI_test__DOT__encode_B__DOT__Nb1s),4);
        tracep->fullBit(oldp+51,(vlTOPp->HDMI_test__DOT__encode_B__DOT__XNOR));
        tracep->fullCData(oldp+52,(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc),4);
        tracep->fullSData(oldp+53,(((2U & (IData)(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD))
                                     ? ((1U & (IData)(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD))
                                         ? 0x2abU : 0x154U)
                                     : ((1U & (IData)(vlTOPp->HDMI_test__DOT____Vcellinp__encode_B__CD))
                                         ? 0xabU : 0x354U))),10);
        tracep->fullBit(oldp+54,(vlTOPp->pixclk));
        tracep->fullBit(oldp+55,(vlTOPp->clk_TMDS));
        tracep->fullCData(oldp+56,(vlTOPp->TMDSd),4);
        tracep->fullCData(oldp+57,((0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__invert_q_m)
                                             ? ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc) 
                                                - (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc))
                                             : ((IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc) 
                                                + (IData)(vlTOPp->HDMI_test__DOT__encode_R__DOT__balance_acc_inc))))),4);
        tracep->fullCData(oldp+58,((0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__invert_q_m)
                                             ? ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc) 
                                                - (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc))
                                             : ((IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc) 
                                                + (IData)(vlTOPp->HDMI_test__DOT__encode_G__DOT__balance_acc_inc))))),4);
        tracep->fullCData(oldp+59,((0xfU & ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__invert_q_m)
                                             ? ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc) 
                                                - (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc))
                                             : ((IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc) 
                                                + (IData)(vlTOPp->HDMI_test__DOT__encode_B__DOT__balance_acc_inc))))),4);
        tracep->fullBit(oldp+60,((1U & (~ (IData)(vlTOPp->pixclk)))));
        tracep->fullBit(oldp+61,(vlTOPp->HDMI_test__DOT__DCM_TMDS_CLKFX));
        tracep->fullCData(oldp+62,(0U),2);
        tracep->fullSData(oldp+63,(0x354U),10);
    }
}
