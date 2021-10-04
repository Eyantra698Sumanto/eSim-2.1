// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vm21.h for the primary calling header

#ifndef VERILATED_VM21___024ROOT_H_
#define VERILATED_VM21___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vm21__Syms;

//----------

VL_MODULE(Vm21___024root) {
  public:

    // PORTS
    VL_OUT8(Y,0,0);
    VL_IN8(D0,0,0);
    VL_IN8(D1,0,0);
    VL_IN8(S,0,0);

    // INTERNAL VARIABLES
    Vm21__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vm21___024root);  ///< Copying not allowed
  public:
    Vm21___024root(const char* name);
    ~Vm21___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vm21__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
