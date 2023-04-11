// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCam_Init__Syms.h"


void VCam_Init::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VCam_Init__Syms* __restrict vlSymsp = static_cast<VCam_Init__Syms*>(userp);
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VCam_Init::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VCam_Init__Syms* __restrict vlSymsp = static_cast<VCam_Init__Syms*>(userp);
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->Cam_Init__DOT__send_data));
            tracep->chgBit(oldp+1,(vlTOPp->Cam_Init__DOT__cam0__DOT__ready0));
            tracep->chgBit(oldp+2,(vlTOPp->Cam_Init__DOT__ready_old));
            tracep->chgBit(oldp+3,(vlTOPp->Cam_Init__DOT__cam_ready0));
            tracep->chgCData(oldp+4,(vlTOPp->Cam_Init__DOT__datain),8);
            tracep->chgCData(oldp+5,(vlTOPp->Cam_Init__DOT__slave_addr),8);
            tracep->chgCData(oldp+6,(vlTOPp->Cam_Init__DOT__state),8);
            tracep->chgSData(oldp+7,(vlTOPp->Cam_Init__DOT__register_in),16);
            tracep->chgBit(oldp+8,(vlTOPp->Cam_Init__DOT__initia));
            tracep->chgBit(oldp+9,(vlTOPp->Cam_Init__DOT__init_old));
            tracep->chgIData(oldp+10,(vlTOPp->Cam_Init__DOT__counter),32);
            tracep->chgBit(oldp+11,(vlTOPp->Cam_Init__DOT__cam0__DOT__valid_r));
            tracep->chgCData(oldp+12,((0x7fU & (IData)(vlTOPp->Cam_Init__DOT__slave_addr))),7);
            tracep->chgCData(oldp+13,(vlTOPp->Cam_Init__DOT__cam0__DOT__state),8);
            tracep->chgBit(oldp+14,(vlTOPp->Cam_Init__DOT__cam0__DOT__send_data_old));
            tracep->chgBit(oldp+15,(vlTOPp->Cam_Init__DOT__cam0__DOT__rising_edge));
            tracep->chgIData(oldp+16,(vlTOPp->Cam_Init__DOT__cam0__DOT__counter),32);
            tracep->chgBit(oldp+17,(vlTOPp->Cam_Init__DOT__cam0__DOT__sda0));
            tracep->chgBit(oldp+18,(vlTOPp->Cam_Init__DOT__cam0__DOT__sending));
            tracep->chgQData(oldp+19,((((QData)((IData)(
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
        }
        tracep->chgBit(oldp+21,(vlTOPp->clk400));
        tracep->chgBit(oldp+22,(vlTOPp->reset));
        tracep->chgBit(oldp+23,(vlTOPp->init));
        tracep->chgBit(oldp+24,(vlTOPp->sda));
        tracep->chgBit(oldp+25,(vlTOPp->scl));
        tracep->chgBit(oldp+26,(vlTOPp->cam_ready));
    }
}

void VCam_Init::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VCam_Init__Syms* __restrict vlSymsp = static_cast<VCam_Init__Syms*>(userp);
    VCam_Init* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
