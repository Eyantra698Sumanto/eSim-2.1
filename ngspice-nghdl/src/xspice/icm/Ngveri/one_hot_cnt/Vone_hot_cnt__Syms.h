// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VONE_HOT_CNT__SYMS_H_
#define VERILATED_VONE_HOT_CNT__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vone_hot_cnt.h"

// INCLUDE MODULE CLASSES
#include "Vone_hot_cnt___024root.h"

// SYMS CLASS (contains all model state)
class Vone_hot_cnt__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vone_hot_cnt* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vone_hot_cnt___024root         TOP;

    // CONSTRUCTORS
    Vone_hot_cnt__Syms(VerilatedContext* contextp, const char* namep, Vone_hot_cnt* modelp);
    ~Vone_hot_cnt__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
