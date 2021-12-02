// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCAM__SYMS_H_
#define VERILATED_VCAM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vcam.h"

// INCLUDE MODULE CLASSES
#include "Vcam___024root.h"

// SYMS CLASS (contains all model state)
class Vcam__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcam* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcam___024root                 TOP;

    // CONSTRUCTORS
    Vcam__Syms(VerilatedContext* contextp, const char* namep, Vcam* modelp);
    ~Vcam__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
