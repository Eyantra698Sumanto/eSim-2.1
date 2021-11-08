// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJUNSIGNEDARRAYMULTIPLIER__SYMS_H_
#define VERILATED_VJUNSIGNEDARRAYMULTIPLIER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjunsignedarraymultiplier.h"

// INCLUDE MODULE CLASSES
#include "Vjunsignedarraymultiplier___024root.h"

// SYMS CLASS (contains all model state)
class Vjunsignedarraymultiplier__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjunsignedarraymultiplier* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjunsignedarraymultiplier___024root TOP;

    // CONSTRUCTORS
    Vjunsignedarraymultiplier__Syms(VerilatedContext* contextp, const char* namep, Vjunsignedarraymultiplier* modelp);
    ~Vjunsignedarraymultiplier__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
