// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHDMI_Transciever.h for the primary calling header

#ifndef _VHDMI_TRANSCIEVER___024UNIT_H_
#define _VHDMI_TRANSCIEVER___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VHDMI_Transciever__Syms;
class VHDMI_Transciever_VerilatedVcd;


//----------

VL_MODULE(VHDMI_Transciever___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VHDMI_Transciever__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VHDMI_Transciever___024unit);  ///< Copying not allowed
  public:
    VHDMI_Transciever___024unit(const char* name = "TOP");
    ~VHDMI_Transciever___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VHDMI_Transciever__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
