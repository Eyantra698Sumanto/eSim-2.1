// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjboothmultiplier.h for the primary calling header

#ifndef VERILATED_VJBOOTHMULTIPLIER___024ROOT_H_
#define VERILATED_VJBOOTHMULTIPLIER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjboothmultiplier__Syms;

//----------

VL_MODULE(Vjboothmultiplier___024root) {
  public:

    // PORTS
    VL_OUT8(PRODUCT,7,0);
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);

    // INTERNAL VARIABLES
    Vjboothmultiplier__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjboothmultiplier___024root);  ///< Copying not allowed
  public:
    Vjboothmultiplier___024root(const char* name);
    ~Vjboothmultiplier___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjboothmultiplier__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
