// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjfsmmoorewithoverlap.h for the primary calling header

#ifndef VERILATED_VJFSMMOOREWITHOVERLAP___024ROOT_H_
#define VERILATED_VJFSMMOOREWITHOVERLAP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjfsmmoorewithoverlap__Syms;

//----------

VL_MODULE(Vjfsmmoorewithoverlap___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_OUT8(dataout,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(datain,0,0);

    // LOCAL SIGNALS
    CData/*2:0*/ jfsmMooreWithOverlap__DOT__cs;
    CData/*2:0*/ jfsmMooreWithOverlap__DOT__ns;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    Vjfsmmoorewithoverlap__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjfsmmoorewithoverlap___024root);  ///< Copying not allowed
  public:
    Vjfsmmoorewithoverlap___024root(const char* name);
    ~Vjfsmmoorewithoverlap___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjfsmmoorewithoverlap__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
