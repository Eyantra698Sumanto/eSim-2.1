// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjserialadder.h for the primary calling header

#include "Vjserialadder___024root.h"
#include "Vjserialadder__Syms.h"

//==========

VL_INLINE_OPT void Vjserialadder___024root___sequent__TOP__1(Vjserialadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjserialadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjserialadder___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->isValid = (1U & ((~ (IData)(vlSelf->rst)) 
                             & ((3U == (IData)(vlSelf->currentbitcount))
                                 ? 1U : 0U)));
    if (vlSelf->rst) {
        vlSelf->y = 0U;
        vlSelf->currentbitcount = 0U;
    } else {
        vlSelf->y = (((IData)(vlSelf->currentsum) << 3U) 
                     | (7U & ((IData)(vlSelf->y) >> 1U)));
        vlSelf->currentbitcount = (3U & ((IData)(1U) 
                                         + (IData)(vlSelf->currentbitcount)));
    }
    vlSelf->carryout = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->currentcarryout));
    vlSelf->currentsum = (((IData)(vlSelf->a) ^ (IData)(vlSelf->b)) 
                          ^ (IData)(vlSelf->jserialadder__DOT__intermediatecarry));
    vlSelf->currentcarryout = (((IData)(vlSelf->a) 
                                & ((IData)(vlSelf->b) 
                                   | (IData)(vlSelf->jserialadder__DOT__intermediatecarry))) 
                               | ((IData)(vlSelf->b) 
                                  & (IData)(vlSelf->jserialadder__DOT__intermediatecarry)));
}

VL_INLINE_OPT void Vjserialadder___024root___settle__TOP__2(Vjserialadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjserialadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjserialadder___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->jserialadder__DOT__intermediatecarry = 
        ((0U == (IData)(vlSelf->currentbitcount)) ? (IData)(vlSelf->carryin)
          : (IData)(vlSelf->currentcarryout));
}

void Vjserialadder___024root___eval(Vjserialadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjserialadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjserialadder___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vjserialadder___024root___sequent__TOP__1(vlSelf);
    }
    Vjserialadder___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vjserialadder___024root___change_request_1(Vjserialadder___024root* vlSelf);

VL_INLINE_OPT QData Vjserialadder___024root___change_request(Vjserialadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjserialadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjserialadder___024root___change_request\n"); );
    // Body
    return (Vjserialadder___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjserialadder___024root___change_request_1(Vjserialadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjserialadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjserialadder___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vjserialadder___024root___eval_debug_assertions(Vjserialadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjserialadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjserialadder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->carryin & 0xfeU))) {
        Verilated::overWidthError("carryin");}
}
#endif  // VL_DEBUG
