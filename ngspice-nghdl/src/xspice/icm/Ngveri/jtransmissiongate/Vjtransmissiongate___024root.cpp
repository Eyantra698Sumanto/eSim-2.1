// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjtransmissiongate.h for the primary calling header

#include "Vjtransmissiongate___024root.h"
#include "Vjtransmissiongate__Syms.h"

//==========

VL_INLINE_OPT void Vjtransmissiongate___024root___combo__TOP__1(Vjtransmissiongate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjtransmissiongate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjtransmissiongate___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->y = (((IData)(vlSelf->a) & (IData)(vlSelf->control)) 
                 & (IData)(vlSelf->control));
}

void Vjtransmissiongate___024root___eval(Vjtransmissiongate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjtransmissiongate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjtransmissiongate___024root___eval\n"); );
    // Body
    Vjtransmissiongate___024root___combo__TOP__1(vlSelf);
}

QData Vjtransmissiongate___024root___change_request_1(Vjtransmissiongate___024root* vlSelf);

VL_INLINE_OPT QData Vjtransmissiongate___024root___change_request(Vjtransmissiongate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjtransmissiongate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjtransmissiongate___024root___change_request\n"); );
    // Body
    return (Vjtransmissiongate___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjtransmissiongate___024root___change_request_1(Vjtransmissiongate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjtransmissiongate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjtransmissiongate___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vjtransmissiongate___024root___eval_debug_assertions(Vjtransmissiongate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjtransmissiongate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjtransmissiongate___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->control & 0xfeU))) {
        Verilated::overWidthError("control");}
}
#endif  // VL_DEBUG
