// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vmodule__Syms_H_
#define _Vmodule__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vmodule.h"

// SYMS CLASS
class Vmodule__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vmodule*                       TOPp;
    
    // CREATORS
    Vmodule__Syms(Vmodule* topp, const char* namep);
    ~Vmodule__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
