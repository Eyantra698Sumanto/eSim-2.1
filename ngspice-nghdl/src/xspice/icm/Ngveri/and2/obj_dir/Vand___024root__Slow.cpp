// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand.h for the primary calling header

#include "Vand___024root.h"
#include "Vand__Syms.h"

//==========


void Vand___024root___ctor_var_reset(Vand___024root* vlSelf);

Vand___024root::Vand___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vand___024root___ctor_var_reset(this);
}

void Vand___024root::__Vconfigure(Vand__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vand___024root::~Vand___024root() {
}

void Vand___024root___eval_initial(Vand___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand___024root___eval_initial\n"); );
}

void Vand___024root___combo__TOP__1(Vand___024root* vlSelf);

void Vand___024root___eval_settle(Vand___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand___024root___eval_settle\n"); );
    // Body
    Vand___024root___combo__TOP__1(vlSelf);
}

void Vand___024root___final(Vand___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand___024root___final\n"); );
}

void Vand___024root___ctor_var_reset(Vand___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Y = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(1);
    vlSelf->B = VL_RAND_RESET_I(1);
}
