// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjboothmultiplier.h for the primary calling header

#include "Vjboothmultiplier___024root.h"
#include "Vjboothmultiplier__Syms.h"

//==========


void Vjboothmultiplier___024root___ctor_var_reset(Vjboothmultiplier___024root* vlSelf);

Vjboothmultiplier___024root::Vjboothmultiplier___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjboothmultiplier___024root___ctor_var_reset(this);
}

void Vjboothmultiplier___024root::__Vconfigure(Vjboothmultiplier__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vjboothmultiplier___024root::~Vjboothmultiplier___024root() {
}

void Vjboothmultiplier___024root___eval_initial(Vjboothmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjboothmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjboothmultiplier___024root___eval_initial\n"); );
}

void Vjboothmultiplier___024root___combo__TOP__1(Vjboothmultiplier___024root* vlSelf);

void Vjboothmultiplier___024root___eval_settle(Vjboothmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjboothmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjboothmultiplier___024root___eval_settle\n"); );
    // Body
    Vjboothmultiplier___024root___combo__TOP__1(vlSelf);
}

void Vjboothmultiplier___024root___final(Vjboothmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjboothmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjboothmultiplier___024root___final\n"); );
}

void Vjboothmultiplier___024root___ctor_var_reset(Vjboothmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjboothmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjboothmultiplier___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PRODUCT = VL_RAND_RESET_I(8);
    vlSelf->A = VL_RAND_RESET_I(4);
    vlSelf->B = VL_RAND_RESET_I(4);
}
