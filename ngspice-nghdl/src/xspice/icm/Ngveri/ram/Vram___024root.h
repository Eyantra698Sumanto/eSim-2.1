// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vram.h for the primary calling header

#ifndef VERILATED_VRAM___024ROOT_H_
#define VERILATED_VRAM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vram__Syms;

//----------

VL_MODULE(Vram___024root) {
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
    VlUnpacked<CData/*7:0*/, 32> ram__DOT__mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vram__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vram___024root);  ///< Copying not allowed
  public:
    Vram___024root(const char* name);
    ~Vram___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vram__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
