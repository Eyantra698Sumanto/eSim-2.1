// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb.h for the primary calling header

#include "Vapb___024root.h"
#include "Vapb__Syms.h"

//==========


void Vapb___024root___ctor_var_reset(Vapb___024root* vlSelf);

Vapb___024root::Vapb___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vapb___024root___ctor_var_reset(this);
}

void Vapb___024root::__Vconfigure(Vapb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vapb___024root::~Vapb___024root() {
}

void Vapb___024root___initial__TOP__1(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->pready = 1U;
}

void Vapb___024root___eval_initial(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___eval_initial\n"); );
    // Body
    Vapb___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__pclk = vlSelf->pclk;
    vlSelf->__Vclklast__TOP__preset = vlSelf->preset;
}

void Vapb___024root___settle__TOP__4(Vapb___024root* vlSelf);

void Vapb___024root___eval_settle(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___eval_settle\n"); );
    // Body
    Vapb___024root___settle__TOP__4(vlSelf);
}

void Vapb___024root___final(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___final\n"); );
}

void Vapb___024root___ctor_var_reset(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->pclk = VL_RAND_RESET_I(1);
    vlSelf->pwrite = VL_RAND_RESET_I(1);
    vlSelf->preset = VL_RAND_RESET_I(1);
    vlSelf->penable = VL_RAND_RESET_I(1);
    vlSelf->psel = VL_RAND_RESET_I(1);
    vlSelf->paddress = VL_RAND_RESET_I(5);
    vlSelf->pwdata = VL_RAND_RESET_I(8);
    vlSelf->prdata = VL_RAND_RESET_I(8);
    vlSelf->pready = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->apb__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->apb__DOT__ps = VL_RAND_RESET_I(2);
    vlSelf->apb__DOT__ps_sync = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__apb__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__apb__DOT__mem__v33 = 0;
    vlSelf->__Vdlyvval__apb__DOT__mem__v33 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__apb__DOT__mem__v33 = 0;
}
