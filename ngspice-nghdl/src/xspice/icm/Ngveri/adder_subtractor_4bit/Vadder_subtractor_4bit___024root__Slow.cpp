// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_subtractor_4bit.h for the primary calling header

#include "Vadder_subtractor_4bit___024root.h"
#include "Vadder_subtractor_4bit__Syms.h"

//==========


void Vadder_subtractor_4bit___024root___ctor_var_reset(Vadder_subtractor_4bit___024root* vlSelf);

Vadder_subtractor_4bit___024root::Vadder_subtractor_4bit___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vadder_subtractor_4bit___024root___ctor_var_reset(this);
}

void Vadder_subtractor_4bit___024root::__Vconfigure(Vadder_subtractor_4bit__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vadder_subtractor_4bit___024root::~Vadder_subtractor_4bit___024root() {
}

void Vadder_subtractor_4bit___024root___eval_initial(Vadder_subtractor_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_subtractor_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_subtractor_4bit___024root___eval_initial\n"); );
}

void Vadder_subtractor_4bit___024root___combo__TOP__1(Vadder_subtractor_4bit___024root* vlSelf);

void Vadder_subtractor_4bit___024root___eval_settle(Vadder_subtractor_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_subtractor_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_subtractor_4bit___024root___eval_settle\n"); );
    // Body
    Vadder_subtractor_4bit___024root___combo__TOP__1(vlSelf);
}

void Vadder_subtractor_4bit___024root___final(Vadder_subtractor_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_subtractor_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_subtractor_4bit___024root___final\n"); );
}

void Vadder_subtractor_4bit___024root___ctor_var_reset(Vadder_subtractor_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_subtractor_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_subtractor_4bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(4);
    vlSelf->carry = VL_RAND_RESET_I(1);
    vlSelf->Adder_subtractor_4bit__DOT__c = VL_RAND_RESET_I(3);
    vlSelf->Adder_subtractor_4bit__DOT__bin = VL_RAND_RESET_I(4);
    vlSelf->__Vchglast__TOP__Adder_subtractor_4bit__DOT__c = VL_RAND_RESET_I(3);
}
