// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdowncounter32bit.h for the primary calling header

#ifndef VERILATED_VDOWNCOUNTER32BIT___024ROOT_H_
#define VERILATED_VDOWNCOUNTER32BIT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdowncounter32bit__Syms;

//----------

VL_MODULE(Vdowncounter32bit___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT(out,31,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vdowncounter32bit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdowncounter32bit___024root);  ///< Copying not allowed
  public:
    Vdowncounter32bit___024root(const char* name);
    ~Vdowncounter32bit___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdowncounter32bit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
