// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDESIGN1__SYMS_H_
#define VERILATED_VDESIGN1__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vdesign1.h"

// INCLUDE MODULE CLASSES
#include "Vdesign1___024root.h"

// SYMS CLASS (contains all model state)
class Vdesign1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdesign1* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdesign1___024root             TOP;

    // CONSTRUCTORS
    Vdesign1__Syms(VerilatedContext* contextp, const char* namep, Vdesign1* modelp);
    ~Vdesign1__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
