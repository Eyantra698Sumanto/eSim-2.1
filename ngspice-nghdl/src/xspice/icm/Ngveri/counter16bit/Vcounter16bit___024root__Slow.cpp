// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter16bit.h for the primary calling header

#include "Vcounter16bit___024root.h"
#include "Vcounter16bit__Syms.h"

//==========


void Vcounter16bit___024root___ctor_var_reset(Vcounter16bit___024root* vlSelf);

Vcounter16bit___024root::Vcounter16bit___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcounter16bit___024root___ctor_var_reset(this);
}

void Vcounter16bit___024root::__Vconfigure(Vcounter16bit__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcounter16bit___024root::~Vcounter16bit___024root() {
}

void Vcounter16bit___024root___eval_initial(Vcounter16bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter16bit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcounter16bit___024root___eval_settle(Vcounter16bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter16bit___024root___eval_settle\n"); );
}

void Vcounter16bit___024root___final(Vcounter16bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter16bit___024root___final\n"); );
}

void Vcounter16bit___024root___ctor_var_reset(Vcounter16bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter16bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(16);
}
