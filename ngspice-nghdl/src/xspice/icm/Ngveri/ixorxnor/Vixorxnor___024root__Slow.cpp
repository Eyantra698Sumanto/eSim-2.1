// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vixorxnor.h for the primary calling header

#include "Vixorxnor___024root.h"
#include "Vixorxnor__Syms.h"

//==========


void Vixorxnor___024root___ctor_var_reset(Vixorxnor___024root* vlSelf);

Vixorxnor___024root::Vixorxnor___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vixorxnor___024root___ctor_var_reset(this);
}

void Vixorxnor___024root::__Vconfigure(Vixorxnor__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vixorxnor___024root::~Vixorxnor___024root() {
}

void Vixorxnor___024root___eval_initial(Vixorxnor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vixorxnor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vixorxnor___024root___eval_initial\n"); );
}

void Vixorxnor___024root___combo__TOP__1(Vixorxnor___024root* vlSelf);

void Vixorxnor___024root___eval_settle(Vixorxnor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vixorxnor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vixorxnor___024root___eval_settle\n"); );
    // Body
    Vixorxnor___024root___combo__TOP__1(vlSelf);
}

void Vixorxnor___024root___final(Vixorxnor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vixorxnor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vixorxnor___024root___final\n"); );
}

void Vixorxnor___024root___ctor_var_reset(Vixorxnor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vixorxnor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vixorxnor___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->yOR = VL_RAND_RESET_I(1);
    vlSelf->yAND = VL_RAND_RESET_I(1);
    vlSelf->yXOR = VL_RAND_RESET_I(1);
    vlSelf->yNOR = VL_RAND_RESET_I(1);
    vlSelf->yNAND = VL_RAND_RESET_I(1);
    vlSelf->yXNOR = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
}
