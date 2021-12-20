// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter19bit.h for the primary calling header

#include "Vcounter19bit___024root.h"
#include "Vcounter19bit__Syms.h"

//==========


void Vcounter19bit___024root___ctor_var_reset(Vcounter19bit___024root* vlSelf);

Vcounter19bit___024root::Vcounter19bit___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcounter19bit___024root___ctor_var_reset(this);
}

void Vcounter19bit___024root::__Vconfigure(Vcounter19bit__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcounter19bit___024root::~Vcounter19bit___024root() {
}

void Vcounter19bit___024root___eval_initial(Vcounter19bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter19bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter19bit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcounter19bit___024root___eval_settle(Vcounter19bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter19bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter19bit___024root___eval_settle\n"); );
}

void Vcounter19bit___024root___final(Vcounter19bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter19bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter19bit___024root___final\n"); );
}

void Vcounter19bit___024root___ctor_var_reset(Vcounter19bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter19bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter19bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(19);
}
