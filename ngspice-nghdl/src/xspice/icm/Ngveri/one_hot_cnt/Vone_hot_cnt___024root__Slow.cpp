// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vone_hot_cnt.h for the primary calling header

#include "Vone_hot_cnt___024root.h"
#include "Vone_hot_cnt__Syms.h"

//==========


void Vone_hot_cnt___024root___ctor_var_reset(Vone_hot_cnt___024root* vlSelf);

Vone_hot_cnt___024root::Vone_hot_cnt___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vone_hot_cnt___024root___ctor_var_reset(this);
}

void Vone_hot_cnt___024root::__Vconfigure(Vone_hot_cnt__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vone_hot_cnt___024root::~Vone_hot_cnt___024root() {
}

void Vone_hot_cnt___024root___eval_initial(Vone_hot_cnt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vone_hot_cnt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_hot_cnt___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vone_hot_cnt___024root___eval_settle(Vone_hot_cnt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vone_hot_cnt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_hot_cnt___024root___eval_settle\n"); );
}

void Vone_hot_cnt___024root___final(Vone_hot_cnt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vone_hot_cnt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_hot_cnt___024root___final\n"); );
}

void Vone_hot_cnt___024root___ctor_var_reset(Vone_hot_cnt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vone_hot_cnt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_hot_cnt___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
}
