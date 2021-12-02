// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcompressor.h for the primary calling header

#include "Vcompressor___024root.h"
#include "Vcompressor__Syms.h"

//==========


void Vcompressor___024root___ctor_var_reset(Vcompressor___024root* vlSelf);

Vcompressor___024root::Vcompressor___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcompressor___024root___ctor_var_reset(this);
}

void Vcompressor___024root::__Vconfigure(Vcompressor__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcompressor___024root::~Vcompressor___024root() {
}

void Vcompressor___024root___initial__TOP__2(Vcompressor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompressor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompressor___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->COMPRESSOR__DOT__mark8_1 = 0U;
    vlSelf->COMPRESSOR__DOT__mark8_2 = 0U;
    vlSelf->COMPRESSOR__DOT__mark8_3 = 0U;
    vlSelf->COMPRESSOR__DOT__mark4_1 = 0U;
    vlSelf->COMPRESSOR__DOT__mark4_2 = 0U;
    vlSelf->COMPRESSOR__DOT__mark4_3 = 0U;
    vlSelf->COMPRESSOR__DOT__mark4_4 = 0U;
    vlSelf->COMPRESSOR__DOT__mark4_5 = 0U;
    vlSelf->COMPRESSOR__DOT__mark4_6 = 0U;
    vlSelf->COMPRESSOR__DOT__mark4_7 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_1 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_2 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_3 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_4 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_5 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_6 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_7 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_8 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_9 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_10 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_11 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_12 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_13 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_14 = 0U;
    vlSelf->COMPRESSOR__DOT__mark2_15 = 0U;
}

void Vcompressor___024root___eval_initial(Vcompressor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompressor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompressor___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    Vcompressor___024root___initial__TOP__2(vlSelf);
}

void Vcompressor___024root___eval_settle(Vcompressor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompressor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompressor___024root___eval_settle\n"); );
}

void Vcompressor___024root___final(Vcompressor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompressor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompressor___024root___final\n"); );
}

void Vcompressor___024root___ctor_var_reset(Vcompressor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompressor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompressor___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->UnCompressedCache);
    VL_RAND_RESET_W(256, vlSelf->CompressedCache);
    VL_RAND_RESET_W(256, vlSelf->DeCompressedCache);
    vlSelf->COMPRESSOR__DOT__mark8_1 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark8_2 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark8_3 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark4_1 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark4_2 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark4_3 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark4_4 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark4_5 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark4_6 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark4_7 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_1 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_2 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_3 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_4 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_5 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_6 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_7 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_8 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_9 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_10 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_11 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_12 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_13 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_14 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__mark2_15 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->COMPRESSOR__DOT__CCL1);
    VL_RAND_RESET_W(96, vlSelf->COMPRESSOR__DOT__CCL4);
    VL_RAND_RESET_W(128, vlSelf->COMPRESSOR__DOT__CCL2);
    VL_RAND_RESET_W(192, vlSelf->COMPRESSOR__DOT__CCL3);
    VL_RAND_RESET_W(160, vlSelf->COMPRESSOR__DOT__CCL5);
    VL_RAND_RESET_W(144, vlSelf->COMPRESSOR__DOT__CCL6);
    vlSelf->COMPRESSOR__DOT__CoN1 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__CoN2 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__CoN3 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__CoN4 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__CoN5 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__CoN6 = VL_RAND_RESET_I(1);
    vlSelf->COMPRESSOR__DOT__Base8 = VL_RAND_RESET_Q(64);
    vlSelf->COMPRESSOR__DOT__del8_1 = VL_RAND_RESET_Q(64);
    vlSelf->COMPRESSOR__DOT__del8_2 = VL_RAND_RESET_Q(64);
    vlSelf->COMPRESSOR__DOT__del8_3 = VL_RAND_RESET_Q(64);
    vlSelf->COMPRESSOR__DOT__Base4 = VL_RAND_RESET_I(32);
    vlSelf->COMPRESSOR__DOT__del4_1 = VL_RAND_RESET_I(32);
    vlSelf->COMPRESSOR__DOT__del4_2 = VL_RAND_RESET_I(32);
    vlSelf->COMPRESSOR__DOT__del4_3 = VL_RAND_RESET_I(32);
    vlSelf->COMPRESSOR__DOT__del4_4 = VL_RAND_RESET_I(32);
    vlSelf->COMPRESSOR__DOT__del4_5 = VL_RAND_RESET_I(32);
    vlSelf->COMPRESSOR__DOT__del4_6 = VL_RAND_RESET_I(32);
    vlSelf->COMPRESSOR__DOT__del4_7 = VL_RAND_RESET_I(32);
    vlSelf->COMPRESSOR__DOT__Base2 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_1 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_2 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_3 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_4 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_5 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_6 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_7 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_8 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_9 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_10 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_11 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_12 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_13 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_14 = VL_RAND_RESET_I(16);
    vlSelf->COMPRESSOR__DOT__del2_15 = VL_RAND_RESET_I(16);
}
