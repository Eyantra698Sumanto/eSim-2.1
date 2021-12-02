// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjbuffer.h for the primary calling header

#include "Vjbuffer___024root.h"
#include "Vjbuffer__Syms.h"

//==========


void Vjbuffer___024root___ctor_var_reset(Vjbuffer___024root* vlSelf);

Vjbuffer___024root::Vjbuffer___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjbuffer___024root___ctor_var_reset(this);
}

void Vjbuffer___024root::__Vconfigure(Vjbuffer__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vjbuffer___024root::~Vjbuffer___024root() {
}

void Vjbuffer___024root___eval_initial(Vjbuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbuffer___024root___eval_initial\n"); );
}

void Vjbuffer___024root___combo__TOP__1(Vjbuffer___024root* vlSelf);

void Vjbuffer___024root___eval_settle(Vjbuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbuffer___024root___eval_settle\n"); );
    // Body
    Vjbuffer___024root___combo__TOP__1(vlSelf);
}

void Vjbuffer___024root___final(Vjbuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbuffer___024root___final\n"); );
}

void Vjbuffer___024root___ctor_var_reset(Vjbuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbuffer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(1);
}
