// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vi2c_master_top__Syms.h"
#include "Vi2c_master_top.h"
#include "Vi2c_master_top___024root.h"

// FUNCTIONS
Vi2c_master_top__Syms::~Vi2c_master_top__Syms()
{
}

Vi2c_master_top__Syms::Vi2c_master_top__Syms(VerilatedContext* contextp, const char* namep,Vi2c_master_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-11);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
