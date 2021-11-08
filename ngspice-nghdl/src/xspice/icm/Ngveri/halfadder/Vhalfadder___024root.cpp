// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalfadder.h for the primary calling header

#include "Vhalfadder___024root.h"
#include "Vhalfadder__Syms.h"

//==========

VL_INLINE_OPT void Vhalfadder___024root___combo__TOP__1(Vhalfadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalfadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadder___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->sum = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    vlSelf->carry = ((IData)(vlSelf->a) & (IData)(vlSelf->b));
}

void Vhalfadder___024root___eval(Vhalfadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalfadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadder___024root___eval\n"); );
    // Body
    Vhalfadder___024root___combo__TOP__1(vlSelf);
}

QData Vhalfadder___024root___change_request_1(Vhalfadder___024root* vlSelf);

VL_INLINE_OPT QData Vhalfadder___024root___change_request(Vhalfadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalfadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadder___024root___change_request\n"); );
    // Body
    return (Vhalfadder___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vhalfadder___024root___change_request_1(Vhalfadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalfadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadder___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vhalfadder___024root___eval_debug_assertions(Vhalfadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhalfadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
