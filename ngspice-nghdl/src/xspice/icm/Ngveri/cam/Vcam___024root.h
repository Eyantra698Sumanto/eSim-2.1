// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcam.h for the primary calling header

#ifndef VERILATED_VCAM___024ROOT_H_
#define VERILATED_VCAM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcam__Syms;

//----------

VL_MODULE(Vcam___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(cam_enable,0,0);
    VL_OUT8(cam_hit_out,0,0);
    VL_OUT8(cam_addr_out,7,0);
    VL_IN16(cam_data_in,15,0);

    // LOCAL SIGNALS
    CData/*7:0*/ cam__DOT__cam_addr_combo;
    CData/*0:0*/ cam__DOT__cam_hit_combo;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vcam__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcam___024root);  ///< Copying not allowed
  public:
    Vcam___024root(const char* name);
    ~Vcam___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcam__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
