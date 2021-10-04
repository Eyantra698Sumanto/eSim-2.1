// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvert.h for the primary calling header

#include "VConvert___024root.h"
#include "VConvert__Syms.h"

//==========

VL_INLINE_OPT void VConvert___024root___sequent__TOP__2(VConvert___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvert___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->q = ((IData)(vlSelf->rstn) & (IData)(vlSelf->d));
}

void VConvert___024root___eval(VConvert___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvert___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rstn)) & (IData)(vlSelf->__Vclklast__TOP__rstn)))) {
        VConvert___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
}

QData VConvert___024root___change_request_1(VConvert___024root* vlSelf);

VL_INLINE_OPT QData VConvert___024root___change_request(VConvert___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvert___024root___change_request\n"); );
    // Body
    return (VConvert___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VConvert___024root___change_request_1(VConvert___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvert___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VConvert___024root___eval_debug_assertions(VConvert___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvert___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->d & 0xfeU))) {
        Verilated::overWidthError("d");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
