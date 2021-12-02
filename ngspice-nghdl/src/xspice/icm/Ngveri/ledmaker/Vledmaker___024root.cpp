// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vledmaker.h for the primary calling header

#include "Vledmaker___024root.h"
#include "Vledmaker__Syms.h"

//==========

void Vledmaker___024root___eval(Vledmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vledmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vledmaker___024root___eval\n"); );
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vledmaker___024root___change_request_1(Vledmaker___024root* vlSelf);

VL_INLINE_OPT QData Vledmaker___024root___change_request(Vledmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vledmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vledmaker___024root___change_request\n"); );
    // Body
    return (Vledmaker___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vledmaker___024root___change_request_1(Vledmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vledmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vledmaker___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vledmaker___024root___eval_debug_assertions(Vledmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vledmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vledmaker___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
