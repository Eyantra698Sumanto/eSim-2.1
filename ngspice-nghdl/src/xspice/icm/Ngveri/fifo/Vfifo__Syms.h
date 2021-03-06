// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFIFO__SYMS_H_
#define VERILATED_VFIFO__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vfifo.h"

// INCLUDE MODULE CLASSES
#include "Vfifo___024root.h"

// SYMS CLASS (contains all model state)
class Vfifo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfifo* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfifo___024root                TOP;

    // CONSTRUCTORS
    Vfifo__Syms(VerilatedContext* contextp, const char* namep, Vfifo* modelp);
    ~Vfifo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
