// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjfsmmealywithoverlap.h for the primary calling header

#include "Vjfsmmealywithoverlap___024root.h"
#include "Vjfsmmealywithoverlap__Syms.h"

//==========


void Vjfsmmealywithoverlap___024root___ctor_var_reset(Vjfsmmealywithoverlap___024root* vlSelf);

Vjfsmmealywithoverlap___024root::Vjfsmmealywithoverlap___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjfsmmealywithoverlap___024root___ctor_var_reset(this);
}

void Vjfsmmealywithoverlap___024root::__Vconfigure(Vjfsmmealywithoverlap__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vjfsmmealywithoverlap___024root::~Vjfsmmealywithoverlap___024root() {
}

void Vjfsmmealywithoverlap___024root___eval_initial(Vjfsmmealywithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmealywithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmealywithoverlap___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vjfsmmealywithoverlap___024root___settle__TOP__2(Vjfsmmealywithoverlap___024root* vlSelf);

void Vjfsmmealywithoverlap___024root___eval_settle(Vjfsmmealywithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmealywithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmealywithoverlap___024root___eval_settle\n"); );
    // Body
    Vjfsmmealywithoverlap___024root___settle__TOP__2(vlSelf);
}

void Vjfsmmealywithoverlap___024root___final(Vjfsmmealywithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmealywithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmealywithoverlap___024root___final\n"); );
}

void Vjfsmmealywithoverlap___024root___ctor_var_reset(Vjfsmmealywithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmealywithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmealywithoverlap___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->dataout = VL_RAND_RESET_I(1);
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->datain = VL_RAND_RESET_I(1);
    vlSelf->jfsmMealyWithOverlap__DOT__cs = VL_RAND_RESET_I(3);
    vlSelf->jfsmMealyWithOverlap__DOT__ns = VL_RAND_RESET_I(3);
}
