// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDIVISION__SYMS_H_
#define VERILATED_VDIVISION__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vdivision.h"

// INCLUDE MODULE CLASSES
#include "Vdivision___024root.h"

// SYMS CLASS (contains all model state)
class Vdivision__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdivision* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdivision___024root            TOP;

    // CONSTRUCTORS
    Vdivision__Syms(VerilatedContext* contextp, const char* namep, Vdivision* modelp);
    ~Vdivision__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
