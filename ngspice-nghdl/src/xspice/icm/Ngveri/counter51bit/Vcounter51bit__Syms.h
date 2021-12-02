// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOUNTER51BIT__SYMS_H_
#define VERILATED_VCOUNTER51BIT__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vcounter51bit.h"

// INCLUDE MODULE CLASSES
#include "Vcounter51bit___024root.h"

// SYMS CLASS (contains all model state)
class Vcounter51bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcounter51bit* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcounter51bit___024root        TOP;

    // CONSTRUCTORS
    Vcounter51bit__Syms(VerilatedContext* contextp, const char* namep, Vcounter51bit* modelp);
    ~Vcounter51bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
