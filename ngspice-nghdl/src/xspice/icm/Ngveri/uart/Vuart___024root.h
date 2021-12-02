// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart.h for the primary calling header

#ifndef VERILATED_VUART___024ROOT_H_
#define VERILATED_VUART___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vuart__Syms;

//----------

VL_MODULE(Vuart___024root) {
  public:

    // PORTS
    VL_IN8(reset,0,0);
    VL_IN8(txclk,0,0);
    VL_IN8(rxclk,0,0);
    VL_IN8(ld_tx_data,0,0);
    VL_IN8(tx_data,7,0);
    VL_IN8(tx_enable,0,0);
    VL_OUT8(tx_out,0,0);
    VL_OUT8(tx_empty,0,0);
    VL_IN8(uld_rx_data,0,0);
    VL_OUT8(rx_data,7,0);
    VL_IN8(rx_enable,0,0);
    VL_IN8(rx_in,0,0);
    VL_OUT8(rx_empty,0,0);

    // LOCAL SIGNALS
    CData/*7:0*/ uart__DOT__tx_reg;
    CData/*3:0*/ uart__DOT__tx_cnt;
    CData/*7:0*/ uart__DOT__rx_reg;
    CData/*3:0*/ uart__DOT__rx_sample_cnt;
    CData/*3:0*/ uart__DOT__rx_cnt;
    CData/*0:0*/ uart__DOT__rx_d1;
    CData/*0:0*/ uart__DOT__rx_d2;
    CData/*0:0*/ uart__DOT__rx_busy;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vclklast__TOP__rxclk;
    CData/*0:0*/ __Vclklast__TOP__txclk;

    // INTERNAL VARIABLES
    Vuart__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vuart___024root);  ///< Copying not allowed
  public:
    Vuart___024root(const char* name);
    ~Vuart___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vuart__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
