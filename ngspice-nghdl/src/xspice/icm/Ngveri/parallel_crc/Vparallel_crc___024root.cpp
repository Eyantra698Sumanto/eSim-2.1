// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparallel_crc.h for the primary calling header

#include "Vparallel_crc___024root.h"
#include "Vparallel_crc__Syms.h"

//==========

VL_INLINE_OPT void Vparallel_crc___024root___sequent__TOP__1(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->parallel_crc__DOT__crc_reg = 0xffffU;
    } else if (vlSelf->enable) {
        vlSelf->parallel_crc__DOT__crc_reg = ((IData)(vlSelf->init)
                                               ? 0xffffU
                                               : (IData)(vlSelf->parallel_crc__DOT__next_crc));
    }
    vlSelf->crc_out = vlSelf->parallel_crc__DOT__crc_reg;
}

VL_INLINE_OPT void Vparallel_crc___024root___combo__TOP__3(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___combo__TOP__3\n"); );
    // Body
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

void Vparallel_crc___024root___eval(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vparallel_crc___024root___sequent__TOP__1(vlSelf);
    }
    Vparallel_crc___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vparallel_crc___024root___change_request_1(Vparallel_crc___024root* vlSelf);

VL_INLINE_OPT QData Vparallel_crc___024root___change_request(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___change_request\n"); );
    // Body
    return (Vparallel_crc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vparallel_crc___024root___change_request_1(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vparallel_crc___024root___eval_debug_assertions(Vparallel_crc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparallel_crc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparallel_crc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((vlSelf->init & 0xfeU))) {
        Verilated::overWidthError("init");}
}
#endif  // VL_DEBUG
