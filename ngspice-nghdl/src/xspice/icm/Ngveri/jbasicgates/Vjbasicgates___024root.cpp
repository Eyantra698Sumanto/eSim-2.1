// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjbasicgates.h for the primary calling header

#include "Vjbasicgates___024root.h"
#include "Vjbasicgates__Syms.h"

//==========

VL_INLINE_OPT void Vjbasicgates___024root___combo__TOP__1(Vjbasicgates___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbasicgates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbasicgates___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->yOR = ((IData)(vlSelf->a) | (IData)(vlSelf->b));
    vlSelf->yAND = ((IData)(vlSelf->a) & (IData)(vlSelf->b));
    vlSelf->yXOR = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    vlSelf->yNOR = (1U & (~ ((IData)(vlSelf->a) | (IData)(vlSelf->b))));
    vlSelf->yNAND = (1U & (~ ((IData)(vlSelf->a) & (IData)(vlSelf->b))));
    vlSelf->yXNOR = (1U & (~ ((IData)(vlSelf->a) ^ (IData)(vlSelf->b))));
}

void Vjbasicgates___024root___eval(Vjbasicgates___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbasicgates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbasicgates___024root___eval\n"); );
    // Body
    Vjbasicgates___024root___combo__TOP__1(vlSelf);
}

QData Vjbasicgates___024root___change_request_1(Vjbasicgates___024root* vlSelf);

VL_INLINE_OPT QData Vjbasicgates___024root___change_request(Vjbasicgates___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbasicgates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbasicgates___024root___change_request\n"); );
    // Body
    return (Vjbasicgates___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjbasicgates___024root___change_request_1(Vjbasicgates___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbasicgates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbasicgates___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vjbasicgates___024root___eval_debug_assertions(Vjbasicgates___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbasicgates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbasicgates___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
