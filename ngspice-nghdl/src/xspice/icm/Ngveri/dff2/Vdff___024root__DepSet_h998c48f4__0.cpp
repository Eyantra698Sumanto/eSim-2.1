// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff.h for the primary calling header

#include "verilated.h"

#include "Vdff___024root.h"

VL_INLINE_OPT void Vdff___024root___sequent__TOP__2(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->q = ((IData)(vlSelf->rstn) & ((IData)(vlSelf->dff__DOT__q_net) 
                                          >> 2U));
    vlSelf->dff__DOT____Vcellout__u0__q = ((IData)(vlSelf->rstn) 
                                           & (IData)(vlSelf->d));
    vlSelf->dff__DOT____Vcellout__u2__q = ((IData)(vlSelf->rstn) 
                                           & ((IData)(vlSelf->dff__DOT__q_net) 
                                              >> 1U));
    vlSelf->dff__DOT____Vcellout__u1__q = ((IData)(vlSelf->rstn) 
                                           & (IData)(vlSelf->dff__DOT__q_net));
    vlSelf->dff__DOT__q_net = (((IData)(vlSelf->dff__DOT____Vcellout__u2__q) 
                                << 2U) | (((IData)(vlSelf->dff__DOT____Vcellout__u1__q) 
                                           << 1U) | (IData)(vlSelf->dff__DOT____Vcellout__u0__q)));
}

void Vdff___024root___eval(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rstn)) & (IData)(vlSelf->__Vclklast__TOP__rstn)))) {
        Vdff___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
}

#ifdef VL_DEBUG
void Vdff___024root___eval_debug_assertions(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->d & 0xfeU))) {
        Verilated::overWidthError("d");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
