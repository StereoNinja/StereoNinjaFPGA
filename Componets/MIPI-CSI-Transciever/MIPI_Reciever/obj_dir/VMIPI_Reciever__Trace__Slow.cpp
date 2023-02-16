// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMIPI_Reciever__Syms.h"


//======================

void VMIPI_Reciever::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VMIPI_Reciever::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMIPI_Reciever__Syms* __restrict vlSymsp = static_cast<VMIPI_Reciever__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VMIPI_Reciever::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VMIPI_Reciever::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VMIPI_Reciever__Syms* __restrict vlSymsp = static_cast<VMIPI_Reciever__Syms*>(userp);
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VMIPI_Reciever::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VMIPI_Reciever__Syms* __restrict vlSymsp = static_cast<VMIPI_Reciever__Syms*>(userp);
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+64,"sys_clk", false,-1);
        tracep->declBit(c+65,"reset", false,-1);
        tracep->declBit(c+66,"lane0_d", false,-1);
        tracep->declBit(c+67,"mipi_clk", false,-1);
        tracep->declBit(c+68,"mipi_clk_8", false,-1);
        tracep->declBit(c+69,"lane1_d", false,-1);
        tracep->declBit(c+70,"lane0_p", false,-1);
        tracep->declBit(c+71,"lane0_n", false,-1);
        tracep->declBit(c+72,"lane1_p", false,-1);
        tracep->declBit(c+73,"lane1_n", false,-1);
        tracep->declBus(c+74,"data_o", false,-1, 31,0);
        tracep->declBus(c+75,"adress_out", false,-1, 31,0);
        tracep->declBit(c+76,"ram_clk", false,-1);
        tracep->declBit(c+77,"debug0", false,-1);
        tracep->declBit(c+78,"debug1", false,-1);
        tracep->declBit(c+79,"debug2", false,-1);
        tracep->declBit(c+80,"termination", false,-1);
        tracep->declBit(c+64,"MIPI_Reciever sys_clk", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever reset", false,-1);
        tracep->declBit(c+66,"MIPI_Reciever lane0_d", false,-1);
        tracep->declBit(c+67,"MIPI_Reciever mipi_clk", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever mipi_clk_8", false,-1);
        tracep->declBit(c+69,"MIPI_Reciever lane1_d", false,-1);
        tracep->declBit(c+70,"MIPI_Reciever lane0_p", false,-1);
        tracep->declBit(c+71,"MIPI_Reciever lane0_n", false,-1);
        tracep->declBit(c+72,"MIPI_Reciever lane1_p", false,-1);
        tracep->declBit(c+73,"MIPI_Reciever lane1_n", false,-1);
        tracep->declBus(c+74,"MIPI_Reciever data_o", false,-1, 31,0);
        tracep->declBus(c+75,"MIPI_Reciever adress_out", false,-1, 31,0);
        tracep->declBit(c+76,"MIPI_Reciever ram_clk", false,-1);
        tracep->declBit(c+77,"MIPI_Reciever debug0", false,-1);
        tracep->declBit(c+78,"MIPI_Reciever debug1", false,-1);
        tracep->declBit(c+79,"MIPI_Reciever debug2", false,-1);
        tracep->declBit(c+80,"MIPI_Reciever termination", false,-1);
        tracep->declBit(c+48,"MIPI_Reciever termination_r", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever stop_clk", false,-1);
        tracep->declBit(c+1,"MIPI_Reciever rec_data", false,-1);
        tracep->declBus(c+86,"MIPI_Reciever lane0byte", false,-1, 7,0);
        tracep->declBus(c+87,"MIPI_Reciever lane1byte", false,-1, 7,0);
        tracep->declBus(c+14,"MIPI_Reciever q_o_0", false,-1, 3,0);
        tracep->declBus(c+15,"MIPI_Reciever q_o_1", false,-1, 3,0);
        tracep->declBus(c+16,"MIPI_Reciever ov_fl_0", false,-1, 1,0);
        tracep->declBus(c+17,"MIPI_Reciever ov_fl_1", false,-1, 1,0);
        tracep->declBit(c+18,"MIPI_Reciever even", false,-1);
        tracep->declBit(c+2,"MIPI_Reciever sync", false,-1);
        tracep->declBit(c+3,"MIPI_Reciever sync_mipi_clk", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever sync_mipi_clk_2", false,-1);
        tracep->declBit(c+19,"MIPI_Reciever sync_mipi_clk_4", false,-1);
        tracep->declBit(c+40,"MIPI_Reciever sync_mipi_clk_8", false,-1);
        tracep->declBus(c+20,"MIPI_Reciever byte_e_0", false,-1, 7,0);
        tracep->declBus(c+21,"MIPI_Reciever byte_ue_0", false,-1, 7,0);
        tracep->declBus(c+22,"MIPI_Reciever byte_e_1", false,-1, 7,0);
        tracep->declBus(c+23,"MIPI_Reciever byte_ue_1", false,-1, 7,0);
        tracep->declBus(c+81,"MIPI_Reciever byte_o_0", false,-1, 7,0);
        tracep->declBus(c+82,"MIPI_Reciever byte_o_1", false,-1, 7,0);
        tracep->declBus(c+88,"MIPI_Reciever data", false,-1, 31,0);
        tracep->declBit(c+61,"MIPI_Reciever valid", false,-1);
        tracep->declBus(c+62,"MIPI_Reciever type_w", false,-1, 5,0);
        tracep->declBus(c+63,"MIPI_Reciever wordcount", false,-1, 15,0);
        tracep->declBit(c+64,"MIPI_Reciever RxFSM clk100MHz", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever RxFSM reset", false,-1);
        tracep->declBit(c+1,"MIPI_Reciever RxFSM rec_data", false,-1);
        tracep->declBit(c+70,"MIPI_Reciever RxFSM lane0_p", false,-1);
        tracep->declBit(c+71,"MIPI_Reciever RxFSM lane0_n", false,-1);
        tracep->declBit(c+72,"MIPI_Reciever RxFSM lane1_p", false,-1);
        tracep->declBit(c+73,"MIPI_Reciever RxFSM lane1_n", false,-1);
        tracep->declBit(c+89,"MIPI_Reciever RxFSM stop_tran", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever RxFSM stop_rx", false,-1);
        tracep->declBit(c+48,"MIPI_Reciever RxFSM term", false,-1);
        tracep->declBit(c+77,"MIPI_Reciever RxFSM debug0", false,-1);
        tracep->declBit(c+90,"MIPI_Reciever RxFSM debug1", false,-1);
        tracep->declBus(c+91,"MIPI_Reciever RxFSM TIMEOUT", false,-1, 7,0);
        tracep->declBus(c+92,"MIPI_Reciever RxFSM LP11", false,-1, 7,0);
        tracep->declBus(c+93,"MIPI_Reciever RxFSM LP01", false,-1, 7,0);
        tracep->declBus(c+94,"MIPI_Reciever RxFSM LP00", false,-1, 7,0);
        tracep->declBus(c+95,"MIPI_Reciever RxFSM SYNC", false,-1, 7,0);
        tracep->declBus(c+96,"MIPI_Reciever RxFSM HEADER", false,-1, 7,0);
        tracep->declBus(c+97,"MIPI_Reciever RxFSM DATA", false,-1, 7,0);
        tracep->declBus(c+98,"MIPI_Reciever RxFSM Tlpx", false,-1, 31,0);
        tracep->declBus(c+99,"MIPI_Reciever RxFSM Timeout", false,-1, 31,0);
        tracep->declBus(c+98,"MIPI_Reciever RxFSM Tdterm", false,-1, 31,0);
        tracep->declBus(c+100,"MIPI_Reciever RxFSM Thssettle", false,-1, 31,0);
        tracep->declBus(c+50,"MIPI_Reciever RxFSM state_mipi", false,-1, 7,0);
        tracep->declBus(c+51,"MIPI_Reciever RxFSM timer_tou", false,-1, 31,0);
        tracep->declBus(c+52,"MIPI_Reciever RxFSM timer_term", false,-1, 31,0);
        tracep->declBus(c+53,"MIPI_Reciever RxFSM timer_hs", false,-1, 31,0);
        tracep->declBit(c+67,"MIPI_Reciever SYNC ECLKI", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever SYNC STOP", false,-1);
        tracep->declBit(c+3,"MIPI_Reciever SYNC ECLKO", false,-1);
        tracep->declBit(c+3,"MIPI_Reciever div2 CLKI", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever div2 RST", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever div2 CDIVX", false,-1);
        tracep->declBus(c+5,"MIPI_Reciever div2 counter", false,-1, 7,0);
        tracep->declBit(c+4,"MIPI_Reciever div4 CLKI", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever div4 RST", false,-1);
        tracep->declBit(c+19,"MIPI_Reciever div4 CDIVX", false,-1);
        tracep->declBus(c+24,"MIPI_Reciever div4 counter", false,-1, 7,0);
        tracep->declBit(c+19,"MIPI_Reciever div8 CLKI", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever div8 RST", false,-1);
        tracep->declBit(c+40,"MIPI_Reciever div8 CDIVX", false,-1);
        tracep->declBus(c+41,"MIPI_Reciever div8 counter", false,-1, 7,0);
        tracep->declBit(c+66,"MIPI_Reciever lane0 lane", false,-1);
        tracep->declBit(c+3,"MIPI_Reciever lane0 sync_mipi_clk", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever lane0 sync_mipi_clk_2", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever lane0 reset", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever lane0 stop", false,-1);
        tracep->declBus(c+14,"MIPI_Reciever lane0 q_o", false,-1, 3,0);
        tracep->declBus(c+16,"MIPI_Reciever lane0 ov_fl", false,-1, 1,0);
        tracep->declBit(c+18,"MIPI_Reciever lane0 even", false,-1);
        tracep->declBit(c+2,"MIPI_Reciever lane0 sync", false,-1);
        tracep->declBus(c+83,"MIPI_Reciever lane0 ddr", false,-1, 3,0);
        tracep->declBit(c+25,"MIPI_Reciever lane0 sync_r", false,-1);
        tracep->declBit(c+18,"MIPI_Reciever lane0 even_r", false,-1);
        tracep->declBus(c+14,"MIPI_Reciever lane0 q_o_r", false,-1, 3,0);
        tracep->declBus(c+26,"MIPI_Reciever lane0 ov_fl_r0", false,-1, 1,0);
        tracep->declBus(c+16,"MIPI_Reciever lane0 ov_fl_r1", false,-1, 1,0);
        tracep->declBus(c+27,"MIPI_Reciever lane0 syncbyte", false,-1, 7,0);
        tracep->declBus(c+28,"MIPI_Reciever lane0 detect_e", false,-1, 7,0);
        tracep->declBus(c+29,"MIPI_Reciever lane0 detect_ue", false,-1, 7,0);
        tracep->declBit(c+66,"MIPI_Reciever lane0 IDDR D", false,-1);
        tracep->declBit(c+3,"MIPI_Reciever lane0 IDDR ECLK", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever lane0 IDDR SCLK", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever lane0 IDDR RST", false,-1);
        tracep->declBit(c+6,"MIPI_Reciever lane0 IDDR Q0", false,-1);
        tracep->declBit(c+10,"MIPI_Reciever lane0 IDDR Q1", false,-1);
        tracep->declBit(c+7,"MIPI_Reciever lane0 IDDR Q2", false,-1);
        tracep->declBit(c+11,"MIPI_Reciever lane0 IDDR Q3", false,-1);
        tracep->declBit(c+6,"MIPI_Reciever lane0 IDDR A", false,-1);
        tracep->declBit(c+10,"MIPI_Reciever lane0 IDDR B", false,-1);
        tracep->declBit(c+7,"MIPI_Reciever lane0 IDDR C", false,-1);
        tracep->declBit(c+11,"MIPI_Reciever lane0 IDDR D1", false,-1);
        tracep->declBit(c+69,"MIPI_Reciever lane1 lane", false,-1);
        tracep->declBit(c+3,"MIPI_Reciever lane1 sync_mipi_clk", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever lane1 sync_mipi_clk_2", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever lane1 reset", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever lane1 stop", false,-1);
        tracep->declBus(c+15,"MIPI_Reciever lane1 q_o", false,-1, 3,0);
        tracep->declBus(c+17,"MIPI_Reciever lane1 ov_fl", false,-1, 1,0);
        tracep->declBit(c+30,"MIPI_Reciever lane1 even", false,-1);
        tracep->declBit(c+84,"MIPI_Reciever lane1 sync", false,-1);
        tracep->declBus(c+85,"MIPI_Reciever lane1 ddr", false,-1, 3,0);
        tracep->declBit(c+31,"MIPI_Reciever lane1 sync_r", false,-1);
        tracep->declBit(c+30,"MIPI_Reciever lane1 even_r", false,-1);
        tracep->declBus(c+15,"MIPI_Reciever lane1 q_o_r", false,-1, 3,0);
        tracep->declBus(c+32,"MIPI_Reciever lane1 ov_fl_r0", false,-1, 1,0);
        tracep->declBus(c+17,"MIPI_Reciever lane1 ov_fl_r1", false,-1, 1,0);
        tracep->declBus(c+33,"MIPI_Reciever lane1 syncbyte", false,-1, 7,0);
        tracep->declBus(c+34,"MIPI_Reciever lane1 detect_e", false,-1, 7,0);
        tracep->declBus(c+35,"MIPI_Reciever lane1 detect_ue", false,-1, 7,0);
        tracep->declBit(c+69,"MIPI_Reciever lane1 IDDR D", false,-1);
        tracep->declBit(c+3,"MIPI_Reciever lane1 IDDR ECLK", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever lane1 IDDR SCLK", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever lane1 IDDR RST", false,-1);
        tracep->declBit(c+8,"MIPI_Reciever lane1 IDDR Q0", false,-1);
        tracep->declBit(c+12,"MIPI_Reciever lane1 IDDR Q1", false,-1);
        tracep->declBit(c+9,"MIPI_Reciever lane1 IDDR Q2", false,-1);
        tracep->declBit(c+13,"MIPI_Reciever lane1 IDDR Q3", false,-1);
        tracep->declBit(c+8,"MIPI_Reciever lane1 IDDR A", false,-1);
        tracep->declBit(c+12,"MIPI_Reciever lane1 IDDR B", false,-1);
        tracep->declBit(c+9,"MIPI_Reciever lane1 IDDR C", false,-1);
        tracep->declBit(c+13,"MIPI_Reciever lane1 IDDR D1", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever BA0 reset", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever BA0 stop", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever BA0 mipi_clk_2", false,-1);
        tracep->declBus(c+14,"MIPI_Reciever BA0 q_o", false,-1, 3,0);
        tracep->declBus(c+16,"MIPI_Reciever BA0 ov_fl", false,-1, 1,0);
        tracep->declBus(c+20,"MIPI_Reciever BA0 byte_e", false,-1, 7,0);
        tracep->declBus(c+21,"MIPI_Reciever BA0 byte_ue", false,-1, 7,0);
        tracep->declBus(c+20,"MIPI_Reciever BA0 byte0_r", false,-1, 7,0);
        tracep->declBus(c+21,"MIPI_Reciever BA0 byte1_r", false,-1, 7,0);
        tracep->declBit(c+65,"MIPI_Reciever BA1 reset", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever BA1 stop", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever BA1 mipi_clk_2", false,-1);
        tracep->declBus(c+15,"MIPI_Reciever BA1 q_o", false,-1, 3,0);
        tracep->declBus(c+17,"MIPI_Reciever BA1 ov_fl", false,-1, 1,0);
        tracep->declBus(c+22,"MIPI_Reciever BA1 byte_e", false,-1, 7,0);
        tracep->declBus(c+23,"MIPI_Reciever BA1 byte_ue", false,-1, 7,0);
        tracep->declBus(c+22,"MIPI_Reciever BA1 byte0_r", false,-1, 7,0);
        tracep->declBus(c+23,"MIPI_Reciever BA1 byte1_r", false,-1, 7,0);
        tracep->declBit(c+65,"MIPI_Reciever BAL0 reset", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever BAL0 stop", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever BAL0 mipi_clk_2", false,-1);
        tracep->declBit(c+2,"MIPI_Reciever BAL0 sync", false,-1);
        tracep->declBit(c+18,"MIPI_Reciever BAL0 even", false,-1);
        tracep->declBus(c+20,"MIPI_Reciever BAL0 byte_e", false,-1, 7,0);
        tracep->declBus(c+21,"MIPI_Reciever BAL0 byte_ue", false,-1, 7,0);
        tracep->declBus(c+81,"MIPI_Reciever BAL0 byte_o", false,-1, 7,0);
        tracep->declBus(c+81,"MIPI_Reciever BAL0 byte_o_r", false,-1, 7,0);
        tracep->declBus(c+36,"MIPI_Reciever BAL0 counter", false,-1, 7,0);
        tracep->declBus(c+37,"MIPI_Reciever BAL0 byte_o_eu", false,-1, 7,0);
        tracep->declBit(c+65,"MIPI_Reciever BAL1 reset", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever BAL1 stop", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever BAL1 mipi_clk_2", false,-1);
        tracep->declBit(c+2,"MIPI_Reciever BAL1 sync", false,-1);
        tracep->declBit(c+18,"MIPI_Reciever BAL1 even", false,-1);
        tracep->declBus(c+22,"MIPI_Reciever BAL1 byte_e", false,-1, 7,0);
        tracep->declBus(c+23,"MIPI_Reciever BAL1 byte_ue", false,-1, 7,0);
        tracep->declBus(c+82,"MIPI_Reciever BAL1 byte_o", false,-1, 7,0);
        tracep->declBus(c+82,"MIPI_Reciever BAL1 byte_o_r", false,-1, 7,0);
        tracep->declBus(c+38,"MIPI_Reciever BAL1 counter", false,-1, 7,0);
        tracep->declBus(c+39,"MIPI_Reciever BAL1 byte_o_eu", false,-1, 7,0);
        tracep->declBit(c+19,"MIPI_Reciever DE mipi_clk_4", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever DE reset", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever DE stop", false,-1);
        tracep->declBit(c+2,"MIPI_Reciever DE sync", false,-1);
        tracep->declBus(c+81,"MIPI_Reciever DE byte_in0", false,-1, 7,0);
        tracep->declBus(c+82,"MIPI_Reciever DE byte_in1", false,-1, 7,0);
        tracep->declBus(c+42,"MIPI_Reciever DE data", false,-1, 31,0);
        tracep->declBit(c+61,"MIPI_Reciever DE valid", false,-1);
        tracep->declBus(c+62,"MIPI_Reciever DE type_o", false,-1, 5,0);
        tracep->declBus(c+63,"MIPI_Reciever DE wordcount", false,-1, 15,0);
        tracep->declBus(c+43,"MIPI_Reciever DE out_r", false,-1, 31,0);
        tracep->declBit(c+61,"MIPI_Reciever DE valid_r", false,-1);
        tracep->declBit(c+44,"MIPI_Reciever DE start", false,-1);
        tracep->declBus(c+45,"MIPI_Reciever DE counter", false,-1, 7,0);
        tracep->declBus(c+43,"MIPI_Reciever DE regheader", false,-1, 31,0);
        tracep->declBus(c+46,"MIPI_Reciever DE ecc", false,-1, 7,0);
        tracep->declBus(c+42,"MIPI_Reciever DE data_r", false,-1, 31,0);
        tracep->declBus(c+62,"MIPI_Reciever DE type_o_r", false,-1, 5,0);
        tracep->declBus(c+63,"MIPI_Reciever DE wordcount_r", false,-1, 15,0);
        tracep->declBit(c+47,"MIPI_Reciever DE syndrom", false,-1);
        tracep->declBit(c+101,"MIPI_Reciever DE one_bit_error", false,-1);
        tracep->declBit(c+40,"MIPI_Reciever Prot mipi_clk_8", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever Prot stop", false,-1);
        tracep->declBit(c+65,"MIPI_Reciever Prot reset", false,-1);
        tracep->declBit(c+61,"MIPI_Reciever Prot valid", false,-1);
        tracep->declBus(c+62,"MIPI_Reciever Prot type_i", false,-1, 5,0);
        tracep->declBus(c+63,"MIPI_Reciever Prot wordcount", false,-1, 15,0);
        tracep->declBus(c+88,"MIPI_Reciever Prot data", false,-1, 31,0);
        tracep->declBus(c+54,"MIPI_Reciever Prot data_o", false,-1, 31,0);
        tracep->declBus(c+75,"MIPI_Reciever Prot adress_o", false,-1, 31,0);
        tracep->declBit(c+1,"MIPI_Reciever Prot rec_data", false,-1);
        tracep->declBit(c+55,"MIPI_Reciever Prot rec_data_r", false,-1);
        tracep->declBit(c+56,"MIPI_Reciever Prot state", false,-1);
        tracep->declBit(c+57,"MIPI_Reciever Prot valid_old", false,-1);
        tracep->declBus(c+58,"MIPI_Reciever Prot counter", false,-1, 31,0);
        tracep->declBus(c+59,"MIPI_Reciever Prot count_val", false,-1, 31,0);
        tracep->declBus(c+54,"MIPI_Reciever Prot data_o_r", false,-1, 31,0);
        tracep->declBus(c+60,"MIPI_Reciever Prot counter_addr", false,-1, 31,0);
    }
}

void VMIPI_Reciever::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VMIPI_Reciever::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VMIPI_Reciever__Syms* __restrict vlSymsp = static_cast<VMIPI_Reciever__Syms*>(userp);
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VMIPI_Reciever::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VMIPI_Reciever__Syms* __restrict vlSymsp = static_cast<VMIPI_Reciever__Syms*>(userp);
    VMIPI_Reciever* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->MIPI_Reciever__DOT__rec_data));
        tracep->fullBit(oldp+2,(vlTOPp->MIPI_Reciever__DOT__sync));
        tracep->fullBit(oldp+3,(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk));
        tracep->fullBit(oldp+4,(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_2));
        tracep->fullCData(oldp+5,(vlTOPp->MIPI_Reciever__DOT__div2__DOT__counter),8);
        tracep->fullBit(oldp+6,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__A));
        tracep->fullBit(oldp+7,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__C));
        tracep->fullBit(oldp+8,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__A));
        tracep->fullBit(oldp+9,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__C));
        tracep->fullBit(oldp+10,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__B));
        tracep->fullBit(oldp+11,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__IDDR__DOT__D1));
        tracep->fullBit(oldp+12,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__B));
        tracep->fullBit(oldp+13,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__IDDR__DOT__D1));
        tracep->fullCData(oldp+14,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__q_o_r),4);
        tracep->fullCData(oldp+15,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__q_o_r),4);
        tracep->fullCData(oldp+16,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ov_fl_r1),2);
        tracep->fullCData(oldp+17,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ov_fl_r1),2);
        tracep->fullBit(oldp+18,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r));
        tracep->fullBit(oldp+19,(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_4));
        tracep->fullCData(oldp+20,(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte0_r),8);
        tracep->fullCData(oldp+21,(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte1_r),8);
        tracep->fullCData(oldp+22,(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte0_r),8);
        tracep->fullCData(oldp+23,(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte1_r),8);
        tracep->fullCData(oldp+24,(vlTOPp->MIPI_Reciever__DOT__div4__DOT__counter),8);
        tracep->fullBit(oldp+25,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__sync_r));
        tracep->fullCData(oldp+26,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ov_fl_r0),2);
        tracep->fullCData(oldp+27,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte),8);
        tracep->fullCData(oldp+28,((0xb8U ^ (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte))),8);
        tracep->fullCData(oldp+29,((0x2eU ^ (0x3fU 
                                             & (IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__syncbyte)))),8);
        tracep->fullBit(oldp+30,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__even_r));
        tracep->fullBit(oldp+31,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__sync_r));
        tracep->fullCData(oldp+32,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ov_fl_r0),2);
        tracep->fullCData(oldp+33,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte),8);
        tracep->fullCData(oldp+34,((0xb8U ^ (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte))),8);
        tracep->fullCData(oldp+35,((0x2eU ^ (0x3fU 
                                             & (IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__syncbyte)))),8);
        tracep->fullCData(oldp+36,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__counter),8);
        tracep->fullCData(oldp+37,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r)
                                     ? (IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte0_r)
                                     : (IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte1_r))),8);
        tracep->fullCData(oldp+38,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__counter),8);
        tracep->fullCData(oldp+39,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r)
                                     ? (IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte0_r)
                                     : (IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte1_r))),8);
        tracep->fullBit(oldp+40,(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8));
        tracep->fullCData(oldp+41,(vlTOPp->MIPI_Reciever__DOT__div8__DOT__counter),8);
        tracep->fullIData(oldp+42,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r),32);
        tracep->fullIData(oldp+43,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r),32);
        tracep->fullBit(oldp+44,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__start));
        tracep->fullCData(oldp+45,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__counter),8);
        tracep->fullCData(oldp+46,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc),8);
        tracep->fullBit(oldp+47,((1U & ((IData)(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc) 
                                        ^ (vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r 
                                           >> 0x18U)))));
        tracep->fullBit(oldp+48,(vlTOPp->MIPI_Reciever__DOT__termination_r));
        tracep->fullBit(oldp+49,(vlTOPp->MIPI_Reciever__DOT__stop_clk));
        tracep->fullCData(oldp+50,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi),8);
        tracep->fullIData(oldp+51,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou),32);
        tracep->fullIData(oldp+52,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_term),32);
        tracep->fullIData(oldp+53,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_hs),32);
        tracep->fullIData(oldp+54,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__data_o_r),32);
        tracep->fullBit(oldp+55,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r));
        tracep->fullBit(oldp+56,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__state));
        tracep->fullBit(oldp+57,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__valid_old));
        tracep->fullIData(oldp+58,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter),32);
        tracep->fullIData(oldp+59,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__count_val),32);
        tracep->fullIData(oldp+60,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr),32);
        tracep->fullBit(oldp+61,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r));
        tracep->fullCData(oldp+62,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__type_o_r),6);
        tracep->fullSData(oldp+63,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__wordcount_r),16);
        tracep->fullBit(oldp+64,(vlTOPp->sys_clk));
        tracep->fullBit(oldp+65,(vlTOPp->reset));
        tracep->fullBit(oldp+66,(vlTOPp->lane0_d));
        tracep->fullBit(oldp+67,(vlTOPp->mipi_clk));
        tracep->fullBit(oldp+68,(vlTOPp->mipi_clk_8));
        tracep->fullBit(oldp+69,(vlTOPp->lane1_d));
        tracep->fullBit(oldp+70,(vlTOPp->lane0_p));
        tracep->fullBit(oldp+71,(vlTOPp->lane0_n));
        tracep->fullBit(oldp+72,(vlTOPp->lane1_p));
        tracep->fullBit(oldp+73,(vlTOPp->lane1_n));
        tracep->fullIData(oldp+74,(vlTOPp->data_o),32);
        tracep->fullIData(oldp+75,(vlTOPp->adress_out),32);
        tracep->fullBit(oldp+76,(vlTOPp->ram_clk));
        tracep->fullBit(oldp+77,(vlTOPp->debug0));
        tracep->fullBit(oldp+78,(vlTOPp->debug1));
        tracep->fullBit(oldp+79,(vlTOPp->debug2));
        tracep->fullBit(oldp+80,(vlTOPp->termination));
        tracep->fullCData(oldp+81,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r),8);
        tracep->fullCData(oldp+82,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r),8);
        tracep->fullCData(oldp+83,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ddr),4);
        tracep->fullBit(oldp+84,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__sync_r) 
                                  & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__stop_clk)))));
        tracep->fullCData(oldp+85,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ddr),4);
        tracep->fullCData(oldp+86,(vlTOPp->MIPI_Reciever__DOT__lane0byte),8);
        tracep->fullCData(oldp+87,(vlTOPp->MIPI_Reciever__DOT__lane1byte),8);
        tracep->fullIData(oldp+88,(vlTOPp->MIPI_Reciever__DOT__data),32);
        tracep->fullBit(oldp+89,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_tran));
        tracep->fullBit(oldp+90,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__debug1));
        tracep->fullCData(oldp+91,(0U),8);
        tracep->fullCData(oldp+92,(1U),8);
        tracep->fullCData(oldp+93,(2U),8);
        tracep->fullCData(oldp+94,(3U),8);
        tracep->fullCData(oldp+95,(4U),8);
        tracep->fullCData(oldp+96,(5U),8);
        tracep->fullCData(oldp+97,(6U),8);
        tracep->fullIData(oldp+98,(2U),32);
        tracep->fullIData(oldp+99,(0x14U),32);
        tracep->fullIData(oldp+100,(4U),32);
        tracep->fullBit(oldp+101,(0U));
    }
}
