// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAND2__SYMS_H_
#define VERILATED_VAND2__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vand2.h"

// INCLUDE MODULE CLASSES
#include "Vand2___024root.h"

// SYMS CLASS (contains all model state)
class Vand2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vand2* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vand2___024root                TOP;

    // CONSTRUCTORS
    Vand2__Syms(VerilatedContext* contextp, const char* namep, Vand2* modelp);
    ~Vand2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
