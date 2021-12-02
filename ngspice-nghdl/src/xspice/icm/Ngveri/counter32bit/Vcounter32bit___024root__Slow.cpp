// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter32bit.h for the primary calling header

#include "Vcounter32bit___024root.h"
#include "Vcounter32bit__Syms.h"

//==========


void Vcounter32bit___024root___ctor_var_reset(Vcounter32bit___024root* vlSelf);

Vcounter32bit___024root::Vcounter32bit___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcounter32bit___024root___ctor_var_reset(this);
}

void Vcounter32bit___024root::__Vconfigure(Vcounter32bit__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcounter32bit___024root::~Vcounter32bit___024root() {
}

void Vcounter32bit___024root___eval_initial(Vcounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter32bit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcounter32bit___024root___eval_settle(Vcounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter32bit___024root___eval_settle\n"); );
}

void Vcounter32bit___024root___final(Vcounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter32bit___024root___final\n"); );
}

void Vcounter32bit___024root___ctor_var_reset(Vcounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter32bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(32);
}
