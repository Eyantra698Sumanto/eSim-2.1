// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign1.h for the primary calling header

#include "Vdesign1___024root.h"
#include "Vdesign1__Syms.h"

//==========

VL_INLINE_OPT void Vdesign1___024root___combo__TOP__1(Vdesign1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign1___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->Y = (((IData)(vlSelf->D1) & (IData)(vlSelf->S)) 
                 | ((IData)(vlSelf->D0) & (~ (IData)(vlSelf->S))));
}

void Vdesign1___024root___eval(Vdesign1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign1___024root___eval\n"); );
    // Body
    Vdesign1___024root___combo__TOP__1(vlSelf);
}

QData Vdesign1___024root___change_request_1(Vdesign1___024root* vlSelf);

VL_INLINE_OPT QData Vdesign1___024root___change_request(Vdesign1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign1___024root___change_request\n"); );
    // Body
    return (Vdesign1___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdesign1___024root___change_request_1(Vdesign1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign1___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdesign1___024root___eval_debug_assertions(Vdesign1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->D0 & 0xfeU))) {
        Verilated::overWidthError("D0");}
    if (VL_UNLIKELY((vlSelf->D1 & 0xfeU))) {
        Verilated::overWidthError("D1");}
    if (VL_UNLIKELY((vlSelf->S & 0xfeU))) {
        Verilated::overWidthError("S");}
}
#endif  // VL_DEBUG
