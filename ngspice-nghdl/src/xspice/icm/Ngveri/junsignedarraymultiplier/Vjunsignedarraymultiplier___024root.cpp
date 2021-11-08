// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjunsignedarraymultiplier.h for the primary calling header

#include "Vjunsignedarraymultiplier___024root.h"
#include "Vjunsignedarraymultiplier__Syms.h"

//==========

VL_INLINE_OPT void Vjunsignedarraymultiplier___024root___combo__TOP__1(Vjunsignedarraymultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjunsignedarraymultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjunsignedarraymultiplier___024root___combo__TOP__1\n"); );
    // Variables
    CData/*0:0*/ junsignedArrayMultiplier__DOT____Vcellout__jfa01____pinNumber2;
    CData/*0:0*/ junsignedArrayMultiplier__DOT____Vcellout__jfa02____pinNumber2;
    CData/*0:0*/ junsignedArrayMultiplier__DOT____Vcellout__jha02____pinNumber2;
    CData/*0:0*/ junsignedArrayMultiplier__DOT____Vcellout__jfa05____pinNumber2;
    // Body
    vlSelf->junsignedArrayMultiplier__DOT__S = ((0x27U 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__S)) 
                                                | (((IData)(vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1) 
                                                    << 4U) 
                                                   | ((IData)(vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1) 
                                                      << 3U)));
    vlSelf->junsignedArrayMultiplier__DOT__C = ((0x79fU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)) 
                                                | (((IData)(vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2) 
                                                      << 5U)));
    vlSelf->junsignedArrayMultiplier__DOT__C = ((0x1ffU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)) 
                                                | (((IData)(vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2) 
                                                    << 0xaU) 
                                                   | ((IData)(vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2) 
                                                      << 9U)));
    vlSelf->PRODUCT = ((0xfeU & (IData)(vlSelf->PRODUCT)) 
                       | (1U & ((IData)(vlSelf->A) 
                                & (IData)(vlSelf->B))));
    vlSelf->junsignedArrayMultiplier__DOT__W = ((0x7ffcU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__W)) 
                                                | ((2U 
                                                    & (((IData)(vlSelf->A) 
                                                        << 1U) 
                                                       & ((IData)(vlSelf->B) 
                                                          >> 1U))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->A) 
                                                         & ((IData)(vlSelf->B) 
                                                            >> 1U)))));
    vlSelf->junsignedArrayMultiplier__DOT__W = ((0x7ff3U 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__W)) 
                                                | (((IData)(vlSelf->A) 
                                                    << 2U) 
                                                   & ((8U 
                                                       & ((IData)(vlSelf->B) 
                                                          << 3U)) 
                                                      | (4U 
                                                         & ((IData)(vlSelf->B) 
                                                            >> 1U)))));
    vlSelf->junsignedArrayMultiplier__DOT__W = ((0x7fcfU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__W)) 
                                                | ((0x20U 
                                                    & (((IData)(vlSelf->A) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->B) 
                                                          << 3U))) 
                                                   | (0x10U 
                                                      & (((IData)(vlSelf->A) 
                                                          & (IData)(vlSelf->B)) 
                                                         << 3U))));
    vlSelf->junsignedArrayMultiplier__DOT__W = ((0x7f3fU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__W)) 
                                                | (0xffffffc0U 
                                                   & (((IData)(vlSelf->A) 
                                                       << 5U) 
                                                      & ((0x80U 
                                                          & ((IData)(vlSelf->B) 
                                                             << 7U)) 
                                                         | (0x40U 
                                                            & ((IData)(vlSelf->B) 
                                                               << 3U))))));
    vlSelf->junsignedArrayMultiplier__DOT__W = ((0x7cffU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__W)) 
                                                | ((0x200U 
                                                    & (((IData)(vlSelf->A) 
                                                        & (IData)(vlSelf->B)) 
                                                       << 7U)) 
                                                   | (0x100U 
                                                      & (((IData)(vlSelf->A) 
                                                          << 6U) 
                                                         & ((IData)(vlSelf->B) 
                                                            << 7U)))));
    vlSelf->junsignedArrayMultiplier__DOT__W = ((0x73ffU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__W)) 
                                                | (0xfffffc00U 
                                                   & (((IData)(vlSelf->A) 
                                                       << 8U) 
                                                      & ((0x800U 
                                                          & ((IData)(vlSelf->B) 
                                                             << 0xbU)) 
                                                         | (0x400U 
                                                            & ((IData)(vlSelf->B) 
                                                               << 7U))))));
    vlSelf->junsignedArrayMultiplier__DOT__W = ((0x4fffU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__W)) 
                                                | ((0x2000U 
                                                    & (((IData)(vlSelf->A) 
                                                        << 0xaU) 
                                                       & ((IData)(vlSelf->B) 
                                                          << 0xbU))) 
                                                   | (0x1000U 
                                                      & (((IData)(vlSelf->A) 
                                                          << 9U) 
                                                         & ((IData)(vlSelf->B) 
                                                            << 0xbU)))));
    vlSelf->junsignedArrayMultiplier__DOT__W = ((0x3fffU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__W)) 
                                                | (0x4000U 
                                                   & (((IData)(vlSelf->A) 
                                                       & (IData)(vlSelf->B)) 
                                                      << 0xbU)));
    vlSelf->PRODUCT = ((0xfdU & (IData)(vlSelf->PRODUCT)) 
                       | (2U & (((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                 << 1U) ^ (0x3ffffffeU 
                                           & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                              >> 2U)))));
    vlSelf->junsignedArrayMultiplier__DOT__C = ((0x7feU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)) 
                                                | (IData)(
                                                          (9U 
                                                           == 
                                                           (9U 
                                                            & (IData)(vlSelf->junsignedArrayMultiplier__DOT__W)))));
    junsignedArrayMultiplier__DOT____Vcellout__jfa01____pinNumber2 
        = (1U & ((((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                   >> 1U) & (((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                              >> 4U) | (IData)(vlSelf->junsignedArrayMultiplier__DOT__C))) 
                 | (((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                     >> 4U) & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C))));
    junsignedArrayMultiplier__DOT____Vcellout__jfa02____pinNumber2 
        = (1U & ((((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                   >> 2U) & (((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                              >> 5U) | ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                        >> 1U))) | 
                 (((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                   >> 5U) & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                             >> 1U))));
    junsignedArrayMultiplier__DOT____Vcellout__jha02____pinNumber2 
        = (1U & (((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                  >> 6U) & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                            >> 2U)));
    junsignedArrayMultiplier__DOT____Vcellout__jfa05____pinNumber2 
        = (1U & ((((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                   >> 0xaU) & (IData)((0U != (0x48U 
                                              & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C))))) 
                 | (IData)((0x48U == (0x48U & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C))))));
    vlSelf->PRODUCT = ((0x3fU & (IData)(vlSelf->PRODUCT)) 
                       | ((0x80U & ((0x1ffff80U & (
                                                   ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                    >> 7U) 
                                                   & ((IData)(
                                                              (0U 
                                                               != 
                                                               (0x480U 
                                                                & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)))) 
                                                      << 7U))) 
                                    | ((IData)((0x480U 
                                                == 
                                                (0x480U 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)))) 
                                       << 7U))) | (0x40U 
                                                   & (((0xffffc0U 
                                                        & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                           >> 8U)) 
                                                       ^ 
                                                       (0x7fffffc0U 
                                                        & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                                           >> 1U))) 
                                                      ^ 
                                                      (0xfffffc0U 
                                                       & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                                          >> 4U))))));
    vlSelf->junsignedArrayMultiplier__DOT__S = ((0x3eU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__S)) 
                                                | (1U 
                                                   & ((((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                        >> 1U) 
                                                       ^ 
                                                       ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                        >> 4U)) 
                                                      ^ (IData)(vlSelf->junsignedArrayMultiplier__DOT__C))));
    vlSelf->junsignedArrayMultiplier__DOT__S = ((0x3dU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__S)) 
                                                | (2U 
                                                   & (((0x7ffffffeU 
                                                        & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                           >> 1U)) 
                                                       ^ 
                                                       (0xffffffeU 
                                                        & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                           >> 4U))) 
                                                      ^ 
                                                      (0xfffffffeU 
                                                       & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)))));
    vlSelf->junsignedArrayMultiplier__DOT__S = ((0x3bU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__S)) 
                                                | (4U 
                                                   & ((0xffffffcU 
                                                       & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                          >> 4U)) 
                                                      ^ 
                                                      (0xfffffffcU 
                                                       & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)))));
    vlSelf->junsignedArrayMultiplier__DOT__S = ((0x1fU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__S)) 
                                                | (0x20U 
                                                   & (((0x7ffffe0U 
                                                        & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                           >> 5U)) 
                                                       ^ 
                                                       (0xffffffe0U 
                                                        & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                                           << 2U))) 
                                                      ^ 
                                                      (0x7fffffe0U 
                                                       & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                                          >> 1U)))));
    vlSelf->junsignedArrayMultiplier__DOT__C = ((0x7f1U 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)) 
                                                | (((IData)(junsignedArrayMultiplier__DOT____Vcellout__jha02____pinNumber2) 
                                                    << 3U) 
                                                   | (((IData)(junsignedArrayMultiplier__DOT____Vcellout__jfa02____pinNumber2) 
                                                       << 2U) 
                                                      | ((IData)(junsignedArrayMultiplier__DOT____Vcellout__jfa01____pinNumber2) 
                                                         << 1U))));
    vlSelf->junsignedArrayMultiplier__DOT__C = ((0x77fU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)) 
                                                | ((IData)(junsignedArrayMultiplier__DOT____Vcellout__jfa05____pinNumber2) 
                                                   << 7U));
    vlSelf->junsignedArrayMultiplier__DOT__C = ((0x7efU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)) 
                                                | (0x10U 
                                                   & (((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                       >> 3U) 
                                                      & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                                                         << 4U))));
    vlSelf->junsignedArrayMultiplier__DOT__C = ((0x6ffU 
                                                 & (IData)(vlSelf->junsignedArrayMultiplier__DOT__C)) 
                                                | (0x100U 
                                                   & (((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                       >> 3U) 
                                                      & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                                                         << 5U))));
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1 
        = (1U & ((((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                   >> 8U) ^ ((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                             >> 1U)) ^ ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                        >> 4U)));
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2 
        = (1U & ((((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                   >> 8U) & (((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                              >> 1U) | ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                        >> 4U))) | 
                 (((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                   >> 1U) & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                             >> 4U))));
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1 
        = (1U & ((((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                   >> 9U) ^ ((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                             >> 2U)) ^ ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                        >> 5U)));
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2 
        = (1U & ((((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                   >> 9U) & (((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                              >> 2U) | ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                        >> 5U))) | 
                 (((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                   >> 2U) & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                             >> 5U))));
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2 
        = (1U & ((((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                   >> 0xcU) & (((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                                >> 4U) | ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                          >> 8U))) 
                 | (((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                     >> 4U) & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                               >> 8U))));
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2 
        = (1U & ((((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                   >> 0xdU) & (((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                                >> 5U) | ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                          >> 9U))) 
                 | (((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                     >> 5U) & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                               >> 9U))));
    vlSelf->PRODUCT = ((0xf3U & (IData)(vlSelf->PRODUCT)) 
                       | ((8U & ((0xfffff8U & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                               >> 8U)) 
                                 ^ (0xfffffff8U & (IData)(vlSelf->junsignedArrayMultiplier__DOT__S)))) 
                          | (4U & ((0x7fffffcU & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                  >> 5U)) 
                                   ^ ((IData)(vlSelf->junsignedArrayMultiplier__DOT__S) 
                                      << 2U)))));
    vlSelf->PRODUCT = ((0xefU & (IData)(vlSelf->PRODUCT)) 
                       | (0x10U & (((0xfffff0U & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                  >> 8U)) 
                                    ^ (0xfffffff0U 
                                       & (IData)(vlSelf->junsignedArrayMultiplier__DOT__S))) 
                                   ^ (0xffffff0U & 
                                      ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                       >> 4U)))));
    vlSelf->PRODUCT = ((0xdfU & (IData)(vlSelf->PRODUCT)) 
                       | (0x20U & (((0xffffe0U & ((IData)(vlSelf->junsignedArrayMultiplier__DOT__W) 
                                                  >> 8U)) 
                                    ^ (0xffffffe0U 
                                       & (IData)(vlSelf->junsignedArrayMultiplier__DOT__S))) 
                                   ^ (0xfffffe0U & 
                                      ((IData)(vlSelf->junsignedArrayMultiplier__DOT__C) 
                                       >> 4U)))));
}

void Vjunsignedarraymultiplier___024root___eval(Vjunsignedarraymultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjunsignedarraymultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjunsignedarraymultiplier___024root___eval\n"); );
    // Body
    Vjunsignedarraymultiplier___024root___combo__TOP__1(vlSelf);
}

QData Vjunsignedarraymultiplier___024root___change_request_1(Vjunsignedarraymultiplier___024root* vlSelf);

VL_INLINE_OPT QData Vjunsignedarraymultiplier___024root___change_request(Vjunsignedarraymultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjunsignedarraymultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjunsignedarraymultiplier___024root___change_request\n"); );
    // Body
    return (Vjunsignedarraymultiplier___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjunsignedarraymultiplier___024root___change_request_1(Vjunsignedarraymultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjunsignedarraymultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjunsignedarraymultiplier___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->junsignedArrayMultiplier__DOT__C ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT__C)
         | (vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2)
         | (vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1)
         | (vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2)
         | (vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1)
         | (vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2)
         | (vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2));
    VL_DEBUG_IF( if(__req && ((vlSelf->junsignedArrayMultiplier__DOT__C ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT__C))) VL_DBG_MSGF("        CHANGE: junsignedarraymultiplier.v:28: junsignedArrayMultiplier.C\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2))) VL_DBG_MSGF("        CHANGE: junsignedarraymultiplier.v:12: junsignedArrayMultiplier.__Vcellout__jfa03____pinNumber2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1))) VL_DBG_MSGF("        CHANGE: junsignedarraymultiplier.v:12: junsignedArrayMultiplier.__Vcellout__jfa03____pinNumber1\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2))) VL_DBG_MSGF("        CHANGE: junsignedarraymultiplier.v:12: junsignedArrayMultiplier.__Vcellout__jfa04____pinNumber2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1))) VL_DBG_MSGF("        CHANGE: junsignedarraymultiplier.v:12: junsignedArrayMultiplier.__Vcellout__jfa04____pinNumber1\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2))) VL_DBG_MSGF("        CHANGE: junsignedarraymultiplier.v:12: junsignedArrayMultiplier.__Vcellout__jfa06____pinNumber2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2 ^ vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2))) VL_DBG_MSGF("        CHANGE: junsignedarraymultiplier.v:12: junsignedArrayMultiplier.__Vcellout__jfa07____pinNumber2\n"); );
    // Final
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT__C 
        = vlSelf->junsignedArrayMultiplier__DOT__C;
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2 
        = vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2;
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1 
        = vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1;
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2 
        = vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2;
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1 
        = vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1;
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2 
        = vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2;
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2 
        = vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2;
    return __req;
}

#ifdef VL_DEBUG
void Vjunsignedarraymultiplier___024root___eval_debug_assertions(Vjunsignedarraymultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjunsignedarraymultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjunsignedarraymultiplier___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
