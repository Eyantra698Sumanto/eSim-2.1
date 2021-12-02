// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjbuffer.h for the primary calling header

#ifndef VERILATED_VJBUFFER___024ROOT_H_
#define VERILATED_VJBUFFER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjbuffer__Syms;

//----------

VL_MODULE(Vjbuffer___024root) {
  public:

    // PORTS
    VL_IN8(a,0,0);
    VL_OUT8(y,0,0);

    // INTERNAL VARIABLES
    Vjbuffer__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjbuffer___024root);  ///< Copying not allowed
  public:
    Vjbuffer___024root(const char* name);
    ~Vjbuffer___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjbuffer__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
