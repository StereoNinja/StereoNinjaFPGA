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
            tracep->chgBit(oldp+0,(vlTOPp->Cam_I2C__DOT__valid_r));
            tracep->chgCData(oldp+1,(vlTOPp->Cam_I2C__DOT__state),8);
            tracep->chgBit(oldp+2,(vlTOPp->Cam_I2C__DOT__send_data_old));
            tracep->chgBit(oldp+3,(vlTOPp->Cam_I2C__DOT__rising_edge));
            tracep->chgIData(oldp+4,(vlTOPp->Cam_I2C__DOT__counter),32);
            tracep->chgBit(oldp+5,(vlTOPp->Cam_I2C__DOT__sda0));
            tracep->chgBit(oldp+6,(vlTOPp->Cam_I2C__DOT__sending));
            tracep->chgBit(oldp+7,(vlTOPp->Cam_I2C__DOT__ready0));
        }
        tracep->chgBit(oldp+8,(vlTOPp->valid));
        tracep->chgBit(oldp+9,(vlTOPp->clk400kHz));
        tracep->chgBit(oldp+10,(vlTOPp->reset));
        tracep->chgBit(oldp+11,(vlTOPp->send_data));
        tracep->chgBit(oldp+12,(vlTOPp->r_w));
        tracep->chgCData(oldp+13,(vlTOPp->datain),8);
        tracep->chgSData(oldp+14,(vlTOPp->register_in),16);
        tracep->chgCData(oldp+15,(vlTOPp->slave_addr),7);
        tracep->chgBit(oldp+16,(vlTOPp->ackn));
        tracep->chgBit(oldp+17,(vlTOPp->scl));
        tracep->chgBit(oldp+18,(vlTOPp->sda));
        tracep->chgBit(oldp+19,(vlTOPp->ready));
        tracep->chgQData(oldp+20,((((QData)((IData)(vlTOPp->slave_addr)) 
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
