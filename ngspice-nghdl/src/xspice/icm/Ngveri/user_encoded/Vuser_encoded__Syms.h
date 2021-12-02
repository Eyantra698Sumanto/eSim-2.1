// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUSER_ENCODED__SYMS_H_
#define VERILATED_VUSER_ENCODED__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vuser_encoded.h"

// INCLUDE MODULE CLASSES
#include "Vuser_encoded___024root.h"

// SYMS CLASS (contains all model state)
class Vuser_encoded__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vuser_encoded* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vuser_encoded___024root        TOP;

    // CONSTRUCTORS
    Vuser_encoded__Syms(VerilatedContext* contextp, const char* namep, Vuser_encoded* modelp);
    ~Vuser_encoded__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
