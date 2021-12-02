// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VROM_USING_FILE__SYMS_H_
#define VERILATED_VROM_USING_FILE__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vrom_using_file.h"

// INCLUDE MODULE CLASSES
#include "Vrom_using_file___024root.h"

// SYMS CLASS (contains all model state)
class Vrom_using_file__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrom_using_file* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrom_using_file___024root      TOP;

    // CONSTRUCTORS
    Vrom_using_file__Syms(VerilatedContext* contextp, const char* namep, Vrom_using_file* modelp);
    ~Vrom_using_file__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
