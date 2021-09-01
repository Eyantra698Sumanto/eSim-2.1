// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VConvert.h for the primary calling header

#ifndef VERILATED_VCONVERT___024ROOT_H_
#define VERILATED_VCONVERT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VConvert__Syms;

//----------

VL_MODULE(VConvert___024root) {
  public:

    // PORTS
    VL_OUT8(o,0,0);
    VL_IN8(i,0,0);

    // INTERNAL VARIABLES
    VConvert__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VConvert___024root);  ///< Copying not allowed
  public:
    VConvert___024root(const char* name);
    ~VConvert___024root();

    // INTERNAL METHODS
    void __Vconfigure(VConvert__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
