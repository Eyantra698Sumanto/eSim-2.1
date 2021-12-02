// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjserialadder.h for the primary calling header

#include "Vjserialadder___024root.h"
#include "Vjserialadder__Syms.h"

//==========


void Vjserialadder___024root___ctor_var_reset(Vjserialadder___024root* vlSelf);

Vjserialadder___024root::Vjserialadder___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjserialadder___024root___ctor_var_reset(this);
}

void Vjserialadder___024root::__Vconfigure(Vjserialadder__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vjserialadder___024root::~Vjserialadder___024root() {
}

void Vjserialadder___024root___eval_initial(Vjserialadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjserialadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjserialadder___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vjserialadder___024root___settle__TOP__2(Vjserialadder___024root* vlSelf);

void Vjserialadder___024root___eval_settle(Vjserialadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjserialadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjserialadder___024root___eval_settle\n"); );
    // Body
    Vjserialadder___024root___settle__TOP__2(vlSelf);
}

void Vjserialadder___024root___final(Vjserialadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjserialadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjserialadder___024root___final\n"); );
}

void Vjserialadder___024root___ctor_var_reset(Vjserialadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjserialadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjserialadder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->y = VL_RAND_RESET_I(4);
    vlSelf->carryout = VL_RAND_RESET_I(1);
    vlSelf->isValid = VL_RAND_RESET_I(1);
    vlSelf->currentsum = VL_RAND_RESET_I(1);
    vlSelf->currentcarryout = VL_RAND_RESET_I(1);
    vlSelf->currentbitcount = VL_RAND_RESET_I(2);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->carryin = VL_RAND_RESET_I(1);
    vlSelf->jserialadder__DOT__intermediatecarry = VL_RAND_RESET_I(1);
}
