// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom_using_file.h for the primary calling header

#include "Vrom_using_file___024root.h"
#include "Vrom_using_file__Syms.h"

//==========

VL_INLINE_OPT void Vrom_using_file___024root___combo__TOP__2(Vrom_using_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_using_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_using_file___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->data = (((IData)(vlSelf->ce) & (IData)(vlSelf->read_en))
                     ? vlSelf->rom_using_file__DOT__mem
                    [vlSelf->address] : 0U);
}

void Vrom_using_file___024root___eval(Vrom_using_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_using_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_using_file___024root___eval\n"); );
    // Body
    Vrom_using_file___024root___combo__TOP__2(vlSelf);
}

QData Vrom_using_file___024root___change_request_1(Vrom_using_file___024root* vlSelf);

VL_INLINE_OPT QData Vrom_using_file___024root___change_request(Vrom_using_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_using_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_using_file___024root___change_request\n"); );
    // Body
    return (Vrom_using_file___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vrom_using_file___024root___change_request_1(Vrom_using_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_using_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_using_file___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vrom_using_file___024root___eval_debug_assertions(Vrom_using_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_using_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_using_file___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->read_en & 0xfeU))) {
        Verilated::overWidthError("read_en");}
    if (VL_UNLIKELY((vlSelf->ce & 0xfeU))) {
        Verilated::overWidthError("ce");}
}
#endif  // VL_DEBUG
