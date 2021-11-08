// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter.h for the primary calling header

#ifndef VERILATED_VCOUNTER___024ROOT_H_
#define VERILATED_VCOUNTER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcounter__Syms;

//----------

VL_MODULE(Vcounter___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_OUT(out,31,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vcounter__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcounter___024root);  ///< Copying not allowed
  public:
    Vcounter___024root(const char* name);
    ~Vcounter___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcounter__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
