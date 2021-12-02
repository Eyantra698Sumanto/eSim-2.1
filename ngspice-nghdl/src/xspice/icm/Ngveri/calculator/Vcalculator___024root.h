// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcalculator.h for the primary calling header

#ifndef VERILATED_VCALCULATOR___024ROOT_H_
#define VERILATED_VCALCULATOR___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcalculator__Syms;

//----------

VL_MODULE(Vcalculator___024root) {
  public:

    // PORTS
    VL_OUT8(res,3,0);
    VL_OUT8(seven_out,6,0);
    VL_IN16(astr,13,0);

    // INTERNAL VARIABLES
    Vcalculator__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcalculator___024root);  ///< Copying not allowed
  public:
    Vcalculator___024root(const char* name);
    ~Vcalculator___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcalculator__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
