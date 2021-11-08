// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter8bit.h for the primary calling header

#include "Vcounter8bit___024root.h"
#include "Vcounter8bit__Syms.h"

//==========


void Vcounter8bit___024root___ctor_var_reset(Vcounter8bit___024root* vlSelf);

Vcounter8bit___024root::Vcounter8bit___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcounter8bit___024root___ctor_var_reset(this);
}

void Vcounter8bit___024root::__Vconfigure(Vcounter8bit__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcounter8bit___024root::~Vcounter8bit___024root() {
}

void Vcounter8bit___024root___eval_initial(Vcounter8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter8bit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcounter8bit___024root___eval_settle(Vcounter8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter8bit___024root___eval_settle\n"); );
}

void Vcounter8bit___024root___final(Vcounter8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter8bit___024root___final\n"); );
}

void Vcounter8bit___024root___ctor_var_reset(Vcounter8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter8bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(8);
}
