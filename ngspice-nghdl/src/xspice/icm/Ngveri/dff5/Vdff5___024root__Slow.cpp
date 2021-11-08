// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff5.h for the primary calling header

#include "Vdff5___024root.h"
#include "Vdff5__Syms.h"

//==========


void Vdff5___024root___ctor_var_reset(Vdff5___024root* vlSelf);

Vdff5___024root::Vdff5___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdff5___024root___ctor_var_reset(this);
}

void Vdff5___024root::__Vconfigure(Vdff5__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdff5___024root::~Vdff5___024root() {
}

void Vdff5___024root___eval_initial(Vdff5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff5___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
}

void Vdff5___024root___eval_settle(Vdff5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff5___024root___eval_settle\n"); );
}

void Vdff5___024root___final(Vdff5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff5___024root___final\n"); );
}

void Vdff5___024root___ctor_var_reset(Vdff5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff5___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->d = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(1);
}
