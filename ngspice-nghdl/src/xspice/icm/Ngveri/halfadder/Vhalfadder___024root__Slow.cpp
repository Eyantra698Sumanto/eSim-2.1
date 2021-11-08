// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalfadder.h for the primary calling header

#include "Vhalfadder___024root.h"
#include "Vhalfadder__Syms.h"

//==========


void Vhalfadder___024root___ctor_var_reset(Vhalfadder___024root* vlSelf);

Vhalfadder___024root::Vhalfadder___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vhalfadder___024root___ctor_var_reset(this);
}

void Vhalfadder___024root::__Vconfigure(Vhalfadder__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vhalfadder___024root::~Vhalfadder___024root() {
}

void Vhalfadder___024root___eval_initial(Vhalfadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalfadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadder___024root___eval_initial\n"); );
}

void Vhalfadder___024root___combo__TOP__1(Vhalfadder___024root* vlSelf);

void Vhalfadder___024root___eval_settle(Vhalfadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalfadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadder___024root___eval_settle\n"); );
    // Body
    Vhalfadder___024root___combo__TOP__1(vlSelf);
}

void Vhalfadder___024root___final(Vhalfadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalfadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadder___024root___final\n"); );
}

void Vhalfadder___024root___ctor_var_reset(Vhalfadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalfadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(1);
    vlSelf->carry = VL_RAND_RESET_I(1);
}
