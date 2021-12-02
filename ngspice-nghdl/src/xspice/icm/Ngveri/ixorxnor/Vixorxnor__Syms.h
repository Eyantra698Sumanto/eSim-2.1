// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIXORXNOR__SYMS_H_
#define VERILATED_VIXORXNOR__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vixorxnor.h"

// INCLUDE MODULE CLASSES
#include "Vixorxnor___024root.h"

// SYMS CLASS (contains all model state)
class Vixorxnor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vixorxnor* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vixorxnor___024root            TOP;

    // CONSTRUCTORS
    Vixorxnor__Syms(VerilatedContext* contextp, const char* namep, Vixorxnor* modelp);
    ~Vixorxnor__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
