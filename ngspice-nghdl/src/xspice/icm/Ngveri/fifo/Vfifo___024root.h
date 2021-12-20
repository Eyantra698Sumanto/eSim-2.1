// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo.h for the primary calling header

#ifndef VERILATED_VFIFO___024ROOT_H_
#define VERILATED_VFIFO___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vfifo__Syms;

//----------

VL_MODULE(Vfifo___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(rd_en,0,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(datain,3,0);
    VL_OUT8(dataout,3,0);
    VL_OUT8(fifo_full,0,0);
    VL_OUT8(fifo_empty,0,0);
    VL_OUT8(fifo_threshold,0,0);
    VL_OUT8(fifo_overflow,0,0);
    VL_OUT8(fifo_underflow,0,0);

    // LOCAL SIGNALS
    CData/*3:0*/ fifo__DOT__rptr;
    CData/*3:0*/ fifo__DOT__wptr;
    VlUnpacked<CData/*3:0*/, 16> fifo__DOT__m__DOT__mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;

    // INTERNAL VARIABLES
    Vfifo__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfifo___024root);  ///< Copying not allowed
  public:
    Vfifo___024root(const char* name);
    ~Vfifo___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vfifo__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
