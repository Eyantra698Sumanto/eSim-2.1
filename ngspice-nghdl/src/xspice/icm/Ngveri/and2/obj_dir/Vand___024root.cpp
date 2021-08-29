// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand.h for the primary calling header

#include "Vand___024root.h"
#include "Vand__Syms.h"

//==========

VL_INLINE_OPT void Vand___024root___combo__TOP__1(Vand___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->Y = ((IData)(vlSelf->A) & (IData)(vlSelf->B));
}

void Vand___024root___eval(Vand___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand___024root___eval\n"); );
    // Body
    Vand___024root___combo__TOP__1(vlSelf);
}

QData Vand___024root___change_request_1(Vand___024root* vlSelf);

VL_INLINE_OPT QData Vand___024root___change_request(Vand___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand___024root___change_request\n"); );
    // Body
    return (Vand___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vand___024root___change_request_1(Vand___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vand___024root___eval_debug_assertions(Vand___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xfeU))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xfeU))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
