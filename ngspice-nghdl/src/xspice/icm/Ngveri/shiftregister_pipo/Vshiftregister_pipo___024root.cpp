// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftregister_pipo.h for the primary calling header

#include "Vshiftregister_pipo___024root.h"
#include "Vshiftregister_pipo__Syms.h"

//==========

VL_INLINE_OPT void Vshiftregister_pipo___024root___sequent__TOP__1(Vshiftregister_pipo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister_pipo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister_pipo___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->Po = vlSelf->Pi;
}

void Vshiftregister_pipo___024root___eval(Vshiftregister_pipo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister_pipo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister_pipo___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->Clk) & (~ (IData)(vlSelf->__Vclklast__TOP__Clk)))) {
        Vshiftregister_pipo___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__Clk = vlSelf->Clk;
}

QData Vshiftregister_pipo___024root___change_request_1(Vshiftregister_pipo___024root* vlSelf);

VL_INLINE_OPT QData Vshiftregister_pipo___024root___change_request(Vshiftregister_pipo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister_pipo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister_pipo___024root___change_request\n"); );
    // Body
    return (Vshiftregister_pipo___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vshiftregister_pipo___024root___change_request_1(Vshiftregister_pipo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister_pipo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister_pipo___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vshiftregister_pipo___024root___eval_debug_assertions(Vshiftregister_pipo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister_pipo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister_pipo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->Clk & 0xfeU))) {
        Verilated::overWidthError("Clk");}
    if (VL_UNLIKELY((vlSelf->Pi & 0xf0U))) {
        Verilated::overWidthError("Pi");}
}
#endif  // VL_DEBUG
