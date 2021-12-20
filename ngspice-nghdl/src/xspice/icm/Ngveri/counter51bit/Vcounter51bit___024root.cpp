// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter51bit.h for the primary calling header

#include "Vcounter51bit___024root.h"
#include "Vcounter51bit__Syms.h"

//==========

VL_INLINE_OPT void Vcounter51bit___024root___sequent__TOP__1(Vcounter51bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter51bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter51bit___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->out = ((IData)(vlSelf->reset) ? 0ULL : 
                   (0x7ffffffffffffULL & (1ULL + vlSelf->out)));
}

void Vcounter51bit___024root___eval(Vcounter51bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter51bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter51bit___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcounter51bit___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcounter51bit___024root___change_request_1(Vcounter51bit___024root* vlSelf);

VL_INLINE_OPT QData Vcounter51bit___024root___change_request(Vcounter51bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter51bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter51bit___024root___change_request\n"); );
    // Body
    return (Vcounter51bit___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcounter51bit___024root___change_request_1(Vcounter51bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter51bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter51bit___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcounter51bit___024root___eval_debug_assertions(Vcounter51bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter51bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter51bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
