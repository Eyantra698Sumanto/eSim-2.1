// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram_dual.h for the primary calling header

#include "Vram_dual___024root.h"
#include "Vram_dual__Syms.h"

//==========


void Vram_dual___024root___ctor_var_reset(Vram_dual___024root* vlSelf);

Vram_dual___024root::Vram_dual___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vram_dual___024root___ctor_var_reset(this);
}

void Vram_dual___024root::__Vconfigure(Vram_dual__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vram_dual___024root::~Vram_dual___024root() {
}

void Vram_dual___024root___eval_initial(Vram_dual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_dual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_dual___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__read_clock = vlSelf->read_clock;
    vlSelf->__Vclklast__TOP__write_clock = vlSelf->write_clock;
}

void Vram_dual___024root___eval_settle(Vram_dual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_dual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_dual___024root___eval_settle\n"); );
}

void Vram_dual___024root___final(Vram_dual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_dual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_dual___024root___final\n"); );
}

void Vram_dual___024root___ctor_var_reset(Vram_dual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_dual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_dual___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->read_addr = VL_RAND_RESET_I(6);
    vlSelf->write_addr = VL_RAND_RESET_I(6);
    vlSelf->we = VL_RAND_RESET_I(1);
    vlSelf->read_clock = VL_RAND_RESET_I(1);
    vlSelf->write_clock = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ram_dual__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
}
