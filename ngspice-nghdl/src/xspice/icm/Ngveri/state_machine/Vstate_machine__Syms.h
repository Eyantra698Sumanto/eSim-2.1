// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSTATE_MACHINE__SYMS_H_
#define VERILATED_VSTATE_MACHINE__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vstate_machine.h"

// INCLUDE MODULE CLASSES
#include "Vstate_machine___024root.h"

// SYMS CLASS (contains all model state)
class Vstate_machine__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vstate_machine* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vstate_machine___024root       TOP;

    // CONSTRUCTORS
    Vstate_machine__Syms(VerilatedContext* contextp, const char* namep, Vstate_machine* modelp);
    ~Vstate_machine__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
