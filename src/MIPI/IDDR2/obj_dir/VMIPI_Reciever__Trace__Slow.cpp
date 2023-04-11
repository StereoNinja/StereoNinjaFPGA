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
        tracep->declBit(c+75,"sys_clk", false,-1);
        tracep->declBit(c+76,"reset", false,-1);
        tracep->declBit(c+77,"lane0_d", false,-1);
        tracep->declBit(c+78,"mipi_clk", false,-1);
        tracep->declBit(c+79,"mipi_clk_8", false,-1);
        tracep->declBit(c+80,"lane1_d", false,-1);
        tracep->declBit(c+81,"lane0_p", false,-1);
        tracep->declBit(c+82,"lane0_n", false,-1);
        tracep->declBit(c+83,"lane1_p", false,-1);
        tracep->declBit(c+84,"lane1_n", false,-1);
        tracep->declBus(c+85,"data_o", false,-1, 31,0);
        tracep->declBus(c+86,"adress_out", false,-1, 31,0);
        tracep->declBit(c+87,"ram_clk", false,-1);
        tracep->declBit(c+88,"debug0", false,-1);
        tracep->declBit(c+89,"debug1", false,-1);
        tracep->declBit(c+90,"debug3", false,-1);
        tracep->declBit(c+91,"debug2", false,-1);
        tracep->declBit(c+92,"termination", false,-1);
        tracep->declBit(c+93,"rec_data_o", false,-1);
        tracep->declBus(c+94,"cX", false,-1, 31,0);
        tracep->declBus(c+95,"cY", false,-1, 31,0);
        tracep->declBus(c+106,"MIPI_Reciever mipi_frec", false,-1, 31,0);
        tracep->declBus(c+107,"MIPI_Reciever iddr_ratio", false,-1, 31,0);
        tracep->declBit(c+75,"MIPI_Reciever sys_clk", false,-1);
        tracep->declBit(c+76,"MIPI_Reciever reset", false,-1);
        tracep->declBit(c+77,"MIPI_Reciever lane0_d", false,-1);
        tracep->declBit(c+78,"MIPI_Reciever mipi_clk", false,-1);
        tracep->declBit(c+79,"MIPI_Reciever mipi_clk_8", false,-1);
        tracep->declBit(c+80,"MIPI_Reciever lane1_d", false,-1);
        tracep->declBit(c+81,"MIPI_Reciever lane0_p", false,-1);
        tracep->declBit(c+82,"MIPI_Reciever lane0_n", false,-1);
        tracep->declBit(c+83,"MIPI_Reciever lane1_p", false,-1);
        tracep->declBit(c+84,"MIPI_Reciever lane1_n", false,-1);
        tracep->declBus(c+85,"MIPI_Reciever data_o", false,-1, 31,0);
        tracep->declBus(c+86,"MIPI_Reciever adress_out", false,-1, 31,0);
        tracep->declBit(c+87,"MIPI_Reciever ram_clk", false,-1);
        tracep->declBit(c+88,"MIPI_Reciever debug0", false,-1);
        tracep->declBit(c+89,"MIPI_Reciever debug1", false,-1);
        tracep->declBit(c+90,"MIPI_Reciever debug3", false,-1);
        tracep->declBit(c+91,"MIPI_Reciever debug2", false,-1);
        tracep->declBit(c+92,"MIPI_Reciever termination", false,-1);
        tracep->declBit(c+93,"MIPI_Reciever rec_data_o", false,-1);
        tracep->declBus(c+94,"MIPI_Reciever cX", false,-1, 31,0);
        tracep->declBus(c+95,"MIPI_Reciever cY", false,-1, 31,0);
        tracep->declBit(c+68,"MIPI_Reciever stop_clk", false,-1);
        tracep->declBit(c+96,"MIPI_Reciever rec_data", false,-1);
        tracep->declBus(c+108,"MIPI_Reciever lane0byte", false,-1, 7,0);
        tracep->declBus(c+109,"MIPI_Reciever lane1byte", false,-1, 7,0);
        tracep->declBus(c+14,"MIPI_Reciever q_o_0", false,-1, 3,0);
        tracep->declBus(c+15,"MIPI_Reciever q_o_1", false,-1, 3,0);
        tracep->declBus(c+16,"MIPI_Reciever ov_fl_0", false,-1, 1,0);
        tracep->declBus(c+17,"MIPI_Reciever ov_fl_1", false,-1, 1,0);
        tracep->declBit(c+18,"MIPI_Reciever even", false,-1);
        tracep->declBit(c+97,"MIPI_Reciever sync", false,-1);
        tracep->declBit(c+1,"MIPI_Reciever sync_mipi_clk", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever sync_mipi_clk_2", false,-1);
        tracep->declBit(c+19,"MIPI_Reciever sync_mipi_clk_4", false,-1);
        tracep->declBit(c+44,"MIPI_Reciever sync_mipi_clk_8", false,-1);
        tracep->declBus(c+20,"MIPI_Reciever byte_e_0", false,-1, 7,0);
        tracep->declBus(c+21,"MIPI_Reciever byte_ue_0", false,-1, 7,0);
        tracep->declBus(c+22,"MIPI_Reciever byte_e_1", false,-1, 7,0);
        tracep->declBus(c+23,"MIPI_Reciever byte_ue_1", false,-1, 7,0);
        tracep->declBus(c+98,"MIPI_Reciever byte_o_0", false,-1, 7,0);
        tracep->declBus(c+99,"MIPI_Reciever byte_o_1", false,-1, 7,0);
        tracep->declBus(c+57,"MIPI_Reciever data", false,-1, 31,0);
        tracep->declBit(c+100,"MIPI_Reciever valid", false,-1);
        tracep->declBus(c+58,"MIPI_Reciever type_w", false,-1, 5,0);
        tracep->declBus(c+59,"MIPI_Reciever wordcount", false,-1, 15,0);
        tracep->declBus(c+106,"MIPI_Reciever RxFSM mipi_frec", false,-1, 31,0);
        tracep->declBit(c+75,"MIPI_Reciever RxFSM clk100MHz", false,-1);
        tracep->declBit(c+76,"MIPI_Reciever RxFSM reset", false,-1);
        tracep->declBit(c+96,"MIPI_Reciever RxFSM rec_data", false,-1);
        tracep->declBit(c+81,"MIPI_Reciever RxFSM lane0_p", false,-1);
        tracep->declBit(c+82,"MIPI_Reciever RxFSM lane0_n", false,-1);
        tracep->declBit(c+83,"MIPI_Reciever RxFSM lane1_p", false,-1);
        tracep->declBit(c+84,"MIPI_Reciever RxFSM lane1_n", false,-1);
        tracep->declBit(c+110,"MIPI_Reciever RxFSM stop_tran", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever RxFSM stop_rx", false,-1);
        tracep->declBit(c+92,"MIPI_Reciever RxFSM term", false,-1);
        tracep->declBit(c+88,"MIPI_Reciever RxFSM debug0", false,-1);
        tracep->declBit(c+111,"MIPI_Reciever RxFSM debug1", false,-1);
        tracep->declBus(c+112,"MIPI_Reciever RxFSM TIMEOUT", false,-1, 7,0);
        tracep->declBus(c+113,"MIPI_Reciever RxFSM LP11", false,-1, 7,0);
        tracep->declBus(c+114,"MIPI_Reciever RxFSM LP01", false,-1, 7,0);
        tracep->declBus(c+115,"MIPI_Reciever RxFSM LP00", false,-1, 7,0);
        tracep->declBus(c+116,"MIPI_Reciever RxFSM SYNC", false,-1, 7,0);
        tracep->declBus(c+117,"MIPI_Reciever RxFSM HEADER", false,-1, 7,0);
        tracep->declBus(c+118,"MIPI_Reciever RxFSM DATA", false,-1, 7,0);
        tracep->declBus(c+119,"MIPI_Reciever RxFSM Tlpx", false,-1, 31,0);
        tracep->declBus(c+120,"MIPI_Reciever RxFSM Timeout", false,-1, 31,0);
        tracep->declBus(c+121,"MIPI_Reciever RxFSM Tdterm", false,-1, 31,0);
        tracep->declBus(c+122,"MIPI_Reciever RxFSM Thssettle", false,-1, 31,0);
        tracep->declBus(c+69,"MIPI_Reciever RxFSM state_mipi", false,-1, 7,0);
        tracep->declBit(c+68,"MIPI_Reciever RxFSM stop_rx_r", false,-1);
        tracep->declBit(c+70,"MIPI_Reciever RxFSM term_r", false,-1);
        tracep->declBit(c+71,"MIPI_Reciever RxFSM debug0_r", false,-1);
        tracep->declBit(c+111,"MIPI_Reciever RxFSM debug1_r", false,-1);
        tracep->declBus(c+72,"MIPI_Reciever RxFSM timer_tou", false,-1, 31,0);
        tracep->declBus(c+73,"MIPI_Reciever RxFSM timer_term", false,-1, 31,0);
        tracep->declBus(c+74,"MIPI_Reciever RxFSM timer_hs", false,-1, 31,0);
        tracep->declBit(c+78,"MIPI_Reciever SYNC ECLKI", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever SYNC STOP", false,-1);
        tracep->declBit(c+1,"MIPI_Reciever SYNC ECLKO", false,-1);
        tracep->declBit(c+2,"MIPI_Reciever SYNC eclki_r0", false,-1);
        tracep->declBit(c+3,"MIPI_Reciever SYNC eclki_r1", false,-1);
        tracep->declBit(c+1,"MIPI_Reciever SYNC eclki_r2", false,-1);
        tracep->declBit(c+1,"MIPI_Reciever div2 CLKI", false,-1);
        tracep->declBit(c+76,"MIPI_Reciever div2 RST", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever div2 CDIVX", false,-1);
        tracep->declBus(c+5,"MIPI_Reciever div2 counter", false,-1, 7,0);
        tracep->declBit(c+4,"MIPI_Reciever div4 CLKI", false,-1);
        tracep->declBit(c+76,"MIPI_Reciever div4 RST", false,-1);
        tracep->declBit(c+19,"MIPI_Reciever div4 CDIVX", false,-1);
        tracep->declBus(c+24,"MIPI_Reciever div4 counter", false,-1, 7,0);
        tracep->declBit(c+19,"MIPI_Reciever div8 CLKI", false,-1);
        tracep->declBit(c+76,"MIPI_Reciever div8 RST", false,-1);
        tracep->declBit(c+44,"MIPI_Reciever div8 CDIVX", false,-1);
        tracep->declBus(c+45,"MIPI_Reciever div8 counter", false,-1, 7,0);
        tracep->declBit(c+77,"MIPI_Reciever lane0 lane", false,-1);
        tracep->declBit(c+1,"MIPI_Reciever lane0 sync_mipi_clk", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever lane0 sync_mipi_clk_2", false,-1);
        tracep->declBit(c+76,"MIPI_Reciever lane0 reset", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever lane0 stop", false,-1);
        tracep->declBus(c+14,"MIPI_Reciever lane0 q_o", false,-1, 3,0);
        tracep->declBus(c+16,"MIPI_Reciever lane0 ov_fl", false,-1, 1,0);
        tracep->declBit(c+18,"MIPI_Reciever lane0 even", false,-1);
        tracep->declBit(c+97,"MIPI_Reciever lane0 sync", false,-1);
        tracep->declBus(c+101,"MIPI_Reciever lane0 ddr", false,-1, 3,0);
        tracep->declBit(c+25,"MIPI_Reciever lane0 sync_r", false,-1);
        tracep->declBit(c+18,"MIPI_Reciever lane0 even_r", false,-1);
        tracep->declBus(c+14,"MIPI_Reciever lane0 q_o_r", false,-1, 3,0);
        tracep->declBus(c+26,"MIPI_Reciever lane0 ov_fl_r0", false,-1, 1,0);
        tracep->declBus(c+16,"MIPI_Reciever lane0 ov_fl_r1", false,-1, 1,0);
        tracep->declBus(c+27,"MIPI_Reciever lane0 syncbyte", false,-1, 7,0);
        tracep->declBus(c+28,"MIPI_Reciever lane0 detect_e", false,-1, 7,0);
        tracep->declBus(c+29,"MIPI_Reciever lane0 detect_ue", false,-1, 7,0);
        tracep->declBit(c+123,"MIPI_Reciever lane0 delay_lane", false,-1);
        tracep->declBit(c+77,"MIPI_Reciever lane0 IDDR D", false,-1);
        tracep->declBit(c+1,"MIPI_Reciever lane0 IDDR ECLK", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever lane0 IDDR SCLK", false,-1);
        tracep->declBit(c+102,"MIPI_Reciever lane0 IDDR RST", false,-1);
        tracep->declBit(c+6,"MIPI_Reciever lane0 IDDR Q0", false,-1);
        tracep->declBit(c+10,"MIPI_Reciever lane0 IDDR Q1", false,-1);
        tracep->declBit(c+7,"MIPI_Reciever lane0 IDDR Q2", false,-1);
        tracep->declBit(c+11,"MIPI_Reciever lane0 IDDR Q3", false,-1);
        tracep->declBit(c+6,"MIPI_Reciever lane0 IDDR A", false,-1);
        tracep->declBit(c+10,"MIPI_Reciever lane0 IDDR B", false,-1);
        tracep->declBit(c+7,"MIPI_Reciever lane0 IDDR C", false,-1);
        tracep->declBit(c+11,"MIPI_Reciever lane0 IDDR D1", false,-1);
        tracep->declBit(c+80,"MIPI_Reciever lane1 lane", false,-1);
        tracep->declBit(c+1,"MIPI_Reciever lane1 sync_mipi_clk", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever lane1 sync_mipi_clk_2", false,-1);
        tracep->declBit(c+76,"MIPI_Reciever lane1 reset", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever lane1 stop", false,-1);
        tracep->declBus(c+15,"MIPI_Reciever lane1 q_o", false,-1, 3,0);
        tracep->declBus(c+17,"MIPI_Reciever lane1 ov_fl", false,-1, 1,0);
        tracep->declBit(c+30,"MIPI_Reciever lane1 even", false,-1);
        tracep->declBit(c+103,"MIPI_Reciever lane1 sync", false,-1);
        tracep->declBus(c+104,"MIPI_Reciever lane1 ddr", false,-1, 3,0);
        tracep->declBit(c+31,"MIPI_Reciever lane1 sync_r", false,-1);
        tracep->declBit(c+30,"MIPI_Reciever lane1 even_r", false,-1);
        tracep->declBus(c+15,"MIPI_Reciever lane1 q_o_r", false,-1, 3,0);
        tracep->declBus(c+32,"MIPI_Reciever lane1 ov_fl_r0", false,-1, 1,0);
        tracep->declBus(c+17,"MIPI_Reciever lane1 ov_fl_r1", false,-1, 1,0);
        tracep->declBus(c+33,"MIPI_Reciever lane1 syncbyte", false,-1, 7,0);
        tracep->declBus(c+34,"MIPI_Reciever lane1 detect_e", false,-1, 7,0);
        tracep->declBus(c+35,"MIPI_Reciever lane1 detect_ue", false,-1, 7,0);
        tracep->declBit(c+124,"MIPI_Reciever lane1 delay_lane", false,-1);
        tracep->declBit(c+80,"MIPI_Reciever lane1 IDDR D", false,-1);
        tracep->declBit(c+1,"MIPI_Reciever lane1 IDDR ECLK", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever lane1 IDDR SCLK", false,-1);
        tracep->declBit(c+102,"MIPI_Reciever lane1 IDDR RST", false,-1);
        tracep->declBit(c+8,"MIPI_Reciever lane1 IDDR Q0", false,-1);
        tracep->declBit(c+12,"MIPI_Reciever lane1 IDDR Q1", false,-1);
        tracep->declBit(c+9,"MIPI_Reciever lane1 IDDR Q2", false,-1);
        tracep->declBit(c+13,"MIPI_Reciever lane1 IDDR Q3", false,-1);
        tracep->declBit(c+8,"MIPI_Reciever lane1 IDDR A", false,-1);
        tracep->declBit(c+12,"MIPI_Reciever lane1 IDDR B", false,-1);
        tracep->declBit(c+9,"MIPI_Reciever lane1 IDDR C", false,-1);
        tracep->declBit(c+13,"MIPI_Reciever lane1 IDDR D1", false,-1);
        tracep->declBit(c+76,"MIPI_Reciever BA0 reset", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever BA0 stop", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever BA0 mipi_clk_2", false,-1);
        tracep->declBus(c+14,"MIPI_Reciever BA0 q_o", false,-1, 3,0);
        tracep->declBus(c+16,"MIPI_Reciever BA0 ov_fl", false,-1, 1,0);
        tracep->declBus(c+20,"MIPI_Reciever BA0 byte_e", false,-1, 7,0);
        tracep->declBus(c+21,"MIPI_Reciever BA0 byte_ue", false,-1, 7,0);
        tracep->declBus(c+20,"MIPI_Reciever BA0 byte0_r", false,-1, 7,0);
        tracep->declBus(c+21,"MIPI_Reciever BA0 byte1_r", false,-1, 7,0);
        tracep->declBit(c+76,"MIPI_Reciever BA1 reset", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever BA1 stop", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever BA1 mipi_clk_2", false,-1);
        tracep->declBus(c+15,"MIPI_Reciever BA1 q_o", false,-1, 3,0);
        tracep->declBus(c+17,"MIPI_Reciever BA1 ov_fl", false,-1, 1,0);
        tracep->declBus(c+22,"MIPI_Reciever BA1 byte_e", false,-1, 7,0);
        tracep->declBus(c+23,"MIPI_Reciever BA1 byte_ue", false,-1, 7,0);
        tracep->declBus(c+22,"MIPI_Reciever BA1 byte0_r", false,-1, 7,0);
        tracep->declBus(c+23,"MIPI_Reciever BA1 byte1_r", false,-1, 7,0);
        tracep->declBit(c+76,"MIPI_Reciever BAL0 reset", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever BAL0 stop", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever BAL0 mipi_clk_2", false,-1);
        tracep->declBit(c+97,"MIPI_Reciever BAL0 sync", false,-1);
        tracep->declBit(c+18,"MIPI_Reciever BAL0 even", false,-1);
        tracep->declBus(c+20,"MIPI_Reciever BAL0 byte_e", false,-1, 7,0);
        tracep->declBus(c+21,"MIPI_Reciever BAL0 byte_ue", false,-1, 7,0);
        tracep->declBus(c+98,"MIPI_Reciever BAL0 byte_o", false,-1, 7,0);
        tracep->declBus(c+98,"MIPI_Reciever BAL0 byte_o_r", false,-1, 7,0);
        tracep->declBus(c+36,"MIPI_Reciever BAL0 counter", false,-1, 7,0);
        tracep->declBus(c+37,"MIPI_Reciever BAL0 byte_o_r_old", false,-1, 7,0);
        tracep->declBus(c+38,"MIPI_Reciever BAL0 byte_o_r_s", false,-1, 15,0);
        tracep->declBus(c+39,"MIPI_Reciever BAL0 byte_o_eu", false,-1, 7,0);
        tracep->declBit(c+76,"MIPI_Reciever BAL1 reset", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever BAL1 stop", false,-1);
        tracep->declBit(c+4,"MIPI_Reciever BAL1 mipi_clk_2", false,-1);
        tracep->declBit(c+97,"MIPI_Reciever BAL1 sync", false,-1);
        tracep->declBit(c+18,"MIPI_Reciever BAL1 even", false,-1);
        tracep->declBus(c+22,"MIPI_Reciever BAL1 byte_e", false,-1, 7,0);
        tracep->declBus(c+23,"MIPI_Reciever BAL1 byte_ue", false,-1, 7,0);
        tracep->declBus(c+99,"MIPI_Reciever BAL1 byte_o", false,-1, 7,0);
        tracep->declBus(c+99,"MIPI_Reciever BAL1 byte_o_r", false,-1, 7,0);
        tracep->declBus(c+40,"MIPI_Reciever BAL1 counter", false,-1, 7,0);
        tracep->declBus(c+41,"MIPI_Reciever BAL1 byte_o_r_old", false,-1, 7,0);
        tracep->declBus(c+42,"MIPI_Reciever BAL1 byte_o_r_s", false,-1, 15,0);
        tracep->declBus(c+43,"MIPI_Reciever BAL1 byte_o_eu", false,-1, 7,0);
        tracep->declBit(c+19,"MIPI_Reciever DE mipi_clk_4", false,-1);
        tracep->declBit(c+76,"MIPI_Reciever DE reset", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever DE stop", false,-1);
        tracep->declBit(c+18,"MIPI_Reciever DE even", false,-1);
        tracep->declBit(c+97,"MIPI_Reciever DE sync", false,-1);
        tracep->declBus(c+98,"MIPI_Reciever DE byte_in0", false,-1, 7,0);
        tracep->declBus(c+99,"MIPI_Reciever DE byte_in1", false,-1, 7,0);
        tracep->declBus(c+57,"MIPI_Reciever DE data", false,-1, 31,0);
        tracep->declBit(c+100,"MIPI_Reciever DE valid", false,-1);
        tracep->declBus(c+58,"MIPI_Reciever DE type_o", false,-1, 5,0);
        tracep->declBus(c+59,"MIPI_Reciever DE wordcount", false,-1, 15,0);
        tracep->declBus(c+60,"MIPI_Reciever DE out_r", false,-1, 31,0);
        tracep->declBus(c+61,"MIPI_Reciever DE out_r_old", false,-1, 31,0);
        tracep->declBit(c+46,"MIPI_Reciever DE valid_r", false,-1);
        tracep->declBit(c+62,"MIPI_Reciever DE start", false,-1);
        tracep->declBus(c+63,"MIPI_Reciever DE counter", false,-1, 31,0);
        tracep->declBus(c+60,"MIPI_Reciever DE regheader", false,-1, 31,0);
        tracep->declBus(c+64,"MIPI_Reciever DE ecc", false,-1, 7,0);
        tracep->declBus(c+57,"MIPI_Reciever DE data_r", false,-1, 31,0);
        tracep->declBus(c+58,"MIPI_Reciever DE type_o_r", false,-1, 5,0);
        tracep->declBus(c+59,"MIPI_Reciever DE wordcount_r", false,-1, 15,0);
        tracep->declBus(c+65,"MIPI_Reciever DE syndrom", false,-1, 7,0);
        tracep->declBus(c+66,"MIPI_Reciever DE correction", false,-1, 23,0);
        tracep->declBus(c+67,"MIPI_Reciever DE regheader_correct", false,-1, 31,0);
        tracep->declBit(c+44,"MIPI_Reciever Prot mipi_clk_8", false,-1);
        tracep->declBit(c+68,"MIPI_Reciever Prot stop", false,-1);
        tracep->declBit(c+76,"MIPI_Reciever Prot reset", false,-1);
        tracep->declBit(c+100,"MIPI_Reciever Prot valid", false,-1);
        tracep->declBus(c+58,"MIPI_Reciever Prot type_i", false,-1, 5,0);
        tracep->declBus(c+59,"MIPI_Reciever Prot wordcount", false,-1, 15,0);
        tracep->declBus(c+57,"MIPI_Reciever Prot data", false,-1, 31,0);
        tracep->declBus(c+85,"MIPI_Reciever Prot data_o", false,-1, 31,0);
        tracep->declBus(c+86,"MIPI_Reciever Prot adress_o", false,-1, 31,0);
        tracep->declBit(c+96,"MIPI_Reciever Prot rec_data", false,-1);
        tracep->declBit(c+91,"MIPI_Reciever Prot debug", false,-1);
        tracep->declBit(c+90,"MIPI_Reciever Prot debug1", false,-1);
        tracep->declBus(c+94,"MIPI_Reciever Prot cX", false,-1, 31,0);
        tracep->declBus(c+95,"MIPI_Reciever Prot cY", false,-1, 31,0);
        tracep->declBit(c+47,"MIPI_Reciever Prot rec_data_r", false,-1);
        tracep->declBit(c+48,"MIPI_Reciever Prot state", false,-1);
        tracep->declBit(c+49,"MIPI_Reciever Prot valid_old", false,-1);
        tracep->declBus(c+50,"MIPI_Reciever Prot counter", false,-1, 31,0);
        tracep->declBus(c+51,"MIPI_Reciever Prot count_val", false,-1, 31,0);
        tracep->declBus(c+52,"MIPI_Reciever Prot data_o_r", false,-1, 31,0);
        tracep->declBus(c+53,"MIPI_Reciever Prot counter_addr", false,-1, 31,0);
        tracep->declBus(c+54,"MIPI_Reciever Prot cX_r", false,-1, 31,0);
        tracep->declBus(c+55,"MIPI_Reciever Prot cY_r", false,-1, 31,0);
        tracep->declBus(c+56,"MIPI_Reciever Prot c", false,-1, 15,0);
        tracep->declBus(c+105,"MIPI_Reciever Prot c_calk", false,-1, 15,0);
        tracep->declBus(c+57,"MIPI_Reciever Prot d", false,-1, 31,0);
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
        tracep->fullBit(oldp+1,(vlTOPp->MIPI_Reciever__DOT__SYNC__DOT__eclki_r2));
        tracep->fullBit(oldp+2,(vlTOPp->MIPI_Reciever__DOT__SYNC__DOT__eclki_r0));
        tracep->fullBit(oldp+3,(vlTOPp->MIPI_Reciever__DOT__SYNC__DOT__eclki_r1));
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
        tracep->fullCData(oldp+37,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r_old),8);
        tracep->fullSData(oldp+38,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r_s),16);
        tracep->fullCData(oldp+39,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r)
                                     ? (IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte0_r)
                                     : (IData)(vlTOPp->MIPI_Reciever__DOT__BA0__DOT__byte1_r))),8);
        tracep->fullCData(oldp+40,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__counter),8);
        tracep->fullCData(oldp+41,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r_old),8);
        tracep->fullSData(oldp+42,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r_s),16);
        tracep->fullCData(oldp+43,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__even_r)
                                     ? (IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte0_r)
                                     : (IData)(vlTOPp->MIPI_Reciever__DOT__BA1__DOT__byte1_r))),8);
        tracep->fullBit(oldp+44,(vlTOPp->MIPI_Reciever__DOT__sync_mipi_clk_8));
        tracep->fullCData(oldp+45,(vlTOPp->MIPI_Reciever__DOT__div8__DOT__counter),8);
        tracep->fullBit(oldp+46,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__valid_r));
        tracep->fullBit(oldp+47,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__rec_data_r));
        tracep->fullBit(oldp+48,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__state));
        tracep->fullBit(oldp+49,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__valid_old));
        tracep->fullIData(oldp+50,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter),32);
        tracep->fullIData(oldp+51,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__count_val),32);
        tracep->fullIData(oldp+52,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__data_o_r),32);
        tracep->fullIData(oldp+53,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__counter_addr),32);
        tracep->fullIData(oldp+54,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__cX_r),32);
        tracep->fullIData(oldp+55,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__cY_r),32);
        tracep->fullSData(oldp+56,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c),16);
        tracep->fullIData(oldp+57,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__data_r),32);
        tracep->fullCData(oldp+58,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__type_o_r),6);
        tracep->fullSData(oldp+59,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__wordcount_r),16);
        tracep->fullIData(oldp+60,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r),32);
        tracep->fullIData(oldp+61,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__out_r_old),32);
        tracep->fullBit(oldp+62,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__start));
        tracep->fullIData(oldp+63,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__counter),32);
        tracep->fullCData(oldp+64,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__ecc),8);
        tracep->fullCData(oldp+65,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__syndrom),8);
        tracep->fullIData(oldp+66,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__correction),24);
        tracep->fullIData(oldp+67,(vlTOPp->MIPI_Reciever__DOT__DE__DOT__regheader_correct),32);
        tracep->fullBit(oldp+68,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r));
        tracep->fullCData(oldp+69,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__state_mipi),8);
        tracep->fullBit(oldp+70,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__term_r));
        tracep->fullBit(oldp+71,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__debug0_r));
        tracep->fullIData(oldp+72,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_tou),32);
        tracep->fullIData(oldp+73,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_term),32);
        tracep->fullIData(oldp+74,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__timer_hs),32);
        tracep->fullBit(oldp+75,(vlTOPp->sys_clk));
        tracep->fullBit(oldp+76,(vlTOPp->reset));
        tracep->fullBit(oldp+77,(vlTOPp->lane0_d));
        tracep->fullBit(oldp+78,(vlTOPp->mipi_clk));
        tracep->fullBit(oldp+79,(vlTOPp->mipi_clk_8));
        tracep->fullBit(oldp+80,(vlTOPp->lane1_d));
        tracep->fullBit(oldp+81,(vlTOPp->lane0_p));
        tracep->fullBit(oldp+82,(vlTOPp->lane0_n));
        tracep->fullBit(oldp+83,(vlTOPp->lane1_p));
        tracep->fullBit(oldp+84,(vlTOPp->lane1_n));
        tracep->fullIData(oldp+85,(vlTOPp->data_o),32);
        tracep->fullIData(oldp+86,(vlTOPp->adress_out),32);
        tracep->fullBit(oldp+87,(vlTOPp->ram_clk));
        tracep->fullBit(oldp+88,(vlTOPp->debug0));
        tracep->fullBit(oldp+89,(vlTOPp->debug1));
        tracep->fullBit(oldp+90,(vlTOPp->debug3));
        tracep->fullBit(oldp+91,(vlTOPp->debug2));
        tracep->fullBit(oldp+92,(vlTOPp->termination));
        tracep->fullBit(oldp+93,(vlTOPp->rec_data_o));
        tracep->fullIData(oldp+94,(vlTOPp->cX),32);
        tracep->fullIData(oldp+95,(vlTOPp->cY),32);
        tracep->fullBit(oldp+96,(vlTOPp->MIPI_Reciever__DOT__rec_data));
        tracep->fullBit(oldp+97,(vlTOPp->MIPI_Reciever__DOT__sync));
        tracep->fullCData(oldp+98,(vlTOPp->MIPI_Reciever__DOT__BAL0__DOT__byte_o_r),8);
        tracep->fullCData(oldp+99,(vlTOPp->MIPI_Reciever__DOT__BAL1__DOT__byte_o_r),8);
        tracep->fullBit(oldp+100,(vlTOPp->MIPI_Reciever__DOT__valid));
        tracep->fullCData(oldp+101,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__ddr),4);
        tracep->fullBit(oldp+102,(((IData)(vlTOPp->reset) 
                                   | (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r))));
        tracep->fullBit(oldp+103,(((IData)(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__sync_r) 
                                   & (~ (IData)(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_rx_r)))));
        tracep->fullCData(oldp+104,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__ddr),4);
        tracep->fullSData(oldp+105,(vlTOPp->MIPI_Reciever__DOT__Prot__DOT__c_calk),16);
        tracep->fullIData(oldp+106,(0x15eU),32);
        tracep->fullIData(oldp+107,(4U),32);
        tracep->fullCData(oldp+108,(vlTOPp->MIPI_Reciever__DOT__lane0byte),8);
        tracep->fullCData(oldp+109,(vlTOPp->MIPI_Reciever__DOT__lane1byte),8);
        tracep->fullBit(oldp+110,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__stop_tran));
        tracep->fullBit(oldp+111,(vlTOPp->MIPI_Reciever__DOT__RxFSM__DOT__debug1_r));
        tracep->fullCData(oldp+112,(0U),8);
        tracep->fullCData(oldp+113,(1U),8);
        tracep->fullCData(oldp+114,(2U),8);
        tracep->fullCData(oldp+115,(3U),8);
        tracep->fullCData(oldp+116,(4U),8);
        tracep->fullCData(oldp+117,(5U),8);
        tracep->fullCData(oldp+118,(6U),8);
        tracep->fullIData(oldp+119,(2U),32);
        tracep->fullIData(oldp+120,(0x181U),32);
        tracep->fullIData(oldp+121,(0U),32);
        tracep->fullIData(oldp+122,(1U),32);
        tracep->fullBit(oldp+123,(vlTOPp->MIPI_Reciever__DOT__lane0__DOT__delay_lane));
        tracep->fullBit(oldp+124,(vlTOPp->MIPI_Reciever__DOT__lane1__DOT__delay_lane));
    }
}
