// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram.h for the primary calling header

#include "Vram___024root.h"
#include "Vram__Syms.h"

//==========

VL_INLINE_OPT void Vram___024root___sequent__TOP__1(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ram__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvdim0__ram__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v1;
    // Body
    __Vdlyvset__ram__DOT__mem__v0 = 0U;
    __Vdlyvset__ram__DOT__mem__v1 = 0U;
    if (vlSelf->reset) {
        vlSelf->dataread = 0U;
    }
    vlSelf->dataread = vlSelf->ram__DOT__mem[(0x1fU 
                                              & (IData)(vlSelf->address))];
    if ((1U & (((~ (IData)(vlSelf->cs)) & (~ (IData)(vlSelf->write))) 
               & (~ (IData)(vlSelf->read))))) {
        vlSelf->dataread = 0U;
    }
    if ((((IData)(vlSelf->cs) & (~ (IData)(vlSelf->write))) 
         & (IData)(vlSelf->read))) {
        vlSelf->dataread = vlSelf->ram__DOT__mem[(0x1fU 
                                                  & (IData)(vlSelf->address))];
    }
    if ((((IData)(vlSelf->cs) & (IData)(vlSelf->write)) 
         & (~ (IData)(vlSelf->read)))) {
        __Vdlyvval__ram__DOT__mem__v0 = vlSelf->datawrite;
        __Vdlyvset__ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__ram__DOT__mem__v0 = (0x1fU & (IData)(vlSelf->address));
    }
    if ((((IData)(vlSelf->cs) & (IData)(vlSelf->write)) 
         & (IData)(vlSelf->read))) {
        __Vdlyvval__ram__DOT__mem__v1 = vlSelf->datawrite;
        __Vdlyvset__ram__DOT__mem__v1 = 1U;
        __Vdlyvdim0__ram__DOT__mem__v1 = (0x1fU & (IData)(vlSelf->address));
    }
    if (__Vdlyvset__ram__DOT__mem__v0) {
        vlSelf->ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v0] 
            = __Vdlyvval__ram__DOT__mem__v0;
    }
    if (__Vdlyvset__ram__DOT__mem__v1) {
        vlSelf->ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v1] 
            = __Vdlyvval__ram__DOT__mem__v1;
    }
}

void Vram___024root___eval(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vram___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vram___024root___change_request_1(Vram___024root* vlSelf);

VL_INLINE_OPT QData Vram___024root___change_request(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___change_request\n"); );
    // Body
    return (Vram___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vram___024root___change_request_1(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vram___024root___eval_debug_assertions(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_debug_assertions\n"); );
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
