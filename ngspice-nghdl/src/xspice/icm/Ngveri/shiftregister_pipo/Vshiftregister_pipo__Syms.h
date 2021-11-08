// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFTREGISTER_PIPO__SYMS_H_
#define VERILATED_VSHIFTREGISTER_PIPO__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vshiftregister_pipo.h"

// INCLUDE MODULE CLASSES
#include "Vshiftregister_pipo___024root.h"

// SYMS CLASS (contains all model state)
class Vshiftregister_pipo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vshiftregister_pipo* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vshiftregister_pipo___024root  TOP;

    // CONSTRUCTORS
    Vshiftregister_pipo__Syms(VerilatedContext* contextp, const char* namep, Vshiftregister_pipo* modelp);
    ~Vshiftregister_pipo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
