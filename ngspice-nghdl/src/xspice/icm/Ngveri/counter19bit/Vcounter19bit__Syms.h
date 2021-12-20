// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOUNTER19BIT__SYMS_H_
#define VERILATED_VCOUNTER19BIT__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vcounter19bit.h"

// INCLUDE MODULE CLASSES
#include "Vcounter19bit___024root.h"

// SYMS CLASS (contains all model state)
class Vcounter19bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcounter19bit* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcounter19bit___024root        TOP;

    // CONSTRUCTORS
    Vcounter19bit__Syms(VerilatedContext* contextp, const char* namep, Vcounter19bit* modelp);
    ~Vcounter19bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
