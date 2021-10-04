// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm12.h for the primary calling header

#include "Vm12___024root.h"
#include "Vm12__Syms.h"

//==========

VL_INLINE_OPT void Vm12___024root___combo__TOP__2(Vm12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm12___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->Y = ((IData)(vlSelf->A) & (IData)(vlSelf->B));
}

void Vm12___024root___eval(Vm12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm12___024root___eval\n"); );
    // Body
    Vm12___024root___combo__TOP__2(vlSelf);
}

QData Vm12___024root___change_request_1(Vm12___024root* vlSelf);

VL_INLINE_OPT QData Vm12___024root___change_request(Vm12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm12___024root___change_request\n"); );
    // Body
    return (Vm12___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vm12___024root___change_request_1(Vm12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm12___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vm12___024root___eval_debug_assertions(Vm12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm12___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xfeU))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xfeU))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
