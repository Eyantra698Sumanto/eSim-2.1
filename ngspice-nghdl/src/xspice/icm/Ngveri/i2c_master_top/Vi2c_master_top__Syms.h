// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VI2C_MASTER_TOP__SYMS_H_
#define VERILATED_VI2C_MASTER_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vi2c_master_top.h"

// INCLUDE MODULE CLASSES
#include "Vi2c_master_top___024root.h"

// SYMS CLASS (contains all model state)
class Vi2c_master_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vi2c_master_top* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vi2c_master_top___024root      TOP;

    // CONSTRUCTORS
    Vi2c_master_top__Syms(VerilatedContext* contextp, const char* namep, Vi2c_master_top* modelp);
    ~Vi2c_master_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
