// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VM12__SYMS_H_
#define VERILATED_VM12__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vm12.h"

// INCLUDE MODULE CLASSES
#include "Vm12___024root.h"

// SYMS CLASS (contains all model state)
class Vm12__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vm12* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vm12___024root                 TOP;

    // CONSTRUCTORS
    Vm12__Syms(VerilatedContext* contextp, const char* namep, Vm12* modelp);
    ~Vm12__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
