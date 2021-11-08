// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign1.h for the primary calling header

#ifndef VERILATED_VDESIGN1___024ROOT_H_
#define VERILATED_VDESIGN1___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdesign1__Syms;

//----------

VL_MODULE(Vdesign1___024root) {
  public:

    // PORTS
    VL_OUT8(Y,0,0);
    VL_IN8(D0,0,0);
    VL_IN8(D1,0,0);
    VL_IN8(S,0,0);

    // INTERNAL VARIABLES
    Vdesign1__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdesign1___024root);  ///< Copying not allowed
  public:
    Vdesign1___024root(const char* name);
    ~Vdesign1___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdesign1__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
