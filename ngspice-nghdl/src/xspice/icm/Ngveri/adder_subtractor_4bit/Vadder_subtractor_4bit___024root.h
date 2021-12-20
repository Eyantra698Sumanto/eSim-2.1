// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadder_subtractor_4bit.h for the primary calling header

#ifndef VERILATED_VADDER_SUBTRACTOR_4BIT___024ROOT_H_
#define VERILATED_VADDER_SUBTRACTOR_4BIT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vadder_subtractor_4bit__Syms;

//----------

VL_MODULE(Vadder_subtractor_4bit___024root) {
  public:

    // PORTS
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,3,0);
    VL_OUT8(carry,0,0);

    // LOCAL SIGNALS
    CData/*2:0*/ Adder_subtractor_4bit__DOT__c;
    CData/*3:0*/ Adder_subtractor_4bit__DOT__bin;

    // LOCAL VARIABLES
    CData/*2:0*/ __Vchglast__TOP__Adder_subtractor_4bit__DOT__c;

    // INTERNAL VARIABLES
    Vadder_subtractor_4bit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vadder_subtractor_4bit___024root);  ///< Copying not allowed
  public:
    Vadder_subtractor_4bit___024root(const char* name);
    ~Vadder_subtractor_4bit___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vadder_subtractor_4bit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
