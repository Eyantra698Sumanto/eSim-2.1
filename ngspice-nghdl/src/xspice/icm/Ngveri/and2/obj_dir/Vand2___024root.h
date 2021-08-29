// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vand2.h for the primary calling header

#ifndef VERILATED_VAND2___024ROOT_H_
#define VERILATED_VAND2___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vand2__Syms;

//----------

VL_MODULE(Vand2___024root) {
  public:

    // PORTS
    VL_OUT8(Y,0,0);
    VL_IN8(A,0,0);
    VL_IN8(B,0,0);

    // INTERNAL VARIABLES
    Vand2__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vand2___024root);  ///< Copying not allowed
  public:
    Vand2___024root(const char* name);
    ~Vand2___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vand2__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
