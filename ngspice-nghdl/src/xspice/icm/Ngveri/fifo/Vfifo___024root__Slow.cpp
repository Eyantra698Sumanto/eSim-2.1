// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo___024root.h"
#include "Vfifo__Syms.h"

//==========


void Vfifo___024root___ctor_var_reset(Vfifo___024root* vlSelf);

Vfifo___024root::Vfifo___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vfifo___024root___ctor_var_reset(this);
}

void Vfifo___024root::__Vconfigure(Vfifo__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vfifo___024root::~Vfifo___024root() {
}

void Vfifo___024root___settle__TOP__3(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___settle__TOP__3\n"); );
    // Variables
    CData/*0:0*/ fifo__DOT__sf__DOT__bit_comp;
    CData/*0:0*/ fifo__DOT__sf__DOT__ptr_eq;
    CData/*3:0*/ fifo__DOT__sf__DOT__ptr_res;
    // Body
    vlSelf->dataout = vlSelf->fifo__DOT__m__DOT__mem
        [vlSelf->fifo__DOT__rptr];
    fifo__DOT__sf__DOT__ptr_res = (0xfU & ((IData)(vlSelf->fifo__DOT__wptr) 
                                           - (IData)(vlSelf->fifo__DOT__rptr)));
    fifo__DOT__sf__DOT__bit_comp = (1U & (((IData)(vlSelf->fifo__DOT__wptr) 
                                           ^ (IData)(vlSelf->fifo__DOT__rptr)) 
                                          >> 3U));
    fifo__DOT__sf__DOT__ptr_eq = ((0U != (7U & ((IData)(vlSelf->fifo__DOT__wptr) 
                                                - (IData)(vlSelf->fifo__DOT__rptr))))
                                   ? 0U : 1U);
    vlSelf->fifo_threshold = ((IData)((0U != (0xcU 
                                              & (IData)(fifo__DOT__sf__DOT__ptr_res))))
                               ? 1U : 0U);
    vlSelf->fifo_empty = ((~ (IData)(fifo__DOT__sf__DOT__bit_comp)) 
                          & (IData)(fifo__DOT__sf__DOT__ptr_eq));
    vlSelf->fifo_full = ((IData)(fifo__DOT__sf__DOT__bit_comp) 
                         & (IData)(fifo__DOT__sf__DOT__ptr_eq));
}

void Vfifo___024root___eval_initial(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

void Vfifo___024root___eval_settle(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_settle\n"); );
    // Body
    Vfifo___024root___settle__TOP__3(vlSelf);
}

void Vfifo___024root___final(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___final\n"); );
}

void Vfifo___024root___ctor_var_reset(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->datain = VL_RAND_RESET_I(4);
    vlSelf->dataout = VL_RAND_RESET_I(4);
    vlSelf->fifo_full = VL_RAND_RESET_I(1);
    vlSelf->fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->fifo_threshold = VL_RAND_RESET_I(1);
    vlSelf->fifo_overflow = VL_RAND_RESET_I(1);
    vlSelf->fifo_underflow = VL_RAND_RESET_I(1);
    vlSelf->fifo__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->fifo__DOT__wptr = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->fifo__DOT__m__DOT__mem[__Vi0] = VL_RAND_RESET_I(4);
    }
}
