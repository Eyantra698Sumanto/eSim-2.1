// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm21.h for the primary calling header

#include "Vm21___024root.h"
#include "Vm21__Syms.h"

//==========

VL_INLINE_OPT void Vm21___024root___combo__TOP__1(Vm21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm21___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->Y = (((IData)(vlSelf->D1) & (IData)(vlSelf->S)) 
                 | ((IData)(vlSelf->D0) & (~ (IData)(vlSelf->S))));
}

void Vm21___024root___eval(Vm21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm21___024root___eval\n"); );
    // Body
    Vm21___024root___combo__TOP__1(vlSelf);
}

QData Vm21___024root___change_request_1(Vm21___024root* vlSelf);

VL_INLINE_OPT QData Vm21___024root___change_request(Vm21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm21___024root___change_request\n"); );
    // Body
    return (Vm21___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vm21___024root___change_request_1(Vm21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm21___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vm21___024root___eval_debug_assertions(Vm21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm21___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->D0 & 0xfeU))) {
        Verilated::overWidthError("D0");}
    if (VL_UNLIKELY((vlSelf->D1 & 0xfeU))) {
        Verilated::overWidthError("D1");}
    if (VL_UNLIKELY((vlSelf->S & 0xfeU))) {
        Verilated::overWidthError("S");}
}
#endif  // VL_DEBUG
