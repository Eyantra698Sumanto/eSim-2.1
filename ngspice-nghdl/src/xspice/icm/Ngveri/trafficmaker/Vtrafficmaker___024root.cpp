// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrafficmaker.h for the primary calling header

#include "Vtrafficmaker___024root.h"
#include "Vtrafficmaker__Syms.h"

//==========

VL_INLINE_OPT void Vtrafficmaker___024root___sequent__TOP__2(Vtrafficmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficmaker___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->trafficmaker__DOT__state = 0U;
        vlSelf->trafficmaker__DOT__count = 0U;
    } else if ((4U & (IData)(vlSelf->trafficmaker__DOT__state))) {
        if ((2U & (IData)(vlSelf->trafficmaker__DOT__state))) {
            if ((1U & (IData)(vlSelf->trafficmaker__DOT__state))) {
                if ((3U == (IData)(vlSelf->trafficmaker__DOT__count))) {
                    vlSelf->trafficmaker__DOT__state = 0U;
                    vlSelf->trafficmaker__DOT__count = 0U;
                } else {
                    vlSelf->trafficmaker__DOT__count 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->trafficmaker__DOT__count)));
                }
            } else if ((7U == (IData)(vlSelf->trafficmaker__DOT__count))) {
                vlSelf->trafficmaker__DOT__state = 7U;
                vlSelf->trafficmaker__DOT__count = 0U;
            } else {
                vlSelf->trafficmaker__DOT__count = 
                    (7U & ((IData)(1U) + (IData)(vlSelf->trafficmaker__DOT__count)));
            }
        } else if ((1U & (IData)(vlSelf->trafficmaker__DOT__state))) {
            if ((3U == (IData)(vlSelf->trafficmaker__DOT__count))) {
                vlSelf->trafficmaker__DOT__state = 6U;
                vlSelf->trafficmaker__DOT__count = 0U;
            } else {
                vlSelf->trafficmaker__DOT__count = 
                    (7U & ((IData)(1U) + (IData)(vlSelf->trafficmaker__DOT__count)));
            }
        } else if ((7U == (IData)(vlSelf->trafficmaker__DOT__count))) {
            vlSelf->trafficmaker__DOT__state = 5U;
            vlSelf->trafficmaker__DOT__count = 0U;
        } else {
            vlSelf->trafficmaker__DOT__count = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->trafficmaker__DOT__count)));
        }
    } else if ((2U & (IData)(vlSelf->trafficmaker__DOT__state))) {
        if ((1U & (IData)(vlSelf->trafficmaker__DOT__state))) {
            if ((3U == (IData)(vlSelf->trafficmaker__DOT__count))) {
                vlSelf->trafficmaker__DOT__state = 4U;
                vlSelf->trafficmaker__DOT__count = 0U;
            } else {
                vlSelf->trafficmaker__DOT__count = 
                    (7U & ((IData)(1U) + (IData)(vlSelf->trafficmaker__DOT__count)));
            }
        } else if ((7U == (IData)(vlSelf->trafficmaker__DOT__count))) {
            vlSelf->trafficmaker__DOT__state = 3U;
            vlSelf->trafficmaker__DOT__count = 0U;
        } else {
            vlSelf->trafficmaker__DOT__count = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->trafficmaker__DOT__count)));
        }
    } else if ((1U & (IData)(vlSelf->trafficmaker__DOT__state))) {
        if ((3U == (IData)(vlSelf->trafficmaker__DOT__count))) {
            vlSelf->trafficmaker__DOT__state = 2U;
            vlSelf->trafficmaker__DOT__count = 0U;
        } else {
            vlSelf->trafficmaker__DOT__count = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->trafficmaker__DOT__count)));
        }
    } else if ((7U == (IData)(vlSelf->trafficmaker__DOT__count))) {
        vlSelf->trafficmaker__DOT__state = 1U;
        vlSelf->trafficmaker__DOT__count = 0U;
    } else {
        vlSelf->trafficmaker__DOT__count = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->trafficmaker__DOT__count)));
    }
    vlSelf->passed = (6U < (IData)(vlSelf->trafficmaker__DOT__count));
}

void Vtrafficmaker___024root___eval(Vtrafficmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficmaker___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vtrafficmaker___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

QData Vtrafficmaker___024root___change_request_1(Vtrafficmaker___024root* vlSelf);

VL_INLINE_OPT QData Vtrafficmaker___024root___change_request(Vtrafficmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficmaker___024root___change_request\n"); );
    // Body
    return (Vtrafficmaker___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtrafficmaker___024root___change_request_1(Vtrafficmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficmaker___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtrafficmaker___024root___eval_debug_assertions(Vtrafficmaker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrafficmaker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrafficmaker___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
