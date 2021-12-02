// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTRAFFICMAKER__SYMS_H_
#define VERILATED_VTRAFFICMAKER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vtrafficmaker.h"

// INCLUDE MODULE CLASSES
#include "Vtrafficmaker___024root.h"

// SYMS CLASS (contains all model state)
class Vtrafficmaker__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtrafficmaker* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtrafficmaker___024root        TOP;

    // CONSTRUCTORS
    Vtrafficmaker__Syms(VerilatedContext* contextp, const char* namep, Vtrafficmaker* modelp);
    ~Vtrafficmaker__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
