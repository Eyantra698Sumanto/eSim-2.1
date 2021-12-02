// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDDR2_CONTROLLER__SYMS_H_
#define VERILATED_VDDR2_CONTROLLER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vddr2_controller.h"

// INCLUDE MODULE CLASSES
#include "Vddr2_controller___024root.h"

// SYMS CLASS (contains all model state)
class Vddr2_controller__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vddr2_controller* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vddr2_controller___024root     TOP;

    // CONSTRUCTORS
    Vddr2_controller__Syms(VerilatedContext* contextp, const char* namep, Vddr2_controller* modelp);
    ~Vddr2_controller__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
