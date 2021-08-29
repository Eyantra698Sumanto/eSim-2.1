// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONVERT__SYMS_H_
#define VERILATED_VCONVERT__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VConvert.h"

// INCLUDE MODULE CLASSES
#include "VConvert___024root.h"

// SYMS CLASS (contains all model state)
class VConvert__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VConvert* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VConvert___024root             TOP;

    // CONSTRUCTORS
    VConvert__Syms(VerilatedContext* contextp, const char* namep, VConvert* modelp);
    ~VConvert__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
