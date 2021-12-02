// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUS_SENSOR__SYMS_H_
#define VERILATED_VUS_SENSOR__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vus_sensor.h"

// INCLUDE MODULE CLASSES
#include "Vus_sensor___024root.h"

// SYMS CLASS (contains all model state)
class Vus_sensor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vus_sensor* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vus_sensor___024root           TOP;

    // CONSTRUCTORS
    Vus_sensor__Syms(VerilatedContext* contextp, const char* namep, Vus_sensor* modelp);
    ~Vus_sensor__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
