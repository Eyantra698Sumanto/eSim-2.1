// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTRAFFIC_LIGHT_CONTROLLER__SYMS_H_
#define VERILATED_VTRAFFIC_LIGHT_CONTROLLER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vtraffic_light_controller.h"

// INCLUDE MODULE CLASSES
#include "Vtraffic_light_controller___024root.h"

// SYMS CLASS (contains all model state)
class Vtraffic_light_controller__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtraffic_light_controller* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtraffic_light_controller___024root TOP;

    // CONSTRUCTORS
    Vtraffic_light_controller__Syms(VerilatedContext* contextp, const char* namep, Vtraffic_light_controller* modelp);
    ~Vtraffic_light_controller__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
