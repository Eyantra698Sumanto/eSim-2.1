// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vram_dual.h for the primary calling header

#ifndef VERILATED_VRAM_DUAL___024ROOT_H_
#define VERILATED_VRAM_DUAL___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vram_dual__Syms;

//----------

VL_MODULE(Vram_dual___024root) {
  public:

    // PORTS
    VL_IN8(read_clock,0,0);
    VL_IN8(write_clock,0,0);
    VL_IN8(data,7,0);
    VL_IN8(read_addr,5,0);
    VL_IN8(write_addr,5,0);
    VL_IN8(we,0,0);
    VL_OUT8(q,7,0);

    // LOCAL SIGNALS
    VlUnpacked<CData/*7:0*/, 64> ram_dual__DOT__ram;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__read_clock;
    CData/*0:0*/ __Vclklast__TOP__write_clock;

    // INTERNAL VARIABLES
    Vram_dual__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vram_dual___024root);  ///< Copying not allowed
  public:
    Vram_dual___024root(const char* name);
    ~Vram_dual___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vram_dual__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
