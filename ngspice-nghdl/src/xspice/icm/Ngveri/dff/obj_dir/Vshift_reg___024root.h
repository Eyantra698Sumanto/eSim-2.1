// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshift_reg.h for the primary calling header

#ifndef VERILATED_VSHIFT_REG___024ROOT_H_
#define VERILATED_VSHIFT_REG___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vshift_reg__Syms;
class Vshift_reg_VerilatedVcd;


//----------

VL_MODULE(Vshift_reg___024root) {
  public:

    // PORTS
    VL_IN8(rstn,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(d,0,0);
    VL_OUT8(q,0,0);

    // LOCAL SIGNALS
    CData/*2:0*/ shift_reg__DOT__q_net;

    // LOCAL VARIABLES
    CData/*0:0*/ shift_reg__DOT____Vcellout__u0__q;
    CData/*0:0*/ shift_reg__DOT____Vcellout__u1__q;
    CData/*0:0*/ shift_reg__DOT____Vcellout__u2__q;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rstn;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vshift_reg__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vshift_reg___024root);  ///< Copying not allowed
  public:
    Vshift_reg___024root(const char* name);
    ~Vshift_reg___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vshift_reg__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
