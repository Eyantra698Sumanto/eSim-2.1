// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJBASICGATES__SYMS_H_
#define VERILATED_VJBASICGATES__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjbasicgates.h"

// INCLUDE MODULE CLASSES
#include "Vjbasicgates___024root.h"

// SYMS CLASS (contains all model state)
class Vjbasicgates__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjbasicgates* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjbasicgates___024root         TOP;

    // CONSTRUCTORS
    Vjbasicgates__Syms(VerilatedContext* contextp, const char* namep, Vjbasicgates* modelp);
    ~Vjbasicgates__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
