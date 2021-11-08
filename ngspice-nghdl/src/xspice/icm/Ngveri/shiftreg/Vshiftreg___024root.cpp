// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftreg.h for the primary calling header

#include "Vshiftreg___024root.h"
#include "Vshiftreg__Syms.h"

//==========

VL_INLINE_OPT void Vshiftreg___024root___sequent__TOP__2(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->q = ((IData)(vlSelf->rstn) & ((IData)(vlSelf->shiftreg__DOT__q_net) 
                                          >> 2U));
    vlSelf->shiftreg__DOT____Vcellout__u0__q = ((IData)(vlSelf->rstn) 
                                                & (IData)(vlSelf->d));
    vlSelf->shiftreg__DOT____Vcellout__u2__q = ((IData)(vlSelf->rstn) 
                                                & ((IData)(vlSelf->shiftreg__DOT__q_net) 
                                                   >> 1U));
    vlSelf->shiftreg__DOT____Vcellout__u1__q = ((IData)(vlSelf->rstn) 
                                                & (IData)(vlSelf->shiftreg__DOT__q_net));
    vlSelf->shiftreg__DOT__q_net = (((IData)(vlSelf->shiftreg__DOT____Vcellout__u2__q) 
                                     << 2U) | (((IData)(vlSelf->shiftreg__DOT____Vcellout__u1__q) 
                                                << 1U) 
                                               | (IData)(vlSelf->shiftreg__DOT____Vcellout__u0__q)));
}

void Vshiftreg___024root___eval(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rstn)) & (IData)(vlSelf->__Vclklast__TOP__rstn)))) {
        Vshiftreg___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
}

QData Vshiftreg___024root___change_request_1(Vshiftreg___024root* vlSelf);

VL_INLINE_OPT QData Vshiftreg___024root___change_request(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___change_request\n"); );
    // Body
    return (Vshiftreg___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vshiftreg___024root___change_request_1(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vshiftreg___024root___eval_debug_assertions(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->d & 0xfeU))) {
        Verilated::overWidthError("d");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
