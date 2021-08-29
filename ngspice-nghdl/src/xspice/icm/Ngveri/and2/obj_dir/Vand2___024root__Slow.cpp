// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand2.h for the primary calling header

#include "Vand2___024root.h"
#include "Vand2__Syms.h"

//==========


void Vand2___024root___ctor_var_reset(Vand2___024root* vlSelf);

Vand2___024root::Vand2___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vand2___024root___ctor_var_reset(this);
}

void Vand2___024root::__Vconfigure(Vand2__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vand2___024root::~Vand2___024root() {
}

void Vand2___024root___eval_initial(Vand2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand2___024root___eval_initial\n"); );
}

void Vand2___024root___combo__TOP__1(Vand2___024root* vlSelf);

void Vand2___024root___eval_settle(Vand2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand2___024root___eval_settle\n"); );
    // Body
    Vand2___024root___combo__TOP__1(vlSelf);
}

void Vand2___024root___final(Vand2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand2___024root___final\n"); );
}

void Vand2___024root___ctor_var_reset(Vand2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Y = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(1);
    vlSelf->B = VL_RAND_RESET_I(1);
}
