// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr.h for the primary calling header

#include "Vlfsr___024root.h"
#include "Vlfsr__Syms.h"

//==========

VL_INLINE_OPT void Vlfsr___024root___sequent__TOP__1(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vdly__out;
    // Body
    __Vdly__out = vlSelf->out;
    if (vlSelf->reset) {
        __Vdly__out = 0U;
    } else if (vlSelf->enable) {
        __Vdly__out = ((0xfeU & ((IData)(vlSelf->out) 
                                 << 1U)) | (IData)(vlSelf->lfsr__DOT__linear_feedback));
    }
    vlSelf->out = __Vdly__out;
    vlSelf->lfsr__DOT__linear_feedback = (1U & (~ (
                                                   ((IData)(vlSelf->out) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlSelf->out) 
                                                    >> 3U))));
}

void Vlfsr___024root___eval(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlfsr___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vlfsr___024root___change_request_1(Vlfsr___024root* vlSelf);

VL_INLINE_OPT QData Vlfsr___024root___change_request(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___change_request\n"); );
    // Body
    return (Vlfsr___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vlfsr___024root___change_request_1(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vlfsr___024root___eval_debug_assertions(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
