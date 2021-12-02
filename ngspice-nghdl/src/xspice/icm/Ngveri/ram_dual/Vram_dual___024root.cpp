// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram_dual.h for the primary calling header

#include "Vram_dual___024root.h"
#include "Vram_dual__Syms.h"

//==========

VL_INLINE_OPT void Vram_dual___024root___sequent__TOP__1(Vram_dual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_dual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_dual___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->q = vlSelf->ram_dual__DOT__ram[vlSelf->read_addr];
}

VL_INLINE_OPT void Vram_dual___024root___sequent__TOP__2(Vram_dual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_dual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_dual___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*5:0*/ __Vdlyvdim0__ram_dual__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__ram_dual__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ram_dual__DOT__ram__v0;
    // Body
    __Vdlyvset__ram_dual__DOT__ram__v0 = 0U;
    if (vlSelf->we) {
        __Vdlyvval__ram_dual__DOT__ram__v0 = vlSelf->data;
        __Vdlyvset__ram_dual__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ram_dual__DOT__ram__v0 = vlSelf->write_addr;
    }
    if (__Vdlyvset__ram_dual__DOT__ram__v0) {
        vlSelf->ram_dual__DOT__ram[__Vdlyvdim0__ram_dual__DOT__ram__v0] 
            = __Vdlyvval__ram_dual__DOT__ram__v0;
    }
}

void Vram_dual___024root___eval(Vram_dual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_dual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_dual___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->read_clock) & (~ (IData)(vlSelf->__Vclklast__TOP__read_clock)))) {
        Vram_dual___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->write_clock) & (~ (IData)(vlSelf->__Vclklast__TOP__write_clock)))) {
        Vram_dual___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__read_clock = vlSelf->read_clock;
    vlSelf->__Vclklast__TOP__write_clock = vlSelf->write_clock;
}

QData Vram_dual___024root___change_request_1(Vram_dual___024root* vlSelf);

VL_INLINE_OPT QData Vram_dual___024root___change_request(Vram_dual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_dual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_dual___024root___change_request\n"); );
    // Body
    return (Vram_dual___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vram_dual___024root___change_request_1(Vram_dual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_dual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_dual___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vram_dual___024root___eval_debug_assertions(Vram_dual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_dual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_dual___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->read_addr & 0xc0U))) {
        Verilated::overWidthError("read_addr");}
    if (VL_UNLIKELY((vlSelf->write_addr & 0xc0U))) {
        Verilated::overWidthError("write_addr");}
    if (VL_UNLIKELY((vlSelf->we & 0xfeU))) {
        Verilated::overWidthError("we");}
    if (VL_UNLIKELY((vlSelf->read_clock & 0xfeU))) {
        Verilated::overWidthError("read_clock");}
    if (VL_UNLIKELY((vlSelf->write_clock & 0xfeU))) {
        Verilated::overWidthError("write_clock");}
}
#endif  // VL_DEBUG
