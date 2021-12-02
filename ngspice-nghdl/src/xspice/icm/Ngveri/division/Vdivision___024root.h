// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdivision.h for the primary calling header

#ifndef VERILATED_VDIVISION___024ROOT_H_
#define VERILATED_VDIVISION___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdivision__Syms;

//----------

VL_MODULE(Vdivision___024root) {
  public:

    // PORTS
    VL_OUT8(exception,0,0);
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    VL_OUT(res,31,0);

    // LOCAL SIGNALS
    IData/*30:0*/ division__DOT__X0__DOT__add_sum;
    IData/*30:0*/ division__DOT__X1__DOT__A1__DOT__add_sum;
    IData/*30:0*/ division__DOT__X2__DOT__A1__DOT__add_sum;
    IData/*30:0*/ division__DOT__X3__DOT__A1__DOT__add_sum;

    // INTERNAL VARIABLES
    Vdivision__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdivision___024root);  ///< Copying not allowed
  public:
    Vdivision___024root(const char* name);
    ~Vdivision___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdivision__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
