// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJBOOTHMULTIPLIER__SYMS_H_
#define VERILATED_VJBOOTHMULTIPLIER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjboothmultiplier.h"

// INCLUDE MODULE CLASSES
#include "Vjboothmultiplier___024root.h"

// SYMS CLASS (contains all model state)
class Vjboothmultiplier__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjboothmultiplier* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjboothmultiplier___024root    TOP;

    // CONSTRUCTORS
    Vjboothmultiplier__Syms(VerilatedContext* contextp, const char* namep, Vjboothmultiplier* modelp);
    ~Vjboothmultiplier__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
