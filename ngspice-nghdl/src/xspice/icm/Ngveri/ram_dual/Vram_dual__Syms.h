// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRAM_DUAL__SYMS_H_
#define VERILATED_VRAM_DUAL__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vram_dual.h"

// INCLUDE MODULE CLASSES
#include "Vram_dual___024root.h"

// SYMS CLASS (contains all model state)
class Vram_dual__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vram_dual* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vram_dual___024root            TOP;

    // CONSTRUCTORS
    Vram_dual__Syms(VerilatedContext* contextp, const char* namep, Vram_dual* modelp);
    ~Vram_dual__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
