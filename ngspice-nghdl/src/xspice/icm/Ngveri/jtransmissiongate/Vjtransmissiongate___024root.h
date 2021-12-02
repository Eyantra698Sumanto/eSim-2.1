// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjtransmissiongate.h for the primary calling header

#ifndef VERILATED_VJTRANSMISSIONGATE___024ROOT_H_
#define VERILATED_VJTRANSMISSIONGATE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjtransmissiongate__Syms;

//----------

VL_MODULE(Vjtransmissiongate___024root) {
  public:

    // PORTS
    VL_OUT8(y,0,0);
    VL_IN8(a,0,0);
    VL_IN8(control,0,0);

    // INTERNAL VARIABLES
    Vjtransmissiongate__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjtransmissiongate___024root);  ///< Copying not allowed
  public:
    Vjtransmissiongate___024root(const char* name);
    ~Vjtransmissiongate___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjtransmissiongate__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
