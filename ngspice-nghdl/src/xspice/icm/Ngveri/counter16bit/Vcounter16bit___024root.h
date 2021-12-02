// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter16bit.h for the primary calling header

#ifndef VERILATED_VCOUNTER16BIT___024ROOT_H_
#define VERILATED_VCOUNTER16BIT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcounter16bit__Syms;

//----------

VL_MODULE(Vcounter16bit___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_OUT16(out,15,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vcounter16bit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcounter16bit___024root);  ///< Copying not allowed
  public:
    Vcounter16bit___024root(const char* name);
    ~Vcounter16bit___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcounter16bit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
