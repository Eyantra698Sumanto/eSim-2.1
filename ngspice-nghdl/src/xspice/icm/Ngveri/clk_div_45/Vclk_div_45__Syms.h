// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLK_DIV_45__SYMS_H_
#define VERILATED_VCLK_DIV_45__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vclk_div_45.h"

// INCLUDE MODULE CLASSES
#include "Vclk_div_45___024root.h"

// SYMS CLASS (contains all model state)
class Vclk_div_45__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vclk_div_45* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vclk_div_45___024root          TOP;

    // CONSTRUCTORS
    Vclk_div_45__Syms(VerilatedContext* contextp, const char* namep, Vclk_div_45* modelp);
    ~Vclk_div_45__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
