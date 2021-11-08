// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjfsmmoorewithoverlap.h for the primary calling header

#include "Vjfsmmoorewithoverlap___024root.h"
#include "Vjfsmmoorewithoverlap__Syms.h"

//==========


void Vjfsmmoorewithoverlap___024root___ctor_var_reset(Vjfsmmoorewithoverlap___024root* vlSelf);

Vjfsmmoorewithoverlap___024root::Vjfsmmoorewithoverlap___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjfsmmoorewithoverlap___024root___ctor_var_reset(this);
}

void Vjfsmmoorewithoverlap___024root::__Vconfigure(Vjfsmmoorewithoverlap__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vjfsmmoorewithoverlap___024root::~Vjfsmmoorewithoverlap___024root() {
}

void Vjfsmmoorewithoverlap___024root___eval_initial(Vjfsmmoorewithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmoorewithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmoorewithoverlap___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vjfsmmoorewithoverlap___024root___settle__TOP__2(Vjfsmmoorewithoverlap___024root* vlSelf);

void Vjfsmmoorewithoverlap___024root___eval_settle(Vjfsmmoorewithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmoorewithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmoorewithoverlap___024root___eval_settle\n"); );
    // Body
    Vjfsmmoorewithoverlap___024root___settle__TOP__2(vlSelf);
}

void Vjfsmmoorewithoverlap___024root___final(Vjfsmmoorewithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmoorewithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmoorewithoverlap___024root___final\n"); );
}

void Vjfsmmoorewithoverlap___024root___ctor_var_reset(Vjfsmmoorewithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmoorewithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmoorewithoverlap___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->dataout = VL_RAND_RESET_I(1);
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->datain = VL_RAND_RESET_I(1);
    vlSelf->jfsmMooreWithOverlap__DOT__cs = VL_RAND_RESET_I(3);
    vlSelf->jfsmMooreWithOverlap__DOT__ns = VL_RAND_RESET_I(3);
}
