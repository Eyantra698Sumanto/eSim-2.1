// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjbasicgates.h for the primary calling header

#include "Vjbasicgates___024root.h"
#include "Vjbasicgates__Syms.h"

//==========


void Vjbasicgates___024root___ctor_var_reset(Vjbasicgates___024root* vlSelf);

Vjbasicgates___024root::Vjbasicgates___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjbasicgates___024root___ctor_var_reset(this);
}

void Vjbasicgates___024root::__Vconfigure(Vjbasicgates__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vjbasicgates___024root::~Vjbasicgates___024root() {
}

void Vjbasicgates___024root___eval_initial(Vjbasicgates___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbasicgates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbasicgates___024root___eval_initial\n"); );
}

void Vjbasicgates___024root___combo__TOP__1(Vjbasicgates___024root* vlSelf);

void Vjbasicgates___024root___eval_settle(Vjbasicgates___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbasicgates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbasicgates___024root___eval_settle\n"); );
    // Body
    Vjbasicgates___024root___combo__TOP__1(vlSelf);
}

void Vjbasicgates___024root___final(Vjbasicgates___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbasicgates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbasicgates___024root___final\n"); );
}

void Vjbasicgates___024root___ctor_var_reset(Vjbasicgates___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbasicgates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbasicgates___024root___ctor_var_reset\n"); );
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
