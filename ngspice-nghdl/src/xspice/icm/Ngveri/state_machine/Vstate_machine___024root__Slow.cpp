// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstate_machine.h for the primary calling header

#include "Vstate_machine___024root.h"
#include "Vstate_machine__Syms.h"

//==========


void Vstate_machine___024root___ctor_var_reset(Vstate_machine___024root* vlSelf);

Vstate_machine___024root::Vstate_machine___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vstate_machine___024root___ctor_var_reset(this);
}

void Vstate_machine___024root::__Vconfigure(Vstate_machine__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vstate_machine___024root::~Vstate_machine___024root() {
}

void Vstate_machine___024root___settle__TOP__2(Vstate_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstate_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstate_machine___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->data_out = ((0U == (IData)(vlSelf->state_machine__DOT__state))
                         ? 1U : ((1U == (IData)(vlSelf->state_machine__DOT__state))
                                  ? 2U : ((2U == (IData)(vlSelf->state_machine__DOT__state))
                                           ? 3U : 0U)));
}

void Vstate_machine___024root___eval_initial(Vstate_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstate_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstate_machine___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

void Vstate_machine___024root___eval_settle(Vstate_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstate_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstate_machine___024root___eval_settle\n"); );
    // Body
    Vstate_machine___024root___settle__TOP__2(vlSelf);
}

void Vstate_machine___024root___final(Vstate_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstate_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstate_machine___024root___final\n"); );
}

void Vstate_machine___024root___ctor_var_reset(Vstate_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstate_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstate_machine___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->data_out = VL_RAND_RESET_I(2);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->state_machine__DOT__state = VL_RAND_RESET_I(2);
}
