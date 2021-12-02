// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJBUFFER__SYMS_H_
#define VERILATED_VJBUFFER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjbuffer.h"

// INCLUDE MODULE CLASSES
#include "Vjbuffer___024root.h"

// SYMS CLASS (contains all model state)
class Vjbuffer__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjbuffer* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjbuffer___024root             TOP;

    // CONSTRUCTORS
    Vjbuffer__Syms(VerilatedContext* contextp, const char* namep, Vjbuffer* modelp);
    ~Vjbuffer__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
