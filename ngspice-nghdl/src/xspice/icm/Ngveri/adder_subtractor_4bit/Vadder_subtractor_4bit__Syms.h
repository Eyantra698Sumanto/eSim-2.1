// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADDER_SUBTRACTOR_4BIT__SYMS_H_
#define VERILATED_VADDER_SUBTRACTOR_4BIT__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vadder_subtractor_4bit.h"

// INCLUDE MODULE CLASSES
#include "Vadder_subtractor_4bit___024root.h"

// SYMS CLASS (contains all model state)
class Vadder_subtractor_4bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vadder_subtractor_4bit* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vadder_subtractor_4bit___024root TOP;

    // CONSTRUCTORS
    Vadder_subtractor_4bit__Syms(VerilatedContext* contextp, const char* namep, Vadder_subtractor_4bit* modelp);
    ~Vadder_subtractor_4bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
