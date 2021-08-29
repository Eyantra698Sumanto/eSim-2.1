// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdff.h for the primary calling header

#ifndef VERILATED_VDFF___024ROOT_H_
#define VERILATED_VDFF___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdff__Syms;
class Vdff_VerilatedVcd;


//----------

VL_MODULE(Vdff___024root) {
  public:

    // PORTS
    VL_IN8(rstn,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(d,0,0);
    VL_OUT8(q,0,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rstn;

    // INTERNAL VARIABLES
    Vdff__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdff___024root);  ///< Copying not allowed
  public:
    Vdff___024root(const char* name);
    ~Vdff___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdff__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
