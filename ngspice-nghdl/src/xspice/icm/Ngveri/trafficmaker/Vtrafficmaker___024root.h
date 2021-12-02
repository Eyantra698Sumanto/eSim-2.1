// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtrafficmaker.h for the primary calling header

#ifndef VERILATED_VTRAFFICMAKER___024ROOT_H_
#define VERILATED_VTRAFFICMAKER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtrafficmaker__Syms;

//----------

VL_MODULE(Vtrafficmaker___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(passed,0,0);
    VL_OUT8(failed,0,0);
    VL_IN(cyc_cnt,31,0);

    // LOCAL SIGNALS
    CData/*2:0*/ trafficmaker__DOT__state;
    CData/*2:0*/ trafficmaker__DOT__count;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;

    // INTERNAL VARIABLES
    Vtrafficmaker__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtrafficmaker___024root);  ///< Copying not allowed
  public:
    Vtrafficmaker___024root(const char* name);
    ~Vtrafficmaker___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtrafficmaker__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
