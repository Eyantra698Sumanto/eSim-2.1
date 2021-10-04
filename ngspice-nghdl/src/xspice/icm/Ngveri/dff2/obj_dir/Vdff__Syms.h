// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDFF__SYMS_H_
#define VERILATED_VDFF__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vdff.h"

// INCLUDE MODULE CLASSES
#include "Vdff___024root.h"

// SYMS CLASS (contains all model state)
class Vdff__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdff* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdff___024root                 TOP;

    // CONSTRUCTORS
    Vdff__Syms(VerilatedContext* contextp, const char* namep, Vdff* modelp);
    ~Vdff__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
