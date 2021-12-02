// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vixorxnor.h for the primary calling header

#include "Vixorxnor___024root.h"
#include "Vixorxnor__Syms.h"

//==========

VL_INLINE_OPT void Vixorxnor___024root___combo__TOP__1(Vixorxnor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vixorxnor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vixorxnor___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->yXOR = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    vlSelf->yXNOR = (1U & (~ ((IData)(vlSelf->a) ^ (IData)(vlSelf->b))));
}

void Vixorxnor___024root___eval(Vixorxnor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vixorxnor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vixorxnor___024root___eval\n"); );
    // Body
    Vixorxnor___024root___combo__TOP__1(vlSelf);
}

QData Vixorxnor___024root___change_request_1(Vixorxnor___024root* vlSelf);

VL_INLINE_OPT QData Vixorxnor___024root___change_request(Vixorxnor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vixorxnor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vixorxnor___024root___change_request\n"); );
    // Body
    return (Vixorxnor___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vixorxnor___024root___change_request_1(Vixorxnor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vixorxnor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vixorxnor___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vixorxnor___024root___eval_debug_assertions(Vixorxnor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vixorxnor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vixorxnor___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
