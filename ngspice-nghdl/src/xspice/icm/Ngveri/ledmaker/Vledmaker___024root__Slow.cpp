// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vledmaker.h for the primary calling header

#include "Vledmaker___024root.h"
#include "Vledmaker__Syms.h"

//==========


void Vledmaker___024root___ctor_var_reset(Vledmaker___024root* vlSelf);

Vledmaker___024root::Vledmaker___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vledmaker___024root___ctor_var_reset(this);
}

void Vledmaker___024root::__Vconfigure(Vledmaker__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vledmaker___024root::~Vledmaker___024root() {
}

void Vledmaker___024root___eval_initial(Vledmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vledmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vledmaker___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vledmaker___024root___eval_settle(Vledmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vledmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vledmaker___024root___eval_settle\n"); );
}

void Vledmaker___024root___final(Vledmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vledmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vledmaker___024root___final\n"); );
}

void Vledmaker___024root___ctor_var_reset(Vledmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vledmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vledmaker___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->cyc_cnt = VL_RAND_RESET_I(32);
    vlSelf->passed = VL_RAND_RESET_I(1);
    vlSelf->failed = VL_RAND_RESET_I(1);
}
