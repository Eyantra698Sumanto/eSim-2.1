// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter32bit.h for the primary calling header

#ifndef VERILATED_VCOUNTER32BIT___024ROOT_H_
#define VERILATED_VCOUNTER32BIT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcounter32bit__Syms;

//----------

VL_MODULE(Vcounter32bit___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT(out,31,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vcounter32bit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcounter32bit___024root);  ///< Copying not allowed
  public:
    Vcounter32bit___024root(const char* name);
    ~Vcounter32bit___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcounter32bit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
