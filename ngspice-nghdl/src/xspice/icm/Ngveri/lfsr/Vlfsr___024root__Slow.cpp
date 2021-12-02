// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr.h for the primary calling header

#include "Vlfsr___024root.h"
#include "Vlfsr__Syms.h"

//==========


void Vlfsr___024root___ctor_var_reset(Vlfsr___024root* vlSelf);

Vlfsr___024root::Vlfsr___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vlfsr___024root___ctor_var_reset(this);
}

void Vlfsr___024root::__Vconfigure(Vlfsr__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vlfsr___024root::~Vlfsr___024root() {
}

void Vlfsr___024root___settle__TOP__2(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->lfsr__DOT__linear_feedback = (1U & (~ (
                                                   ((IData)(vlSelf->out) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlSelf->out) 
                                                    >> 3U))));
}

void Vlfsr___024root___eval_initial(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vlfsr___024root___eval_settle(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_settle\n"); );
    // Body
    Vlfsr___024root___settle__TOP__2(vlSelf);
}

void Vlfsr___024root___final(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___final\n"); );
}

void Vlfsr___024root___ctor_var_reset(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->lfsr__DOT__linear_feedback = VL_RAND_RESET_I(1);
}
