// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparallel_crc.h for the primary calling header

#include "Vparallel_crc___024root.h"
#include "Vparallel_crc__Syms.h"

//==========


void Vparallel_crc___024root___ctor_var_reset(Vparallel_crc___024root* vlSelf);

Vparallel_crc___024root::Vparallel_crc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vparallel_crc___024root___ctor_var_reset(this);
}

void Vparallel_crc___024root::__Vconfigure(Vparallel_crc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vparallel_crc___024root::~Vparallel_crc___024root() {
}

void Vparallel_crc___024root___settle__TOP__2(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->crc_out = vlSelf->parallel_crc__DOT__crc_reg;
    vlSelf->parallel_crc__DOT__next_crc = ((0xfffeU 
                                            & (IData)(vlSelf->parallel_crc__DOT__next_crc)) 
                                           | (1U & 
                                              (VL_REDXOR_32(
                                                            (0x81U 
                                                             & (IData)(vlSelf->data_in))) 
                                               ^ VL_REDXOR_32(
                                                              (0x810U 
                                                               & (IData)(vlSelf->parallel_crc__DOT__crc_reg))))));
    vlSelf->parallel_crc__DOT__next_crc = ((0xffe1U 
                                            & (IData)(vlSelf->parallel_crc__DOT__next_crc)) 
                                           | (0x1eU 
                                              & ((0xfffffffeU 
                                                  & (IData)(vlSelf->data_in)) 
                                                 ^ 
                                                 (0xffffffeU 
                                                  & ((IData)(vlSelf->parallel_crc__DOT__crc_reg) 
                                                     >> 4U)))));
    vlSelf->parallel_crc__DOT__next_crc = ((0xffdfU 
                                            & (IData)(vlSelf->parallel_crc__DOT__next_crc)) 
                                           | (0x20U 
                                              & ((VL_REDXOR_32(
                                                               (0xa1U 
                                                                & (IData)(vlSelf->data_in))) 
                                                  ^ 
                                                  VL_REDXOR_32(
                                                               (0xa10U 
                                                                & (IData)(vlSelf->parallel_crc__DOT__crc_reg)))) 
                                                 << 5U)));
    vlSelf->parallel_crc__DOT__next_crc = ((0xffbfU 
                                            & (IData)(vlSelf->parallel_crc__DOT__next_crc)) 
                                           | (0x40U 
                                              & ((VL_REDXOR_32(
                                                               (0x42U 
                                                                & (IData)(vlSelf->data_in))) 
                                                  ^ 
                                                  VL_REDXOR_32(
                                                               (0x420U 
                                                                & (IData)(vlSelf->parallel_crc__DOT__crc_reg)))) 
                                                 << 6U)));
    vlSelf->parallel_crc__DOT__next_crc = ((0xff7fU 
                                            & (IData)(vlSelf->parallel_crc__DOT__next_crc)) 
                                           | (0x80U 
                                              & ((VL_REDXOR_32(
                                                               (0x84U 
                                                                & (IData)(vlSelf->data_in))) 
                                                  ^ 
                                                  VL_REDXOR_32(
                                                               (0x840U 
                                                                & (IData)(vlSelf->parallel_crc__DOT__crc_reg)))) 
                                                 << 7U)));
    vlSelf->parallel_crc__DOT__next_crc = ((0xfeffU 
                                            & (IData)(vlSelf->parallel_crc__DOT__next_crc)) 
                                           | (0x100U 
                                              & (((0xffffff00U 
                                                   & ((IData)(vlSelf->data_in) 
                                                      << 5U)) 
                                                  ^ 
                                                  ((IData)(vlSelf->parallel_crc__DOT__crc_reg) 
                                                   << 8U)) 
                                                 ^ 
                                                 (0xffffff00U 
                                                  & ((IData)(vlSelf->parallel_crc__DOT__crc_reg) 
                                                     << 1U)))));
    vlSelf->parallel_crc__DOT__next_crc = ((0xfdffU 
                                            & (IData)(vlSelf->parallel_crc__DOT__next_crc)) 
                                           | (0x200U 
                                              & (((0xfffffe00U 
                                                   & ((IData)(vlSelf->data_in) 
                                                      << 5U)) 
                                                  ^ 
                                                  (0xfffffe00U 
                                                   & ((IData)(vlSelf->parallel_crc__DOT__crc_reg) 
                                                      << 8U))) 
                                                 ^ 
                                                 (0xfffffe00U 
                                                  & ((IData)(vlSelf->parallel_crc__DOT__crc_reg) 
                                                     << 1U)))));
    vlSelf->parallel_crc__DOT__next_crc = ((0xfbffU 
                                            & (IData)(vlSelf->parallel_crc__DOT__next_crc)) 
                                           | (0x400U 
                                              & (((0xfffffc00U 
                                                   & ((IData)(vlSelf->data_in) 
                                                      << 5U)) 
                                                  ^ 
                                                  (0xfffffc00U 
                                                   & ((IData)(vlSelf->parallel_crc__DOT__crc_reg) 
                                                      << 8U))) 
                                                 ^ 
                                                 (0xfffffc00U 
                                                  & ((IData)(vlSelf->parallel_crc__DOT__crc_reg) 
                                                     << 1U)))));
    vlSelf->parallel_crc__DOT__next_crc = ((0xf7ffU 
                                            & (IData)(vlSelf->parallel_crc__DOT__next_crc)) 
                                           | (0x800U 
                                              & (((0xfffff800U 
                                                   & ((IData)(vlSelf->data_in) 
                                                      << 5U)) 
                                                  ^ 
                                                  (0xfffff800U 
                                                   & ((IData)(vlSelf->parallel_crc__DOT__crc_reg) 
                                                      << 8U))) 
                                                 ^ 
                                                 (0xfffff800U 
                                                  & ((IData)(vlSelf->parallel_crc__DOT__crc_reg) 
                                                     << 1U)))));
}

void Vparallel_crc___024root___eval_initial(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vparallel_crc___024root___eval_settle(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___eval_settle\n"); );
    // Body
    Vparallel_crc___024root___settle__TOP__2(vlSelf);
}

void Vparallel_crc___024root___final(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___final\n"); );
}

void Vparallel_crc___024root___ctor_var_reset(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->init = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->crc_out = VL_RAND_RESET_I(16);
    vlSelf->parallel_crc__DOT__crc_reg = VL_RAND_RESET_I(16);
    vlSelf->parallel_crc__DOT__next_crc = VL_RAND_RESET_I(16);
}
