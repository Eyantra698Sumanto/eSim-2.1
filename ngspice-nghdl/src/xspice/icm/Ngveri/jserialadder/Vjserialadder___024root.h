// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjserialadder.h for the primary calling header

#ifndef VERILATED_VJSERIALADDER___024ROOT_H_
#define VERILATED_VJSERIALADDER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjserialadder__Syms;

//----------

VL_MODULE(Vjserialadder___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_OUT8(y,3,0);
    VL_OUT8(carryout,0,0);
    VL_OUT8(isValid,0,0);
    VL_OUT8(currentsum,0,0);
    VL_OUT8(currentcarryout,0,0);
    VL_OUT8(currentbitcount,1,0);
    VL_IN8(rst,0,0);
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(carryin,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ jserialadder__DOT__intermediatecarry;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vjserialadder__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjserialadder___024root);  ///< Copying not allowed
  public:
    Vjserialadder___024root(const char* name);
    ~Vjserialadder___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjserialadder__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
