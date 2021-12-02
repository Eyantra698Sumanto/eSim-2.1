// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varbiter.h for the primary calling header

#ifndef VERILATED_VARBITER___024ROOT_H_
#define VERILATED_VARBITER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Varbiter__Syms;

//----------

VL_MODULE(Varbiter___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(req3,0,0);
    VL_IN8(req2,0,0);
    VL_IN8(req1,0,0);
    VL_IN8(req0,0,0);
    VL_OUT8(gnt3,0,0);
    VL_OUT8(gnt2,0,0);
    VL_OUT8(gnt1,0,0);
    VL_OUT8(gnt0,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ arbiter__DOT__beg;
    CData/*1:0*/ arbiter__DOT__lgnt;
    CData/*0:0*/ arbiter__DOT__lcomreq;
    CData/*0:0*/ arbiter__DOT__lgnt0;
    CData/*0:0*/ arbiter__DOT__lgnt1;
    CData/*0:0*/ arbiter__DOT__lgnt2;
    CData/*0:0*/ arbiter__DOT__lgnt3;
    CData/*0:0*/ arbiter__DOT__lasmask;
    CData/*0:0*/ arbiter__DOT__lmask0;
    CData/*0:0*/ arbiter__DOT__lmask1;
    CData/*0:0*/ arbiter__DOT__ledge;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Varbiter__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Varbiter___024root);  ///< Copying not allowed
  public:
    Varbiter___024root(const char* name);
    ~Varbiter___024root();

    // INTERNAL METHODS
    void __Vconfigure(Varbiter__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
