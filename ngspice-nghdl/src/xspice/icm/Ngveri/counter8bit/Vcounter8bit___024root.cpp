// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter8bit.h for the primary calling header

#include "Vcounter8bit___024root.h"
#include "Vcounter8bit__Syms.h"

//==========

VL_INLINE_OPT void Vcounter8bit___024root___sequent__TOP__1(Vcounter8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter8bit___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->out = ((IData)(vlSelf->rstn) ? 0U : (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->out))));
}

void Vcounter8bit___024root___eval(Vcounter8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter8bit___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcounter8bit___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcounter8bit___024root___change_request_1(Vcounter8bit___024root* vlSelf);

VL_INLINE_OPT QData Vcounter8bit___024root___change_request(Vcounter8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter8bit___024root___change_request\n"); );
    // Body
    return (Vcounter8bit___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcounter8bit___024root___change_request_1(Vcounter8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter8bit___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcounter8bit___024root___eval_debug_assertions(Vcounter8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter8bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
}
#endif  // VL_DEBUG
