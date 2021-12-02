// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrafficmaker.h for the primary calling header

#include "Vtrafficmaker___024root.h"
#include "Vtrafficmaker__Syms.h"

//==========


void Vtrafficmaker___024root___ctor_var_reset(Vtrafficmaker___024root* vlSelf);

Vtrafficmaker___024root::Vtrafficmaker___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtrafficmaker___024root___ctor_var_reset(this);
}

void Vtrafficmaker___024root::__Vconfigure(Vtrafficmaker__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtrafficmaker___024root::~Vtrafficmaker___024root() {
}

void Vtrafficmaker___024root___settle__TOP__3(Vtrafficmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficmaker___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->passed = (6U < (IData)(vlSelf->trafficmaker__DOT__count));
}

void Vtrafficmaker___024root___eval_initial(Vtrafficmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficmaker___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

void Vtrafficmaker___024root___eval_settle(Vtrafficmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficmaker___024root___eval_settle\n"); );
    // Body
    Vtrafficmaker___024root___settle__TOP__3(vlSelf);
}

void Vtrafficmaker___024root___final(Vtrafficmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficmaker___024root___final\n"); );
}

void Vtrafficmaker___024root___ctor_var_reset(Vtrafficmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficmaker___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->cyc_cnt = VL_RAND_RESET_I(32);
    vlSelf->passed = VL_RAND_RESET_I(1);
    vlSelf->failed = VL_RAND_RESET_I(1);
    vlSelf->trafficmaker__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->trafficmaker__DOT__count = VL_RAND_RESET_I(3);
}
