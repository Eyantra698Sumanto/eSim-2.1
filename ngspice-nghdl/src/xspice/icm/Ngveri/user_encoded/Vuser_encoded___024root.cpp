// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuser_encoded.h for the primary calling header

#include "Vuser_encoded___024root.h"
#include "Vuser_encoded__Syms.h"

//==========

extern const VlUnpacked<CData/*1:0*/, 16> Vuser_encoded__ConstPool__TABLE_28f88b44_0;

VL_INLINE_OPT void Vuser_encoded___024root___sequent__TOP__1(Vuser_encoded___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuser_encoded__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_encoded___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->data_in) << 3U) 
                    | (((IData)(vlSelf->user_encoded__DOT__state) 
                        << 1U) | (IData)(vlSelf->reset)));
    vlSelf->user_encoded__DOT__state = Vuser_encoded__ConstPool__TABLE_28f88b44_0
        [__Vtableidx1];
    vlSelf->data_out = ((0U == (IData)(vlSelf->user_encoded__DOT__state))
                         ? 1U : ((1U == (IData)(vlSelf->user_encoded__DOT__state))
                                  ? 2U : ((2U == (IData)(vlSelf->user_encoded__DOT__state))
                                           ? 3U : 0U)));
}

void Vuser_encoded___024root___eval(Vuser_encoded___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuser_encoded__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_encoded___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vuser_encoded___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

QData Vuser_encoded___024root___change_request_1(Vuser_encoded___024root* vlSelf);

VL_INLINE_OPT QData Vuser_encoded___024root___change_request(Vuser_encoded___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuser_encoded__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_encoded___024root___change_request\n"); );
    // Body
    return (Vuser_encoded___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vuser_encoded___024root___change_request_1(Vuser_encoded___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuser_encoded__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_encoded___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vuser_encoded___024root___eval_debug_assertions(Vuser_encoded___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuser_encoded__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_encoded___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->data_in & 0xfeU))) {
        Verilated::overWidthError("data_in");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
