// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vand.h for the primary calling header

#ifndef VERILATED_VAND___024ROOT_H_
#define VERILATED_VAND___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vand__Syms;

//----------

VL_MODULE(Vand___024root) {
  public:

    // PORTS
    VL_OUT8(Y,0,0);
    VL_IN8(A,0,0);
    VL_IN8(B,0,0);

    // INTERNAL VARIABLES
    Vand__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vand___024root);  ///< Copying not allowed
  public:
    Vand___024root(const char* name);
    ~Vand___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vand__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
