// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "Vuart___024root.h"
#include "Vuart__Syms.h"

//==========


void Vuart___024root___ctor_var_reset(Vuart___024root* vlSelf);

Vuart___024root::Vuart___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vuart___024root___ctor_var_reset(this);
}

void Vuart___024root::__Vconfigure(Vuart__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vuart___024root::~Vuart___024root() {
}

void Vuart___024root___eval_initial(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
    vlSelf->__Vclklast__TOP__rxclk = vlSelf->rxclk;
    vlSelf->__Vclklast__TOP__txclk = vlSelf->txclk;
}

void Vuart___024root___eval_settle(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_settle\n"); );
}

void Vuart___024root___final(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___final\n"); );
}

void Vuart___024root___ctor_var_reset(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->txclk = VL_RAND_RESET_I(1);
    vlSelf->ld_tx_data = VL_RAND_RESET_I(1);
    vlSelf->tx_data = VL_RAND_RESET_I(8);
    vlSelf->tx_enable = VL_RAND_RESET_I(1);
    vlSelf->tx_out = VL_RAND_RESET_I(1);
    vlSelf->tx_empty = VL_RAND_RESET_I(1);
    vlSelf->rxclk = VL_RAND_RESET_I(1);
    vlSelf->uld_rx_data = VL_RAND_RESET_I(1);
    vlSelf->rx_data = VL_RAND_RESET_I(8);
    vlSelf->rx_enable = VL_RAND_RESET_I(1);
    vlSelf->rx_in = VL_RAND_RESET_I(1);
    vlSelf->rx_empty = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__tx_reg = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT__tx_cnt = VL_RAND_RESET_I(4);
    vlSelf->uart__DOT__rx_reg = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT__rx_sample_cnt = VL_RAND_RESET_I(4);
    vlSelf->uart__DOT__rx_cnt = VL_RAND_RESET_I(4);
    vlSelf->uart__DOT__rx_d1 = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__rx_d2 = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__rx_busy = VL_RAND_RESET_I(1);
}
