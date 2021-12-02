// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuser_encoded.h for the primary calling header

#ifndef VERILATED_VUSER_ENCODED___024ROOT_H_
#define VERILATED_VUSER_ENCODED___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vuser_encoded__Syms;

//----------

VL_MODULE(Vuser_encoded___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(data_in,0,0);
    VL_OUT16(data_out,10,0);

    // LOCAL SIGNALS
    CData/*1:0*/ user_encoded__DOT__state;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;

    // INTERNAL VARIABLES
    Vuser_encoded__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vuser_encoded___024root);  ///< Copying not allowed
  public:
    Vuser_encoded___024root(const char* name);
    ~Vuser_encoded___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vuser_encoded__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
