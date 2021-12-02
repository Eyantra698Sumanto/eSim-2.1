// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtraffic_light_controller__Syms.h"
#include "Vtraffic_light_controller.h"
#include "Vtraffic_light_controller___024root.h"

// FUNCTIONS
Vtraffic_light_controller__Syms::~Vtraffic_light_controller__Syms()
{
}

Vtraffic_light_controller__Syms::Vtraffic_light_controller__Syms(VerilatedContext* contextp, const char* namep,Vtraffic_light_controller* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
