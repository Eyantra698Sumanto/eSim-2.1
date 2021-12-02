// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclk_div_45.h for the primary calling header

#ifndef VERILATED_VCLK_DIV_45___024ROOT_H_
#define VERILATED_VCLK_DIV_45___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vclk_div_45__Syms;

//----------

VL_MODULE(Vclk_div_45___024root) {
  public:

    // PORTS
    VL_IN8(clk_in,0,0);
    VL_IN8(enable,0,0);
    VL_OUT8(clk_out,0,0);

    // LOCAL SIGNALS
    CData/*3:0*/ clk_div_45__DOT__counter1;
    CData/*3:0*/ clk_div_45__DOT__counter2;
    CData/*0:0*/ clk_div_45__DOT__toggle1;
    CData/*0:0*/ clk_div_45__DOT__toggle2;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk_in;

    // INTERNAL VARIABLES
    Vclk_div_45__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vclk_div_45___024root);  ///< Copying not allowed
  public:
    Vclk_div_45___024root(const char* name);
    ~Vclk_div_45___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vclk_div_45__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
