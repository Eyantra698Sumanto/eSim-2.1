// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vuser_encoded__Syms.h"
#include "Vuser_encoded.h"
#include "Vuser_encoded___024root.h"

// FUNCTIONS
Vuser_encoded__Syms::~Vuser_encoded__Syms()
{
}

Vuser_encoded__Syms::Vuser_encoded__Syms(VerilatedContext* contextp, const char* namep,Vuser_encoded* modelp)
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
