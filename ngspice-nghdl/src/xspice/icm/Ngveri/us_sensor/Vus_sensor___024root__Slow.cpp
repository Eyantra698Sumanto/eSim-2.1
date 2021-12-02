// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vus_sensor.h for the primary calling header

#include "Vus_sensor___024root.h"
#include "Vus_sensor__Syms.h"

//==========


void Vus_sensor___024root___ctor_var_reset(Vus_sensor___024root* vlSelf);

Vus_sensor___024root::Vus_sensor___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vus_sensor___024root___ctor_var_reset(this);
}

void Vus_sensor___024root::__Vconfigure(Vus_sensor__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vus_sensor___024root::~Vus_sensor___024root() {
}

void Vus_sensor___024root___initial__TOP__2(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->atrigger = 1U;
    vlSelf->us_sensor__DOT__count = 0U;
    vlSelf->us_sensor__DOT__t_c = 0U;
    vlSelf->us_sensor__DOT__t_2c = 0U;
    vlSelf->us_sensor__DOT__t_3c = 0U;
    vlSelf->us_sensor__DOT__on_count = 0xaU;
    vlSelf->us_sensor__DOT__off_count = 0x3e8U;
    vlSelf->ss = 0x80U;
    vlSelf->en = 0U;
    vlSelf->us_sensor__DOT__m1__DOT__nclk = 0U;
    vlSelf->us_sensor__DOT__m1__DOT__count = 0U;
}

void Vus_sensor___024root___eval_initial(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vus_sensor___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vclklast__TOP__us_sensor__DOT__m1__DOT__nclk = 0U;
}

void Vus_sensor___024root___settle__TOP__4(Vus_sensor___024root* vlSelf);

void Vus_sensor___024root___eval_settle(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___eval_settle\n"); );
    // Body
    Vus_sensor___024root___settle__TOP__4(vlSelf);
}

void Vus_sensor___024root___final(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___final\n"); );
}

void Vus_sensor___024root___ctor_var_reset(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->echo = VL_RAND_RESET_I(1);
    vlSelf->atrigger = VL_RAND_RESET_I(1);
    vlSelf->ss = VL_RAND_RESET_I(8);
    vlSelf->en = VL_RAND_RESET_I(3);
    vlSelf->us_sensor__DOT__t_2c = VL_RAND_RESET_I(32);
    vlSelf->us_sensor__DOT__t_3c = VL_RAND_RESET_I(32);
    vlSelf->us_sensor__DOT__on_count = VL_RAND_RESET_I(32);
    vlSelf->us_sensor__DOT__off_count = VL_RAND_RESET_I(32);
    vlSelf->us_sensor__DOT__t_c = VL_RAND_RESET_I(32);
    vlSelf->us_sensor__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->us_sensor__DOT__m1__DOT__nclk = VL_RAND_RESET_I(1);
    vlSelf->us_sensor__DOT__m1__DOT__segno = VL_RAND_RESET_I(2);
    vlSelf->us_sensor__DOT__m1__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->us_sensor__DOT__m1__DOT__cas = VL_RAND_RESET_I(4);
    vlSelf->us_sensor__DOT__m1__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->us_sensor__DOT__m1__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->us_sensor__DOT__m1__DOT__c = VL_RAND_RESET_I(4);
}
