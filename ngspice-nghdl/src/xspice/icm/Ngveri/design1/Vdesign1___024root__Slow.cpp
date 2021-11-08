// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign1.h for the primary calling header

#include "Vdesign1___024root.h"
#include "Vdesign1__Syms.h"

//==========


void Vdesign1___024root___ctor_var_reset(Vdesign1___024root* vlSelf);

Vdesign1___024root::Vdesign1___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdesign1___024root___ctor_var_reset(this);
}

void Vdesign1___024root::__Vconfigure(Vdesign1__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdesign1___024root::~Vdesign1___024root() {
}

void Vdesign1___024root___eval_initial(Vdesign1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign1___024root___eval_initial\n"); );
}

void Vdesign1___024root___combo__TOP__1(Vdesign1___024root* vlSelf);

void Vdesign1___024root___eval_settle(Vdesign1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign1___024root___eval_settle\n"); );
    // Body
    Vdesign1___024root___combo__TOP__1(vlSelf);
}

void Vdesign1___024root___final(Vdesign1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign1___024root___final\n"); );
}

void Vdesign1___024root___ctor_var_reset(Vdesign1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Y = VL_RAND_RESET_I(1);
    vlSelf->D0 = VL_RAND_RESET_I(1);
    vlSelf->D1 = VL_RAND_RESET_I(1);
    vlSelf->S = VL_RAND_RESET_I(1);
}
