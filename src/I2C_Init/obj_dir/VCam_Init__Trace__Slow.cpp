// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCam_Init__Syms.h"


//======================

void VCam_Init::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VCam_Init::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCam_Init__Syms* __restrict vlSymsp = static_cast<VCam_Init__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VCam_Init::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VCam_Init::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VCam_Init__Syms* __restrict vlSymsp = static_cast<VCam_Init__Syms*>(userp);
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VCam_Init::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VCam_Init__Syms* __restrict vlSymsp = static_cast<VCam_Init__Syms*>(userp);
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+22,"clk400", false,-1);
        tracep->declBit(c+23,"reset", false,-1);
        tracep->declBit(c+24,"init", false,-1);
        tracep->declBit(c+25,"sda", false,-1);
        tracep->declBit(c+26,"scl", false,-1);
        tracep->declBit(c+27,"cam_ready", false,-1);
        tracep->declBit(c+22,"Cam_Init clk400", false,-1);
        tracep->declBit(c+23,"Cam_Init reset", false,-1);
        tracep->declBit(c+24,"Cam_Init init", false,-1);
        tracep->declBit(c+25,"Cam_Init sda", false,-1);
        tracep->declBit(c+26,"Cam_Init scl", false,-1);
        tracep->declBit(c+27,"Cam_Init cam_ready", false,-1);
        tracep->declBit(c+1,"Cam_Init send_data", false,-1);
        tracep->declBit(c+28,"Cam_Init cam_ready_r", false,-1);
        tracep->declBit(c+2,"Cam_Init ready", false,-1);
        tracep->declBit(c+3,"Cam_Init ready_old", false,-1);
        tracep->declBit(c+4,"Cam_Init cam_ready0", false,-1);
        tracep->declBus(c+5,"Cam_Init datain", false,-1, 7,0);
        tracep->declBus(c+6,"Cam_Init slave_addr", false,-1, 7,0);
        tracep->declBus(c+7,"Cam_Init state", false,-1, 7,0);
        tracep->declBus(c+8,"Cam_Init register_in", false,-1, 15,0);
        tracep->declBit(c+9,"Cam_Init initia", false,-1);
        tracep->declBit(c+10,"Cam_Init init_old", false,-1);
        tracep->declBus(c+11,"Cam_Init counter", false,-1, 31,0);
        tracep->declBus(c+29,"Cam_Init idle", false,-1, 7,0);
        tracep->declBus(c+30,"Cam_Init init_s", false,-1, 7,0);
        tracep->declBus(c+31,"Cam_Init wakeup", false,-1, 7,0);
        tracep->declBus(c+32,"Cam_Init dataint", false,-1, 31,0);
        tracep->declBit(c+12,"Cam_Init cam0 valid", false,-1);
        tracep->declBit(c+22,"Cam_Init cam0 clk400kHz", false,-1);
        tracep->declBit(c+23,"Cam_Init cam0 reset", false,-1);
        tracep->declBit(c+1,"Cam_Init cam0 send_data", false,-1);
        tracep->declBit(c+33,"Cam_Init cam0 r_w", false,-1);
        tracep->declBus(c+5,"Cam_Init cam0 datain", false,-1, 7,0);
        tracep->declBus(c+8,"Cam_Init cam0 register_in", false,-1, 15,0);
        tracep->declBus(c+13,"Cam_Init cam0 slave_addr", false,-1, 6,0);
        tracep->declBit(c+34,"Cam_Init cam0 ackn", false,-1);
        tracep->declBit(c+26,"Cam_Init cam0 scl", false,-1);
        tracep->declBit(c+25,"Cam_Init cam0 sda", false,-1);
        tracep->declBit(c+2,"Cam_Init cam0 ready", false,-1);
        tracep->declBus(c+29,"Cam_Init cam0 idle", false,-1, 7,0);
        tracep->declBus(c+30,"Cam_Init cam0 start", false,-1, 7,0);
        tracep->declBus(c+31,"Cam_Init cam0 send", false,-1, 7,0);
        tracep->declBus(c+35,"Cam_Init cam0 reg0", false,-1, 7,0);
        tracep->declBus(c+36,"Cam_Init cam0 reg1", false,-1, 7,0);
        tracep->declBus(c+37,"Cam_Init cam0 data", false,-1, 7,0);
        tracep->declBus(c+38,"Cam_Init cam0 stop", false,-1, 7,0);
        tracep->declBit(c+12,"Cam_Init cam0 valid_r", false,-1);
        tracep->declBus(c+14,"Cam_Init cam0 state", false,-1, 7,0);
        tracep->declBit(c+15,"Cam_Init cam0 send_data_old", false,-1);
        tracep->declBit(c+16,"Cam_Init cam0 rising_edge", false,-1);
        tracep->declBus(c+17,"Cam_Init cam0 counter", false,-1, 31,0);
        tracep->declBit(c+18,"Cam_Init cam0 sda0", false,-1);
        tracep->declBit(c+19,"Cam_Init cam0 sending", false,-1);
        tracep->declQuad(c+20,"Cam_Init cam0 i2cdata", false,-1, 36,0);
        tracep->declQuad(c+39,"Cam_Init cam0 i2cin", false,-1, 36,0);
        tracep->declBit(c+2,"Cam_Init cam0 ready0", false,-1);
        tracep->declBus(c+29,"Cam_Init cam0 clkcount", false,-1, 7,0);
        tracep->declBit(c+41,"Cam_Init cam0 clkdelay0", false,-1);
        tracep->declBit(c+42,"Cam_Init cam0 clkdelay1", false,-1);
        tracep->declBit(c+43,"Cam_Init cam0 scl0", false,-1);
        tracep->declBit(c+44,"Cam_Init cam0 scl1", false,-1);
        tracep->declBit(c+45,"Cam_Init cam0 scl2", false,-1);
    }
}

void VCam_Init::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VCam_Init::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VCam_Init__Syms* __restrict vlSymsp = static_cast<VCam_Init__Syms*>(userp);
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VCam_Init::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VCam_Init__Syms* __restrict vlSymsp = static_cast<VCam_Init__Syms*>(userp);
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->Cam_Init__DOT__send_data));
        tracep->fullBit(oldp+2,(vlTOPp->Cam_Init__DOT__cam0__DOT__ready0));
        tracep->fullBit(oldp+3,(vlTOPp->Cam_Init__DOT__ready_old));
        tracep->fullBit(oldp+4,(vlTOPp->Cam_Init__DOT__cam_ready0));
        tracep->fullCData(oldp+5,(vlTOPp->Cam_Init__DOT__datain),8);
        tracep->fullCData(oldp+6,(vlTOPp->Cam_Init__DOT__slave_addr),8);
        tracep->fullCData(oldp+7,(vlTOPp->Cam_Init__DOT__state),8);
        tracep->fullSData(oldp+8,(vlTOPp->Cam_Init__DOT__register_in),16);
        tracep->fullBit(oldp+9,(vlTOPp->Cam_Init__DOT__initia));
        tracep->fullBit(oldp+10,(vlTOPp->Cam_Init__DOT__init_old));
        tracep->fullIData(oldp+11,(vlTOPp->Cam_Init__DOT__counter),32);
        tracep->fullBit(oldp+12,(vlTOPp->Cam_Init__DOT__cam0__DOT__valid_r));
        tracep->fullCData(oldp+13,((0x7fU & (IData)(vlTOPp->Cam_Init__DOT__slave_addr))),7);
        tracep->fullCData(oldp+14,(vlTOPp->Cam_Init__DOT__cam0__DOT__state),8);
        tracep->fullBit(oldp+15,(vlTOPp->Cam_Init__DOT__cam0__DOT__send_data_old));
        tracep->fullBit(oldp+16,(vlTOPp->Cam_Init__DOT__cam0__DOT__rising_edge));
        tracep->fullIData(oldp+17,(vlTOPp->Cam_Init__DOT__cam0__DOT__counter),32);
        tracep->fullBit(oldp+18,(vlTOPp->Cam_Init__DOT__cam0__DOT__sda0));
        tracep->fullBit(oldp+19,(vlTOPp->Cam_Init__DOT__cam0__DOT__sending));
        tracep->fullQData(oldp+20,((((QData)((IData)(
                                                     (0x7fU 
                                                      & (IData)(vlTOPp->Cam_Init__DOT__slave_addr)))) 
                                     << 0x1eU) | (QData)((IData)(
                                                                 (0x10080402U 
                                                                  | ((0xff00000U 
                                                                      & ((IData)(vlTOPp->Cam_Init__DOT__register_in) 
                                                                         << 0xcU)) 
                                                                     | ((0x7f800U 
                                                                         & ((IData)(vlTOPp->Cam_Init__DOT__register_in) 
                                                                            << 0xbU)) 
                                                                        | ((IData)(vlTOPp->Cam_Init__DOT__datain) 
                                                                           << 2U)))))))),37);
        tracep->fullBit(oldp+22,(vlTOPp->clk400));
        tracep->fullBit(oldp+23,(vlTOPp->reset));
        tracep->fullBit(oldp+24,(vlTOPp->init));
        tracep->fullBit(oldp+25,(vlTOPp->sda));
        tracep->fullBit(oldp+26,(vlTOPp->scl));
        tracep->fullBit(oldp+27,(vlTOPp->cam_ready));
        tracep->fullBit(oldp+28,(vlTOPp->Cam_Init__DOT__cam_ready_r));
        tracep->fullCData(oldp+29,(0U),8);
        tracep->fullCData(oldp+30,(1U),8);
        tracep->fullCData(oldp+31,(2U),8);
        tracep->fullIData(oldp+32,(7U),32);
        tracep->fullBit(oldp+33,(vlTOPp->Cam_Init__DOT__cam0__DOT__r_w));
        tracep->fullBit(oldp+34,(0U));
        tracep->fullCData(oldp+35,(3U),8);
        tracep->fullCData(oldp+36,(4U),8);
        tracep->fullCData(oldp+37,(5U),8);
        tracep->fullCData(oldp+38,(6U),8);
        tracep->fullQData(oldp+39,(0ULL),37);
        tracep->fullBit(oldp+41,(vlTOPp->Cam_Init__DOT__cam0__DOT__clkdelay0));
        tracep->fullBit(oldp+42,(vlTOPp->Cam_Init__DOT__cam0__DOT__clkdelay1));
        tracep->fullBit(oldp+43,(vlTOPp->Cam_Init__DOT__cam0__DOT__scl0));
        tracep->fullBit(oldp+44,(vlTOPp->Cam_Init__DOT__cam0__DOT__scl1));
        tracep->fullBit(oldp+45,(vlTOPp->Cam_Init__DOT__cam0__DOT__scl2));
    }
}
