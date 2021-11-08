// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHALFADDER__SYMS_H_
#define VERILATED_VHALFADDER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vhalfadder.h"

// INCLUDE MODULE CLASSES
#include "Vhalfadder___024root.h"

// SYMS CLASS (contains all model state)
class Vhalfadder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhalfadder* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhalfadder___024root           TOP;

    // CONSTRUCTORS
    Vhalfadder__Syms(VerilatedContext* contextp, const char* namep, Vhalfadder* modelp);
    ~Vhalfadder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
