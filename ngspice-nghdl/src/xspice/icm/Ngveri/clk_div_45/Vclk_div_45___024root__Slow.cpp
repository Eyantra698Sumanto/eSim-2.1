// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclk_div_45.h for the primary calling header

#include "Vclk_div_45___024root.h"
#include "Vclk_div_45__Syms.h"

//==========


void Vclk_div_45___024root___ctor_var_reset(Vclk_div_45___024root* vlSelf);

Vclk_div_45___024root::Vclk_div_45___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vclk_div_45___024root___ctor_var_reset(this);
}

void Vclk_div_45___024root::__Vconfigure(Vclk_div_45__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vclk_div_45___024root::~Vclk_div_45___024root() {
}

void Vclk_div_45___024root___eval_initial(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_in = vlSelf->clk_in;
}

void Vclk_div_45___024root___settle__TOP__3(Vclk_div_45___024root* vlSelf);

void Vclk_div_45___024root___eval_settle(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___eval_settle\n"); );
    // Body
    Vclk_div_45___024root___settle__TOP__3(vlSelf);
}

void Vclk_div_45___024root___final(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___final\n"); );
}

void Vclk_div_45___024root___ctor_var_reset(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_in = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->clk_out = VL_RAND_RESET_I(1);
    vlSelf->clk_div_45__DOT__counter1 = VL_RAND_RESET_I(4);
    vlSelf->clk_div_45__DOT__counter2 = VL_RAND_RESET_I(4);
    vlSelf->clk_div_45__DOT__toggle1 = VL_RAND_RESET_I(1);
    vlSelf->clk_div_45__DOT__toggle2 = VL_RAND_RESET_I(1);
}
