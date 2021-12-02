// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJSERIALADDER__SYMS_H_
#define VERILATED_VJSERIALADDER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjserialadder.h"

// INCLUDE MODULE CLASSES
#include "Vjserialadder___024root.h"

// SYMS CLASS (contains all model state)
class Vjserialadder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjserialadder* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjserialadder___024root        TOP;

    // CONSTRUCTORS
    Vjserialadder__Syms(VerilatedContext* contextp, const char* namep, Vjserialadder* modelp);
    ~Vjserialadder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
