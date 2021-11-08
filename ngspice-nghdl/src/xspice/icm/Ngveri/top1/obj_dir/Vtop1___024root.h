// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop1.h for the primary calling header

#ifndef VERILATED_VTOP1___024ROOT_H_
#define VERILATED_VTOP1___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop1__Syms;

//----------

VL_MODULE(Vtop1___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(passed,0,0);
    VL_OUT8(failed,0,0);
    VL_IN(cyc_cnt,31,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top1__DOT__clkF_MUL_valid_a8;
    CData/*0:0*/ top1__DOT__clkP_MUL_valid_a2;
    CData/*0:0*/ top1__DOT__clkP_MUL_valid_a3;
    CData/*0:0*/ top1__DOT__clkP_MUL_valid_a4;
    CData/*0:0*/ top1__DOT__clkP_MUL_valid_a5;
    CData/*0:0*/ top1__DOT__clkP_MUL_valid_a6;
    CData/*0:0*/ top1__DOT__clkP_MUL_valid_a7;
    CData/*0:0*/ top1__DOT__MUL_Error_a6;
    CData/*0:0*/ top1__DOT__MUL_Error_a7;
    CData/*0:0*/ top1__DOT__MUL_valid_a1;
    CData/*0:0*/ top1__DOT__MUL_valid_a2;
    CData/*0:0*/ top1__DOT__MUL_valid_a3;
    CData/*0:0*/ top1__DOT__MUL_valid_a4;
    CData/*0:0*/ top1__DOT__MUL_valid_a5;
    CData/*0:0*/ top1__DOT__MUL_valid_a6;
    CData/*0:0*/ top1__DOT__MUL_valid_a7;
    CData/*0:0*/ top1__DOT__pseudo_rand__DOT__DEFAULT_reset_a1;
    CData/*0:0*/ top1__DOT__gen_clkF_MUL_valid_a8__DOT__latched_clk_en;
    CData/*0:0*/ top1__DOT__gen_clkP_MUL_valid_a2__DOT__latched_clk_en;
    CData/*0:0*/ top1__DOT__gen_clkP_MUL_valid_a3__DOT__latched_clk_en;
    CData/*0:0*/ top1__DOT__gen_clkP_MUL_valid_a4__DOT__latched_clk_en;
    CData/*0:0*/ top1__DOT__gen_clkP_MUL_valid_a5__DOT__latched_clk_en;
    CData/*0:0*/ top1__DOT__gen_clkP_MUL_valid_a6__DOT__latched_clk_en;
    CData/*0:0*/ top1__DOT__gen_clkP_MUL_valid_a7__DOT__latched_clk_en;
    VlWide<10>/*319:0*/ top1__DOT__RW_rand_vect;
    VlWide<3>/*69:0*/ top1__DOT__MUL_mm_a7;
    IData/*16:0*/ top1__DOT__MUL_mm1_a3;
    IData/*16:0*/ top1__DOT__MUL_mm1_a4;
    IData/*16:0*/ top1__DOT__MUL_mm1_a5;
    IData/*16:0*/ top1__DOT__MUL_mm1_a6;
    IData/*16:0*/ top1__DOT__MUL_mm3_a6;
    IData/*16:0*/ top1__DOT__MUL_pp1_a3;
    VlWide<9>/*256:0*/ top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1;
    VlWide<9>/*256:0*/ top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2;
    QData/*34:0*/ top1__DOT__MUL_aa_a1;
    QData/*34:0*/ top1__DOT__MUL_aa_a2;
    QData/*34:0*/ top1__DOT__MUL_aa_a3;
    QData/*34:0*/ top1__DOT__MUL_aa_a4;
    QData/*34:0*/ top1__DOT__MUL_aa_a5;
    QData/*34:0*/ top1__DOT__MUL_aa_a6;
    QData/*34:0*/ top1__DOT__MUL_aa_a7;
    QData/*34:0*/ top1__DOT__MUL_bb_a1;
    QData/*34:0*/ top1__DOT__MUL_bb_a2;
    QData/*34:0*/ top1__DOT__MUL_bb_a3;
    QData/*34:0*/ top1__DOT__MUL_bb_a4;
    QData/*34:0*/ top1__DOT__MUL_bb_a5;
    QData/*34:0*/ top1__DOT__MUL_bb_a6;
    QData/*34:0*/ top1__DOT__MUL_bb_a7;
    QData/*35:0*/ top1__DOT__MUL_mm2_a4;
    QData/*35:0*/ top1__DOT__MUL_mm3_a5;
    QData/*35:0*/ top1__DOT__MUL_mm4_a6;
    QData/*33:0*/ top1__DOT__MUL_pp1_a2;
    QData/*34:0*/ top1__DOT__MUL_pp2_a3;
    QData/*34:0*/ top1__DOT__MUL_pp3_a4;
    QData/*35:0*/ top1__DOT__MUL_pp4_a5;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__top1__DOT__clkF_MUL_valid_a8;
    CData/*0:0*/ __Vclklast__TOP__top1__DOT__clkP_MUL_valid_a2;
    CData/*0:0*/ __Vclklast__TOP__top1__DOT__clkP_MUL_valid_a3;
    CData/*0:0*/ __Vclklast__TOP__top1__DOT__clkP_MUL_valid_a4;
    CData/*0:0*/ __Vclklast__TOP__top1__DOT__clkP_MUL_valid_a5;
    CData/*0:0*/ __Vclklast__TOP__top1__DOT__clkP_MUL_valid_a6;
    CData/*0:0*/ __Vclklast__TOP__top1__DOT__clkP_MUL_valid_a7;

    // INTERNAL VARIABLES
    Vtop1__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop1___024root);  ///< Copying not allowed
  public:
    Vtop1___024root(const char* name);
    ~Vtop1___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop1__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
