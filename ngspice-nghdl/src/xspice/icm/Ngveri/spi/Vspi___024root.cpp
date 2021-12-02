// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi.h for the primary calling header

#include "Vspi___024root.h"
#include "Vspi__Syms.h"

//==========

VL_INLINE_OPT void Vspi___024root___sequent__TOP__1(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdly__spi__DOT__mosi_buf;
    CData/*7:0*/ __Vdly__spi__DOT__in_buf;
    CData/*4:0*/ __Vdly__spi__DOT__cnt;
    CData/*0:0*/ __Vdly__spi__DOT__busy;
    // Body
    __Vdly__spi__DOT__cnt = vlSelf->spi__DOT__cnt;
    __Vdly__spi__DOT__in_buf = vlSelf->spi__DOT__in_buf;
    __Vdly__spi__DOT__mosi_buf = vlSelf->spi__DOT__mosi_buf;
    __Vdly__spi__DOT__busy = vlSelf->spi__DOT__busy;
    if (vlSelf->spi__DOT__busy) {
        vlSelf->spi__DOT__clk_cnt = (0xffU & ((IData)(1U) 
                                              + (IData)(vlSelf->spi__DOT__clk_cnt)));
        if ((0U == (1U & (IData)(vlSelf->spi__DOT__cnt)))) {
            __Vdly__spi__DOT__mosi_buf = (1U & ((IData)(vlSelf->spi__DOT__in_buf) 
                                                >> 7U));
            __Vdly__spi__DOT__in_buf = (0xffU & ((IData)(vlSelf->spi__DOT__in_buf) 
                                                 << 1U));
        } else {
            __Vdly__spi__DOT__mosi_buf = vlSelf->spi__DOT__mosi_buf;
        }
        vlSelf->spi__DOT__clk_cnt = 0U;
        if (((0U < (IData)(vlSelf->spi__DOT__cnt)) 
             & (0x11U > (IData)(vlSelf->spi__DOT__cnt)))) {
            vlSelf->spi__DOT__sclk_buf = (1U & (~ (IData)(vlSelf->spi__DOT__sclk_buf)));
        }
        if ((0x11U <= (IData)(vlSelf->spi__DOT__cnt))) {
            __Vdly__spi__DOT__cnt = 0U;
            __Vdly__spi__DOT__busy = 0U;
        } else {
            __Vdly__spi__DOT__cnt = vlSelf->spi__DOT__cnt;
            __Vdly__spi__DOT__busy = vlSelf->spi__DOT__busy;
        }
        __Vdly__spi__DOT__cnt = (0x1fU & ((IData)(1U) 
                                          + (IData)(vlSelf->spi__DOT__cnt)));
    } else if (((IData)(vlSelf->cs) & (IData)(vlSelf->wr))) {
        if ((0U == (IData)(vlSelf->addr))) {
            __Vdly__spi__DOT__in_buf = vlSelf->in_data;
            __Vdly__spi__DOT__busy = 1U;
            __Vdly__spi__DOT__cnt = 0U;
        } else {
            __Vdly__spi__DOT__in_buf = ((2U == (IData)(vlSelf->addr))
                                         ? 0U : (IData)(vlSelf->spi__DOT__in_buf));
        }
    } else if (((IData)(vlSelf->cs) & (IData)(vlSelf->rd))) {
        __Vdly__spi__DOT__busy = 1U;
        __Vdly__spi__DOT__cnt = 0U;
    }
    vlSelf->spi__DOT__cnt = __Vdly__spi__DOT__cnt;
    vlSelf->spi__DOT__in_buf = __Vdly__spi__DOT__in_buf;
    vlSelf->spi__DOT__mosi_buf = __Vdly__spi__DOT__mosi_buf;
    vlSelf->spi__DOT__busy = __Vdly__spi__DOT__busy;
    vlSelf->mosi = vlSelf->spi__DOT__mosi_buf;
}

VL_INLINE_OPT void Vspi___024root___combo__TOP__3(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->sclk = vlSelf->spi__DOT__sclk_buf;
}

VL_INLINE_OPT void Vspi___024root___sequent__TOP__4(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*7:0*/ __Vdly__spi__DOT__out_buf;
    // Body
    __Vdly__spi__DOT__out_buf = vlSelf->spi__DOT__out_buf;
    __Vdly__spi__DOT__out_buf = ((0xfeU & (IData)(__Vdly__spi__DOT__out_buf)) 
                                 | (IData)(vlSelf->miso));
    __Vdly__spi__DOT__out_buf = (0xffU & ((IData)(vlSelf->spi__DOT__out_buf) 
                                          << 1U));
    vlSelf->spi__DOT__out_buf = __Vdly__spi__DOT__out_buf;
}

VL_INLINE_OPT void Vspi___024root___combo__TOP__6(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___combo__TOP__6\n"); );
    // Body
    vlSelf->out_data = 0U;
    if (((IData)(vlSelf->cs) & (IData)(vlSelf->rd))) {
        if ((0U == (IData)(vlSelf->addr))) {
            vlSelf->out_data = vlSelf->spi__DOT__out_buf;
        } else if ((1U == (IData)(vlSelf->addr))) {
            vlSelf->out_data = vlSelf->spi__DOT__busy;
        } else if ((2U == (IData)(vlSelf->addr))) {
            vlSelf->out_data = 0U;
        }
    }
}

void Vspi___024root___eval(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vspi___024root___sequent__TOP__1(vlSelf);
    }
    Vspi___024root___combo__TOP__3(vlSelf);
    if (((IData)(vlSelf->__VinpClk__TOP__spi__DOT__sclk_buf) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__spi__DOT__sclk_buf)))) {
        Vspi___024root___sequent__TOP__4(vlSelf);
    }
    Vspi___024root___combo__TOP__6(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__spi__DOT__sclk_buf 
        = vlSelf->__VinpClk__TOP__spi__DOT__sclk_buf;
    vlSelf->__VinpClk__TOP__spi__DOT__sclk_buf = vlSelf->spi__DOT__sclk_buf;
}

QData Vspi___024root___change_request_1(Vspi___024root* vlSelf);

VL_INLINE_OPT QData Vspi___024root___change_request(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___change_request\n"); );
    // Body
    return (Vspi___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vspi___024root___change_request_1(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->spi__DOT__sclk_buf ^ vlSelf->__Vchglast__TOP__spi__DOT__sclk_buf));
    VL_DEBUG_IF( if(__req && ((vlSelf->spi__DOT__sclk_buf ^ vlSelf->__Vchglast__TOP__spi__DOT__sclk_buf))) VL_DBG_MSGF("        CHANGE: spi.v:51: spi.sclk_buf\n"); );
    // Final
    vlSelf->__Vchglast__TOP__spi__DOT__sclk_buf = vlSelf->spi__DOT__sclk_buf;
    return __req;
}

#ifdef VL_DEBUG
void Vspi___024root___eval_debug_assertions(Vspi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->addr & 0xfcU))) {
        Verilated::overWidthError("addr");}
    if (VL_UNLIKELY((vlSelf->wr & 0xfeU))) {
        Verilated::overWidthError("wr");}
    if (VL_UNLIKELY((vlSelf->rd & 0xfeU))) {
        Verilated::overWidthError("rd");}
    if (VL_UNLIKELY((vlSelf->cs & 0xfeU))) {
        Verilated::overWidthError("cs");}
    if (VL_UNLIKELY((vlSelf->mosi & 0xfeU))) {
        Verilated::overWidthError("mosi");}
    if (VL_UNLIKELY((vlSelf->miso & 0xfeU))) {
        Verilated::overWidthError("miso");}
    if (VL_UNLIKELY((vlSelf->sclk & 0xfeU))) {
        Verilated::overWidthError("sclk");}
}
#endif  // VL_DEBUG
