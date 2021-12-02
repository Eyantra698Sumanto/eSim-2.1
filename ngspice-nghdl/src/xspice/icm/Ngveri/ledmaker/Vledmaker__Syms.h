// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLEDMAKER__SYMS_H_
#define VERILATED_VLEDMAKER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vledmaker.h"

// INCLUDE MODULE CLASSES
#include "Vledmaker___024root.h"

// SYMS CLASS (contains all model state)
class Vledmaker__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vledmaker* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vledmaker___024root            TOP;

    // CONSTRUCTORS
    Vledmaker__Syms(VerilatedContext* contextp, const char* namep, Vledmaker* modelp);
    ~Vledmaker__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
