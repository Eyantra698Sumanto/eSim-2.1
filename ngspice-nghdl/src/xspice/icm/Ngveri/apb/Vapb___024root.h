// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vapb.h for the primary calling header

#ifndef VERILATED_VAPB___024ROOT_H_
#define VERILATED_VAPB___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vapb__Syms;

//----------

VL_MODULE(Vapb___024root) {
  public:

    // PORTS
    VL_IN8(pclk,0,0);
    VL_IN8(preset,0,0);
    VL_IN8(pwrite,0,0);
    VL_IN8(penable,0,0);
    VL_IN8(psel,0,0);
    VL_IN8(paddress,4,0);
    VL_IN8(pwdata,7,0);
    VL_OUT8(prdata,7,0);
    VL_OUT8(pready,0,0);

    // LOCAL SIGNALS
    CData/*1:0*/ apb__DOT__ps;
    CData/*1:0*/ apb__DOT__ps_sync;
    VlUnpacked<CData/*7:0*/, 32> apb__DOT__mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdlyvset__apb__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvdim0__apb__DOT__mem__v33;
    CData/*7:0*/ __Vdlyvval__apb__DOT__mem__v33;
    CData/*0:0*/ __Vdlyvset__apb__DOT__mem__v33;
    CData/*0:0*/ __Vclklast__TOP__pclk;
    CData/*0:0*/ __Vclklast__TOP__preset;

    // INTERNAL VARIABLES
    Vapb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vapb___024root);  ///< Copying not allowed
  public:
    Vapb___024root(const char* name);
    ~Vapb___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vapb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
