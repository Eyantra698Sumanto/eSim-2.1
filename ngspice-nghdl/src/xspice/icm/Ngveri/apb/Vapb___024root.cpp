// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb.h for the primary calling header

#include "Vapb___024root.h"
#include "Vapb__Syms.h"

//==========

VL_INLINE_OPT void Vapb___024root___sequent__TOP__2(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdlyvset__apb__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__apb__DOT__mem__v33 = 0U;
    if (vlSelf->preset) {
        vlSelf->__Vdlyvset__apb__DOT__mem__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->preset)))) {
        vlSelf->apb__DOT__ps_sync = vlSelf->apb__DOT__ps;
    }
}

VL_INLINE_OPT void Vapb___024root___sequent__TOP__3(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___sequent__TOP__3\n"); );
    // Body
    if (((2U == (IData)(vlSelf->apb__DOT__ps)) & (IData)(vlSelf->pwrite))) {
        vlSelf->__Vdlyvval__apb__DOT__mem__v33 = vlSelf->pwdata;
        vlSelf->__Vdlyvset__apb__DOT__mem__v33 = 1U;
        vlSelf->__Vdlyvdim0__apb__DOT__mem__v33 = vlSelf->paddress;
    }
    if ((1U & (~ ((2U == (IData)(vlSelf->apb__DOT__ps)) 
                  & (IData)(vlSelf->pwrite))))) {
        if (((2U == (IData)(vlSelf->apb__DOT__ps)) 
             & (~ (IData)(vlSelf->pwrite)))) {
            vlSelf->prdata = vlSelf->apb__DOT__mem[vlSelf->paddress];
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vapb__ConstPool__TABLE_a06fba3c_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vapb__ConstPool__TABLE_129ebfc0_0;

VL_INLINE_OPT void Vapb___024root___settle__TOP__4(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___settle__TOP__4\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->penable) << 3U) 
                    | (((IData)(vlSelf->psel) << 2U) 
                       | (IData)(vlSelf->apb__DOT__ps_sync)));
    if (Vapb__ConstPool__TABLE_a06fba3c_0[__Vtableidx1]) {
        vlSelf->apb__DOT__ps = Vapb__ConstPool__TABLE_129ebfc0_0
            [__Vtableidx1];
    }
}

VL_INLINE_OPT void Vapb___024root___sequent__TOP__5(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___sequent__TOP__5\n"); );
    // Body
    if (vlSelf->__Vdlyvset__apb__DOT__mem__v0) {
        vlSelf->apb__DOT__mem[0U] = 0U;
        vlSelf->apb__DOT__mem[1U] = 0U;
        vlSelf->apb__DOT__mem[2U] = 0U;
        vlSelf->apb__DOT__mem[3U] = 0U;
        vlSelf->apb__DOT__mem[4U] = 0U;
        vlSelf->apb__DOT__mem[5U] = 0U;
        vlSelf->apb__DOT__mem[6U] = 0U;
        vlSelf->apb__DOT__mem[7U] = 0U;
        vlSelf->apb__DOT__mem[8U] = 0U;
        vlSelf->apb__DOT__mem[9U] = 0U;
        vlSelf->apb__DOT__mem[0xaU] = 0U;
        vlSelf->apb__DOT__mem[0xbU] = 0U;
        vlSelf->apb__DOT__mem[0xcU] = 0U;
        vlSelf->apb__DOT__mem[0xdU] = 0U;
        vlSelf->apb__DOT__mem[0xeU] = 0U;
        vlSelf->apb__DOT__mem[0xfU] = 0U;
        vlSelf->apb__DOT__mem[0x10U] = 0U;
        vlSelf->apb__DOT__mem[0x11U] = 0U;
        vlSelf->apb__DOT__mem[0x12U] = 0U;
        vlSelf->apb__DOT__mem[0x13U] = 0U;
        vlSelf->apb__DOT__mem[0x14U] = 0U;
        vlSelf->apb__DOT__mem[0x15U] = 0U;
        vlSelf->apb__DOT__mem[0x16U] = 0U;
        vlSelf->apb__DOT__mem[0x17U] = 0U;
        vlSelf->apb__DOT__mem[0x18U] = 0U;
        vlSelf->apb__DOT__mem[0x19U] = 0U;
        vlSelf->apb__DOT__mem[0x1aU] = 0U;
        vlSelf->apb__DOT__mem[0x1bU] = 0U;
        vlSelf->apb__DOT__mem[0x1cU] = 0U;
        vlSelf->apb__DOT__mem[0x1dU] = 0U;
        vlSelf->apb__DOT__mem[0x1eU] = 0U;
        vlSelf->apb__DOT__mem[0x1fU] = 0U;
        vlSelf->apb__DOT__mem[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__apb__DOT__mem__v33) {
        vlSelf->apb__DOT__mem[vlSelf->__Vdlyvdim0__apb__DOT__mem__v33] 
            = vlSelf->__Vdlyvval__apb__DOT__mem__v33;
    }
    if (vlSelf->preset) {
        vlSelf->apb__DOT__ps = 0U;
        vlSelf->apb__DOT__ps = 0U;
    }
}

void Vapb___024root___eval(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->pclk) & (~ (IData)(vlSelf->__Vclklast__TOP__pclk))) 
         | ((IData)(vlSelf->preset) & (~ (IData)(vlSelf->__Vclklast__TOP__preset))))) {
        Vapb___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->pclk) & (~ (IData)(vlSelf->__Vclklast__TOP__pclk)))) {
        Vapb___024root___sequent__TOP__3(vlSelf);
    }
    if ((((IData)(vlSelf->pclk) & (~ (IData)(vlSelf->__Vclklast__TOP__pclk))) 
         | ((IData)(vlSelf->preset) & (~ (IData)(vlSelf->__Vclklast__TOP__preset))))) {
        Vapb___024root___sequent__TOP__5(vlSelf);
    }
    Vapb___024root___settle__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__pclk = vlSelf->pclk;
    vlSelf->__Vclklast__TOP__preset = vlSelf->preset;
}

QData Vapb___024root___change_request_1(Vapb___024root* vlSelf);

VL_INLINE_OPT QData Vapb___024root___change_request(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___change_request\n"); );
    // Body
    return (Vapb___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vapb___024root___change_request_1(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb___024root___eval_debug_assertions(Vapb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->pclk & 0xfeU))) {
        Verilated::overWidthError("pclk");}
    if (VL_UNLIKELY((vlSelf->pwrite & 0xfeU))) {
        Verilated::overWidthError("pwrite");}
    if (VL_UNLIKELY((vlSelf->preset & 0xfeU))) {
        Verilated::overWidthError("preset");}
    if (VL_UNLIKELY((vlSelf->penable & 0xfeU))) {
        Verilated::overWidthError("penable");}
    if (VL_UNLIKELY((vlSelf->psel & 0xfeU))) {
        Verilated::overWidthError("psel");}
    if (VL_UNLIKELY((vlSelf->paddress & 0xe0U))) {
        Verilated::overWidthError("paddress");}
}
#endif  // VL_DEBUG
