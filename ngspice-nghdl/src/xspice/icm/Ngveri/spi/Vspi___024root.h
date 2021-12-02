// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi.h for the primary calling header

#ifndef VERILATED_VSPI___024ROOT_H_
#define VERILATED_VSPI___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vspi__Syms;

//----------

VL_MODULE(Vspi___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(in_data,7,0);
    VL_IN8(addr,1,0);
    VL_IN8(wr,0,0);
    VL_IN8(rd,0,0);
    VL_IN8(cs,0,0);
    VL_OUT8(out_data,7,0);
    VL_INOUT8(mosi,0,0);
    VL_IN8(miso,0,0);
    VL_INOUT8(sclk,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ spi__DOT__sclk_buf;
    CData/*0:0*/ spi__DOT__mosi_buf;
    CData/*0:0*/ spi__DOT__busy;
    CData/*7:0*/ spi__DOT__in_buf;
    CData/*7:0*/ spi__DOT__out_buf;
    CData/*7:0*/ spi__DOT__clk_cnt;
    CData/*4:0*/ spi__DOT__cnt;

    // LOCAL VARIABLES
    CData/*0:0*/ __VinpClk__TOP__spi__DOT__sclk_buf;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__spi__DOT__sclk_buf;
    CData/*0:0*/ __Vchglast__TOP__spi__DOT__sclk_buf;

    // INTERNAL VARIABLES
    Vspi__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vspi___024root);  ///< Copying not allowed
  public:
    Vspi___024root(const char* name);
    ~Vspi___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vspi__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
