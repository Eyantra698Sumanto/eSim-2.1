// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDFF5__SYMS_H_
#define VERILATED_VDFF5__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vdff5.h"

// INCLUDE MODULE CLASSES
#include "Vdff5___024root.h"

// SYMS CLASS (contains all model state)
class Vdff5__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdff5* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdff5___024root                TOP;

    // CONSTRUCTORS
    Vdff5__Syms(VerilatedContext* contextp, const char* namep, Vdff5* modelp);
    ~Vdff5__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
