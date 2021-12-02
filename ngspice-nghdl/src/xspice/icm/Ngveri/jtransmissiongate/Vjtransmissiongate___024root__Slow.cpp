// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjtransmissiongate.h for the primary calling header

#include "Vjtransmissiongate___024root.h"
#include "Vjtransmissiongate__Syms.h"

//==========


void Vjtransmissiongate___024root___ctor_var_reset(Vjtransmissiongate___024root* vlSelf);

Vjtransmissiongate___024root::Vjtransmissiongate___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjtransmissiongate___024root___ctor_var_reset(this);
}

void Vjtransmissiongate___024root::__Vconfigure(Vjtransmissiongate__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vjtransmissiongate___024root::~Vjtransmissiongate___024root() {
}

void Vjtransmissiongate___024root___eval_initial(Vjtransmissiongate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjtransmissiongate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjtransmissiongate___024root___eval_initial\n"); );
}

void Vjtransmissiongate___024root___combo__TOP__1(Vjtransmissiongate___024root* vlSelf);

void Vjtransmissiongate___024root___eval_settle(Vjtransmissiongate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjtransmissiongate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjtransmissiongate___024root___eval_settle\n"); );
    // Body
    Vjtransmissiongate___024root___combo__TOP__1(vlSelf);
}

void Vjtransmissiongate___024root___final(Vjtransmissiongate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjtransmissiongate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjtransmissiongate___024root___final\n"); );
}

void Vjtransmissiongate___024root___ctor_var_reset(Vjtransmissiongate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjtransmissiongate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjtransmissiongate___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->y = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->control = VL_RAND_RESET_I(1);
}
