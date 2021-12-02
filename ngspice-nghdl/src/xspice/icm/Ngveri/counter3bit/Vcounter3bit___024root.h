// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter3bit.h for the primary calling header

#ifndef VERILATED_VCOUNTER3BIT___024ROOT_H_
#define VERILATED_VCOUNTER3BIT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcounter3bit__Syms;

//----------

VL_MODULE(Vcounter3bit___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(out,2,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vcounter3bit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcounter3bit___024root);  ///< Copying not allowed
  public:
    Vcounter3bit___024root(const char* name);
    ~Vcounter3bit___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcounter3bit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
