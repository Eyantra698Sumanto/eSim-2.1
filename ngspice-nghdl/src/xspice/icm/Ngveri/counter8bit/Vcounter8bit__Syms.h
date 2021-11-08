// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOUNTER8BIT__SYMS_H_
#define VERILATED_VCOUNTER8BIT__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vcounter8bit.h"

// INCLUDE MODULE CLASSES
#include "Vcounter8bit___024root.h"

// SYMS CLASS (contains all model state)
class Vcounter8bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcounter8bit* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcounter8bit___024root         TOP;

    // CONSTRUCTORS
    Vcounter8bit__Syms(VerilatedContext* contextp, const char* namep, Vcounter8bit* modelp);
    ~Vcounter8bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
