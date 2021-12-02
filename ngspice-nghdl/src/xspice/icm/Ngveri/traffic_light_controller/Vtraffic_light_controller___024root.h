// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtraffic_light_controller.h for the primary calling header

#ifndef VERILATED_VTRAFFIC_LIGHT_CONTROLLER___024ROOT_H_
#define VERILATED_VTRAFFIC_LIGHT_CONTROLLER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtraffic_light_controller__Syms;

//----------

VL_MODULE(Vtraffic_light_controller___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(light_M1,2,0);
    VL_OUT8(light_S,2,0);
    VL_OUT8(light_MT,2,0);
    VL_OUT8(light_M2,2,0);

    // LOCAL SIGNALS
    CData/*3:0*/ Traffic_Light_Controller__DOT__count;
    CData/*2:0*/ Traffic_Light_Controller__DOT__ps;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vtraffic_light_controller__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtraffic_light_controller___024root);  ///< Copying not allowed
  public:
    Vtraffic_light_controller___024root(const char* name);
    ~Vtraffic_light_controller___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtraffic_light_controller__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
