// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_subtractor_4bit.h for the primary calling header

#include "Vadder_subtractor_4bit___024root.h"
#include "Vadder_subtractor_4bit__Syms.h"

//==========

VL_INLINE_OPT void Vadder_subtractor_4bit___024root___combo__TOP__1(Vadder_subtractor_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_subtractor_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_subtractor_4bit___024root___combo__TOP__1\n"); );
    // Variables
    CData/*0:0*/ Adder_subtractor_4bit__DOT__n1__DOT__sum1;
    CData/*0:0*/ Adder_subtractor_4bit__DOT__n2__DOT__sum1;
    CData/*0:0*/ Adder_subtractor_4bit__DOT__n2__DOT__carry2;
    CData/*0:0*/ Adder_subtractor_4bit__DOT__n3__DOT__sum1;
    CData/*0:0*/ Adder_subtractor_4bit__DOT__n3__DOT__carry2;
    CData/*0:0*/ Adder_subtractor_4bit__DOT__n4__DOT__sum1;
    // Body
    vlSelf->Adder_subtractor_4bit__DOT__bin = ((8U 
                                                & (IData)(vlSelf->Adder_subtractor_4bit__DOT__bin)) 
                                               | ((4U 
                                                   & ((0xfffffffcU 
                                                       & (IData)(vlSelf->b)) 
                                                      ^ 
                                                      ((IData)(vlSelf->cin) 
                                                       << 2U))) 
                                                  | (3U 
                                                     & ((IData)(vlSelf->b) 
                                                        ^ 
                                                        (- (IData)((IData)(vlSelf->cin)))))));
    vlSelf->Adder_subtractor_4bit__DOT__bin = ((7U 
                                                & (IData)(vlSelf->Adder_subtractor_4bit__DOT__bin)) 
                                               | (8U 
                                                  & ((0xfffffff8U 
                                                      & (IData)(vlSelf->b)) 
                                                     ^ 
                                                     ((IData)(vlSelf->cin) 
                                                      << 3U))));
    Adder_subtractor_4bit__DOT__n4__DOT__sum1 = (1U 
                                                 & (((IData)(vlSelf->a) 
                                                     ^ (IData)(vlSelf->Adder_subtractor_4bit__DOT__bin)) 
                                                    >> 3U));
    Adder_subtractor_4bit__DOT__n2__DOT__sum1 = (1U 
                                                 & (((IData)(vlSelf->a) 
                                                     ^ (IData)(vlSelf->Adder_subtractor_4bit__DOT__bin)) 
                                                    >> 1U));
    Adder_subtractor_4bit__DOT__n3__DOT__sum1 = (1U 
                                                 & (((IData)(vlSelf->a) 
                                                     ^ (IData)(vlSelf->Adder_subtractor_4bit__DOT__bin)) 
                                                    >> 2U));
    Adder_subtractor_4bit__DOT__n1__DOT__sum1 = (1U 
                                                 & ((IData)(vlSelf->a) 
                                                    ^ (IData)(vlSelf->Adder_subtractor_4bit__DOT__bin)));
    vlSelf->sum = ((0xeU & (IData)(vlSelf->sum)) | 
                   ((IData)(Adder_subtractor_4bit__DOT__n1__DOT__sum1) 
                    ^ (IData)(vlSelf->cin)));
    vlSelf->Adder_subtractor_4bit__DOT__c = ((6U & (IData)(vlSelf->Adder_subtractor_4bit__DOT__c)) 
                                             | (1U 
                                                & (((IData)(vlSelf->a) 
                                                    & (IData)(vlSelf->Adder_subtractor_4bit__DOT__bin)) 
                                                   | ((IData)(Adder_subtractor_4bit__DOT__n1__DOT__sum1) 
                                                      & (IData)(vlSelf->cin)))));
    vlSelf->carry = (1U & ((((IData)(vlSelf->a) & (IData)(vlSelf->Adder_subtractor_4bit__DOT__bin)) 
                            >> 3U) | ((IData)(Adder_subtractor_4bit__DOT__n4__DOT__sum1) 
                                      & ((IData)(vlSelf->Adder_subtractor_4bit__DOT__c) 
                                         >> 2U))));
    vlSelf->sum = ((0xdU & (IData)(vlSelf->sum)) | 
                   (2U & (((IData)(Adder_subtractor_4bit__DOT__n2__DOT__sum1) 
                           ^ (IData)(vlSelf->Adder_subtractor_4bit__DOT__c)) 
                          << 1U)));
    vlSelf->sum = ((3U & (IData)(vlSelf->sum)) | ((8U 
                                                   & (((IData)(Adder_subtractor_4bit__DOT__n4__DOT__sum1) 
                                                       << 3U) 
                                                      ^ 
                                                      (0xfffffff8U 
                                                       & ((IData)(vlSelf->Adder_subtractor_4bit__DOT__c) 
                                                          << 1U)))) 
                                                  | (4U 
                                                     & (((IData)(Adder_subtractor_4bit__DOT__n3__DOT__sum1) 
                                                         << 2U) 
                                                        ^ 
                                                        (0xfffffffcU 
                                                         & ((IData)(vlSelf->Adder_subtractor_4bit__DOT__c) 
                                                            << 1U))))));
    Adder_subtractor_4bit__DOT__n2__DOT__carry2 = ((IData)(Adder_subtractor_4bit__DOT__n2__DOT__sum1) 
                                                   & (IData)(vlSelf->Adder_subtractor_4bit__DOT__c));
    Adder_subtractor_4bit__DOT__n3__DOT__carry2 = ((IData)(Adder_subtractor_4bit__DOT__n3__DOT__sum1) 
                                                   & ((IData)(vlSelf->Adder_subtractor_4bit__DOT__c) 
                                                      >> 1U));
    vlSelf->Adder_subtractor_4bit__DOT__c = ((5U & (IData)(vlSelf->Adder_subtractor_4bit__DOT__c)) 
                                             | (2U 
                                                & ((0xfffffffeU 
                                                    & ((IData)(vlSelf->a) 
                                                       & (IData)(vlSelf->Adder_subtractor_4bit__DOT__bin))) 
                                                   | ((IData)(Adder_subtractor_4bit__DOT__n2__DOT__carry2) 
                                                      << 1U))));
    vlSelf->Adder_subtractor_4bit__DOT__c = ((3U & (IData)(vlSelf->Adder_subtractor_4bit__DOT__c)) 
                                             | (4U 
                                                & ((0xfffffffcU 
                                                    & ((IData)(vlSelf->a) 
                                                       & (IData)(vlSelf->Adder_subtractor_4bit__DOT__bin))) 
                                                   | ((IData)(Adder_subtractor_4bit__DOT__n3__DOT__carry2) 
                                                      << 2U))));
}

void Vadder_subtractor_4bit___024root___eval(Vadder_subtractor_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_subtractor_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_subtractor_4bit___024root___eval\n"); );
    // Body
    Vadder_subtractor_4bit___024root___combo__TOP__1(vlSelf);
}

QData Vadder_subtractor_4bit___024root___change_request_1(Vadder_subtractor_4bit___024root* vlSelf);

VL_INLINE_OPT QData Vadder_subtractor_4bit___024root___change_request(Vadder_subtractor_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_subtractor_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_subtractor_4bit___024root___change_request\n"); );
    // Body
    return (Vadder_subtractor_4bit___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vadder_subtractor_4bit___024root___change_request_1(Vadder_subtractor_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_subtractor_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_subtractor_4bit___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->Adder_subtractor_4bit__DOT__c ^ vlSelf->__Vchglast__TOP__Adder_subtractor_4bit__DOT__c));
    VL_DEBUG_IF( if(__req && ((vlSelf->Adder_subtractor_4bit__DOT__c ^ vlSelf->__Vchglast__TOP__Adder_subtractor_4bit__DOT__c))) VL_DBG_MSGF("        CHANGE: adder_subtractor_4bit.v:6: Adder_subtractor_4bit.c\n"); );
    // Final
    vlSelf->__Vchglast__TOP__Adder_subtractor_4bit__DOT__c 
        = vlSelf->Adder_subtractor_4bit__DOT__c;
    return __req;
}

#ifdef VL_DEBUG
void Vadder_subtractor_4bit___024root___eval_debug_assertions(Vadder_subtractor_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder_subtractor_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_subtractor_4bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
