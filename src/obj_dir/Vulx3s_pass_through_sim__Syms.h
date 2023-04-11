// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VULX3S_PASS_THROUGH_SIM__SYMS_H_
#define _VULX3S_PASS_THROUGH_SIM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vulx3s_pass_through_sim.h"

// SYMS CLASS
class Vulx3s_pass_through_sim__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vulx3s_pass_through_sim*       TOPp;
    
    // CREATORS
    Vulx3s_pass_through_sim__Syms(Vulx3s_pass_through_sim* topp, const char* namep);
    ~Vulx3s_pass_through_sim__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
