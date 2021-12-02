// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vus_sensor.h for the primary calling header

#ifndef VERILATED_VUS_SENSOR___024ROOT_H_
#define VERILATED_VUS_SENSOR___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vus_sensor__Syms;

//----------

VL_MODULE(Vus_sensor___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(echo,0,0);
    VL_OUT8(atrigger,0,0);
    VL_OUT8(ss,7,0);
    VL_OUT8(en,2,0);

    // LOCAL SIGNALS
    CData/*0:0*/ us_sensor__DOT__m1__DOT__nclk;
    CData/*1:0*/ us_sensor__DOT__m1__DOT__segno;
    CData/*3:0*/ us_sensor__DOT__m1__DOT__cas;
    CData/*3:0*/ us_sensor__DOT__m1__DOT__a;
    CData/*3:0*/ us_sensor__DOT__m1__DOT__b;
    CData/*3:0*/ us_sensor__DOT__m1__DOT__c;
    IData/*31:0*/ us_sensor__DOT__t_2c;
    IData/*31:0*/ us_sensor__DOT__t_3c;
    IData/*31:0*/ us_sensor__DOT__on_count;
    IData/*31:0*/ us_sensor__DOT__off_count;
    IData/*31:0*/ us_sensor__DOT__t_c;
    IData/*31:0*/ us_sensor__DOT__count;
    IData/*31:0*/ us_sensor__DOT__m1__DOT__count;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__us_sensor__DOT__m1__DOT__nclk;

    // INTERNAL VARIABLES
    Vus_sensor__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vus_sensor___024root);  ///< Copying not allowed
  public:
    Vus_sensor___024root(const char* name);
    ~Vus_sensor___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vus_sensor__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
