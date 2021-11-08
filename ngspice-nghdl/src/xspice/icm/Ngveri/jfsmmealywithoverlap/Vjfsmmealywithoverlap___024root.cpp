// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjfsmmealywithoverlap.h for the primary calling header

#include "Vjfsmmealywithoverlap___024root.h"
#include "Vjfsmmealywithoverlap__Syms.h"

//==========

VL_INLINE_OPT void Vjfsmmealywithoverlap___024root___sequent__TOP__1(Vjfsmmealywithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmealywithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmealywithoverlap___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->jfsmMealyWithOverlap__DOT__cs = ((IData)(vlSelf->reset)
                                              ? 0U : (IData)(vlSelf->jfsmMealyWithOverlap__DOT__ns));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vjfsmmealywithoverlap__ConstPool__TABLE_d14d6431_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vjfsmmealywithoverlap__ConstPool__TABLE_43589013_0;

VL_INLINE_OPT void Vjfsmmealywithoverlap___024root___settle__TOP__2(Vjfsmmealywithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmealywithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmealywithoverlap___024root___settle__TOP__2\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    // Body
    vlSelf->dataout = ((4U == (IData)(vlSelf->jfsmMealyWithOverlap__DOT__cs)) 
                       & (IData)(vlSelf->datain));
    __Vtableidx1 = (((IData)(vlSelf->datain) << 3U) 
                    | (IData)(vlSelf->jfsmMealyWithOverlap__DOT__cs));
    if (Vjfsmmealywithoverlap__ConstPool__TABLE_d14d6431_0
        [__Vtableidx1]) {
        vlSelf->jfsmMealyWithOverlap__DOT__ns = Vjfsmmealywithoverlap__ConstPool__TABLE_43589013_0
            [__Vtableidx1];
    }
}

void Vjfsmmealywithoverlap___024root___eval(Vjfsmmealywithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmealywithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmealywithoverlap___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vjfsmmealywithoverlap___024root___sequent__TOP__1(vlSelf);
    }
    Vjfsmmealywithoverlap___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vjfsmmealywithoverlap___024root___change_request_1(Vjfsmmealywithoverlap___024root* vlSelf);

VL_INLINE_OPT QData Vjfsmmealywithoverlap___024root___change_request(Vjfsmmealywithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmealywithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmealywithoverlap___024root___change_request\n"); );
    // Body
    return (Vjfsmmealywithoverlap___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjfsmmealywithoverlap___024root___change_request_1(Vjfsmmealywithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmealywithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmealywithoverlap___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vjfsmmealywithoverlap___024root___eval_debug_assertions(Vjfsmmealywithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmealywithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmealywithoverlap___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->datain & 0xfeU))) {
        Verilated::overWidthError("datain");}
}
#endif  // VL_DEBUG
