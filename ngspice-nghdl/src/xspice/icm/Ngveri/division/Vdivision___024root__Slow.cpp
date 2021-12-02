// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivision.h for the primary calling header

#include "Vdivision___024root.h"
#include "Vdivision__Syms.h"

//==========


void Vdivision___024root___ctor_var_reset(Vdivision___024root* vlSelf);

Vdivision___024root::Vdivision___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdivision___024root___ctor_var_reset(this);
}

void Vdivision___024root::__Vconfigure(Vdivision__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdivision___024root::~Vdivision___024root() {
}

void Vdivision___024root___eval_initial(Vdivision___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval_initial\n"); );
}

void Vdivision___024root___combo__TOP__1(Vdivision___024root* vlSelf);

void Vdivision___024root___eval_settle(Vdivision___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval_settle\n"); );
    // Body
    Vdivision___024root___combo__TOP__1(vlSelf);
}

void Vdivision___024root___final(Vdivision___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___final\n"); );
}

void Vdivision___024root___ctor_var_reset(Vdivision___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->b = VL_RAND_RESET_I(32);
    vlSelf->exception = VL_RAND_RESET_I(1);
    vlSelf->res = VL_RAND_RESET_I(32);
    vlSelf->division__DOT__X0__DOT__add_sum = VL_RAND_RESET_I(31);
    vlSelf->division__DOT__X1__DOT__A1__DOT__add_sum = VL_RAND_RESET_I(31);
    vlSelf->division__DOT__X2__DOT__A1__DOT__add_sum = VL_RAND_RESET_I(31);
    vlSelf->division__DOT__X3__DOT__A1__DOT__add_sum = VL_RAND_RESET_I(31);
}
