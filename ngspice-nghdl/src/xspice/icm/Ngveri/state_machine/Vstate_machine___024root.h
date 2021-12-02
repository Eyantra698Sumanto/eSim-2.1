// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstate_machine.h for the primary calling header

#ifndef VERILATED_VSTATE_MACHINE___024ROOT_H_
#define VERILATED_VSTATE_MACHINE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vstate_machine__Syms;

//----------

VL_MODULE(Vstate_machine___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(data_out,1,0);
    VL_IN8(data_in,0,0);
    VL_IN8(__pinNumber5,0,0);

    // LOCAL SIGNALS
    CData/*1:0*/ state_machine__DOT__state;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;

    // INTERNAL VARIABLES
    Vstate_machine__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vstate_machine___024root);  ///< Copying not allowed
  public:
    Vstate_machine___024root(const char* name);
    ~Vstate_machine___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vstate_machine__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
