// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter8bit.h for the primary calling header

#ifndef VERILATED_VCOUNTER8BIT___024ROOT_H_
#define VERILATED_VCOUNTER8BIT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcounter8bit__Syms;

//----------

VL_MODULE(Vcounter8bit___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_OUT8(out,7,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vcounter8bit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcounter8bit___024root);  ///< Copying not allowed
  public:
    Vcounter8bit___024root(const char* name);
    ~Vcounter8bit___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcounter8bit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
