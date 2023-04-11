// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VHDMI_TRANSCIEVER_SIM__SYMS_H_
#define _VHDMI_TRANSCIEVER_SIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VHDMI_Transciever_Sim.h"

// SYMS CLASS
class VHDMI_Transciever_Sim__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VHDMI_Transciever_Sim*         TOPp;
    
    // CREATORS
    VHDMI_Transciever_Sim__Syms(VHDMI_Transciever_Sim* topp, const char* namep);
    ~VHDMI_Transciever_Sim__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
