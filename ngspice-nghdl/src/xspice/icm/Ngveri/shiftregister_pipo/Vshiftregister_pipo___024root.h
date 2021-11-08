// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshiftregister_pipo.h for the primary calling header

#ifndef VERILATED_VSHIFTREGISTER_PIPO___024ROOT_H_
#define VERILATED_VSHIFTREGISTER_PIPO___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vshiftregister_pipo__Syms;

//----------

VL_MODULE(Vshiftregister_pipo___024root) {
  public:

    // PORTS
    VL_IN8(Clk,0,0);
    VL_IN8(Pi,3,0);
    VL_OUT8(Po,3,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__Clk;

    // INTERNAL VARIABLES
    Vshiftregister_pipo__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vshiftregister_pipo___024root);  ///< Copying not allowed
  public:
    Vshiftregister_pipo___024root(const char* name);
    ~Vshiftregister_pipo___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vshiftregister_pipo__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
