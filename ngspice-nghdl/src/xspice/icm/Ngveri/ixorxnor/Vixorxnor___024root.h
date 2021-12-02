// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vixorxnor.h for the primary calling header

#ifndef VERILATED_VIXORXNOR___024ROOT_H_
#define VERILATED_VIXORXNOR___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vixorxnor__Syms;

//----------

VL_MODULE(Vixorxnor___024root) {
  public:

    // PORTS
    VL_OUT8(yOR,0,0);
    VL_OUT8(yAND,0,0);
    VL_OUT8(yXOR,0,0);
    VL_OUT8(yNOR,0,0);
    VL_OUT8(yNAND,0,0);
    VL_OUT8(yXNOR,0,0);
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);

    // INTERNAL VARIABLES
    Vixorxnor__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vixorxnor___024root);  ///< Copying not allowed
  public:
    Vixorxnor___024root(const char* name);
    ~Vixorxnor___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vixorxnor__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
