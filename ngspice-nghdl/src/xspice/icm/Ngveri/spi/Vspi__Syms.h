// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSPI__SYMS_H_
#define VERILATED_VSPI__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vspi.h"

// INCLUDE MODULE CLASSES
#include "Vspi___024root.h"

// SYMS CLASS (contains all model state)
class Vspi__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vspi* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vspi___024root                 TOP;

    // CONSTRUCTORS
    Vspi__Syms(VerilatedContext* contextp, const char* namep, Vspi* modelp);
    ~Vspi__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
