// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCam_I2C__Syms.h"


//======================

void VCam_I2C::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VCam_I2C::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCam_I2C__Syms* __restrict vlSymsp = static_cast<VCam_I2C__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VCam_I2C::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VCam_I2C::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VCam_I2C__Syms* __restrict vlSymsp = static_cast<VCam_I2C__Syms*>(userp);
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VCam_I2C::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VCam_I2C__Syms* __restrict vlSymsp = static_cast<VCam_I2C__Syms*>(userp);
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+9,"valid", false,-1);
        tracep->declBit(c+10,"clk400kHz", false,-1);
        tracep->declBit(c+11,"reset", false,-1);
        tracep->declBit(c+12,"send_data", false,-1);
        tracep->declBit(c+13,"r_w", false,-1);
        tracep->declBus(c+14,"datain", false,-1, 7,0);
        tracep->declBus(c+15,"register_in", false,-1, 15,0);
        tracep->declBus(c+16,"slave_addr", false,-1, 6,0);
        tracep->declBit(c+17,"ackn", false,-1);
        tracep->declBit(c+18,"scl", false,-1);
        tracep->declBit(c+19,"sda", false,-1);
        tracep->declBit(c+20,"ready", false,-1);
        tracep->declBit(c+9,"Cam_I2C valid", false,-1);
        tracep->declBit(c+10,"Cam_I2C clk400kHz", false,-1);
        tracep->declBit(c+11,"Cam_I2C reset", false,-1);
        tracep->declBit(c+12,"Cam_I2C send_data", false,-1);
        tracep->declBit(c+13,"Cam_I2C r_w", false,-1);
        tracep->declBus(c+14,"Cam_I2C datain", false,-1, 7,0);
        tracep->declBus(c+15,"Cam_I2C register_in", false,-1, 15,0);
        tracep->declBus(c+16,"Cam_I2C slave_addr", false,-1, 6,0);
        tracep->declBit(c+17,"Cam_I2C ackn", false,-1);
        tracep->declBit(c+18,"Cam_I2C scl", false,-1);
        tracep->declBit(c+19,"Cam_I2C sda", false,-1);
        tracep->declBit(c+20,"Cam_I2C ready", false,-1);
        tracep->declBus(c+23,"Cam_I2C idle", false,-1, 7,0);
        tracep->declBus(c+24,"Cam_I2C start", false,-1, 7,0);
        tracep->declBus(c+25,"Cam_I2C send", false,-1, 7,0);
        tracep->declBus(c+26,"Cam_I2C reg0", false,-1, 7,0);
        tracep->declBus(c+27,"Cam_I2C reg1", false,-1, 7,0);
        tracep->declBus(c+28,"Cam_I2C data", false,-1, 7,0);
        tracep->declBus(c+29,"Cam_I2C stop", false,-1, 7,0);
        tracep->declBit(c+1,"Cam_I2C valid_r", false,-1);
        tracep->declBus(c+2,"Cam_I2C state", false,-1, 7,0);
        tracep->declBit(c+3,"Cam_I2C send_data_old", false,-1);
        tracep->declBit(c+4,"Cam_I2C rising_edge", false,-1);
        tracep->declBus(c+5,"Cam_I2C counter", false,-1, 31,0);
        tracep->declBit(c+6,"Cam_I2C sda0", false,-1);
        tracep->declBit(c+7,"Cam_I2C sending", false,-1);
        tracep->declQuad(c+21,"Cam_I2C i2cdata", false,-1, 36,0);
        tracep->declQuad(c+30,"Cam_I2C i2cin", false,-1, 36,0);
        tracep->declBit(c+8,"Cam_I2C ready0", false,-1);
        tracep->declBus(c+23,"Cam_I2C clkcount", false,-1, 7,0);
        tracep->declBit(c+32,"Cam_I2C clkdelay0", false,-1);
        tracep->declBit(c+33,"Cam_I2C clkdelay1", false,-1);
        tracep->declBit(c+34,"Cam_I2C scl0", false,-1);
        tracep->declBit(c+35,"Cam_I2C scl1", false,-1);
        tracep->declBit(c+36,"Cam_I2C scl2", false,-1);
    }
}

void VCam_I2C::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VCam_I2C::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VCam_I2C__Syms* __restrict vlSymsp = static_cast<VCam_I2C__Syms*>(userp);
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VCam_I2C::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VCam_I2C__Syms* __restrict vlSymsp = static_cast<VCam_I2C__Syms*>(userp);
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->Cam_I2C__DOT__valid_r));
        tracep->fullCData(oldp+2,(vlTOPp->Cam_I2C__DOT__state),8);
        tracep->fullBit(oldp+3,(vlTOPp->Cam_I2C__DOT__send_data_old));
        tracep->fullBit(oldp+4,(vlTOPp->Cam_I2C__DOT__rising_edge));
        tracep->fullIData(oldp+5,(vlTOPp->Cam_I2C__DOT__counter),32);
        tracep->fullBit(oldp+6,(vlTOPp->Cam_I2C__DOT__sda0));
        tracep->fullBit(oldp+7,(vlTOPp->Cam_I2C__DOT__sending));
        tracep->fullBit(oldp+8,(vlTOPp->Cam_I2C__DOT__ready0));
        tracep->fullBit(oldp+9,(vlTOPp->valid));
        tracep->fullBit(oldp+10,(vlTOPp->clk400kHz));
        tracep->fullBit(oldp+11,(vlTOPp->reset));
        tracep->fullBit(oldp+12,(vlTOPp->send_data));
        tracep->fullBit(oldp+13,(vlTOPp->r_w));
        tracep->fullCData(oldp+14,(vlTOPp->datain),8);
        tracep->fullSData(oldp+15,(vlTOPp->register_in),16);
        tracep->fullCData(oldp+16,(vlTOPp->slave_addr),7);
        tracep->fullBit(oldp+17,(vlTOPp->ackn));
        tracep->fullBit(oldp+18,(vlTOPp->scl));
        tracep->fullBit(oldp+19,(vlTOPp->sda));
        tracep->fullBit(oldp+20,(vlTOPp->ready));
        tracep->fullQData(oldp+21,((((QData)((IData)(vlTOPp->slave_addr)) 
                                     << 0x1eU) | (QData)((IData)(
                                                                 (0x10080402U 
                                                                  | ((0xff00000U 
                                                                      & ((IData)(vlTOPp->register_in) 
                                                                         << 0xcU)) 
                                                                     | ((0x7f800U 
                                                                         & ((IData)(vlTOPp->register_in) 
                                                                            << 0xbU)) 
                                                                        | ((IData)(vlTOPp->datain) 
                                                                           << 2U)))))))),37);
        tracep->fullCData(oldp+23,(0U),8);
        tracep->fullCData(oldp+24,(1U),8);
        tracep->fullCData(oldp+25,(2U),8);
        tracep->fullCData(oldp+26,(3U),8);
        tracep->fullCData(oldp+27,(4U),8);
        tracep->fullCData(oldp+28,(5U),8);
        tracep->fullCData(oldp+29,(6U),8);
        tracep->fullQData(oldp+30,(0ULL),37);
        tracep->fullBit(oldp+32,(vlTOPp->Cam_I2C__DOT__clkdelay0));
        tracep->fullBit(oldp+33,(vlTOPp->Cam_I2C__DOT__clkdelay1));
        tracep->fullBit(oldp+34,(vlTOPp->Cam_I2C__DOT__scl0));
        tracep->fullBit(oldp+35,(vlTOPp->Cam_I2C__DOT__scl1));
        tracep->fullBit(oldp+36,(vlTOPp->Cam_I2C__DOT__scl2));
    }
}
