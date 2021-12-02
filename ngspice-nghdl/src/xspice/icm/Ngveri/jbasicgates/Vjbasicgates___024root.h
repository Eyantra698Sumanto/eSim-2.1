// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjbasicgates.h for the primary calling header

#ifndef VERILATED_VJBASICGATES___024ROOT_H_
#define VERILATED_VJBASICGATES___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjbasicgates__Syms;

//----------

VL_MODULE(Vjbasicgates___024root) {
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
    Vjbasicgates__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjbasicgates___024root);  ///< Copying not allowed
  public:
    Vjbasicgates___024root(const char* name);
    ~Vjbasicgates___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjbasicgates__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
