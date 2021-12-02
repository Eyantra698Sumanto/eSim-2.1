// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vledmaker.h for the primary calling header

#ifndef VERILATED_VLEDMAKER___024ROOT_H_
#define VERILATED_VLEDMAKER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vledmaker__Syms;

//----------

VL_MODULE(Vledmaker___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(passed,0,0);
    VL_OUT8(failed,0,0);
    VL_IN(cyc_cnt,31,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vledmaker__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vledmaker___024root);  ///< Copying not allowed
  public:
    Vledmaker___024root(const char* name);
    ~Vledmaker___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vledmaker__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
