// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjfsmmealywithoverlap.h for the primary calling header

#ifndef VERILATED_VJFSMMEALYWITHOVERLAP___024ROOT_H_
#define VERILATED_VJFSMMEALYWITHOVERLAP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjfsmmealywithoverlap__Syms;

//----------

VL_MODULE(Vjfsmmealywithoverlap___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_OUT8(dataout,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(datain,0,0);

    // LOCAL SIGNALS
    CData/*2:0*/ jfsmMealyWithOverlap__DOT__cs;
    CData/*2:0*/ jfsmMealyWithOverlap__DOT__ns;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    Vjfsmmealywithoverlap__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjfsmmealywithoverlap___024root);  ///< Copying not allowed
  public:
    Vjfsmmealywithoverlap___024root(const char* name);
    ~Vjfsmmealywithoverlap___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjfsmmealywithoverlap__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
