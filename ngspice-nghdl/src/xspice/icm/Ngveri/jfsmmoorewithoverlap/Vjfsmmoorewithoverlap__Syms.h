// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJFSMMOOREWITHOVERLAP__SYMS_H_
#define VERILATED_VJFSMMOOREWITHOVERLAP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjfsmmoorewithoverlap.h"

// INCLUDE MODULE CLASSES
#include "Vjfsmmoorewithoverlap___024root.h"

// SYMS CLASS (contains all model state)
class Vjfsmmoorewithoverlap__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjfsmmoorewithoverlap* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjfsmmoorewithoverlap___024root TOP;

    // CONSTRUCTORS
    Vjfsmmoorewithoverlap__Syms(VerilatedContext* contextp, const char* namep, Vjfsmmoorewithoverlap* modelp);
    ~Vjfsmmoorewithoverlap__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
