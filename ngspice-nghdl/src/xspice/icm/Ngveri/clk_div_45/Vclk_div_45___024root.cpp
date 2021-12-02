// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclk_div_45.h for the primary calling header

#include "Vclk_div_45___024root.h"
#include "Vclk_div_45__Syms.h"

//==========

VL_INLINE_OPT void Vclk_div_45___024root___sequent__TOP__1(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*3:0*/ __Vdly__clk_div_45__DOT__counter2;
    // Body
    __Vdly__clk_div_45__DOT__counter2 = vlSelf->clk_div_45__DOT__counter2;
    if (vlSelf->enable) {
        if ((((3U == (IData)(vlSelf->clk_div_45__DOT__counter2)) 
              & (~ (IData)(vlSelf->clk_div_45__DOT__toggle2))) 
             | ((IData)(vlSelf->clk_div_45__DOT__toggle2) 
                & (4U == (IData)(vlSelf->clk_div_45__DOT__counter2))))) {
            vlSelf->clk_div_45__DOT__toggle2 = (1U 
                                                & (~ (IData)(vlSelf->clk_div_45__DOT__toggle2)));
            __Vdly__clk_div_45__DOT__counter2 = 0U;
        } else {
            __Vdly__clk_div_45__DOT__counter2 = (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->clk_div_45__DOT__counter2)));
        }
    } else {
        vlSelf->clk_div_45__DOT__toggle2 = 0U;
        __Vdly__clk_div_45__DOT__counter2 = 0U;
    }
    vlSelf->clk_div_45__DOT__counter2 = __Vdly__clk_div_45__DOT__counter2;
}

VL_INLINE_OPT void Vclk_div_45___024root___sequent__TOP__2(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*3:0*/ __Vdly__clk_div_45__DOT__counter1;
    // Body
    __Vdly__clk_div_45__DOT__counter1 = vlSelf->clk_div_45__DOT__counter1;
    if (vlSelf->enable) {
        if ((((3U == (IData)(vlSelf->clk_div_45__DOT__counter1)) 
              & (IData)(vlSelf->clk_div_45__DOT__toggle2)) 
             | ((~ (IData)(vlSelf->clk_div_45__DOT__toggle1)) 
                & (4U == (IData)(vlSelf->clk_div_45__DOT__counter1))))) {
            vlSelf->clk_div_45__DOT__toggle1 = (1U 
                                                & (~ (IData)(vlSelf->clk_div_45__DOT__toggle1)));
            __Vdly__clk_div_45__DOT__counter1 = 0U;
        } else {
            __Vdly__clk_div_45__DOT__counter1 = (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->clk_div_45__DOT__counter1)));
        }
    } else {
        vlSelf->clk_div_45__DOT__toggle1 = 0U;
        __Vdly__clk_div_45__DOT__counter1 = 0U;
    }
    vlSelf->clk_div_45__DOT__counter1 = __Vdly__clk_div_45__DOT__counter1;
}

VL_INLINE_OPT void Vclk_div_45___024root___settle__TOP__3(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->clk_out = (((3U > (IData)(vlSelf->clk_div_45__DOT__counter1)) 
                        & (3U > (IData)(vlSelf->clk_div_45__DOT__counter2))) 
                       & (IData)(vlSelf->enable));
}

void Vclk_div_45___024root___eval(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_in)) & (IData)(vlSelf->__Vclklast__TOP__clk_in))) {
        Vclk_div_45___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk_in) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_in)))) {
        Vclk_div_45___024root___sequent__TOP__2(vlSelf);
    }
    Vclk_div_45___024root___settle__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_in = vlSelf->clk_in;
}

QData Vclk_div_45___024root___change_request_1(Vclk_div_45___024root* vlSelf);

VL_INLINE_OPT QData Vclk_div_45___024root___change_request(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___change_request\n"); );
    // Body
    return (Vclk_div_45___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vclk_div_45___024root___change_request_1(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vclk_div_45___024root___eval_debug_assertions(Vclk_div_45___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclk_div_45__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclk_div_45___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_in & 0xfeU))) {
        Verilated::overWidthError("clk_in");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
