// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram1.h for the primary calling header

#include "Vram1___024root.h"
#include "Vram1__Syms.h"

//==========


void Vram1___024root___ctor_var_reset(Vram1___024root* vlSelf);

Vram1___024root::Vram1___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vram1___024root___ctor_var_reset(this);
}

void Vram1___024root::__Vconfigure(Vram1__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vram1___024root::~Vram1___024root() {
}

void Vram1___024root___eval_initial(Vram1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram1___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vram1___024root___eval_settle(Vram1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram1___024root___eval_settle\n"); );
}

void Vram1___024root___final(Vram1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram1___024root___final\n"); );
}

void Vram1___024root___ctor_var_reset(Vram1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->cs = VL_RAND_RESET_I(1);
    vlSelf->read = VL_RAND_RESET_I(1);
    vlSelf->write = VL_RAND_RESET_I(1);
    vlSelf->dataread = VL_RAND_RESET_I(8);
    vlSelf->datawrite = VL_RAND_RESET_I(8);
    vlSelf->address = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ram1__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
}
