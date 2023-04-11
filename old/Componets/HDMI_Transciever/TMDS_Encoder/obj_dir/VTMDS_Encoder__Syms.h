// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTMDS_ENCODER__SYMS_H_
#define _VTMDS_ENCODER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VTMDS_Encoder.h"
#include "VTMDS_Encoder___024unit.h"

// SYMS CLASS
class VTMDS_Encoder__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTMDS_Encoder*                 TOPp;
    
    // CREATORS
    VTMDS_Encoder__Syms(VTMDS_Encoder* topp, const char* namep);
    ~VTMDS_Encoder__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
