// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDOWNCOUNTER32BIT__SYMS_H_
#define VERILATED_VDOWNCOUNTER32BIT__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vdowncounter32bit.h"

// INCLUDE MODULE CLASSES
#include "Vdowncounter32bit___024root.h"

// SYMS CLASS (contains all model state)
class Vdowncounter32bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdowncounter32bit* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdowncounter32bit___024root    TOP;

    // CONSTRUCTORS
    Vdowncounter32bit__Syms(VerilatedContext* contextp, const char* namep, Vdowncounter32bit* modelp);
    ~Vdowncounter32bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
