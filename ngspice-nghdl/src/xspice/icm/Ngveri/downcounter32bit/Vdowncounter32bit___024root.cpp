// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdowncounter32bit.h for the primary calling header

#include "Vdowncounter32bit___024root.h"
#include "Vdowncounter32bit__Syms.h"

//==========

VL_INLINE_OPT void Vdowncounter32bit___024root___sequent__TOP__1(Vdowncounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdowncounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdowncounter32bit___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->out = ((IData)(vlSelf->rst) ? 0x7fffffffU
                    : (vlSelf->out - (IData)(1U)));
}

void Vdowncounter32bit___024root___eval(Vdowncounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdowncounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdowncounter32bit___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdowncounter32bit___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vdowncounter32bit___024root___change_request_1(Vdowncounter32bit___024root* vlSelf);

VL_INLINE_OPT QData Vdowncounter32bit___024root___change_request(Vdowncounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdowncounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdowncounter32bit___024root___change_request\n"); );
    // Body
    return (Vdowncounter32bit___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdowncounter32bit___024root___change_request_1(Vdowncounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdowncounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdowncounter32bit___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdowncounter32bit___024root___eval_debug_assertions(Vdowncounter32bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdowncounter32bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdowncounter32bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
