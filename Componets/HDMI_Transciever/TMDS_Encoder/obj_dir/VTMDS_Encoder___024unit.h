// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTMDS_Encoder.h for the primary calling header

#ifndef _VTMDS_ENCODER___024UNIT_H_
#define _VTMDS_ENCODER___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VTMDS_Encoder__Syms;
class VTMDS_Encoder_VerilatedVcd;


//----------

VL_MODULE(VTMDS_Encoder___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VTMDS_Encoder__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTMDS_Encoder___024unit);  ///< Copying not allowed
  public:
    VTMDS_Encoder___024unit(const char* name = "TOP");
    ~VTMDS_Encoder___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VTMDS_Encoder__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
