// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter6bit.h for the primary calling header

#ifndef VERILATED_VCOUNTER6BIT___024ROOT_H_
#define VERILATED_VCOUNTER6BIT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcounter6bit__Syms;

//----------

VL_MODULE(Vcounter6bit___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_OUT8(out,5,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vcounter6bit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcounter6bit___024root);  ///< Copying not allowed
  public:
    Vcounter6bit___024root(const char* name);
    ~Vcounter6bit___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcounter6bit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
