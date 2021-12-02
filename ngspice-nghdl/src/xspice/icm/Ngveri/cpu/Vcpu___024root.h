// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcpu__Syms;

//----------

VL_MODULE(Vcpu___024root) {
  public:

    // PORTS
    VL_IN8(clkin,0,0);
    VL_OUT8(OutPut,7,0);
    VL_OUT8(LED1,6,0);
    VL_OUT8(LED2,6,0);

    // LOCAL SIGNALS
    CData/*0:0*/ CPU__DOT__clk;
    CData/*0:0*/ CPU__DOT__A__DOT__CLK;
    CData/*0:0*/ CPU__DOT__B__DOT__CLK;
    CData/*0:0*/ CPU__DOT__InstReg__DOT__CLK;
    CData/*0:0*/ CPU__DOT__pc__DOT__CLK;
    CData/*0:0*/ CPU__DOT__MemAdd__DOT__CLK;
    CData/*0:0*/ CPU__DOT__O__DOT__CLK;
    CData/*7:0*/ CPU__DOT__bus;
    CData/*7:0*/ CPU__DOT__Aout;
    CData/*7:0*/ CPU__DOT__Bout;
    CData/*7:0*/ CPU__DOT__Instout;
    CData/*3:0*/ CPU__DOT__Pcount;
    CData/*3:0*/ CPU__DOT__Addr_in;
    CData/*7:0*/ CPU__DOT__ram__DOT__buffer;
    CData/*2:0*/ CPU__DOT__ic__DOT__Inst_count;
    CData/*0:0*/ CPU__DOT__ic__DOT__reset_in;
    VlUnpacked<CData/*7:0*/, 16> CPU__DOT__ram__DOT__Memory;

    // LOCAL VARIABLES
    CData/*7:0*/ CPU__DOT__bus__out8;
    CData/*7:0*/ CPU__DOT__bus__out9;
    CData/*7:0*/ CPU__DOT__ram__DOT__data__out__en0;
    CData/*3:0*/ __Vdly__CPU__DOT__Pcount;
    CData/*0:0*/ __VinpClk__TOP__CPU__DOT__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__CPU__DOT__clk;
    CData/*0:0*/ __Vclklast__TOP__CPU__DOT__MemAdd__DOT__CLK;
    CData/*0:0*/ __Vclklast__TOP__CPU__DOT__A__DOT__CLK;
    CData/*0:0*/ __Vclklast__TOP__CPU__DOT__B__DOT__CLK;
    CData/*0:0*/ __Vclklast__TOP__CPU__DOT__O__DOT__CLK;
    CData/*0:0*/ __Vclklast__TOP__CPU__DOT__InstReg__DOT__CLK;
    CData/*0:0*/ __Vclklast__TOP__CPU__DOT__pc__DOT__CLK;
    CData/*0:0*/ __Vchglast__TOP__CPU__DOT__clk;
    SData/*14:0*/ CPU__DOT____Vcellout__ic__ctrl_wrd;

    // INTERNAL VARIABLES
    Vcpu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcpu___024root);  ///< Copying not allowed
  public:
    Vcpu___024root(const char* name);
    ~Vcpu___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcpu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
