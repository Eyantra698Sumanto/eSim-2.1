// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter51bit.h for the primary calling header

#ifndef VERILATED_VCOUNTER51BIT___024ROOT_H_
#define VERILATED_VCOUNTER51BIT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcounter51bit__Syms;

//----------

VL_MODULE(Vcounter51bit___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT64(out,50,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vcounter51bit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcounter51bit___024root);  ///< Copying not allowed
  public:
    Vcounter51bit___024root(const char* name);
    ~Vcounter51bit___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcounter51bit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
