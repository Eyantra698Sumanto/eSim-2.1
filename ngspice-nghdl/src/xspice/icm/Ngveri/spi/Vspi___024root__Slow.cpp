// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi.h for the primary calling header

#include "Vspi___024root.h"
#include "Vspi__Syms.h"

//==========


void Vspi___024root___ctor_var_reset(Vspi___024root* vlSelf);

Vspi___024root::Vspi___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vspi___024root___ctor_var_reset(this);
}

void Vspi___024root::__Vconfigure(Vspi__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vspi___024root::~Vspi___024root() {
}

void Vspi___024root___initial__TOP__2(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->spi__DOT__in_buf = 0U;
    vlSelf->spi__DOT__clk_cnt = 0U;
    vlSelf->spi__DOT__cnt = 0U;
    vlSelf->spi__DOT__mosi_buf = 0U;
    vlSelf->spi__DOT__busy = 0U;
    vlSelf->spi__DOT__sclk_buf = 0U;
    vlSelf->spi__DOT__out_buf = 0U;
}

void Vspi___024root___settle__TOP__5(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___settle__TOP__5\n"); );
    // Body
    vlSelf->mosi = vlSelf->spi__DOT__mosi_buf;
    vlSelf->sclk = vlSelf->spi__DOT__sclk_buf;
    vlSelf->out_data = 0U;
    if (((IData)(vlSelf->cs) & (IData)(vlSelf->rd))) {
        if ((0U == (IData)(vlSelf->addr))) {
            vlSelf->out_data = vlSelf->spi__DOT__out_buf;
        } else if ((1U == (IData)(vlSelf->addr))) {
            vlSelf->out_data = vlSelf->spi__DOT__busy;
        } else if ((2U == (IData)(vlSelf->addr))) {
            vlSelf->out_data = 0U;
        }
    }
}

void Vspi___024root___eval_initial(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vspi___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vclklast__TOP____VinpClk__TOP__spi__DOT__sclk_buf 
        = vlSelf->__VinpClk__TOP__spi__DOT__sclk_buf;
}

void Vspi___024root___eval_settle(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___eval_settle\n"); );
    // Body
    Vspi___024root___settle__TOP__5(vlSelf);
}

void Vspi___024root___final(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___final\n"); );
}

void Vspi___024root___ctor_var_reset(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->in_data = VL_RAND_RESET_I(8);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->addr = VL_RAND_RESET_I(2);
    vlSelf->wr = VL_RAND_RESET_I(1);
    vlSelf->rd = VL_RAND_RESET_I(1);
    vlSelf->cs = VL_RAND_RESET_I(1);
    vlSelf->out_data = VL_RAND_RESET_I(8);
    vlSelf->mosi = VL_RAND_RESET_I(1);
    vlSelf->miso = VL_RAND_RESET_I(1);
    vlSelf->sclk = VL_RAND_RESET_I(1);
    vlSelf->spi__DOT__sclk_buf = VL_RAND_RESET_I(1);
    vlSelf->spi__DOT__mosi_buf = VL_RAND_RESET_I(1);
    vlSelf->spi__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->spi__DOT__in_buf = VL_RAND_RESET_I(8);
    vlSelf->spi__DOT__out_buf = VL_RAND_RESET_I(8);
    vlSelf->spi__DOT__clk_cnt = VL_RAND_RESET_I(8);
    vlSelf->spi__DOT__cnt = VL_RAND_RESET_I(5);
    vlSelf->__VinpClk__TOP__spi__DOT__sclk_buf = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__spi__DOT__sclk_buf = VL_RAND_RESET_I(1);
}
