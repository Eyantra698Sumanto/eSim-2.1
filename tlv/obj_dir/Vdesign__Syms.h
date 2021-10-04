// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vdesign__Syms_H_
#define _Vdesign__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vdesign.h"

// SYMS CLASS
class Vdesign__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vdesign*                       TOPp;
    
    // CREATORS
    Vdesign__Syms(Vdesign* topp, const char* namep);
    ~Vdesign__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
