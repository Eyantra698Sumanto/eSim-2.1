// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjbuffer.h for the primary calling header

#include "Vjbuffer___024root.h"
#include "Vjbuffer__Syms.h"

//==========

VL_INLINE_OPT void Vjbuffer___024root___combo__TOP__1(Vjbuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbuffer___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->y = vlSelf->a;
}

void Vjbuffer___024root___eval(Vjbuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbuffer___024root___eval\n"); );
    // Body
    Vjbuffer___024root___combo__TOP__1(vlSelf);
}

QData Vjbuffer___024root___change_request_1(Vjbuffer___024root* vlSelf);

VL_INLINE_OPT QData Vjbuffer___024root___change_request(Vjbuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbuffer___024root___change_request\n"); );
    // Body
    return (Vjbuffer___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjbuffer___024root___change_request_1(Vjbuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbuffer___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vjbuffer___024root___eval_debug_assertions(Vjbuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjbuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjbuffer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
}
#endif  // VL_DEBUG
