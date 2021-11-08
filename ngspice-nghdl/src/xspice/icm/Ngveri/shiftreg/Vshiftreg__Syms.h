// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFTREG__SYMS_H_
#define VERILATED_VSHIFTREG__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vshiftreg.h"

// INCLUDE MODULE CLASSES
#include "Vshiftreg___024root.h"

// SYMS CLASS (contains all model state)
class Vshiftreg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vshiftreg* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vshiftreg___024root            TOP;

    // CONSTRUCTORS
    Vshiftreg__Syms(VerilatedContext* contextp, const char* namep, Vshiftreg* modelp);
    ~Vshiftreg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
