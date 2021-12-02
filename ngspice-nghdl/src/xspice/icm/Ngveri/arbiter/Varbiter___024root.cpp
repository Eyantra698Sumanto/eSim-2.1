// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varbiter.h for the primary calling header

#include "Varbiter___024root.h"
#include "Varbiter__Syms.h"

//==========

VL_INLINE_OPT void Varbiter___024root___sequent__TOP__1(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdly__arbiter__DOT__lasmask;
    CData/*0:0*/ __Vdly__arbiter__DOT__lmask1;
    CData/*0:0*/ __Vdly__arbiter__DOT__lmask0;
    CData/*31:0*/ __Vtemp2;
    CData/*31:0*/ __Vtemp3;
    CData/*31:0*/ __Vtemp4;
    CData/*31:0*/ __Vtemp5;
    // Body
    __Vdly__arbiter__DOT__lasmask = vlSelf->arbiter__DOT__lasmask;
    __Vdly__arbiter__DOT__lmask0 = vlSelf->arbiter__DOT__lmask0;
    __Vdly__arbiter__DOT__lmask1 = vlSelf->arbiter__DOT__lmask1;
    __Vdly__arbiter__DOT__lasmask = (((IData)(vlSelf->arbiter__DOT__beg) 
                                      & (~ (IData)(vlSelf->arbiter__DOT__ledge))) 
                                     & (~ (IData)(vlSelf->arbiter__DOT__lasmask)));
    vlSelf->arbiter__DOT__ledge = ((((IData)(vlSelf->arbiter__DOT__beg) 
                                     & (~ (IData)(vlSelf->arbiter__DOT__ledge))) 
                                    & (IData)(vlSelf->arbiter__DOT__lasmask)) 
                                   | (((IData)(vlSelf->arbiter__DOT__beg) 
                                       & (IData)(vlSelf->arbiter__DOT__ledge)) 
                                      & (~ (IData)(vlSelf->arbiter__DOT__lasmask))));
    __Vdly__arbiter__DOT__lmask0 = (1U & ((~ (IData)(vlSelf->rst)) 
                                          & ((IData)(vlSelf->arbiter__DOT__lasmask)
                                              ? (IData)(vlSelf->arbiter__DOT__lgnt)
                                              : (IData)(vlSelf->arbiter__DOT__lmask0))));
    __Vdly__arbiter__DOT__lmask1 = (1U & ((~ (IData)(vlSelf->rst)) 
                                          & ((IData)(vlSelf->arbiter__DOT__lasmask)
                                              ? ((IData)(vlSelf->arbiter__DOT__lgnt) 
                                                 >> 1U)
                                              : (IData)(vlSelf->arbiter__DOT__lmask1))));
    __Vtemp2 = ((~ (IData)(vlSelf->rst)) & ((((((((
                                                   (((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                     & (~ (IData)(vlSelf->arbiter__DOT__lmask1))) 
                                                    & (~ (IData)(vlSelf->arbiter__DOT__lmask0))) 
                                                   & (~ (IData)(vlSelf->req3))) 
                                                  & (~ (IData)(vlSelf->req2))) 
                                                 & (~ (IData)(vlSelf->req1))) 
                                                | (((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                      & (~ (IData)(vlSelf->arbiter__DOT__lmask1))) 
                                                     & (IData)(vlSelf->arbiter__DOT__lmask0)) 
                                                    & (~ (IData)(vlSelf->req3))) 
                                                   & (~ (IData)(vlSelf->req2)))) 
                                               | ((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                    & (IData)(vlSelf->arbiter__DOT__lmask1)) 
                                                   & (~ (IData)(vlSelf->arbiter__DOT__lmask0))) 
                                                  & (~ (IData)(vlSelf->req3)))) 
                                              | (((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                  & (IData)(vlSelf->arbiter__DOT__lmask1)) 
                                                 & (IData)(vlSelf->arbiter__DOT__lmask0))) 
                                             & (IData)(vlSelf->req0)) 
                                            | ((IData)(vlSelf->arbiter__DOT__lcomreq) 
                                               & (IData)(vlSelf->arbiter__DOT__lgnt0))));
    vlSelf->arbiter__DOT__lgnt0 = __Vtemp2;
    __Vtemp3 = ((~ (IData)(vlSelf->rst)) & ((((((((
                                                   ((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                    & (~ (IData)(vlSelf->arbiter__DOT__lmask1))) 
                                                   & (~ (IData)(vlSelf->arbiter__DOT__lmask0))) 
                                                  & (IData)(vlSelf->req3)) 
                                                 & (~ (IData)(vlSelf->req2))) 
                                                & (~ (IData)(vlSelf->req1))) 
                                               | (((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                     & (~ (IData)(vlSelf->arbiter__DOT__lmask1))) 
                                                    & (IData)(vlSelf->arbiter__DOT__lmask0)) 
                                                   & (IData)(vlSelf->req3)) 
                                                  & (~ (IData)(vlSelf->req2)))) 
                                              | ((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                   & (IData)(vlSelf->arbiter__DOT__lmask1)) 
                                                  & (~ (IData)(vlSelf->arbiter__DOT__lmask0))) 
                                                 & (IData)(vlSelf->req3))) 
                                             | (((((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                     & (IData)(vlSelf->arbiter__DOT__lmask1)) 
                                                    & (IData)(vlSelf->arbiter__DOT__lmask0)) 
                                                   & (IData)(vlSelf->req3)) 
                                                  & (~ (IData)(vlSelf->req2))) 
                                                 & (~ (IData)(vlSelf->req1))) 
                                                & (~ (IData)(vlSelf->req0)))) 
                                            | ((IData)(vlSelf->arbiter__DOT__lcomreq) 
                                               & (IData)(vlSelf->arbiter__DOT__lgnt3))));
    vlSelf->arbiter__DOT__lgnt3 = __Vtemp3;
    __Vtemp4 = ((~ (IData)(vlSelf->rst)) & ((((((((
                                                   (~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                   & (~ (IData)(vlSelf->arbiter__DOT__lmask1))) 
                                                  & (~ (IData)(vlSelf->arbiter__DOT__lmask0))) 
                                                 & (IData)(vlSelf->req2)) 
                                                & (~ (IData)(vlSelf->req1))) 
                                               | ((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                    & (~ (IData)(vlSelf->arbiter__DOT__lmask1))) 
                                                   & (IData)(vlSelf->arbiter__DOT__lmask0)) 
                                                  & (IData)(vlSelf->req2))) 
                                              | (((((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                      & (IData)(vlSelf->arbiter__DOT__lmask1)) 
                                                     & (~ (IData)(vlSelf->arbiter__DOT__lmask0))) 
                                                    & (~ (IData)(vlSelf->req3))) 
                                                   & (IData)(vlSelf->req2)) 
                                                  & (~ (IData)(vlSelf->req1))) 
                                                 & (~ (IData)(vlSelf->req0)))) 
                                             | ((((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                    & (IData)(vlSelf->arbiter__DOT__lmask1)) 
                                                   & (IData)(vlSelf->arbiter__DOT__lmask0)) 
                                                  & (IData)(vlSelf->req2)) 
                                                 & (~ (IData)(vlSelf->req1))) 
                                                & (~ (IData)(vlSelf->req0)))) 
                                            | ((IData)(vlSelf->arbiter__DOT__lcomreq) 
                                               & (IData)(vlSelf->arbiter__DOT__lgnt2))));
    vlSelf->arbiter__DOT__lgnt2 = __Vtemp4;
    __Vtemp5 = ((~ (IData)(vlSelf->rst)) & ((((((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                  & (~ (IData)(vlSelf->arbiter__DOT__lmask1))) 
                                                 & (~ (IData)(vlSelf->arbiter__DOT__lmask0))) 
                                                & (IData)(vlSelf->req1)) 
                                               | (((((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                       & (~ (IData)(vlSelf->arbiter__DOT__lmask1))) 
                                                      & (IData)(vlSelf->arbiter__DOT__lmask0)) 
                                                     & (~ (IData)(vlSelf->req3))) 
                                                    & (~ (IData)(vlSelf->req2))) 
                                                   & (IData)(vlSelf->req1)) 
                                                  & (~ (IData)(vlSelf->req0)))) 
                                              | ((((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                     & (IData)(vlSelf->arbiter__DOT__lmask1)) 
                                                    & (~ (IData)(vlSelf->arbiter__DOT__lmask0))) 
                                                   & (~ (IData)(vlSelf->req3))) 
                                                  & (IData)(vlSelf->req1)) 
                                                 & (~ (IData)(vlSelf->req0)))) 
                                             | (((((~ (IData)(vlSelf->arbiter__DOT__lcomreq)) 
                                                   & (IData)(vlSelf->arbiter__DOT__lmask1)) 
                                                  & (IData)(vlSelf->arbiter__DOT__lmask0)) 
                                                 & (IData)(vlSelf->req1)) 
                                                & (~ (IData)(vlSelf->req0)))) 
                                            | ((IData)(vlSelf->arbiter__DOT__lcomreq) 
                                               & (IData)(vlSelf->arbiter__DOT__lgnt1))));
    vlSelf->arbiter__DOT__lgnt1 = __Vtemp5;
    vlSelf->arbiter__DOT__lasmask = __Vdly__arbiter__DOT__lasmask;
    vlSelf->arbiter__DOT__lmask1 = __Vdly__arbiter__DOT__lmask1;
    vlSelf->arbiter__DOT__lmask0 = __Vdly__arbiter__DOT__lmask0;
    vlSelf->gnt0 = vlSelf->arbiter__DOT__lgnt0;
    vlSelf->gnt3 = vlSelf->arbiter__DOT__lgnt3;
    vlSelf->gnt2 = vlSelf->arbiter__DOT__lgnt2;
    vlSelf->gnt1 = vlSelf->arbiter__DOT__lgnt1;
    vlSelf->arbiter__DOT__lgnt = ((((IData)(vlSelf->arbiter__DOT__lgnt3) 
                                    | (IData)(vlSelf->arbiter__DOT__lgnt2)) 
                                   << 1U) | ((IData)(vlSelf->arbiter__DOT__lgnt3) 
                                             | (IData)(vlSelf->arbiter__DOT__lgnt1)));
}

VL_INLINE_OPT void Varbiter___024root___combo__TOP__3(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->arbiter__DOT__lcomreq = (((((IData)(vlSelf->req3) 
                                        & (IData)(vlSelf->arbiter__DOT__lgnt3)) 
                                       | ((IData)(vlSelf->req2) 
                                          & (IData)(vlSelf->arbiter__DOT__lgnt2))) 
                                      | ((IData)(vlSelf->req1) 
                                         & (IData)(vlSelf->arbiter__DOT__lgnt1))) 
                                     | ((IData)(vlSelf->req0) 
                                        & (IData)(vlSelf->arbiter__DOT__lgnt0)));
    vlSelf->arbiter__DOT__beg = (((((IData)(vlSelf->req3) 
                                    | (IData)(vlSelf->req2)) 
                                   | (IData)(vlSelf->req1)) 
                                  | (IData)(vlSelf->req0)) 
                                 & (~ (IData)(vlSelf->arbiter__DOT__lcomreq)));
}

void Varbiter___024root___eval(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Varbiter___024root___sequent__TOP__1(vlSelf);
    }
    Varbiter___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Varbiter___024root___change_request_1(Varbiter___024root* vlSelf);

VL_INLINE_OPT QData Varbiter___024root___change_request(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___change_request\n"); );
    // Body
    return (Varbiter___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Varbiter___024root___change_request_1(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Varbiter___024root___eval_debug_assertions(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->req3 & 0xfeU))) {
        Verilated::overWidthError("req3");}
    if (VL_UNLIKELY((vlSelf->req2 & 0xfeU))) {
        Verilated::overWidthError("req2");}
    if (VL_UNLIKELY((vlSelf->req1 & 0xfeU))) {
        Verilated::overWidthError("req1");}
    if (VL_UNLIKELY((vlSelf->req0 & 0xfeU))) {
        Verilated::overWidthError("req0");}
}
#endif  // VL_DEBUG
