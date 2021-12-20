// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAPB__SYMS_H_
#define VERILATED_VAPB__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vapb.h"

// INCLUDE MODULE CLASSES
#include "Vapb___024root.h"

// SYMS CLASS (contains all model state)
class Vapb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vapb* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vapb___024root                 TOP;

    // CONSTRUCTORS
    Vapb__Syms(VerilatedContext* contextp, const char* namep, Vapb* modelp);
    ~Vapb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
