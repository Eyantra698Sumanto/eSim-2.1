// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vclk_div_45__Syms.h"
#include "Vclk_div_45.h"
#include "Vclk_div_45___024root.h"

// FUNCTIONS
Vclk_div_45__Syms::~Vclk_div_45__Syms()
{
}

Vclk_div_45__Syms::Vclk_div_45__Syms(VerilatedContext* contextp, const char* namep,Vclk_div_45* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
