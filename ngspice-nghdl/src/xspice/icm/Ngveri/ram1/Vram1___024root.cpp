// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram1.h for the primary calling header

#include "Vram1___024root.h"
#include "Vram1__Syms.h"

//==========

VL_INLINE_OPT void Vram1___024root___sequent__TOP__1(Vram1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram1___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ram1__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__ram1__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__ram1__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvdim0__ram1__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__ram1__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__ram1__DOT__mem__v1;
    // Body
    __Vdlyvset__ram1__DOT__mem__v0 = 0U;
    __Vdlyvset__ram1__DOT__mem__v1 = 0U;
    if (vlSelf->reset) {
        vlSelf->dataread = 0U;
    }
    vlSelf->dataread = vlSelf->ram1__DOT__mem[(0x1fU 
                                               & (IData)(vlSelf->address))];
    if ((1U & (((~ (IData)(vlSelf->cs)) & (~ (IData)(vlSelf->write))) 
               & (~ (IData)(vlSelf->read))))) {
        vlSelf->dataread = 0U;
    }
    if ((((IData)(vlSelf->cs) & (~ (IData)(vlSelf->write))) 
         & (IData)(vlSelf->read))) {
        vlSelf->dataread = vlSelf->ram1__DOT__mem[(0x1fU 
                                                   & (IData)(vlSelf->address))];
    }
    if ((((IData)(vlSelf->cs) & (IData)(vlSelf->write)) 
         & (~ (IData)(vlSelf->read)))) {
        __Vdlyvval__ram1__DOT__mem__v0 = vlSelf->datawrite;
        __Vdlyvset__ram1__DOT__mem__v0 = 1U;
        __Vdlyvdim0__ram1__DOT__mem__v0 = (0x1fU & (IData)(vlSelf->address));
    }
    if ((((IData)(vlSelf->cs) & (IData)(vlSelf->write)) 
         & (IData)(vlSelf->read))) {
        __Vdlyvval__ram1__DOT__mem__v1 = vlSelf->datawrite;
        __Vdlyvset__ram1__DOT__mem__v1 = 1U;
        __Vdlyvdim0__ram1__DOT__mem__v1 = (0x1fU & (IData)(vlSelf->address));
    }
    if (__Vdlyvset__ram1__DOT__mem__v0) {
        vlSelf->ram1__DOT__mem[__Vdlyvdim0__ram1__DOT__mem__v0] 
            = __Vdlyvval__ram1__DOT__mem__v0;
    }
    if (__Vdlyvset__ram1__DOT__mem__v1) {
        vlSelf->ram1__DOT__mem[__Vdlyvdim0__ram1__DOT__mem__v1] 
            = __Vdlyvval__ram1__DOT__mem__v1;
    }
}

void Vram1___024root___eval(Vram1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram1___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vram1___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vram1___024root___change_request_1(Vram1___024root* vlSelf);

VL_INLINE_OPT QData Vram1___024root___change_request(Vram1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram1___024root___change_request\n"); );
    // Body
    return (Vram1___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vram1___024root___change_request_1(Vram1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram1___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vram1___024root___eval_debug_assertions(Vram1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->cs & 0xfeU))) {
        Verilated::overWidthError("cs");}
    if (VL_UNLIKELY((vlSelf->read & 0xfeU))) {
        Verilated::overWidthError("read");}
    if (VL_UNLIKELY((vlSelf->write & 0xfeU))) {
        Verilated::overWidthError("write");}
}
#endif  // VL_DEBUG
