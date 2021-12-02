// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOMPRESSOR__SYMS_H_
#define VERILATED_VCOMPRESSOR__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vcompressor.h"

// INCLUDE MODULE CLASSES
#include "Vcompressor___024root.h"

// SYMS CLASS (contains all model state)
class Vcompressor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcompressor* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcompressor___024root          TOP;

    // CONSTRUCTORS
    Vcompressor__Syms(VerilatedContext* contextp, const char* namep, Vcompressor* modelp);
    ~Vcompressor__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
