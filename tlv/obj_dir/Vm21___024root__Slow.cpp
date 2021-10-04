// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm21.h for the primary calling header

#include "Vm21___024root.h"
#include "Vm21__Syms.h"

//==========


void Vm21___024root___ctor_var_reset(Vm21___024root* vlSelf);

Vm21___024root::Vm21___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vm21___024root___ctor_var_reset(this);
}

void Vm21___024root::__Vconfigure(Vm21__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vm21___024root::~Vm21___024root() {
}

void Vm21___024root___eval_initial(Vm21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm21___024root___eval_initial\n"); );
}

void Vm21___024root___combo__TOP__1(Vm21___024root* vlSelf);

void Vm21___024root___eval_settle(Vm21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm21___024root___eval_settle\n"); );
    // Body
    Vm21___024root___combo__TOP__1(vlSelf);
}

void Vm21___024root___final(Vm21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm21___024root___final\n"); );
}

void Vm21___024root___ctor_var_reset(Vm21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm21___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Y = VL_RAND_RESET_I(1);
    vlSelf->D0 = VL_RAND_RESET_I(1);
    vlSelf->D1 = VL_RAND_RESET_I(1);
    vlSelf->S = VL_RAND_RESET_I(1);
}
