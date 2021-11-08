// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjboothmultiplier.h for the primary calling header

#include "Vjboothmultiplier___024root.h"
#include "Vjboothmultiplier__Syms.h"

//==========

VL_INLINE_OPT void Vjboothmultiplier___024root___combo__TOP__1(Vjboothmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjboothmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjboothmultiplier___024root___combo__TOP__1\n"); );
    // Variables
    CData/*1:0*/ jboothMultiplier__DOT__temp;
    CData/*0:0*/ jboothMultiplier__DOT__e;
    CData/*3:0*/ jboothMultiplier__DOT__B1;
    // Body
    vlSelf->PRODUCT = 0U;
    jboothMultiplier__DOT__B1 = (0xfU & (- (IData)(vlSelf->B)));
    jboothMultiplier__DOT__temp = (2U & ((IData)(vlSelf->A) 
                                         << 1U));
    if ((2U == (IData)(jboothMultiplier__DOT__temp))) {
        vlSelf->PRODUCT = ((0xfU & (IData)(vlSelf->PRODUCT)) 
                           | (0xf0U & ((((IData)(vlSelf->PRODUCT) 
                                         >> 4U) + (IData)(jboothMultiplier__DOT__B1)) 
                                       << 4U)));
    } else if ((1U == (IData)(jboothMultiplier__DOT__temp))) {
        vlSelf->PRODUCT = ((0xfU & (IData)(vlSelf->PRODUCT)) 
                           | (0xf0U & ((((IData)(vlSelf->PRODUCT) 
                                         >> 4U) + (IData)(vlSelf->B)) 
                                       << 4U)));
    }
    vlSelf->PRODUCT = (0xffU & ((IData)(vlSelf->PRODUCT) 
                                >> 1U));
    vlSelf->PRODUCT = ((0x7fU & (IData)(vlSelf->PRODUCT)) 
                       | (0x80U & ((IData)(vlSelf->PRODUCT) 
                                   << 1U)));
    jboothMultiplier__DOT__e = (1U & (IData)(vlSelf->A));
    jboothMultiplier__DOT__temp = ((2U & (IData)(vlSelf->A)) 
                                   | (IData)(jboothMultiplier__DOT__e));
    if ((2U == (IData)(jboothMultiplier__DOT__temp))) {
        vlSelf->PRODUCT = ((0xfU & (IData)(vlSelf->PRODUCT)) 
                           | (0xf0U & ((((IData)(vlSelf->PRODUCT) 
                                         >> 4U) + (IData)(jboothMultiplier__DOT__B1)) 
                                       << 4U)));
    } else if ((1U == (IData)(jboothMultiplier__DOT__temp))) {
        vlSelf->PRODUCT = ((0xfU & (IData)(vlSelf->PRODUCT)) 
                           | (0xf0U & ((((IData)(vlSelf->PRODUCT) 
                                         >> 4U) + (IData)(vlSelf->B)) 
                                       << 4U)));
    }
    vlSelf->PRODUCT = (0xffU & ((IData)(vlSelf->PRODUCT) 
                                >> 1U));
    vlSelf->PRODUCT = ((0x7fU & (IData)(vlSelf->PRODUCT)) 
                       | (0x80U & ((IData)(vlSelf->PRODUCT) 
                                   << 1U)));
    jboothMultiplier__DOT__e = (1U & ((IData)(vlSelf->A) 
                                      >> 1U));
    jboothMultiplier__DOT__temp = ((2U & ((IData)(vlSelf->A) 
                                          >> 1U)) | (IData)(jboothMultiplier__DOT__e));
    if ((2U == (IData)(jboothMultiplier__DOT__temp))) {
        vlSelf->PRODUCT = ((0xfU & (IData)(vlSelf->PRODUCT)) 
                           | (0xf0U & ((((IData)(vlSelf->PRODUCT) 
                                         >> 4U) + (IData)(jboothMultiplier__DOT__B1)) 
                                       << 4U)));
    } else if ((1U == (IData)(jboothMultiplier__DOT__temp))) {
        vlSelf->PRODUCT = ((0xfU & (IData)(vlSelf->PRODUCT)) 
                           | (0xf0U & ((((IData)(vlSelf->PRODUCT) 
                                         >> 4U) + (IData)(vlSelf->B)) 
                                       << 4U)));
    }
    vlSelf->PRODUCT = (0xffU & ((IData)(vlSelf->PRODUCT) 
                                >> 1U));
    vlSelf->PRODUCT = ((0x7fU & (IData)(vlSelf->PRODUCT)) 
                       | (0x80U & ((IData)(vlSelf->PRODUCT) 
                                   << 1U)));
    jboothMultiplier__DOT__e = (1U & ((IData)(vlSelf->A) 
                                      >> 2U));
    jboothMultiplier__DOT__temp = ((2U & ((IData)(vlSelf->A) 
                                          >> 2U)) | (IData)(jboothMultiplier__DOT__e));
    if ((2U == (IData)(jboothMultiplier__DOT__temp))) {
        vlSelf->PRODUCT = ((0xfU & (IData)(vlSelf->PRODUCT)) 
                           | (0xf0U & ((((IData)(vlSelf->PRODUCT) 
                                         >> 4U) + (IData)(jboothMultiplier__DOT__B1)) 
                                       << 4U)));
    } else if ((1U == (IData)(jboothMultiplier__DOT__temp))) {
        vlSelf->PRODUCT = ((0xfU & (IData)(vlSelf->PRODUCT)) 
                           | (0xf0U & ((((IData)(vlSelf->PRODUCT) 
                                         >> 4U) + (IData)(vlSelf->B)) 
                                       << 4U)));
    }
    vlSelf->PRODUCT = (0xffU & ((IData)(vlSelf->PRODUCT) 
                                >> 1U));
    vlSelf->PRODUCT = ((0x7fU & (IData)(vlSelf->PRODUCT)) 
                       | (0x80U & ((IData)(vlSelf->PRODUCT) 
                                   << 1U)));
    jboothMultiplier__DOT__e = (1U & ((IData)(vlSelf->A) 
                                      >> 3U));
}

void Vjboothmultiplier___024root___eval(Vjboothmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjboothmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjboothmultiplier___024root___eval\n"); );
    // Body
    Vjboothmultiplier___024root___combo__TOP__1(vlSelf);
}

QData Vjboothmultiplier___024root___change_request_1(Vjboothmultiplier___024root* vlSelf);

VL_INLINE_OPT QData Vjboothmultiplier___024root___change_request(Vjboothmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjboothmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjboothmultiplier___024root___change_request\n"); );
    // Body
    return (Vjboothmultiplier___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjboothmultiplier___024root___change_request_1(Vjboothmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjboothmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjboothmultiplier___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vjboothmultiplier___024root___eval_debug_assertions(Vjboothmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjboothmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjboothmultiplier___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
