// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcam.h for the primary calling header

#include "Vcam___024root.h"
#include "Vcam__Syms.h"

//==========


void Vcam___024root___ctor_var_reset(Vcam___024root* vlSelf);

Vcam___024root::Vcam___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcam___024root___ctor_var_reset(this);
}

void Vcam___024root::__Vconfigure(Vcam__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcam___024root::~Vcam___024root() {
}

void Vcam___024root___eval_initial(Vcam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcam___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcam___024root___settle__TOP__2(Vcam___024root* vlSelf);

void Vcam___024root___eval_settle(Vcam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcam___024root___eval_settle\n"); );
    // Body
    Vcam___024root___settle__TOP__2(vlSelf);
}

void Vcam___024root___final(Vcam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcam___024root___final\n"); );
}

void Vcam___024root___ctor_var_reset(Vcam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->cam_enable = VL_RAND_RESET_I(1);
    vlSelf->cam_data_in = VL_RAND_RESET_I(16);
    vlSelf->cam_hit_out = VL_RAND_RESET_I(1);
    vlSelf->cam_addr_out = VL_RAND_RESET_I(8);
    vlSelf->cam__DOT__cam_addr_combo = VL_RAND_RESET_I(8);
    vlSelf->cam__DOT__cam_hit_combo = VL_RAND_RESET_I(1);
}
