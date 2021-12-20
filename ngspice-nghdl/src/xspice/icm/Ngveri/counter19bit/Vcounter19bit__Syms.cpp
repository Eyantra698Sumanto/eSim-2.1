// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcounter19bit__Syms.h"
#include "Vcounter19bit.h"
#include "Vcounter19bit___024root.h"

// FUNCTIONS
Vcounter19bit__Syms::~Vcounter19bit__Syms()
{
}

Vcounter19bit__Syms::Vcounter19bit__Syms(VerilatedContext* contextp, const char* namep,Vcounter19bit* modelp)
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
