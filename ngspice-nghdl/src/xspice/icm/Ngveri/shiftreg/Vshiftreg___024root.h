// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshiftreg.h for the primary calling header

#ifndef VERILATED_VSHIFTREG___024ROOT_H_
#define VERILATED_VSHIFTREG___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vshiftreg__Syms;

//----------

VL_MODULE(Vshiftreg___024root) {
  public:

    // PORTS
    VL_IN8(rstn,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(d,0,0);
    VL_OUT8(q,0,0);

    // LOCAL SIGNALS
    CData/*2:0*/ shiftreg__DOT__q_net;

    // LOCAL VARIABLES
    CData/*0:0*/ shiftreg__DOT____Vcellout__u0__q;
    CData/*0:0*/ shiftreg__DOT____Vcellout__u1__q;
    CData/*0:0*/ shiftreg__DOT____Vcellout__u2__q;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rstn;

    // INTERNAL VARIABLES
    Vshiftreg__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vshiftreg___024root);  ///< Copying not allowed
  public:
    Vshiftreg___024root(const char* name);
    ~Vshiftreg___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vshiftreg__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
