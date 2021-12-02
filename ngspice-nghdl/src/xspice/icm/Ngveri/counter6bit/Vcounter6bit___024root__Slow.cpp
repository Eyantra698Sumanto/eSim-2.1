// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter6bit.h for the primary calling header

#include "Vcounter6bit___024root.h"
#include "Vcounter6bit__Syms.h"

//==========


void Vcounter6bit___024root___ctor_var_reset(Vcounter6bit___024root* vlSelf);

Vcounter6bit___024root::Vcounter6bit___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcounter6bit___024root___ctor_var_reset(this);
}

void Vcounter6bit___024root::__Vconfigure(Vcounter6bit__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcounter6bit___024root::~Vcounter6bit___024root() {
}

void Vcounter6bit___024root___eval_initial(Vcounter6bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter6bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter6bit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcounter6bit___024root___eval_settle(Vcounter6bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter6bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter6bit___024root___eval_settle\n"); );
}

void Vcounter6bit___024root___final(Vcounter6bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter6bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter6bit___024root___final\n"); );
}

void Vcounter6bit___024root___ctor_var_reset(Vcounter6bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter6bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter6bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(6);
}
