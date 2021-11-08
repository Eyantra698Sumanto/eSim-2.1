// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJFSMMEALYWITHOVERLAP__SYMS_H_
#define VERILATED_VJFSMMEALYWITHOVERLAP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjfsmmealywithoverlap.h"

// INCLUDE MODULE CLASSES
#include "Vjfsmmealywithoverlap___024root.h"

// SYMS CLASS (contains all model state)
class Vjfsmmealywithoverlap__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjfsmmealywithoverlap* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjfsmmealywithoverlap___024root TOP;

    // CONSTRUCTORS
    Vjfsmmealywithoverlap__Syms(VerilatedContext* contextp, const char* namep, Vjfsmmealywithoverlap* modelp);
    ~Vjfsmmealywithoverlap__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
