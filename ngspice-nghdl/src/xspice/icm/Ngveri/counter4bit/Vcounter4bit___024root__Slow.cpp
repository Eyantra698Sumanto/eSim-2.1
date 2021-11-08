// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter4bit.h for the primary calling header

#include "Vcounter4bit___024root.h"
#include "Vcounter4bit__Syms.h"

//==========


void Vcounter4bit___024root___ctor_var_reset(Vcounter4bit___024root* vlSelf);

Vcounter4bit___024root::Vcounter4bit___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcounter4bit___024root___ctor_var_reset(this);
}

void Vcounter4bit___024root::__Vconfigure(Vcounter4bit__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcounter4bit___024root::~Vcounter4bit___024root() {
}

void Vcounter4bit___024root___eval_initial(Vcounter4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter4bit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcounter4bit___024root___eval_settle(Vcounter4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter4bit___024root___eval_settle\n"); );
}

void Vcounter4bit___024root___final(Vcounter4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter4bit___024root___final\n"); );
}

void Vcounter4bit___024root___ctor_var_reset(Vcounter4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter4bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(4);
}
