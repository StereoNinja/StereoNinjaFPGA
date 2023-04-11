// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vulx3s_pass_through_sim__Syms.h"


//======================

void Vulx3s_pass_through_sim::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vulx3s_pass_through_sim::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vulx3s_pass_through_sim__Syms* __restrict vlSymsp = static_cast<Vulx3s_pass_through_sim__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vulx3s_pass_through_sim::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vulx3s_pass_through_sim::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vulx3s_pass_through_sim__Syms* __restrict vlSymsp = static_cast<Vulx3s_pass_through_sim__Syms*>(userp);
    Vulx3s_pass_through_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vulx3s_pass_through_sim::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vulx3s_pass_through_sim__Syms* __restrict vlSymsp = static_cast<Vulx3s_pass_through_sim__Syms*>(userp);
    Vulx3s_pass_through_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+193,"pixclk", false,-1);
        tracep->declBit(c+194,"cam0_sda", false,-1);
        tracep->declBit(c+195,"cam0_scl", false,-1);
        tracep->declBit(c+196,"debug0", false,-1);
        tracep->declBit(c+197,"debug1", false,-1);
        tracep->declBit(c+198,"debug2", false,-1);
        tracep->declBit(c+199,"debug3", false,-1);
        tracep->declBit(c+200,"reset", false,-1);
        tracep->declBit(c+201,"btn", false,-1);
        tracep->declBit(c+202,"fire", false,-1);
        tracep->declBit(c+203,"cam0_clk", false,-1);
        tracep->declBit(c+204,"cam0_d0", false,-1);
        tracep->declBit(c+205,"cam0_d1", false,-1);
        tracep->declBit(c+206,"cam0_d0_r_p", false,-1);
        tracep->declBit(c+207,"cam0_d0_r_n", false,-1);
        tracep->declBit(c+208,"cam0_d1_r_p", false,-1);
        tracep->declBit(c+209,"cam0_d1_r_n", false,-1);
        tracep->declBit(c+210,"cam0_clk_r_p", false,-1);
        tracep->declBit(c+211,"cam0_clk_r_n", false,-1);
        tracep->declBus(c+212,"led", false,-1, 7,0);
        tracep->declBus(c+213,"TMDSd", false,-1, 3,0);
        tracep->declBit(c+214,"ftdi_rxd", false,-1);
        tracep->declBit(c+215,"ftdi_txden", false,-1);
        tracep->declBit(c+216,"clk_i2c", false,-1);
        tracep->declBit(c+193,"ulx3s_pass_through_sim pixclk", false,-1);
        tracep->declBit(c+194,"ulx3s_pass_through_sim cam0_sda", false,-1);
        tracep->declBit(c+195,"ulx3s_pass_through_sim cam0_scl", false,-1);
        tracep->declBit(c+196,"ulx3s_pass_through_sim debug0", false,-1);
        tracep->declBit(c+197,"ulx3s_pass_through_sim debug1", false,-1);
        tracep->declBit(c+198,"ulx3s_pass_through_sim debug2", false,-1);
        tracep->declBit(c+199,"ulx3s_pass_through_sim debug3", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim reset", false,-1);
        tracep->declBit(c+201,"ulx3s_pass_through_sim btn", false,-1);
        tracep->declBit(c+202,"ulx3s_pass_through_sim fire", false,-1);
        tracep->declBit(c+203,"ulx3s_pass_through_sim cam0_clk", false,-1);
        tracep->declBit(c+204,"ulx3s_pass_through_sim cam0_d0", false,-1);
        tracep->declBit(c+205,"ulx3s_pass_through_sim cam0_d1", false,-1);
        tracep->declBit(c+206,"ulx3s_pass_through_sim cam0_d0_r_p", false,-1);
        tracep->declBit(c+207,"ulx3s_pass_through_sim cam0_d0_r_n", false,-1);
        tracep->declBit(c+208,"ulx3s_pass_through_sim cam0_d1_r_p", false,-1);
        tracep->declBit(c+209,"ulx3s_pass_through_sim cam0_d1_r_n", false,-1);
        tracep->declBit(c+210,"ulx3s_pass_through_sim cam0_clk_r_p", false,-1);
        tracep->declBit(c+211,"ulx3s_pass_through_sim cam0_clk_r_n", false,-1);
        tracep->declBus(c+212,"ulx3s_pass_through_sim led", false,-1, 7,0);
        tracep->declBus(c+213,"ulx3s_pass_through_sim TMDSd", false,-1, 3,0);
        tracep->declBit(c+214,"ulx3s_pass_through_sim ftdi_rxd", false,-1);
        tracep->declBit(c+215,"ulx3s_pass_through_sim ftdi_txden", false,-1);
        tracep->declBit(c+216,"ulx3s_pass_through_sim clk_i2c", false,-1);
        tracep->declBit(c+231,"ulx3s_pass_through_sim clk400", false,-1);
        tracep->declBit(c+232,"ulx3s_pass_through_sim clk100Mhz", false,-1);
        tracep->declBit(c+233,"ulx3s_pass_through_sim clk250", false,-1);
        tracep->declBit(c+97,"ulx3s_pass_through_sim cam0_sda_w", false,-1);
        tracep->declBit(c+217,"ulx3s_pass_through_sim cam0_scl_w", false,-1);
        tracep->declBit(c+186,"ulx3s_pass_through_sim term", false,-1);
        tracep->declBit(c+234,"ulx3s_pass_through_sim mipi_clk05", false,-1);
        tracep->declBus(c+162,"ulx3s_pass_through_sim data_adress", false,-1, 16,0);
        tracep->declBus(c+163,"ulx3s_pass_through_sim data", false,-1, 31,0);
        tracep->declBus(c+164,"ulx3s_pass_through_sim cX", false,-1, 31,0);
        tracep->declBus(c+165,"ulx3s_pass_through_sim cY", false,-1, 31,0);
        tracep->declBit(c+159,"ulx3s_pass_through_sim ram_clk", false,-1);
        tracep->declBit(c+218,"ulx3s_pass_through_sim rec_data", false,-1);
        tracep->declBus(c+48,"ulx3s_pass_through_sim read_addr", false,-1, 20,0);
        tracep->declBus(c+235,"ulx3s_pass_through_sim addr_write", false,-1, 18,0);
        tracep->declBus(c+236,"ulx3s_pass_through_sim color", false,-1, 7,0);
        tracep->declBus(c+49,"ulx3s_pass_through_sim red_v", false,-1, 7,0);
        tracep->declBus(c+237,"ulx3s_pass_through_sim green_v", false,-1, 7,0);
        tracep->declBus(c+238,"ulx3s_pass_through_sim blue_v", false,-1, 7,0);
        tracep->declBus(c+239,"ulx3s_pass_through_sim grey0", false,-1, 7,0);
        tracep->declBus(c+240,"ulx3s_pass_through_sim grey1", false,-1, 7,0);
        tracep->declBus(c+241,"ulx3s_pass_through_sim grey2", false,-1, 7,0);
        tracep->declBus(c+242,"ulx3s_pass_through_sim grey3", false,-1, 7,0);
        tracep->declBus(c+50,"ulx3s_pass_through_sim ramdata", false,-1, 31,0);
        tracep->declBus(c+243,"ulx3s_pass_through_sim hex", false,-1, 7,0);
        tracep->declBus(c+244,"ulx3s_pass_through_sim pixcount", false,-1, 18,0);
        tracep->declBus(c+51,"ulx3s_pass_through_sim color_w", false,-1, 31,0);
        tracep->declBus(c+245,"ulx3s_pass_through_sim seraddr", false,-1, 23,0);
        tracep->declBus(c+245,"ulx3s_pass_through_sim counter_ser", false,-1, 23,0);
        tracep->declBus(c+246,"ulx3s_pass_through_sim serdata", false,-1, 7,0);
        tracep->declBit(c+247,"ulx3s_pass_through_sim ready", false,-1);
        tracep->declBit(c+248,"ulx3s_pass_through_sim start", false,-1);
        tracep->declBit(c+249,"ulx3s_pass_through_sim ready_old", false,-1);
        tracep->declBus(c+52,"ulx3s_pass_through_sim counter", false,-1, 7,0);
        tracep->declBit(c+216,"ulx3s_pass_through_sim i2c clk400", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim i2c reset", false,-1);
        tracep->declBit(c+202,"ulx3s_pass_through_sim i2c init", false,-1);
        tracep->declBit(c+97,"ulx3s_pass_through_sim i2c sda", false,-1);
        tracep->declBit(c+217,"ulx3s_pass_through_sim i2c scl", false,-1);
        tracep->declBit(c+98,"ulx3s_pass_through_sim i2c cam_ready", false,-1);
        tracep->declBit(c+99,"ulx3s_pass_through_sim i2c send_data", false,-1);
        tracep->declBit(c+250,"ulx3s_pass_through_sim i2c cam_ready_r", false,-1);
        tracep->declBit(c+100,"ulx3s_pass_through_sim i2c ready", false,-1);
        tracep->declBit(c+101,"ulx3s_pass_through_sim i2c ready_old", false,-1);
        tracep->declBit(c+98,"ulx3s_pass_through_sim i2c cam_ready0", false,-1);
        tracep->declBus(c+102,"ulx3s_pass_through_sim i2c datain", false,-1, 7,0);
        tracep->declBus(c+103,"ulx3s_pass_through_sim i2c slave_addr", false,-1, 7,0);
        tracep->declBus(c+104,"ulx3s_pass_through_sim i2c state", false,-1, 7,0);
        tracep->declBus(c+105,"ulx3s_pass_through_sim i2c register_in", false,-1, 15,0);
        tracep->declBit(c+106,"ulx3s_pass_through_sim i2c initia", false,-1);
        tracep->declBit(c+107,"ulx3s_pass_through_sim i2c init_old", false,-1);
        tracep->declBus(c+108,"ulx3s_pass_through_sim i2c counter", false,-1, 31,0);
        tracep->declBus(c+251,"ulx3s_pass_through_sim i2c idle", false,-1, 7,0);
        tracep->declBus(c+252,"ulx3s_pass_through_sim i2c init_s", false,-1, 7,0);
        tracep->declBus(c+253,"ulx3s_pass_through_sim i2c wakeup", false,-1, 7,0);
        tracep->declBus(c+254,"ulx3s_pass_through_sim i2c dataint", false,-1, 31,0);
        tracep->declBit(c+109,"ulx3s_pass_through_sim i2c cam0 valid", false,-1);
        tracep->declBit(c+216,"ulx3s_pass_through_sim i2c cam0 clk400kHz", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim i2c cam0 reset", false,-1);
        tracep->declBit(c+99,"ulx3s_pass_through_sim i2c cam0 send_data", false,-1);
        tracep->declBit(c+255,"ulx3s_pass_through_sim i2c cam0 r_w", false,-1);
        tracep->declBus(c+102,"ulx3s_pass_through_sim i2c cam0 datain", false,-1, 7,0);
        tracep->declBus(c+105,"ulx3s_pass_through_sim i2c cam0 register_in", false,-1, 15,0);
        tracep->declBus(c+110,"ulx3s_pass_through_sim i2c cam0 slave_addr", false,-1, 6,0);
        tracep->declBit(c+249,"ulx3s_pass_through_sim i2c cam0 ackn", false,-1);
        tracep->declBit(c+217,"ulx3s_pass_through_sim i2c cam0 scl", false,-1);
        tracep->declBit(c+97,"ulx3s_pass_through_sim i2c cam0 sda", false,-1);
        tracep->declBit(c+100,"ulx3s_pass_through_sim i2c cam0 ready", false,-1);
        tracep->declBus(c+251,"ulx3s_pass_through_sim i2c cam0 idle", false,-1, 7,0);
        tracep->declBus(c+252,"ulx3s_pass_through_sim i2c cam0 start", false,-1, 7,0);
        tracep->declBus(c+253,"ulx3s_pass_through_sim i2c cam0 send", false,-1, 7,0);
        tracep->declBus(c+256,"ulx3s_pass_through_sim i2c cam0 reg0", false,-1, 7,0);
        tracep->declBus(c+257,"ulx3s_pass_through_sim i2c cam0 reg1", false,-1, 7,0);
        tracep->declBus(c+258,"ulx3s_pass_through_sim i2c cam0 data", false,-1, 7,0);
        tracep->declBus(c+259,"ulx3s_pass_through_sim i2c cam0 stop", false,-1, 7,0);
        tracep->declBit(c+109,"ulx3s_pass_through_sim i2c cam0 valid_r", false,-1);
        tracep->declBus(c+111,"ulx3s_pass_through_sim i2c cam0 state", false,-1, 7,0);
        tracep->declBit(c+112,"ulx3s_pass_through_sim i2c cam0 send_data_old", false,-1);
        tracep->declBit(c+113,"ulx3s_pass_through_sim i2c cam0 rising_edge", false,-1);
        tracep->declBus(c+114,"ulx3s_pass_through_sim i2c cam0 counter", false,-1, 31,0);
        tracep->declBit(c+97,"ulx3s_pass_through_sim i2c cam0 sda0", false,-1);
        tracep->declBit(c+115,"ulx3s_pass_through_sim i2c cam0 sending", false,-1);
        tracep->declQuad(c+116,"ulx3s_pass_through_sim i2c cam0 i2cdata", false,-1, 36,0);
        tracep->declQuad(c+260,"ulx3s_pass_through_sim i2c cam0 i2cin", false,-1, 36,0);
        tracep->declBit(c+100,"ulx3s_pass_through_sim i2c cam0 ready0", false,-1);
        tracep->declBus(c+251,"ulx3s_pass_through_sim i2c cam0 clkcount", false,-1, 7,0);
        tracep->declBit(c+262,"ulx3s_pass_through_sim i2c cam0 clkdelay0", false,-1);
        tracep->declBit(c+263,"ulx3s_pass_through_sim i2c cam0 clkdelay1", false,-1);
        tracep->declBit(c+264,"ulx3s_pass_through_sim i2c cam0 scl0", false,-1);
        tracep->declBit(c+265,"ulx3s_pass_through_sim i2c cam0 scl1", false,-1);
        tracep->declBit(c+266,"ulx3s_pass_through_sim i2c cam0 scl2", false,-1);
        tracep->declBus(c+267,"ulx3s_pass_through_sim mipi mipi_frec", false,-1, 31,0);
        tracep->declBus(c+268,"ulx3s_pass_through_sim mipi iddr_ratio", false,-1, 31,0);
        tracep->declBit(c+232,"ulx3s_pass_through_sim mipi sys_clk", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi reset", false,-1);
        tracep->declBit(c+204,"ulx3s_pass_through_sim mipi lane0_d", false,-1);
        tracep->declBit(c+203,"ulx3s_pass_through_sim mipi mipi_clk", false,-1);
        tracep->declBit(c+269,"ulx3s_pass_through_sim mipi mipi_clk_8", false,-1);
        tracep->declBit(c+205,"ulx3s_pass_through_sim mipi lane1_d", false,-1);
        tracep->declBit(c+206,"ulx3s_pass_through_sim mipi lane0_p", false,-1);
        tracep->declBit(c+207,"ulx3s_pass_through_sim mipi lane0_n", false,-1);
        tracep->declBit(c+208,"ulx3s_pass_through_sim mipi lane1_p", false,-1);
        tracep->declBit(c+209,"ulx3s_pass_through_sim mipi lane1_n", false,-1);
        tracep->declBus(c+163,"ulx3s_pass_through_sim mipi data_o", false,-1, 31,0);
        tracep->declBus(c+166,"ulx3s_pass_through_sim mipi adress_out", false,-1, 31,0);
        tracep->declBit(c+159,"ulx3s_pass_through_sim mipi ram_clk", false,-1);
        tracep->declBit(c+187,"ulx3s_pass_through_sim mipi debug0", false,-1);
        tracep->declBit(c+218,"ulx3s_pass_through_sim mipi debug1", false,-1);
        tracep->declBit(c+167,"ulx3s_pass_through_sim mipi debug3", false,-1);
        tracep->declBit(c+168,"ulx3s_pass_through_sim mipi debug2", false,-1);
        tracep->declBit(c+186,"ulx3s_pass_through_sim mipi termination", false,-1);
        tracep->declBit(c+218,"ulx3s_pass_through_sim mipi rec_data_o", false,-1);
        tracep->declBus(c+164,"ulx3s_pass_through_sim mipi cX", false,-1, 31,0);
        tracep->declBus(c+165,"ulx3s_pass_through_sim mipi cY", false,-1, 31,0);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi stop_clk", false,-1);
        tracep->declBit(c+218,"ulx3s_pass_through_sim mipi rec_data", false,-1);
        tracep->declBus(c+270,"ulx3s_pass_through_sim mipi lane0byte", false,-1, 7,0);
        tracep->declBus(c+271,"ulx3s_pass_through_sim mipi lane1byte", false,-1, 7,0);
        tracep->declBus(c+131,"ulx3s_pass_through_sim mipi q_o_0", false,-1, 3,0);
        tracep->declBus(c+132,"ulx3s_pass_through_sim mipi q_o_1", false,-1, 3,0);
        tracep->declBus(c+133,"ulx3s_pass_through_sim mipi ov_fl_0", false,-1, 1,0);
        tracep->declBus(c+134,"ulx3s_pass_through_sim mipi ov_fl_1", false,-1, 1,0);
        tracep->declBit(c+135,"ulx3s_pass_through_sim mipi even", false,-1);
        tracep->declBit(c+219,"ulx3s_pass_through_sim mipi sync", false,-1);
        tracep->declBit(c+118,"ulx3s_pass_through_sim mipi sync_mipi_clk", false,-1);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi sync_mipi_clk_2", false,-1);
        tracep->declBit(c+136,"ulx3s_pass_through_sim mipi sync_mipi_clk_4", false,-1);
        tracep->declBit(c+159,"ulx3s_pass_through_sim mipi sync_mipi_clk_8", false,-1);
        tracep->declBus(c+137,"ulx3s_pass_through_sim mipi byte_e_0", false,-1, 7,0);
        tracep->declBus(c+138,"ulx3s_pass_through_sim mipi byte_ue_0", false,-1, 7,0);
        tracep->declBus(c+139,"ulx3s_pass_through_sim mipi byte_e_1", false,-1, 7,0);
        tracep->declBus(c+140,"ulx3s_pass_through_sim mipi byte_ue_1", false,-1, 7,0);
        tracep->declBus(c+220,"ulx3s_pass_through_sim mipi byte_o_0", false,-1, 7,0);
        tracep->declBus(c+221,"ulx3s_pass_through_sim mipi byte_o_1", false,-1, 7,0);
        tracep->declBus(c+175,"ulx3s_pass_through_sim mipi data", false,-1, 31,0);
        tracep->declBit(c+222,"ulx3s_pass_through_sim mipi valid", false,-1);
        tracep->declBus(c+176,"ulx3s_pass_through_sim mipi type_w", false,-1, 5,0);
        tracep->declBus(c+177,"ulx3s_pass_through_sim mipi wordcount", false,-1, 15,0);
        tracep->declBus(c+267,"ulx3s_pass_through_sim mipi RxFSM mipi_frec", false,-1, 31,0);
        tracep->declBit(c+232,"ulx3s_pass_through_sim mipi RxFSM clk100MHz", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi RxFSM reset", false,-1);
        tracep->declBit(c+218,"ulx3s_pass_through_sim mipi RxFSM rec_data", false,-1);
        tracep->declBit(c+206,"ulx3s_pass_through_sim mipi RxFSM lane0_p", false,-1);
        tracep->declBit(c+207,"ulx3s_pass_through_sim mipi RxFSM lane0_n", false,-1);
        tracep->declBit(c+208,"ulx3s_pass_through_sim mipi RxFSM lane1_p", false,-1);
        tracep->declBit(c+209,"ulx3s_pass_through_sim mipi RxFSM lane1_n", false,-1);
        tracep->declBit(c+272,"ulx3s_pass_through_sim mipi RxFSM stop_tran", false,-1);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi RxFSM stop_rx", false,-1);
        tracep->declBit(c+186,"ulx3s_pass_through_sim mipi RxFSM term", false,-1);
        tracep->declBit(c+187,"ulx3s_pass_through_sim mipi RxFSM debug0", false,-1);
        tracep->declBit(c+273,"ulx3s_pass_through_sim mipi RxFSM debug1", false,-1);
        tracep->declBus(c+251,"ulx3s_pass_through_sim mipi RxFSM TIMEOUT", false,-1, 7,0);
        tracep->declBus(c+252,"ulx3s_pass_through_sim mipi RxFSM LP11", false,-1, 7,0);
        tracep->declBus(c+253,"ulx3s_pass_through_sim mipi RxFSM LP01", false,-1, 7,0);
        tracep->declBus(c+256,"ulx3s_pass_through_sim mipi RxFSM LP00", false,-1, 7,0);
        tracep->declBus(c+257,"ulx3s_pass_through_sim mipi RxFSM SYNC", false,-1, 7,0);
        tracep->declBus(c+258,"ulx3s_pass_through_sim mipi RxFSM HEADER", false,-1, 7,0);
        tracep->declBus(c+259,"ulx3s_pass_through_sim mipi RxFSM DATA", false,-1, 7,0);
        tracep->declBus(c+274,"ulx3s_pass_through_sim mipi RxFSM Tlpx", false,-1, 31,0);
        tracep->declBus(c+275,"ulx3s_pass_through_sim mipi RxFSM Timeout", false,-1, 31,0);
        tracep->declBus(c+276,"ulx3s_pass_through_sim mipi RxFSM Tdterm", false,-1, 31,0);
        tracep->declBus(c+277,"ulx3s_pass_through_sim mipi RxFSM Thssettle", false,-1, 31,0);
        tracep->declBus(c+189,"ulx3s_pass_through_sim mipi RxFSM state_mipi", false,-1, 7,0);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi RxFSM stop_rx_r", false,-1);
        tracep->declBit(c+186,"ulx3s_pass_through_sim mipi RxFSM term_r", false,-1);
        tracep->declBit(c+187,"ulx3s_pass_through_sim mipi RxFSM debug0_r", false,-1);
        tracep->declBit(c+273,"ulx3s_pass_through_sim mipi RxFSM debug1_r", false,-1);
        tracep->declBus(c+190,"ulx3s_pass_through_sim mipi RxFSM timer_tou", false,-1, 31,0);
        tracep->declBus(c+191,"ulx3s_pass_through_sim mipi RxFSM timer_term", false,-1, 31,0);
        tracep->declBus(c+192,"ulx3s_pass_through_sim mipi RxFSM timer_hs", false,-1, 31,0);
        tracep->declBit(c+203,"ulx3s_pass_through_sim mipi SYNC ECLKI", false,-1);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi SYNC STOP", false,-1);
        tracep->declBit(c+118,"ulx3s_pass_through_sim mipi SYNC ECLKO", false,-1);
        tracep->declBit(c+119,"ulx3s_pass_through_sim mipi SYNC eclki_r0", false,-1);
        tracep->declBit(c+120,"ulx3s_pass_through_sim mipi SYNC eclki_r1", false,-1);
        tracep->declBit(c+118,"ulx3s_pass_through_sim mipi SYNC eclki_r2", false,-1);
        tracep->declBit(c+118,"ulx3s_pass_through_sim mipi div2 CLKI", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi div2 RST", false,-1);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi div2 CDIVX", false,-1);
        tracep->declBus(c+122,"ulx3s_pass_through_sim mipi div2 counter", false,-1, 7,0);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi div4 CLKI", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi div4 RST", false,-1);
        tracep->declBit(c+136,"ulx3s_pass_through_sim mipi div4 CDIVX", false,-1);
        tracep->declBus(c+141,"ulx3s_pass_through_sim mipi div4 counter", false,-1, 7,0);
        tracep->declBit(c+136,"ulx3s_pass_through_sim mipi div8 CLKI", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi div8 RST", false,-1);
        tracep->declBit(c+159,"ulx3s_pass_through_sim mipi div8 CDIVX", false,-1);
        tracep->declBus(c+160,"ulx3s_pass_through_sim mipi div8 counter", false,-1, 7,0);
        tracep->declBit(c+204,"ulx3s_pass_through_sim mipi lane0 lane", false,-1);
        tracep->declBit(c+118,"ulx3s_pass_through_sim mipi lane0 sync_mipi_clk", false,-1);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi lane0 sync_mipi_clk_2", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi lane0 reset", false,-1);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi lane0 stop", false,-1);
        tracep->declBus(c+131,"ulx3s_pass_through_sim mipi lane0 q_o", false,-1, 3,0);
        tracep->declBus(c+133,"ulx3s_pass_through_sim mipi lane0 ov_fl", false,-1, 1,0);
        tracep->declBit(c+135,"ulx3s_pass_through_sim mipi lane0 even", false,-1);
        tracep->declBit(c+219,"ulx3s_pass_through_sim mipi lane0 sync", false,-1);
        tracep->declBus(c+223,"ulx3s_pass_through_sim mipi lane0 ddr", false,-1, 3,0);
        tracep->declBit(c+142,"ulx3s_pass_through_sim mipi lane0 sync_r", false,-1);
        tracep->declBit(c+135,"ulx3s_pass_through_sim mipi lane0 even_r", false,-1);
        tracep->declBus(c+131,"ulx3s_pass_through_sim mipi lane0 q_o_r", false,-1, 3,0);
        tracep->declBus(c+133,"ulx3s_pass_through_sim mipi lane0 ov_fl_r", false,-1, 1,0);
        tracep->declBus(c+278,"ulx3s_pass_through_sim mipi lane0 ov_fl_r1", false,-1, 1,0);
        tracep->declBus(c+143,"ulx3s_pass_through_sim mipi lane0 syncbyte", false,-1, 7,0);
        tracep->declBus(c+144,"ulx3s_pass_through_sim mipi lane0 detect_e", false,-1, 7,0);
        tracep->declBus(c+145,"ulx3s_pass_through_sim mipi lane0 detect_ue", false,-1, 7,0);
        tracep->declBit(c+279,"ulx3s_pass_through_sim mipi lane0 delay_lane", false,-1);
        tracep->declBit(c+204,"ulx3s_pass_through_sim mipi lane0 IDDR D", false,-1);
        tracep->declBit(c+118,"ulx3s_pass_through_sim mipi lane0 IDDR ECLK", false,-1);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi lane0 IDDR SCLK", false,-1);
        tracep->declBit(c+224,"ulx3s_pass_through_sim mipi lane0 IDDR RST", false,-1);
        tracep->declBit(c+123,"ulx3s_pass_through_sim mipi lane0 IDDR Q0", false,-1);
        tracep->declBit(c+127,"ulx3s_pass_through_sim mipi lane0 IDDR Q1", false,-1);
        tracep->declBit(c+124,"ulx3s_pass_through_sim mipi lane0 IDDR Q2", false,-1);
        tracep->declBit(c+128,"ulx3s_pass_through_sim mipi lane0 IDDR Q3", false,-1);
        tracep->declBit(c+123,"ulx3s_pass_through_sim mipi lane0 IDDR A", false,-1);
        tracep->declBit(c+127,"ulx3s_pass_through_sim mipi lane0 IDDR B", false,-1);
        tracep->declBit(c+124,"ulx3s_pass_through_sim mipi lane0 IDDR C", false,-1);
        tracep->declBit(c+128,"ulx3s_pass_through_sim mipi lane0 IDDR D1", false,-1);
        tracep->declBit(c+205,"ulx3s_pass_through_sim mipi lane1 lane", false,-1);
        tracep->declBit(c+118,"ulx3s_pass_through_sim mipi lane1 sync_mipi_clk", false,-1);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi lane1 sync_mipi_clk_2", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi lane1 reset", false,-1);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi lane1 stop", false,-1);
        tracep->declBus(c+132,"ulx3s_pass_through_sim mipi lane1 q_o", false,-1, 3,0);
        tracep->declBus(c+134,"ulx3s_pass_through_sim mipi lane1 ov_fl", false,-1, 1,0);
        tracep->declBit(c+146,"ulx3s_pass_through_sim mipi lane1 even", false,-1);
        tracep->declBit(c+225,"ulx3s_pass_through_sim mipi lane1 sync", false,-1);
        tracep->declBus(c+226,"ulx3s_pass_through_sim mipi lane1 ddr", false,-1, 3,0);
        tracep->declBit(c+147,"ulx3s_pass_through_sim mipi lane1 sync_r", false,-1);
        tracep->declBit(c+146,"ulx3s_pass_through_sim mipi lane1 even_r", false,-1);
        tracep->declBus(c+132,"ulx3s_pass_through_sim mipi lane1 q_o_r", false,-1, 3,0);
        tracep->declBus(c+134,"ulx3s_pass_through_sim mipi lane1 ov_fl_r", false,-1, 1,0);
        tracep->declBus(c+280,"ulx3s_pass_through_sim mipi lane1 ov_fl_r1", false,-1, 1,0);
        tracep->declBus(c+148,"ulx3s_pass_through_sim mipi lane1 syncbyte", false,-1, 7,0);
        tracep->declBus(c+149,"ulx3s_pass_through_sim mipi lane1 detect_e", false,-1, 7,0);
        tracep->declBus(c+150,"ulx3s_pass_through_sim mipi lane1 detect_ue", false,-1, 7,0);
        tracep->declBit(c+281,"ulx3s_pass_through_sim mipi lane1 delay_lane", false,-1);
        tracep->declBit(c+205,"ulx3s_pass_through_sim mipi lane1 IDDR D", false,-1);
        tracep->declBit(c+118,"ulx3s_pass_through_sim mipi lane1 IDDR ECLK", false,-1);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi lane1 IDDR SCLK", false,-1);
        tracep->declBit(c+224,"ulx3s_pass_through_sim mipi lane1 IDDR RST", false,-1);
        tracep->declBit(c+125,"ulx3s_pass_through_sim mipi lane1 IDDR Q0", false,-1);
        tracep->declBit(c+129,"ulx3s_pass_through_sim mipi lane1 IDDR Q1", false,-1);
        tracep->declBit(c+126,"ulx3s_pass_through_sim mipi lane1 IDDR Q2", false,-1);
        tracep->declBit(c+130,"ulx3s_pass_through_sim mipi lane1 IDDR Q3", false,-1);
        tracep->declBit(c+125,"ulx3s_pass_through_sim mipi lane1 IDDR A", false,-1);
        tracep->declBit(c+129,"ulx3s_pass_through_sim mipi lane1 IDDR B", false,-1);
        tracep->declBit(c+126,"ulx3s_pass_through_sim mipi lane1 IDDR C", false,-1);
        tracep->declBit(c+130,"ulx3s_pass_through_sim mipi lane1 IDDR D1", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi BA0 reset", false,-1);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi BA0 stop", false,-1);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi BA0 mipi_clk_2", false,-1);
        tracep->declBus(c+131,"ulx3s_pass_through_sim mipi BA0 q_o", false,-1, 3,0);
        tracep->declBus(c+133,"ulx3s_pass_through_sim mipi BA0 ov_fl", false,-1, 1,0);
        tracep->declBus(c+137,"ulx3s_pass_through_sim mipi BA0 byte_e", false,-1, 7,0);
        tracep->declBus(c+138,"ulx3s_pass_through_sim mipi BA0 byte_ue", false,-1, 7,0);
        tracep->declBus(c+137,"ulx3s_pass_through_sim mipi BA0 byte0_r", false,-1, 7,0);
        tracep->declBus(c+138,"ulx3s_pass_through_sim mipi BA0 byte1_r", false,-1, 7,0);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi BA1 reset", false,-1);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi BA1 stop", false,-1);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi BA1 mipi_clk_2", false,-1);
        tracep->declBus(c+132,"ulx3s_pass_through_sim mipi BA1 q_o", false,-1, 3,0);
        tracep->declBus(c+134,"ulx3s_pass_through_sim mipi BA1 ov_fl", false,-1, 1,0);
        tracep->declBus(c+139,"ulx3s_pass_through_sim mipi BA1 byte_e", false,-1, 7,0);
        tracep->declBus(c+140,"ulx3s_pass_through_sim mipi BA1 byte_ue", false,-1, 7,0);
        tracep->declBus(c+139,"ulx3s_pass_through_sim mipi BA1 byte0_r", false,-1, 7,0);
        tracep->declBus(c+140,"ulx3s_pass_through_sim mipi BA1 byte1_r", false,-1, 7,0);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi BAL0 reset", false,-1);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi BAL0 stop", false,-1);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi BAL0 mipi_clk_2", false,-1);
        tracep->declBit(c+219,"ulx3s_pass_through_sim mipi BAL0 sync", false,-1);
        tracep->declBit(c+135,"ulx3s_pass_through_sim mipi BAL0 even", false,-1);
        tracep->declBus(c+137,"ulx3s_pass_through_sim mipi BAL0 byte_e", false,-1, 7,0);
        tracep->declBus(c+138,"ulx3s_pass_through_sim mipi BAL0 byte_ue", false,-1, 7,0);
        tracep->declBus(c+220,"ulx3s_pass_through_sim mipi BAL0 byte_o", false,-1, 7,0);
        tracep->declBus(c+220,"ulx3s_pass_through_sim mipi BAL0 byte_o_r", false,-1, 7,0);
        tracep->declBus(c+151,"ulx3s_pass_through_sim mipi BAL0 counter", false,-1, 7,0);
        tracep->declBus(c+152,"ulx3s_pass_through_sim mipi BAL0 byte_o_r_old", false,-1, 7,0);
        tracep->declBus(c+153,"ulx3s_pass_through_sim mipi BAL0 byte_o_r_s", false,-1, 15,0);
        tracep->declBus(c+154,"ulx3s_pass_through_sim mipi BAL0 byte_o_eu", false,-1, 7,0);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi BAL1 reset", false,-1);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi BAL1 stop", false,-1);
        tracep->declBit(c+121,"ulx3s_pass_through_sim mipi BAL1 mipi_clk_2", false,-1);
        tracep->declBit(c+219,"ulx3s_pass_through_sim mipi BAL1 sync", false,-1);
        tracep->declBit(c+135,"ulx3s_pass_through_sim mipi BAL1 even", false,-1);
        tracep->declBus(c+139,"ulx3s_pass_through_sim mipi BAL1 byte_e", false,-1, 7,0);
        tracep->declBus(c+140,"ulx3s_pass_through_sim mipi BAL1 byte_ue", false,-1, 7,0);
        tracep->declBus(c+221,"ulx3s_pass_through_sim mipi BAL1 byte_o", false,-1, 7,0);
        tracep->declBus(c+221,"ulx3s_pass_through_sim mipi BAL1 byte_o_r", false,-1, 7,0);
        tracep->declBus(c+155,"ulx3s_pass_through_sim mipi BAL1 counter", false,-1, 7,0);
        tracep->declBus(c+156,"ulx3s_pass_through_sim mipi BAL1 byte_o_r_old", false,-1, 7,0);
        tracep->declBus(c+157,"ulx3s_pass_through_sim mipi BAL1 byte_o_r_s", false,-1, 15,0);
        tracep->declBus(c+158,"ulx3s_pass_through_sim mipi BAL1 byte_o_eu", false,-1, 7,0);
        tracep->declBit(c+136,"ulx3s_pass_through_sim mipi DE mipi_clk_4", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi DE reset", false,-1);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi DE stop", false,-1);
        tracep->declBit(c+135,"ulx3s_pass_through_sim mipi DE even", false,-1);
        tracep->declBit(c+219,"ulx3s_pass_through_sim mipi DE sync", false,-1);
        tracep->declBus(c+220,"ulx3s_pass_through_sim mipi DE byte_in0", false,-1, 7,0);
        tracep->declBus(c+221,"ulx3s_pass_through_sim mipi DE byte_in1", false,-1, 7,0);
        tracep->declBus(c+175,"ulx3s_pass_through_sim mipi DE data", false,-1, 31,0);
        tracep->declBit(c+222,"ulx3s_pass_through_sim mipi DE valid", false,-1);
        tracep->declBus(c+176,"ulx3s_pass_through_sim mipi DE type_o", false,-1, 5,0);
        tracep->declBus(c+177,"ulx3s_pass_through_sim mipi DE wordcount", false,-1, 15,0);
        tracep->declBus(c+178,"ulx3s_pass_through_sim mipi DE out_r", false,-1, 31,0);
        tracep->declBus(c+179,"ulx3s_pass_through_sim mipi DE out_r_old", false,-1, 31,0);
        tracep->declBit(c+161,"ulx3s_pass_through_sim mipi DE valid_r", false,-1);
        tracep->declBit(c+180,"ulx3s_pass_through_sim mipi DE start", false,-1);
        tracep->declBus(c+181,"ulx3s_pass_through_sim mipi DE counter", false,-1, 31,0);
        tracep->declBus(c+178,"ulx3s_pass_through_sim mipi DE regheader", false,-1, 31,0);
        tracep->declBus(c+182,"ulx3s_pass_through_sim mipi DE ecc", false,-1, 7,0);
        tracep->declBus(c+175,"ulx3s_pass_through_sim mipi DE data_r", false,-1, 31,0);
        tracep->declBus(c+176,"ulx3s_pass_through_sim mipi DE type_o_r", false,-1, 5,0);
        tracep->declBus(c+177,"ulx3s_pass_through_sim mipi DE wordcount_r", false,-1, 15,0);
        tracep->declBus(c+183,"ulx3s_pass_through_sim mipi DE syndrom", false,-1, 7,0);
        tracep->declBus(c+184,"ulx3s_pass_through_sim mipi DE correction", false,-1, 23,0);
        tracep->declBus(c+185,"ulx3s_pass_through_sim mipi DE regheader_correct", false,-1, 31,0);
        tracep->declBit(c+159,"ulx3s_pass_through_sim mipi Prot mipi_clk_8", false,-1);
        tracep->declBit(c+188,"ulx3s_pass_through_sim mipi Prot stop", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim mipi Prot reset", false,-1);
        tracep->declBit(c+222,"ulx3s_pass_through_sim mipi Prot valid", false,-1);
        tracep->declBus(c+176,"ulx3s_pass_through_sim mipi Prot type_i", false,-1, 5,0);
        tracep->declBus(c+177,"ulx3s_pass_through_sim mipi Prot wordcount", false,-1, 15,0);
        tracep->declBus(c+175,"ulx3s_pass_through_sim mipi Prot data", false,-1, 31,0);
        tracep->declBus(c+163,"ulx3s_pass_through_sim mipi Prot data_o", false,-1, 31,0);
        tracep->declBus(c+166,"ulx3s_pass_through_sim mipi Prot adress_o", false,-1, 31,0);
        tracep->declBit(c+218,"ulx3s_pass_through_sim mipi Prot rec_data", false,-1);
        tracep->declBit(c+168,"ulx3s_pass_through_sim mipi Prot debug", false,-1);
        tracep->declBit(c+167,"ulx3s_pass_through_sim mipi Prot debug1", false,-1);
        tracep->declBus(c+164,"ulx3s_pass_through_sim mipi Prot cX", false,-1, 31,0);
        tracep->declBus(c+165,"ulx3s_pass_through_sim mipi Prot cY", false,-1, 31,0);
        tracep->declBit(c+169,"ulx3s_pass_through_sim mipi Prot rec_data_r", false,-1);
        tracep->declBit(c+170,"ulx3s_pass_through_sim mipi Prot state", false,-1);
        tracep->declBit(c+171,"ulx3s_pass_through_sim mipi Prot valid_old", false,-1);
        tracep->declBus(c+172,"ulx3s_pass_through_sim mipi Prot counter", false,-1, 31,0);
        tracep->declBus(c+173,"ulx3s_pass_through_sim mipi Prot count_val", false,-1, 31,0);
        tracep->declBus(c+163,"ulx3s_pass_through_sim mipi Prot data_o_r", false,-1, 31,0);
        tracep->declBus(c+166,"ulx3s_pass_through_sim mipi Prot counter_addr", false,-1, 31,0);
        tracep->declBus(c+164,"ulx3s_pass_through_sim mipi Prot cX_r", false,-1, 31,0);
        tracep->declBus(c+165,"ulx3s_pass_through_sim mipi Prot cY_r", false,-1, 31,0);
        tracep->declBus(c+174,"ulx3s_pass_through_sim mipi Prot c", false,-1, 15,0);
        tracep->declBus(c+227,"ulx3s_pass_through_sim mipi Prot c_calk", false,-1, 15,0);
        tracep->declBus(c+175,"ulx3s_pass_through_sim mipi Prot d", false,-1, 31,0);
        tracep->declBus(c+163,"ulx3s_pass_through_sim DPR data_a", false,-1, 31,0);
        tracep->declBus(c+282,"ulx3s_pass_through_sim DPR data_b", false,-1, 31,0);
        tracep->declBus(c+162,"ulx3s_pass_through_sim DPR addr_a", false,-1, 16,0);
        tracep->declBus(c+53,"ulx3s_pass_through_sim DPR addr_b", false,-1, 16,0);
        tracep->declBus(c+283,"ulx3s_pass_through_sim DPR bank", false,-1, 1,0);
        tracep->declBit(c+201,"ulx3s_pass_through_sim DPR we_a", false,-1);
        tracep->declBit(c+249,"ulx3s_pass_through_sim DPR we_b", false,-1);
        tracep->declBit(c+159,"ulx3s_pass_through_sim DPR clk", false,-1);
        tracep->declBit(c+193,"ulx3s_pass_through_sim DPR clk_b", false,-1);
        tracep->declBus(c+50,"ulx3s_pass_through_sim DPR data_out", false,-1, 31,0);
        tracep->declBus(c+284,"ulx3s_pass_through_sim HDMI h_pixel", false,-1, 31,0);
        tracep->declBus(c+285,"ulx3s_pass_through_sim HDMI h_front_porch", false,-1, 31,0);
        tracep->declBus(c+286,"ulx3s_pass_through_sim HDMI h_back_porch", false,-1, 31,0);
        tracep->declBus(c+287,"ulx3s_pass_through_sim HDMI h_tot_pixel", false,-1, 31,0);
        tracep->declBus(c+288,"ulx3s_pass_through_sim HDMI v_pixel", false,-1, 31,0);
        tracep->declBus(c+289,"ulx3s_pass_through_sim HDMI v_front_porch", false,-1, 31,0);
        tracep->declBus(c+290,"ulx3s_pass_through_sim HDMI v_back_porch", false,-1, 31,0);
        tracep->declBus(c+291,"ulx3s_pass_through_sim HDMI v_tot_pixel", false,-1, 31,0);
        tracep->declBit(c+193,"ulx3s_pass_through_sim HDMI clk_low", false,-1);
        tracep->declBit(c+233,"ulx3s_pass_through_sim HDMI clk_high", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim HDMI reset", false,-1);
        tracep->declBus(c+49,"ulx3s_pass_through_sim HDMI red", false,-1, 7,0);
        tracep->declBus(c+49,"ulx3s_pass_through_sim HDMI green", false,-1, 7,0);
        tracep->declBus(c+49,"ulx3s_pass_through_sim HDMI blue", false,-1, 7,0);
        tracep->declBus(c+48,"ulx3s_pass_through_sim HDMI addr", false,-1, 20,0);
        tracep->declBus(c+213,"ulx3s_pass_through_sim HDMI TMDSd", false,-1, 3,0);
        tracep->declBus(c+54,"ulx3s_pass_through_sim HDMI CounterX", false,-1, 10,0);
        tracep->declBus(c+55,"ulx3s_pass_through_sim HDMI CounterY", false,-1, 10,0);
        tracep->declBit(c+56,"ulx3s_pass_through_sim HDMI hSync", false,-1);
        tracep->declBit(c+57,"ulx3s_pass_through_sim HDMI vSync", false,-1);
        tracep->declBus(c+58,"ulx3s_pass_through_sim HDMI DrawArea", false,-1, 1,0);
        tracep->declBus(c+48,"ulx3s_pass_through_sim HDMI addr_r", false,-1, 20,0);
        tracep->declBus(c+59,"ulx3s_pass_through_sim HDMI TMDS_red", false,-1, 9,0);
        tracep->declBus(c+60,"ulx3s_pass_through_sim HDMI TMDS_green", false,-1, 9,0);
        tracep->declBus(c+61,"ulx3s_pass_through_sim HDMI TMDS_blue", false,-1, 9,0);
        tracep->declBit(c+1,"ulx3s_pass_through_sim HDMI TMDS_r", false,-1);
        tracep->declBit(c+2,"ulx3s_pass_through_sim HDMI TMDS_b", false,-1);
        tracep->declBit(c+3,"ulx3s_pass_through_sim HDMI TMDS_g", false,-1);
        tracep->declBus(c+4,"ulx3s_pass_through_sim HDMI TMDS_mod10", false,-1, 3,0);
        tracep->declBus(c+5,"ulx3s_pass_through_sim HDMI TMDS_shift_red", false,-1, 9,0);
        tracep->declBus(c+6,"ulx3s_pass_through_sim HDMI TMDS_shift_green", false,-1, 9,0);
        tracep->declBus(c+7,"ulx3s_pass_through_sim HDMI TMDS_shift_blue", false,-1, 9,0);
        tracep->declBit(c+8,"ulx3s_pass_through_sim HDMI TMDS_shift_load", false,-1);
        tracep->declBus(c+62,"ulx3s_pass_through_sim HDMI red_bay", false,-1, 7,0);
        tracep->declBus(c+63,"ulx3s_pass_through_sim HDMI green_bay", false,-1, 7,0);
        tracep->declBus(c+64,"ulx3s_pass_through_sim HDMI blue_bay", false,-1, 7,0);
        tracep->declBit(c+9,"ulx3s_pass_through_sim HDMI ddr_r D0", false,-1);
        tracep->declBit(c+10,"ulx3s_pass_through_sim HDMI ddr_r D1", false,-1);
        tracep->declBit(c+233,"ulx3s_pass_through_sim HDMI ddr_r SCLK", false,-1);
        tracep->declBit(c+1,"ulx3s_pass_through_sim HDMI ddr_r Q", false,-1);
        tracep->declBit(c+11,"ulx3s_pass_through_sim HDMI ddr_g D0", false,-1);
        tracep->declBit(c+12,"ulx3s_pass_through_sim HDMI ddr_g D1", false,-1);
        tracep->declBit(c+233,"ulx3s_pass_through_sim HDMI ddr_g SCLK", false,-1);
        tracep->declBit(c+3,"ulx3s_pass_through_sim HDMI ddr_g Q", false,-1);
        tracep->declBit(c+13,"ulx3s_pass_through_sim HDMI ddr_b D0", false,-1);
        tracep->declBit(c+14,"ulx3s_pass_through_sim HDMI ddr_b D1", false,-1);
        tracep->declBit(c+233,"ulx3s_pass_through_sim HDMI ddr_b SCLK", false,-1);
        tracep->declBit(c+2,"ulx3s_pass_through_sim HDMI ddr_b Q", false,-1);
        tracep->declBit(c+193,"ulx3s_pass_through_sim HDMI encoder0 clklow", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim HDMI encoder0 reset", false,-1);
        tracep->declBus(c+58,"ulx3s_pass_through_sim HDMI encoder0 state", false,-1, 1,0);
        tracep->declBus(c+49,"ulx3s_pass_through_sim HDMI encoder0 pix_data", false,-1, 7,0);
        tracep->declBus(c+65,"ulx3s_pass_through_sim HDMI encoder0 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+292,"ulx3s_pass_through_sim HDMI encoder0 aux_data", false,-1, 3,0);
        tracep->declBit(c+293,"ulx3s_pass_through_sim HDMI encoder0 data_o", false,-1);
        tracep->declBus(c+61,"ulx3s_pass_through_sim HDMI encoder0 q_out", false,-1, 9,0);
        tracep->declBus(c+61,"ulx3s_pass_through_sim HDMI encoder0 q_out1", false,-1, 9,0);
        tracep->declBus(c+66,"ulx3s_pass_through_sim HDMI encoder0 cnt_old", false,-1, 31,0);
        tracep->declBus(c+15,"ulx3s_pass_through_sim HDMI encoder0 N1qm", false,-1, 7,0);
        tracep->declBus(c+16,"ulx3s_pass_through_sim HDMI encoder0 N0qm", false,-1, 7,0);
        tracep->declBus(c+67,"ulx3s_pass_through_sim HDMI encoder0 N1pd", false,-1, 7,0);
        tracep->declBus(c+68,"ulx3s_pass_through_sim HDMI encoder0 N0pd", false,-1, 7,0);
        tracep->declBus(c+17,"ulx3s_pass_through_sim HDMI encoder0 q_m", false,-1, 8,0);
        tracep->declBit(c+69,"ulx3s_pass_through_sim HDMI encoder0 q_m0", false,-1);
        tracep->declBit(c+70,"ulx3s_pass_through_sim HDMI encoder0 q_m1", false,-1);
        tracep->declBit(c+71,"ulx3s_pass_through_sim HDMI encoder0 q_m2", false,-1);
        tracep->declBit(c+72,"ulx3s_pass_through_sim HDMI encoder0 q_m3", false,-1);
        tracep->declBit(c+73,"ulx3s_pass_through_sim HDMI encoder0 q_m4", false,-1);
        tracep->declBit(c+74,"ulx3s_pass_through_sim HDMI encoder0 q_m5", false,-1);
        tracep->declBit(c+75,"ulx3s_pass_through_sim HDMI encoder0 q_m6", false,-1);
        tracep->declBit(c+76,"ulx3s_pass_through_sim HDMI encoder0 q_m7", false,-1);
        tracep->declBit(c+77,"ulx3s_pass_through_sim HDMI encoder0 q_m8", false,-1);
        tracep->declBit(c+18,"ulx3s_pass_through_sim HDMI encoder0 q_out2p1", false,-1);
        tracep->declBit(c+19,"ulx3s_pass_through_sim HDMI encoder0 q_out2p2", false,-1);
        tracep->declBus(c+20,"ulx3s_pass_through_sim HDMI encoder0 q_out2p3", false,-1, 7,0);
        tracep->declBus(c+228,"ulx3s_pass_through_sim HDMI encoder0 q_out2", false,-1, 9,0);
        tracep->declBus(c+21,"ulx3s_pass_through_sim HDMI encoder0 cnt0", false,-1, 31,0);
        tracep->declBus(c+22,"ulx3s_pass_through_sim HDMI encoder0 cnt1", false,-1, 31,0);
        tracep->declBus(c+23,"ulx3s_pass_through_sim HDMI encoder0 cnt2", false,-1, 31,0);
        tracep->declBus(c+24,"ulx3s_pass_through_sim HDMI encoder0 cnt3", false,-1, 31,0);
        tracep->declBus(c+25,"ulx3s_pass_through_sim HDMI encoder0 cnt", false,-1, 31,0);
        tracep->declBus(c+78,"ulx3s_pass_through_sim HDMI encoder0 tmds_cnt", false,-1, 10,0);
        tracep->declBit(c+193,"ulx3s_pass_through_sim HDMI encoder1 clklow", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim HDMI encoder1 reset", false,-1);
        tracep->declBus(c+58,"ulx3s_pass_through_sim HDMI encoder1 state", false,-1, 1,0);
        tracep->declBus(c+49,"ulx3s_pass_through_sim HDMI encoder1 pix_data", false,-1, 7,0);
        tracep->declBus(c+294,"ulx3s_pass_through_sim HDMI encoder1 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+295,"ulx3s_pass_through_sim HDMI encoder1 aux_data", false,-1, 3,0);
        tracep->declBit(c+296,"ulx3s_pass_through_sim HDMI encoder1 data_o", false,-1);
        tracep->declBus(c+60,"ulx3s_pass_through_sim HDMI encoder1 q_out", false,-1, 9,0);
        tracep->declBus(c+60,"ulx3s_pass_through_sim HDMI encoder1 q_out1", false,-1, 9,0);
        tracep->declBus(c+79,"ulx3s_pass_through_sim HDMI encoder1 cnt_old", false,-1, 31,0);
        tracep->declBus(c+26,"ulx3s_pass_through_sim HDMI encoder1 N1qm", false,-1, 7,0);
        tracep->declBus(c+27,"ulx3s_pass_through_sim HDMI encoder1 N0qm", false,-1, 7,0);
        tracep->declBus(c+67,"ulx3s_pass_through_sim HDMI encoder1 N1pd", false,-1, 7,0);
        tracep->declBus(c+68,"ulx3s_pass_through_sim HDMI encoder1 N0pd", false,-1, 7,0);
        tracep->declBus(c+28,"ulx3s_pass_through_sim HDMI encoder1 q_m", false,-1, 8,0);
        tracep->declBit(c+69,"ulx3s_pass_through_sim HDMI encoder1 q_m0", false,-1);
        tracep->declBit(c+80,"ulx3s_pass_through_sim HDMI encoder1 q_m1", false,-1);
        tracep->declBit(c+81,"ulx3s_pass_through_sim HDMI encoder1 q_m2", false,-1);
        tracep->declBit(c+82,"ulx3s_pass_through_sim HDMI encoder1 q_m3", false,-1);
        tracep->declBit(c+83,"ulx3s_pass_through_sim HDMI encoder1 q_m4", false,-1);
        tracep->declBit(c+84,"ulx3s_pass_through_sim HDMI encoder1 q_m5", false,-1);
        tracep->declBit(c+85,"ulx3s_pass_through_sim HDMI encoder1 q_m6", false,-1);
        tracep->declBit(c+86,"ulx3s_pass_through_sim HDMI encoder1 q_m7", false,-1);
        tracep->declBit(c+87,"ulx3s_pass_through_sim HDMI encoder1 q_m8", false,-1);
        tracep->declBit(c+29,"ulx3s_pass_through_sim HDMI encoder1 q_out2p1", false,-1);
        tracep->declBit(c+30,"ulx3s_pass_through_sim HDMI encoder1 q_out2p2", false,-1);
        tracep->declBus(c+31,"ulx3s_pass_through_sim HDMI encoder1 q_out2p3", false,-1, 7,0);
        tracep->declBus(c+229,"ulx3s_pass_through_sim HDMI encoder1 q_out2", false,-1, 9,0);
        tracep->declBus(c+32,"ulx3s_pass_through_sim HDMI encoder1 cnt0", false,-1, 31,0);
        tracep->declBus(c+33,"ulx3s_pass_through_sim HDMI encoder1 cnt1", false,-1, 31,0);
        tracep->declBus(c+34,"ulx3s_pass_through_sim HDMI encoder1 cnt2", false,-1, 31,0);
        tracep->declBus(c+35,"ulx3s_pass_through_sim HDMI encoder1 cnt3", false,-1, 31,0);
        tracep->declBus(c+36,"ulx3s_pass_through_sim HDMI encoder1 cnt", false,-1, 31,0);
        tracep->declBus(c+297,"ulx3s_pass_through_sim HDMI encoder1 tmds_cnt", false,-1, 10,0);
        tracep->declBit(c+193,"ulx3s_pass_through_sim HDMI encoder2 clklow", false,-1);
        tracep->declBit(c+200,"ulx3s_pass_through_sim HDMI encoder2 reset", false,-1);
        tracep->declBus(c+58,"ulx3s_pass_through_sim HDMI encoder2 state", false,-1, 1,0);
        tracep->declBus(c+49,"ulx3s_pass_through_sim HDMI encoder2 pix_data", false,-1, 7,0);
        tracep->declBus(c+294,"ulx3s_pass_through_sim HDMI encoder2 H_VSync_Ctr", false,-1, 1,0);
        tracep->declBus(c+298,"ulx3s_pass_through_sim HDMI encoder2 aux_data", false,-1, 3,0);
        tracep->declBit(c+299,"ulx3s_pass_through_sim HDMI encoder2 data_o", false,-1);
        tracep->declBus(c+59,"ulx3s_pass_through_sim HDMI encoder2 q_out", false,-1, 9,0);
        tracep->declBus(c+59,"ulx3s_pass_through_sim HDMI encoder2 q_out1", false,-1, 9,0);
        tracep->declBus(c+88,"ulx3s_pass_through_sim HDMI encoder2 cnt_old", false,-1, 31,0);
        tracep->declBus(c+37,"ulx3s_pass_through_sim HDMI encoder2 N1qm", false,-1, 7,0);
        tracep->declBus(c+38,"ulx3s_pass_through_sim HDMI encoder2 N0qm", false,-1, 7,0);
        tracep->declBus(c+67,"ulx3s_pass_through_sim HDMI encoder2 N1pd", false,-1, 7,0);
        tracep->declBus(c+68,"ulx3s_pass_through_sim HDMI encoder2 N0pd", false,-1, 7,0);
        tracep->declBus(c+39,"ulx3s_pass_through_sim HDMI encoder2 q_m", false,-1, 8,0);
        tracep->declBit(c+69,"ulx3s_pass_through_sim HDMI encoder2 q_m0", false,-1);
        tracep->declBit(c+89,"ulx3s_pass_through_sim HDMI encoder2 q_m1", false,-1);
        tracep->declBit(c+90,"ulx3s_pass_through_sim HDMI encoder2 q_m2", false,-1);
        tracep->declBit(c+91,"ulx3s_pass_through_sim HDMI encoder2 q_m3", false,-1);
        tracep->declBit(c+92,"ulx3s_pass_through_sim HDMI encoder2 q_m4", false,-1);
        tracep->declBit(c+93,"ulx3s_pass_through_sim HDMI encoder2 q_m5", false,-1);
        tracep->declBit(c+94,"ulx3s_pass_through_sim HDMI encoder2 q_m6", false,-1);
        tracep->declBit(c+95,"ulx3s_pass_through_sim HDMI encoder2 q_m7", false,-1);
        tracep->declBit(c+96,"ulx3s_pass_through_sim HDMI encoder2 q_m8", false,-1);
        tracep->declBit(c+40,"ulx3s_pass_through_sim HDMI encoder2 q_out2p1", false,-1);
        tracep->declBit(c+41,"ulx3s_pass_through_sim HDMI encoder2 q_out2p2", false,-1);
        tracep->declBus(c+42,"ulx3s_pass_through_sim HDMI encoder2 q_out2p3", false,-1, 7,0);
        tracep->declBus(c+230,"ulx3s_pass_through_sim HDMI encoder2 q_out2", false,-1, 9,0);
        tracep->declBus(c+43,"ulx3s_pass_through_sim HDMI encoder2 cnt0", false,-1, 31,0);
        tracep->declBus(c+44,"ulx3s_pass_through_sim HDMI encoder2 cnt1", false,-1, 31,0);
        tracep->declBus(c+45,"ulx3s_pass_through_sim HDMI encoder2 cnt2", false,-1, 31,0);
        tracep->declBus(c+46,"ulx3s_pass_through_sim HDMI encoder2 cnt3", false,-1, 31,0);
        tracep->declBus(c+47,"ulx3s_pass_through_sim HDMI encoder2 cnt", false,-1, 31,0);
        tracep->declBus(c+297,"ulx3s_pass_through_sim HDMI encoder2 tmds_cnt", false,-1, 10,0);
    }
}

void Vulx3s_pass_through_sim::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vulx3s_pass_through_sim::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vulx3s_pass_through_sim__Syms* __restrict vlSymsp = static_cast<Vulx3s_pass_through_sim__Syms*>(userp);
    Vulx3s_pass_through_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vulx3s_pass_through_sim::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vulx3s_pass_through_sim__Syms* __restrict vlSymsp = static_cast<Vulx3s_pass_through_sim__Syms*>(userp);
    Vulx3s_pass_through_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_r));
        tracep->fullBit(oldp+2,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_b));
        tracep->fullBit(oldp+3,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_g));
        tracep->fullCData(oldp+4,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_mod10),4);
        tracep->fullSData(oldp+5,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_red),10);
        tracep->fullSData(oldp+6,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_green),10);
        tracep->fullSData(oldp+7,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_blue),10);
        tracep->fullBit(oldp+8,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_load));
        tracep->fullBit(oldp+9,((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_red))));
        tracep->fullBit(oldp+10,((1U & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_red) 
                                        >> 1U))));
        tracep->fullBit(oldp+11,((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_green))));
        tracep->fullBit(oldp+12,((1U & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_green) 
                                        >> 1U))));
        tracep->fullBit(oldp+13,((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_blue))));
        tracep->fullBit(oldp+14,((1U & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__TMDS_shift_blue) 
                                        >> 1U))));
        tracep->fullCData(oldp+15,((0xffU & (((((((
                                                   (1U 
                                                    & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 1U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 2U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                     >> 3U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 4U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                     >> 5U))) 
                                              + (1U 
                                                 & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                    >> 6U))) 
                                             + (1U 
                                                & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                   >> 7U))))),8);
        tracep->fullCData(oldp+16,((0xffU & (((((((
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                        >> 1U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 2U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 3U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                       >> 4U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                      >> 5U)))) 
                                              + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                     >> 6U)))) 
                                             + (1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m) 
                                                    >> 7U)))))),8);
        tracep->fullSData(oldp+17,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m),9);
        tracep->fullBit(oldp+18,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p1));
        tracep->fullBit(oldp+19,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p2));
        tracep->fullCData(oldp+20,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p3),8);
        tracep->fullIData(oldp+21,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt0),32);
        tracep->fullIData(oldp+22,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt1),32);
        tracep->fullIData(oldp+23,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt2),32);
        tracep->fullIData(oldp+24,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt3),32);
        tracep->fullIData(oldp+25,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt),32);
        tracep->fullCData(oldp+26,((0xffU & (((((((
                                                   (1U 
                                                    & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 1U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 2U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                     >> 3U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 4U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                     >> 5U))) 
                                              + (1U 
                                                 & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                    >> 6U))) 
                                             + (1U 
                                                & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                   >> 7U))))),8);
        tracep->fullCData(oldp+27,((0xffU & (((((((
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                        >> 1U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 2U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 3U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                       >> 4U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                      >> 5U)))) 
                                              + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                     >> 6U)))) 
                                             + (1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m) 
                                                    >> 7U)))))),8);
        tracep->fullSData(oldp+28,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m),9);
        tracep->fullBit(oldp+29,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p1));
        tracep->fullBit(oldp+30,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p2));
        tracep->fullCData(oldp+31,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p3),8);
        tracep->fullIData(oldp+32,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt0),32);
        tracep->fullIData(oldp+33,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt1),32);
        tracep->fullIData(oldp+34,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt2),32);
        tracep->fullIData(oldp+35,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt3),32);
        tracep->fullIData(oldp+36,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt),32);
        tracep->fullCData(oldp+37,((0xffU & (((((((
                                                   (1U 
                                                    & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 1U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 2U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                     >> 3U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 4U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                     >> 5U))) 
                                              + (1U 
                                                 & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                    >> 6U))) 
                                             + (1U 
                                                & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                   >> 7U))))),8);
        tracep->fullCData(oldp+38,((0xffU & (((((((
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                        >> 1U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 2U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 3U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                       >> 4U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                      >> 5U)))) 
                                              + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                     >> 6U)))) 
                                             + (1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m) 
                                                    >> 7U)))))),8);
        tracep->fullSData(oldp+39,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m),9);
        tracep->fullBit(oldp+40,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p1));
        tracep->fullBit(oldp+41,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p2));
        tracep->fullCData(oldp+42,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p3),8);
        tracep->fullIData(oldp+43,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt0),32);
        tracep->fullIData(oldp+44,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt1),32);
        tracep->fullIData(oldp+45,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt2),32);
        tracep->fullIData(oldp+46,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt3),32);
        tracep->fullIData(oldp+47,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt),32);
        tracep->fullIData(oldp+48,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__addr_r),21);
        tracep->fullCData(oldp+49,(vlTOPp->ulx3s_pass_through_sim__DOT__red_v),8);
        tracep->fullIData(oldp+50,(vlTOPp->ulx3s_pass_through_sim__DOT__ramdata),32);
        tracep->fullIData(oldp+51,(vlTOPp->ulx3s_pass_through_sim__DOT__color_w),32);
        tracep->fullCData(oldp+52,(vlTOPp->ulx3s_pass_through_sim__DOT__counter),8);
        tracep->fullIData(oldp+53,((0x1ffffU & (vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__addr_r 
                                                >> 2U))),17);
        tracep->fullSData(oldp+54,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterX),11);
        tracep->fullSData(oldp+55,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterY),11);
        tracep->fullBit(oldp+56,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__hSync));
        tracep->fullBit(oldp+57,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__vSync));
        tracep->fullCData(oldp+58,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__DrawArea),2);
        tracep->fullSData(oldp+59,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out1),10);
        tracep->fullSData(oldp+60,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out1),10);
        tracep->fullSData(oldp+61,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out1),10);
        tracep->fullCData(oldp+62,(((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterY))
                                     ? 0U : ((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterX))
                                              ? (0xffU 
                                                 & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v))
                                              : 0U))),8);
        tracep->fullCData(oldp+63,((0xffU & ((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterY))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterX))
                                                  ? (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v)
                                                  : 0U)
                                              : ((1U 
                                                  & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterX))
                                                  ? 0U
                                                  : (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v))))),8);
        tracep->fullCData(oldp+64,(((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterY))
                                     ? ((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__CounterX))
                                         ? 0U : (0xffU 
                                                 & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v)))
                                     : 0U)),8);
        tracep->fullCData(oldp+65,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr),2);
        tracep->fullIData(oldp+66,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__cnt_old),32);
        tracep->fullCData(oldp+67,((0xffU & (((((((
                                                   (1U 
                                                    & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                       >> 1U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                      >> 2U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                     >> 3U))) 
                                                + (1U 
                                                   & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                      >> 4U))) 
                                               + (1U 
                                                  & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                     >> 5U))) 
                                              + (1U 
                                                 & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                    >> 6U))) 
                                             + (1U 
                                                & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                   >> 7U))))),8);
        tracep->fullCData(oldp+68,((0xffU & (((((((
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v))) 
                                                   + 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                        >> 1U)))) 
                                                  + 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                       >> 2U)))) 
                                                 + 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                      >> 3U)))) 
                                                + (1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                       >> 4U)))) 
                                               + (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                      >> 5U)))) 
                                              + (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                     >> 6U)))) 
                                             + (1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v) 
                                                    >> 7U)))))),8);
        tracep->fullBit(oldp+69,((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__red_v))));
        tracep->fullBit(oldp+70,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m1));
        tracep->fullBit(oldp+71,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m2));
        tracep->fullBit(oldp+72,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m3));
        tracep->fullBit(oldp+73,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m4));
        tracep->fullBit(oldp+74,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m5));
        tracep->fullBit(oldp+75,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m6));
        tracep->fullBit(oldp+76,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m7));
        tracep->fullBit(oldp+77,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_m8));
        tracep->fullSData(oldp+78,(((2U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                     ? ((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                         ? 0x2abU : 0x154U)
                                     : ((1U & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT____Vcellinp__encoder0__H_VSync_Ctr))
                                         ? 0xabU : 0x354U))),11);
        tracep->fullIData(oldp+79,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__cnt_old),32);
        tracep->fullBit(oldp+80,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m1));
        tracep->fullBit(oldp+81,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m2));
        tracep->fullBit(oldp+82,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m3));
        tracep->fullBit(oldp+83,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m4));
        tracep->fullBit(oldp+84,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m5));
        tracep->fullBit(oldp+85,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m6));
        tracep->fullBit(oldp+86,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m7));
        tracep->fullBit(oldp+87,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_m8));
        tracep->fullIData(oldp+88,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__cnt_old),32);
        tracep->fullBit(oldp+89,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m1));
        tracep->fullBit(oldp+90,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m2));
        tracep->fullBit(oldp+91,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m3));
        tracep->fullBit(oldp+92,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m4));
        tracep->fullBit(oldp+93,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m5));
        tracep->fullBit(oldp+94,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m6));
        tracep->fullBit(oldp+95,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m7));
        tracep->fullBit(oldp+96,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_m8));
        tracep->fullBit(oldp+97,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__sda0));
        tracep->fullBit(oldp+98,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam_ready0));
        tracep->fullBit(oldp+99,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__send_data));
        tracep->fullBit(oldp+100,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__ready0));
        tracep->fullBit(oldp+101,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__ready_old));
        tracep->fullCData(oldp+102,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__datain),8);
        tracep->fullCData(oldp+103,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__slave_addr),8);
        tracep->fullCData(oldp+104,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__state),8);
        tracep->fullSData(oldp+105,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__register_in),16);
        tracep->fullBit(oldp+106,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__initia));
        tracep->fullBit(oldp+107,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__init_old));
        tracep->fullIData(oldp+108,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__counter),32);
        tracep->fullBit(oldp+109,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__valid_r));
        tracep->fullCData(oldp+110,((0x7fU & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__slave_addr))),7);
        tracep->fullCData(oldp+111,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__state),8);
        tracep->fullBit(oldp+112,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__send_data_old));
        tracep->fullBit(oldp+113,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__rising_edge));
        tracep->fullIData(oldp+114,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__counter),32);
        tracep->fullBit(oldp+115,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__sending));
        tracep->fullQData(oldp+116,((((QData)((IData)(
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__slave_addr)))) 
                                      << 0x1eU) | (QData)((IData)(
                                                                  (0x10080402U 
                                                                   | ((0xff00000U 
                                                                       & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__register_in) 
                                                                          << 0xcU)) 
                                                                      | ((0x7f800U 
                                                                          & ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__register_in) 
                                                                             << 0xbU)) 
                                                                         | ((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__datain) 
                                                                            << 2U)))))))),37);
        tracep->fullBit(oldp+118,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__SYNC__DOT__eclki_r2));
        tracep->fullBit(oldp+119,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__SYNC__DOT__eclki_r0));
        tracep->fullBit(oldp+120,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__SYNC__DOT__eclki_r1));
        tracep->fullBit(oldp+121,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__sync_mipi_clk_2));
        tracep->fullCData(oldp+122,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__div2__DOT__counter),8);
        tracep->fullBit(oldp+123,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__A));
        tracep->fullBit(oldp+124,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__C));
        tracep->fullBit(oldp+125,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__A));
        tracep->fullBit(oldp+126,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__C));
        tracep->fullBit(oldp+127,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__B));
        tracep->fullBit(oldp+128,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__IDDR__DOT__D1));
        tracep->fullBit(oldp+129,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__B));
        tracep->fullBit(oldp+130,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__IDDR__DOT__D1));
        tracep->fullCData(oldp+131,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__q_o_r),4);
        tracep->fullCData(oldp+132,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__q_o_r),4);
        tracep->fullCData(oldp+133,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__ov_fl_r),2);
        tracep->fullCData(oldp+134,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__ov_fl_r),2);
        tracep->fullBit(oldp+135,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__even_r));
        tracep->fullBit(oldp+136,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__sync_mipi_clk_4));
        tracep->fullCData(oldp+137,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BA0__DOT__byte0_r),8);
        tracep->fullCData(oldp+138,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BA0__DOT__byte1_r),8);
        tracep->fullCData(oldp+139,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BA1__DOT__byte0_r),8);
        tracep->fullCData(oldp+140,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BA1__DOT__byte1_r),8);
        tracep->fullCData(oldp+141,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__div4__DOT__counter),8);
        tracep->fullBit(oldp+142,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__sync_r));
        tracep->fullCData(oldp+143,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__syncbyte),8);
        tracep->fullCData(oldp+144,((0xb8U ^ (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__syncbyte))),8);
        tracep->fullCData(oldp+145,((0x2eU ^ (0x3fU 
                                              & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__syncbyte)))),8);
        tracep->fullBit(oldp+146,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__even_r));
        tracep->fullBit(oldp+147,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__sync_r));
        tracep->fullCData(oldp+148,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__syncbyte),8);
        tracep->fullCData(oldp+149,((0xb8U ^ (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__syncbyte))),8);
        tracep->fullCData(oldp+150,((0x2eU ^ (0x3fU 
                                              & (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__syncbyte)))),8);
        tracep->fullCData(oldp+151,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BAL0__DOT__counter),8);
        tracep->fullCData(oldp+152,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BAL0__DOT__byte_o_r_old),8);
        tracep->fullSData(oldp+153,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BAL0__DOT__byte_o_r_s),16);
        tracep->fullCData(oldp+154,(((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__even_r)
                                      ? (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BA0__DOT__byte0_r)
                                      : (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BA0__DOT__byte1_r))),8);
        tracep->fullCData(oldp+155,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BAL1__DOT__counter),8);
        tracep->fullCData(oldp+156,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BAL1__DOT__byte_o_r_old),8);
        tracep->fullSData(oldp+157,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BAL1__DOT__byte_o_r_s),16);
        tracep->fullCData(oldp+158,(((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__even_r)
                                      ? (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BA1__DOT__byte0_r)
                                      : (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BA1__DOT__byte1_r))),8);
        tracep->fullBit(oldp+159,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__sync_mipi_clk_8));
        tracep->fullCData(oldp+160,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__div8__DOT__counter),8);
        tracep->fullBit(oldp+161,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__valid_r));
        tracep->fullIData(oldp+162,((0x1ffffU & vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__counter_addr)),17);
        tracep->fullIData(oldp+163,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__data_o_r),32);
        tracep->fullIData(oldp+164,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__cX_r),32);
        tracep->fullIData(oldp+165,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__cY_r),32);
        tracep->fullIData(oldp+166,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__counter_addr),32);
        tracep->fullBit(oldp+167,(vlTOPp->ulx3s_pass_through_sim__DOT__debug3__out__out11));
        tracep->fullBit(oldp+168,(vlTOPp->ulx3s_pass_through_sim__DOT__debug2__out__out10));
        tracep->fullBit(oldp+169,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__rec_data_r));
        tracep->fullBit(oldp+170,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__state));
        tracep->fullBit(oldp+171,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__valid_old));
        tracep->fullIData(oldp+172,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__counter),32);
        tracep->fullIData(oldp+173,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__count_val),32);
        tracep->fullSData(oldp+174,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__c),16);
        tracep->fullIData(oldp+175,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__data_r),32);
        tracep->fullCData(oldp+176,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__type_o_r),6);
        tracep->fullSData(oldp+177,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__wordcount_r),16);
        tracep->fullIData(oldp+178,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__out_r),32);
        tracep->fullIData(oldp+179,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__out_r_old),32);
        tracep->fullBit(oldp+180,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__start));
        tracep->fullIData(oldp+181,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__counter),32);
        tracep->fullCData(oldp+182,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__ecc),8);
        tracep->fullCData(oldp+183,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__syndrom),8);
        tracep->fullIData(oldp+184,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__correction),24);
        tracep->fullIData(oldp+185,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__DE__DOT__regheader_correct),32);
        tracep->fullBit(oldp+186,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__term_r));
        tracep->fullBit(oldp+187,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__debug0_r));
        tracep->fullBit(oldp+188,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r));
        tracep->fullCData(oldp+189,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__state_mipi),8);
        tracep->fullIData(oldp+190,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__timer_tou),32);
        tracep->fullIData(oldp+191,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__timer_term),32);
        tracep->fullIData(oldp+192,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__timer_hs),32);
        tracep->fullBit(oldp+193,(vlTOPp->pixclk));
        tracep->fullBit(oldp+194,(vlTOPp->cam0_sda));
        tracep->fullBit(oldp+195,(vlTOPp->cam0_scl));
        tracep->fullBit(oldp+196,(vlTOPp->debug0));
        tracep->fullBit(oldp+197,(vlTOPp->debug1));
        tracep->fullBit(oldp+198,(vlTOPp->debug2));
        tracep->fullBit(oldp+199,(vlTOPp->debug3));
        tracep->fullBit(oldp+200,(vlTOPp->reset));
        tracep->fullBit(oldp+201,(vlTOPp->btn));
        tracep->fullBit(oldp+202,(vlTOPp->fire));
        tracep->fullBit(oldp+203,(vlTOPp->cam0_clk));
        tracep->fullBit(oldp+204,(vlTOPp->cam0_d0));
        tracep->fullBit(oldp+205,(vlTOPp->cam0_d1));
        tracep->fullBit(oldp+206,(vlTOPp->cam0_d0_r_p));
        tracep->fullBit(oldp+207,(vlTOPp->cam0_d0_r_n));
        tracep->fullBit(oldp+208,(vlTOPp->cam0_d1_r_p));
        tracep->fullBit(oldp+209,(vlTOPp->cam0_d1_r_n));
        tracep->fullBit(oldp+210,(vlTOPp->cam0_clk_r_p));
        tracep->fullBit(oldp+211,(vlTOPp->cam0_clk_r_n));
        tracep->fullCData(oldp+212,(vlTOPp->led),8);
        tracep->fullCData(oldp+213,(vlTOPp->TMDSd),4);
        tracep->fullBit(oldp+214,(vlTOPp->ftdi_rxd));
        tracep->fullBit(oldp+215,(vlTOPp->ftdi_txden));
        tracep->fullBit(oldp+216,(vlTOPp->clk_i2c));
        tracep->fullBit(oldp+217,(((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__sending)
                                    ? (1U & (~ (IData)(vlTOPp->clk_i2c)))
                                    : 1U)));
        tracep->fullBit(oldp+218,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__rec_data));
        tracep->fullBit(oldp+219,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__sync));
        tracep->fullCData(oldp+220,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BAL0__DOT__byte_o_r),8);
        tracep->fullCData(oldp+221,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__BAL1__DOT__byte_o_r),8);
        tracep->fullBit(oldp+222,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__valid));
        tracep->fullCData(oldp+223,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__ddr),4);
        tracep->fullBit(oldp+224,(((IData)(vlTOPp->reset) 
                                   | (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r))));
        tracep->fullBit(oldp+225,(((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__sync_r) 
                                   & (~ (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__stop_rx_r)))));
        tracep->fullCData(oldp+226,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__ddr),4);
        tracep->fullSData(oldp+227,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__Prot__DOT__c_calk),16);
        tracep->fullSData(oldp+228,(((IData)(vlTOPp->reset)
                                      ? 0U : (0x3ffU 
                                              & (((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p1) 
                                                  << 9U) 
                                                 | (((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p2) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__q_out2p3)))))),10);
        tracep->fullSData(oldp+229,(((IData)(vlTOPp->reset)
                                      ? 0U : (0x3ffU 
                                              & (((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p1) 
                                                  << 9U) 
                                                 | (((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p2) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__q_out2p3)))))),10);
        tracep->fullSData(oldp+230,(((IData)(vlTOPp->reset)
                                      ? 0U : (0x3ffU 
                                              & (((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p1) 
                                                  << 9U) 
                                                 | (((IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p2) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__q_out2p3)))))),10);
        tracep->fullBit(oldp+231,(vlTOPp->ulx3s_pass_through_sim__DOT__clk400));
        tracep->fullBit(oldp+232,(vlTOPp->ulx3s_pass_through_sim__DOT__clk100Mhz));
        tracep->fullBit(oldp+233,(vlTOPp->ulx3s_pass_through_sim__DOT__clk250));
        tracep->fullBit(oldp+234,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi_clk05));
        tracep->fullIData(oldp+235,(vlTOPp->ulx3s_pass_through_sim__DOT__addr_write),19);
        tracep->fullCData(oldp+236,(vlTOPp->ulx3s_pass_through_sim__DOT__color),8);
        tracep->fullCData(oldp+237,(vlTOPp->ulx3s_pass_through_sim__DOT__green_v),8);
        tracep->fullCData(oldp+238,(vlTOPp->ulx3s_pass_through_sim__DOT__blue_v),8);
        tracep->fullCData(oldp+239,(vlTOPp->ulx3s_pass_through_sim__DOT__grey0),8);
        tracep->fullCData(oldp+240,(vlTOPp->ulx3s_pass_through_sim__DOT__grey1),8);
        tracep->fullCData(oldp+241,(vlTOPp->ulx3s_pass_through_sim__DOT__grey2),8);
        tracep->fullCData(oldp+242,(vlTOPp->ulx3s_pass_through_sim__DOT__grey3),8);
        tracep->fullCData(oldp+243,(vlTOPp->ulx3s_pass_through_sim__DOT__hex),8);
        tracep->fullIData(oldp+244,(0U),19);
        tracep->fullIData(oldp+245,(0U),24);
        tracep->fullCData(oldp+246,(0x4eU),8);
        tracep->fullBit(oldp+247,(vlTOPp->ulx3s_pass_through_sim__DOT__ready));
        tracep->fullBit(oldp+248,(vlTOPp->ulx3s_pass_through_sim__DOT__start));
        tracep->fullBit(oldp+249,(0U));
        tracep->fullBit(oldp+250,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam_ready_r));
        tracep->fullCData(oldp+251,(0U),8);
        tracep->fullCData(oldp+252,(1U),8);
        tracep->fullCData(oldp+253,(2U),8);
        tracep->fullIData(oldp+254,(7U),32);
        tracep->fullBit(oldp+255,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__r_w));
        tracep->fullCData(oldp+256,(3U),8);
        tracep->fullCData(oldp+257,(4U),8);
        tracep->fullCData(oldp+258,(5U),8);
        tracep->fullCData(oldp+259,(6U),8);
        tracep->fullQData(oldp+260,(0ULL),37);
        tracep->fullBit(oldp+262,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__clkdelay0));
        tracep->fullBit(oldp+263,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__clkdelay1));
        tracep->fullBit(oldp+264,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__scl0));
        tracep->fullBit(oldp+265,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__scl1));
        tracep->fullBit(oldp+266,(vlTOPp->ulx3s_pass_through_sim__DOT__i2c__DOT__cam0__DOT__scl2));
        tracep->fullIData(oldp+267,(0x15eU),32);
        tracep->fullIData(oldp+268,(4U),32);
        tracep->fullBit(oldp+269,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__mipi_clk_8));
        tracep->fullCData(oldp+270,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0byte),8);
        tracep->fullCData(oldp+271,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1byte),8);
        tracep->fullBit(oldp+272,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__stop_tran));
        tracep->fullBit(oldp+273,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__RxFSM__DOT__debug1_r));
        tracep->fullIData(oldp+274,(2U),32);
        tracep->fullIData(oldp+275,(0x181U),32);
        tracep->fullIData(oldp+276,(0U),32);
        tracep->fullIData(oldp+277,(1U),32);
        tracep->fullCData(oldp+278,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__ov_fl_r1),2);
        tracep->fullBit(oldp+279,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane0__DOT__delay_lane));
        tracep->fullCData(oldp+280,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__ov_fl_r1),2);
        tracep->fullBit(oldp+281,(vlTOPp->ulx3s_pass_through_sim__DOT__mipi__DOT__lane1__DOT__delay_lane));
        tracep->fullIData(oldp+282,(vlTOPp->ulx3s_pass_through_sim__DOT__DPR__DOT__data_b),32);
        tracep->fullCData(oldp+283,(vlTOPp->ulx3s_pass_through_sim__DOT__DPR__DOT__bank),2);
        tracep->fullIData(oldp+284,(0x280U),32);
        tracep->fullIData(oldp+285,(0x10U),32);
        tracep->fullIData(oldp+286,(0x30U),32);
        tracep->fullIData(oldp+287,(0x320U),32);
        tracep->fullIData(oldp+288,(0x1e0U),32);
        tracep->fullIData(oldp+289,(0xaU),32);
        tracep->fullIData(oldp+290,(0x21U),32);
        tracep->fullIData(oldp+291,(0x20dU),32);
        tracep->fullCData(oldp+292,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__aux_data),4);
        tracep->fullBit(oldp+293,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder0__DOT__data_o));
        tracep->fullCData(oldp+294,(0U),2);
        tracep->fullCData(oldp+295,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__aux_data),4);
        tracep->fullBit(oldp+296,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder1__DOT__data_o));
        tracep->fullSData(oldp+297,(0x354U),11);
        tracep->fullCData(oldp+298,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__aux_data),4);
        tracep->fullBit(oldp+299,(vlTOPp->ulx3s_pass_through_sim__DOT__HDMI__DOT__encoder2__DOT__data_o));
    }
}
