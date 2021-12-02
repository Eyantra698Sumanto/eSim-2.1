// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCALCULATOR__SYMS_H_
#define VERILATED_VCALCULATOR__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vcalculator.h"

// INCLUDE MODULE CLASSES
#include "Vcalculator___024root.h"

// SYMS CLASS (contains all model state)
class Vcalculator__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcalculator* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcalculator___024root          TOP;

    // CONSTRUCTORS
    Vcalculator__Syms(VerilatedContext* contextp, const char* namep, Vcalculator* modelp);
    ~Vcalculator__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
