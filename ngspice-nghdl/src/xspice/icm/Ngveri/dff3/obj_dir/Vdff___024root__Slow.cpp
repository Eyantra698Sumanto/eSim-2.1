// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff.h for the primary calling header

#include "Vdff___024root.h"
#include "Vdff__Syms.h"

//==========


void Vdff___024root___ctor_var_reset(Vdff___024root* vlSelf);

Vdff___024root::Vdff___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdff___024root___ctor_var_reset(this);
}

void Vdff___024root::__Vconfigure(Vdff__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdff___024root::~Vdff___024root() {
}

void Vdff___024root___settle__TOP__2(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->dff__DOT__q_net = (((IData)(vlSelf->dff__DOT____Vcellout__u2__q) 
                                << 2U) | (((IData)(vlSelf->dff__DOT____Vcellout__u1__q) 
                                           << 1U) | (IData)(vlSelf->dff__DOT____Vcellout__u0__q)));
}

void Vdff___024root___eval_initial(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
}

void Vdff___024root___eval_settle(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___eval_settle\n"); );
    // Body
    Vdff___024root___settle__TOP__2(vlSelf);
}

void Vdff___024root___final(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___final\n"); );
}

void Vdff___024root___ctor_var_reset(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->d = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(1);
    vlSelf->dff__DOT__q_net = VL_RAND_RESET_I(3);
    vlSelf->dff__DOT____Vcellout__u0__q = VL_RAND_RESET_I(1);
    vlSelf->dff__DOT____Vcellout__u1__q = VL_RAND_RESET_I(1);
    vlSelf->dff__DOT____Vcellout__u2__q = VL_RAND_RESET_I(1);
}
