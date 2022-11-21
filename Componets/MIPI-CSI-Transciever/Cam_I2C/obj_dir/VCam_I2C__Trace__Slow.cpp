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
        tracep->declBit(c+6,"clk400kHz", false,-1);
        tracep->declBit(c+7,"reset", false,-1);
        tracep->declBit(c+8,"send_data", false,-1);
        tracep->declBus(c+9,"datain", false,-1, 7,0);
        tracep->declBus(c+10,"register_in", false,-1, 15,0);
        tracep->declBus(c+11,"slave_addr", false,-1, 7,0);
        tracep->declBit(c+12,"ackn", false,-1);
        tracep->declBit(c+13,"scl", false,-1);
        tracep->declBit(c+14,"sda", false,-1);
        tracep->declBit(c+6,"Cam_I2C clk400kHz", false,-1);
        tracep->declBit(c+7,"Cam_I2C reset", false,-1);
        tracep->declBit(c+8,"Cam_I2C send_data", false,-1);
        tracep->declBus(c+9,"Cam_I2C datain", false,-1, 7,0);
        tracep->declBus(c+10,"Cam_I2C register_in", false,-1, 15,0);
        tracep->declBus(c+11,"Cam_I2C slave_addr", false,-1, 7,0);
        tracep->declBit(c+12,"Cam_I2C ackn", false,-1);
        tracep->declBit(c+13,"Cam_I2C scl", false,-1);
        tracep->declBit(c+14,"Cam_I2C sda", false,-1);
        tracep->declBus(c+15,"Cam_I2C idle", false,-1, 7,0);
        tracep->declBus(c+16,"Cam_I2C adress", false,-1, 7,0);
        tracep->declBus(c+17,"Cam_I2C rw", false,-1, 7,0);
        tracep->declBus(c+18,"Cam_I2C reg0", false,-1, 7,0);
        tracep->declBus(c+19,"Cam_I2C reg1", false,-1, 7,0);
        tracep->declBus(c+20,"Cam_I2C data", false,-1, 7,0);
        tracep->declBus(c+1,"Cam_I2C state", false,-1, 7,0);
        tracep->declBit(c+2,"Cam_I2C send_data_old", false,-1);
        tracep->declBit(c+3,"Cam_I2C rising_edge", false,-1);
        tracep->declBus(c+4,"Cam_I2C counter", false,-1, 31,0);
        tracep->declBit(c+5,"Cam_I2C sda0", false,-1);
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
        tracep->fullCData(oldp+1,(vlTOPp->Cam_I2C__DOT__state),8);
        tracep->fullBit(oldp+2,(vlTOPp->Cam_I2C__DOT__send_data_old));
        tracep->fullBit(oldp+3,(vlTOPp->Cam_I2C__DOT__rising_edge));
        tracep->fullIData(oldp+4,(vlTOPp->Cam_I2C__DOT__counter),32);
        tracep->fullBit(oldp+5,(vlTOPp->Cam_I2C__DOT__sda0));
        tracep->fullBit(oldp+6,(vlTOPp->clk400kHz));
        tracep->fullBit(oldp+7,(vlTOPp->reset));
        tracep->fullBit(oldp+8,(vlTOPp->send_data));
        tracep->fullCData(oldp+9,(vlTOPp->datain),8);
        tracep->fullSData(oldp+10,(vlTOPp->register_in),16);
        tracep->fullCData(oldp+11,(vlTOPp->slave_addr),8);
        tracep->fullBit(oldp+12,(vlTOPp->ackn));
        tracep->fullBit(oldp+13,(vlTOPp->scl));
        tracep->fullBit(oldp+14,(vlTOPp->sda));
        tracep->fullCData(oldp+15,(0U),8);
        tracep->fullCData(oldp+16,(1U),8);
        tracep->fullCData(oldp+17,(2U),8);
        tracep->fullCData(oldp+18,(3U),8);
        tracep->fullCData(oldp+19,(4U),8);
        tracep->fullCData(oldp+20,(5U),8);
    }
}
