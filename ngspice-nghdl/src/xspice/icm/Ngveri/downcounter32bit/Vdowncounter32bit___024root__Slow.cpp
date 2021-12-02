// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdowncounter32bit.h for the primary calling header

#include "Vdowncounter32bit___024root.h"
#include "Vdowncounter32bit__Syms.h"

//==========


void Vdowncounter32bit___024root___ctor_var_reset(Vdowncounter32bit___024root* vlSelf);

Vdowncounter32bit___024root::Vdowncounter32bit___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdowncounter32bit___024root___ctor_var_reset(this);
}

void Vdowncounter32bit___024root::__Vconfigure(Vdowncounter32bit__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdowncounter32bit___024root::~Vdowncounter32bit___024root() {
}

void Vdowncounter32bit___024root___eval_initial(Vdowncounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdowncounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdowncounter32bit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vdowncounter32bit___024root___eval_settle(Vdowncounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdowncounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdowncounter32bit___024root___eval_settle\n"); );
}

void Vdowncounter32bit___024root___final(Vdowncounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdowncounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdowncounter32bit___024root___final\n"); );
}

void Vdowncounter32bit___024root___ctor_var_reset(Vdowncounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdowncounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdowncounter32bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(32);
}
