// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMULTITLV__SYMS_H_
#define VERILATED_VMULTITLV__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vmultitlv.h"

// INCLUDE MODULE CLASSES
#include "Vmultitlv___024root.h"

// SYMS CLASS (contains all model state)
class Vmultitlv__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmultitlv* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmultitlv___024root            TOP;

    // CONSTRUCTORS
    Vmultitlv__Syms(VerilatedContext* contextp, const char* namep, Vmultitlv* modelp);
    ~Vmultitlv__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
