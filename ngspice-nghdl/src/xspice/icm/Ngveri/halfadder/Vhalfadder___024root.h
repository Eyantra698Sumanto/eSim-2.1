// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhalfadder.h for the primary calling header

#ifndef VERILATED_VHALFADDER___024ROOT_H_
#define VERILATED_VHALFADDER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vhalfadder__Syms;

//----------

VL_MODULE(Vhalfadder___024root) {
  public:

    // PORTS
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(sum,0,0);
    VL_OUT8(carry,0,0);

    // INTERNAL VARIABLES
    Vhalfadder__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vhalfadder___024root);  ///< Copying not allowed
  public:
    Vhalfadder___024root(const char* name);
    ~Vhalfadder___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vhalfadder__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
