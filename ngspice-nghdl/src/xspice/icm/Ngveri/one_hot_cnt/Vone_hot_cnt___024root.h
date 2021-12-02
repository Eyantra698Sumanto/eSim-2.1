// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vone_hot_cnt.h for the primary calling header

#ifndef VERILATED_VONE_HOT_CNT___024ROOT_H_
#define VERILATED_VONE_HOT_CNT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vone_hot_cnt__Syms;

//----------

VL_MODULE(Vone_hot_cnt___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_OUT8(out,7,0);
    VL_IN8(enable,0,0);
    VL_IN8(reset,0,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vone_hot_cnt__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vone_hot_cnt___024root);  ///< Copying not allowed
  public:
    Vone_hot_cnt___024root(const char* name);
    ~Vone_hot_cnt___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vone_hot_cnt__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
