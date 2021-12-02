// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator___024root.h"
#include "Vcalculator__Syms.h"

//==========

extern const VlUnpacked<CData/*6:0*/, 16> Vcalculator__ConstPool__TABLE_6baa9510_0;

VL_INLINE_OPT void Vcalculator___024root___combo__TOP__1(Vcalculator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___combo__TOP__1\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    // Body
    if ((0U == (3U & ((IData)(vlSelf->astr) >> 0xcU)))) {
        vlSelf->res = (0xfU & (((IData)(vlSelf->astr) 
                                >> 8U) + ((IData)(vlSelf->astr) 
                                          >> 4U)));
    } else if ((1U == (3U & ((IData)(vlSelf->astr) 
                             >> 0xcU)))) {
        vlSelf->res = (0xfU & (((IData)(vlSelf->astr) 
                                >> 8U) - ((IData)(vlSelf->astr) 
                                          >> 4U)));
    } else if ((2U == (3U & ((IData)(vlSelf->astr) 
                             >> 0xcU)))) {
        vlSelf->res = (0xfU & (((IData)(vlSelf->astr) 
                                >> 8U) | ((IData)(vlSelf->astr) 
                                          >> 4U)));
    } else if ((3U == (3U & ((IData)(vlSelf->astr) 
                             >> 0xcU)))) {
        vlSelf->res = (0xfU & ((IData)(1U) + (~ ((IData)(vlSelf->astr) 
                                                 >> 8U))));
    }
    __Vtableidx1 = vlSelf->res;
    vlSelf->seven_out = Vcalculator__ConstPool__TABLE_6baa9510_0
        [__Vtableidx1];
}

void Vcalculator___024root___eval(Vcalculator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval\n"); );
    // Body
    Vcalculator___024root___combo__TOP__1(vlSelf);
}

QData Vcalculator___024root___change_request_1(Vcalculator___024root* vlSelf);

VL_INLINE_OPT QData Vcalculator___024root___change_request(Vcalculator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___change_request\n"); );
    // Body
    return (Vcalculator___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcalculator___024root___change_request_1(Vcalculator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcalculator___024root___eval_debug_assertions(Vcalculator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->astr & 0xc000U))) {
        Verilated::overWidthError("astr");}
}
#endif  // VL_DEBUG
