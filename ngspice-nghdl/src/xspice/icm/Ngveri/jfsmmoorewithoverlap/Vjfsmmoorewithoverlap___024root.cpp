// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjfsmmoorewithoverlap.h for the primary calling header

#include "Vjfsmmoorewithoverlap___024root.h"
#include "Vjfsmmoorewithoverlap__Syms.h"

//==========

VL_INLINE_OPT void Vjfsmmoorewithoverlap___024root___sequent__TOP__1(Vjfsmmoorewithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmoorewithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmoorewithoverlap___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->jfsmMooreWithOverlap__DOT__cs = ((IData)(vlSelf->reset)
                                              ? 0U : (IData)(vlSelf->jfsmMooreWithOverlap__DOT__ns));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vjfsmmoorewithoverlap__ConstPool__TABLE_5b4b4e70_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vjfsmmoorewithoverlap__ConstPool__TABLE_8e3628f0_0;

VL_INLINE_OPT void Vjfsmmoorewithoverlap___024root___settle__TOP__2(Vjfsmmoorewithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmoorewithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmoorewithoverlap___024root___settle__TOP__2\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    // Body
    vlSelf->dataout = ((4U == (IData)(vlSelf->jfsmMooreWithOverlap__DOT__cs)) 
                       & (IData)(vlSelf->datain));
    __Vtableidx1 = (((IData)(vlSelf->datain) << 3U) 
                    | (IData)(vlSelf->jfsmMooreWithOverlap__DOT__cs));
    if (Vjfsmmoorewithoverlap__ConstPool__TABLE_5b4b4e70_0
        [__Vtableidx1]) {
        vlSelf->jfsmMooreWithOverlap__DOT__ns = Vjfsmmoorewithoverlap__ConstPool__TABLE_8e3628f0_0
            [__Vtableidx1];
    }
}

void Vjfsmmoorewithoverlap___024root___eval(Vjfsmmoorewithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmoorewithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmoorewithoverlap___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vjfsmmoorewithoverlap___024root___sequent__TOP__1(vlSelf);
    }
    Vjfsmmoorewithoverlap___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vjfsmmoorewithoverlap___024root___change_request_1(Vjfsmmoorewithoverlap___024root* vlSelf);

VL_INLINE_OPT QData Vjfsmmoorewithoverlap___024root___change_request(Vjfsmmoorewithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmoorewithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmoorewithoverlap___024root___change_request\n"); );
    // Body
    return (Vjfsmmoorewithoverlap___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjfsmmoorewithoverlap___024root___change_request_1(Vjfsmmoorewithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmoorewithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmoorewithoverlap___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vjfsmmoorewithoverlap___024root___eval_debug_assertions(Vjfsmmoorewithoverlap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjfsmmoorewithoverlap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjfsmmoorewithoverlap___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->datain & 0xfeU))) {
        Verilated::overWidthError("datain");}
}
#endif  // VL_DEBUG
