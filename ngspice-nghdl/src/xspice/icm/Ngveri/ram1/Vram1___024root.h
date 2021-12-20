// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vram1.h for the primary calling header

#ifndef VERILATED_VRAM1___024ROOT_H_
#define VERILATED_VRAM1___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vram1__Syms;

//----------

VL_MODULE(Vram1___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(cs,0,0);
    VL_IN8(read,0,0);
    VL_IN8(write,0,0);
    VL_OUT8(dataread,7,0);
    VL_IN8(datawrite,7,0);
    VL_IN8(address,7,0);

    // LOCAL SIGNALS
    VlUnpacked<CData/*7:0*/, 32> ram1__DOT__mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vram1__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vram1___024root);  ///< Copying not allowed
  public:
    Vram1___024root(const char* name);
    ~Vram1___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vram1__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
