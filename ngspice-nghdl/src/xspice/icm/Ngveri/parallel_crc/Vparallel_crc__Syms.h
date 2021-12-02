// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPARALLEL_CRC__SYMS_H_
#define VERILATED_VPARALLEL_CRC__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vparallel_crc.h"

// INCLUDE MODULE CLASSES
#include "Vparallel_crc___024root.h"

// SYMS CLASS (contains all model state)
class Vparallel_crc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vparallel_crc* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vparallel_crc___024root        TOP;

    // CONSTRUCTORS
    Vparallel_crc__Syms(VerilatedContext* contextp, const char* namep, Vparallel_crc* modelp);
    ~Vparallel_crc__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
