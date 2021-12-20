// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter51bit.h for the primary calling header

#include "Vcounter51bit___024root.h"
#include "Vcounter51bit__Syms.h"

//==========


void Vcounter51bit___024root___ctor_var_reset(Vcounter51bit___024root* vlSelf);

Vcounter51bit___024root::Vcounter51bit___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcounter51bit___024root___ctor_var_reset(this);
}

void Vcounter51bit___024root::__Vconfigure(Vcounter51bit__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcounter51bit___024root::~Vcounter51bit___024root() {
}

void Vcounter51bit___024root___eval_initial(Vcounter51bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter51bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter51bit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcounter51bit___024root___eval_settle(Vcounter51bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter51bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter51bit___024root___eval_settle\n"); );
}

void Vcounter51bit___024root___final(Vcounter51bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter51bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter51bit___024root___final\n"); );
}

void Vcounter51bit___024root___ctor_var_reset(Vcounter51bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter51bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter51bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_Q(51);
}
