// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJTRANSMISSIONGATE__SYMS_H_
#define VERILATED_VJTRANSMISSIONGATE__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjtransmissiongate.h"

// INCLUDE MODULE CLASSES
#include "Vjtransmissiongate___024root.h"

// SYMS CLASS (contains all model state)
class Vjtransmissiongate__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjtransmissiongate* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjtransmissiongate___024root   TOP;

    // CONSTRUCTORS
    Vjtransmissiongate__Syms(VerilatedContext* contextp, const char* namep, Vjtransmissiongate* modelp);
    ~Vjtransmissiongate__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
