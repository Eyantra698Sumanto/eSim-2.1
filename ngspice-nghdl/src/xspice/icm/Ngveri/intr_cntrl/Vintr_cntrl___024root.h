// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vintr_cntrl.h for the primary calling header

#ifndef VERILATED_VINTR_CNTRL___024ROOT_H_
#define VERILATED_VINTR_CNTRL___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vintr_cntrl__Syms;

//----------

VL_MODULE(Vintr_cntrl___024root) {
  public:

    // PORTS
    VL_IN8(clk_in,0,0);
    VL_IN8(rst_in,0,0);
    VL_IN8(intr_rq,7,0);
    VL_INOUT8(intr_bus,7,0);
    VL_IN8(intr_in,0,0);
    VL_OUT8(intr_out,0,0);
    VL_OUT8(bus_oe,0,0);

    // LOCAL SIGNALS
    CData/*3:0*/ INTR_CNTRL__DOT__state_reg;
    CData/*3:0*/ INTR_CNTRL__DOT__state_next;
    CData/*1:0*/ INTR_CNTRL__DOT__cmdMode_reg;
    CData/*1:0*/ INTR_CNTRL__DOT__cmdMode_next;
    CData/*1:0*/ INTR_CNTRL__DOT__cmdCycle_reg;
    CData/*1:0*/ INTR_CNTRL__DOT__cmdCycle_next;
    CData/*2:0*/ INTR_CNTRL__DOT__intrIndex_reg;
    CData/*2:0*/ INTR_CNTRL__DOT__intrIndex_next;
    CData/*2:0*/ INTR_CNTRL__DOT__intrPtr_reg;
    CData/*2:0*/ INTR_CNTRL__DOT__intrPtr_next;
    CData/*0:0*/ INTR_CNTRL__DOT__oe_reg;
    CData/*0:0*/ INTR_CNTRL__DOT__oe_next;
    CData/*7:0*/ INTR_CNTRL__DOT__intrBus_reg;
    CData/*7:0*/ INTR_CNTRL__DOT__intrBus_next;
    CData/*0:0*/ INTR_CNTRL__DOT__intrOut_reg;
    CData/*0:0*/ INTR_CNTRL__DOT__intrOut_next;
    VlUnpacked<CData/*2:0*/, 8> INTR_CNTRL__DOT__prior_table_next;
    VlUnpacked<CData/*2:0*/, 8> INTR_CNTRL__DOT__prior_table_reg;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk_in;
    CData/*0:0*/ __Vclklast__TOP__rst_in;

    // INTERNAL VARIABLES
    Vintr_cntrl__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vintr_cntrl___024root);  ///< Copying not allowed
  public:
    Vintr_cntrl___024root(const char* name);
    ~Vintr_cntrl___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vintr_cntrl__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
