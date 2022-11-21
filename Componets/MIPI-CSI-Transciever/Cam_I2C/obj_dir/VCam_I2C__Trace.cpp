// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCam_I2C__Syms.h"


void VCam_I2C::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VCam_I2C__Syms* __restrict vlSymsp = static_cast<VCam_I2C__Syms*>(userp);
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VCam_I2C::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VCam_I2C__Syms* __restrict vlSymsp = static_cast<VCam_I2C__Syms*>(userp);
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->Cam_I2C__DOT__state),8);
            tracep->chgBit(oldp+1,(vlTOPp->Cam_I2C__DOT__send_data_old));
            tracep->chgBit(oldp+2,(vlTOPp->Cam_I2C__DOT__rising_edge));
            tracep->chgIData(oldp+3,(vlTOPp->Cam_I2C__DOT__counter),32);
            tracep->chgBit(oldp+4,(vlTOPp->Cam_I2C__DOT__sda0));
        }
        tracep->chgBit(oldp+5,(vlTOPp->clk400kHz));
        tracep->chgBit(oldp+6,(vlTOPp->reset));
        tracep->chgBit(oldp+7,(vlTOPp->send_data));
        tracep->chgCData(oldp+8,(vlTOPp->datain),8);
        tracep->chgSData(oldp+9,(vlTOPp->register_in),16);
        tracep->chgCData(oldp+10,(vlTOPp->slave_addr),8);
        tracep->chgBit(oldp+11,(vlTOPp->ackn));
        tracep->chgBit(oldp+12,(vlTOPp->scl));
        tracep->chgBit(oldp+13,(vlTOPp->sda));
    }
}

void VCam_I2C::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VCam_I2C__Syms* __restrict vlSymsp = static_cast<VCam_I2C__Syms*>(userp);
    VCam_I2C* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
