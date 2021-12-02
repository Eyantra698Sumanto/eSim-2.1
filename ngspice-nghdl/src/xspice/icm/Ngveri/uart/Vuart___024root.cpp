// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "Vuart___024root.h"
#include "Vuart__Syms.h"

//==========

VL_INLINE_OPT void Vuart___024root___sequent__TOP__1(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*3:0*/ __Vdly__uart__DOT__rx_sample_cnt;
    CData/*3:0*/ __Vdly__uart__DOT__rx_cnt;
    CData/*0:0*/ __Vdly__uart__DOT__rx_busy;
    // Body
    __Vdly__uart__DOT__rx_busy = vlSelf->uart__DOT__rx_busy;
    __Vdly__uart__DOT__rx_cnt = vlSelf->uart__DOT__rx_cnt;
    __Vdly__uart__DOT__rx_sample_cnt = vlSelf->uart__DOT__rx_sample_cnt;
    if (vlSelf->reset) {
        vlSelf->rx_data = 0U;
    } else if (vlSelf->uld_rx_data) {
        vlSelf->rx_data = vlSelf->uart__DOT__rx_reg;
    }
    if (vlSelf->reset) {
        vlSelf->uart__DOT__rx_reg = 0U;
        __Vdly__uart__DOT__rx_sample_cnt = 0U;
        __Vdly__uart__DOT__rx_cnt = 0U;
        vlSelf->rx_empty = 1U;
        __Vdly__uart__DOT__rx_busy = 0U;
    } else {
        if (vlSelf->uld_rx_data) {
            vlSelf->rx_empty = 1U;
        }
        if (vlSelf->rx_enable) {
            if ((1U & ((~ (IData)(vlSelf->uart__DOT__rx_busy)) 
                       & (~ (IData)(vlSelf->uart__DOT__rx_d2))))) {
                __Vdly__uart__DOT__rx_busy = 1U;
                __Vdly__uart__DOT__rx_sample_cnt = 1U;
                __Vdly__uart__DOT__rx_cnt = 0U;
            }
            if (vlSelf->uart__DOT__rx_busy) {
                __Vdly__uart__DOT__rx_sample_cnt = 
                    (0xfU & ((IData)(1U) + (IData)(vlSelf->uart__DOT__rx_sample_cnt)));
                if ((7U == (IData)(vlSelf->uart__DOT__rx_sample_cnt))) {
                    if (((IData)(vlSelf->uart__DOT__rx_d2) 
                         & (0U == (IData)(vlSelf->uart__DOT__rx_cnt)))) {
                        __Vdly__uart__DOT__rx_busy = 0U;
                    } else {
                        __Vdly__uart__DOT__rx_cnt = 
                            (0xfU & ((IData)(1U) + (IData)(vlSelf->uart__DOT__rx_cnt)));
                        if (((0U < (IData)(vlSelf->uart__DOT__rx_cnt)) 
                             & (9U > (IData)(vlSelf->uart__DOT__rx_cnt)))) {
                            vlSelf->uart__DOT__rx_reg 
                                = (((~ ((IData)(1U) 
                                        << (7U & ((IData)(vlSelf->uart__DOT__rx_cnt) 
                                                  - (IData)(1U))))) 
                                    & (IData)(vlSelf->uart__DOT__rx_reg)) 
                                   | (0xffU & ((IData)(vlSelf->uart__DOT__rx_d2) 
                                               << (7U 
                                                   & ((IData)(vlSelf->uart__DOT__rx_cnt) 
                                                      - (IData)(1U))))));
                        }
                        if ((9U == (IData)(vlSelf->uart__DOT__rx_cnt))) {
                            __Vdly__uart__DOT__rx_busy = 0U;
                            if (vlSelf->uart__DOT__rx_d2) {
                                vlSelf->rx_empty = 0U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->rx_enable)))) {
            __Vdly__uart__DOT__rx_busy = 0U;
        }
    }
    vlSelf->uart__DOT__rx_sample_cnt = __Vdly__uart__DOT__rx_sample_cnt;
    vlSelf->uart__DOT__rx_cnt = __Vdly__uart__DOT__rx_cnt;
    vlSelf->uart__DOT__rx_busy = __Vdly__uart__DOT__rx_busy;
    vlSelf->uart__DOT__rx_d2 = ((IData)(vlSelf->reset) 
                                | (IData)(vlSelf->uart__DOT__rx_d1));
    vlSelf->uart__DOT__rx_d1 = ((IData)(vlSelf->reset) 
                                | (IData)(vlSelf->rx_in));
}

VL_INLINE_OPT void Vuart___024root___sequent__TOP__2(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*7:0*/ __Vdly__uart__DOT__tx_reg;
    CData/*0:0*/ __Vdly__tx_empty;
    CData/*3:0*/ __Vdly__uart__DOT__tx_cnt;
    // Body
    __Vdly__uart__DOT__tx_cnt = vlSelf->uart__DOT__tx_cnt;
    __Vdly__tx_empty = vlSelf->tx_empty;
    __Vdly__uart__DOT__tx_reg = vlSelf->uart__DOT__tx_reg;
    if (vlSelf->reset) {
        __Vdly__uart__DOT__tx_reg = 0U;
        __Vdly__tx_empty = 1U;
        vlSelf->tx_out = 1U;
        __Vdly__uart__DOT__tx_cnt = 0U;
    } else {
        if (vlSelf->ld_tx_data) {
            if (vlSelf->tx_empty) {
                __Vdly__uart__DOT__tx_reg = vlSelf->tx_data;
                __Vdly__tx_empty = 0U;
            }
        }
        if (((IData)(vlSelf->tx_enable) & (~ (IData)(vlSelf->tx_empty)))) {
            __Vdly__uart__DOT__tx_cnt = (0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelf->uart__DOT__tx_cnt)));
            if ((0U == (IData)(vlSelf->uart__DOT__tx_cnt))) {
                vlSelf->tx_out = 0U;
            }
            if (((0U < (IData)(vlSelf->uart__DOT__tx_cnt)) 
                 & (9U > (IData)(vlSelf->uart__DOT__tx_cnt)))) {
                vlSelf->tx_out = (1U & ((IData)(vlSelf->uart__DOT__tx_reg) 
                                        >> (7U & ((IData)(vlSelf->uart__DOT__tx_cnt) 
                                                  - (IData)(1U)))));
            }
            if ((9U == (IData)(vlSelf->uart__DOT__tx_cnt))) {
                vlSelf->tx_out = 1U;
                __Vdly__uart__DOT__tx_cnt = 0U;
                __Vdly__tx_empty = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->tx_enable)))) {
            __Vdly__uart__DOT__tx_cnt = 0U;
        }
    }
    vlSelf->uart__DOT__tx_reg = __Vdly__uart__DOT__tx_reg;
    vlSelf->tx_empty = __Vdly__tx_empty;
    vlSelf->uart__DOT__tx_cnt = __Vdly__uart__DOT__tx_cnt;
}

void Vuart___024root___eval(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))) 
         | ((IData)(vlSelf->rxclk) & (~ (IData)(vlSelf->__Vclklast__TOP__rxclk))))) {
        Vuart___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))) 
         | ((IData)(vlSelf->txclk) & (~ (IData)(vlSelf->__Vclklast__TOP__txclk))))) {
        Vuart___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
    vlSelf->__Vclklast__TOP__rxclk = vlSelf->rxclk;
    vlSelf->__Vclklast__TOP__txclk = vlSelf->txclk;
}

QData Vuart___024root___change_request_1(Vuart___024root* vlSelf);

VL_INLINE_OPT QData Vuart___024root___change_request(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___change_request\n"); );
    // Body
    return (Vuart___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vuart___024root___change_request_1(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vuart___024root___eval_debug_assertions(Vuart___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->txclk & 0xfeU))) {
        Verilated::overWidthError("txclk");}
    if (VL_UNLIKELY((vlSelf->ld_tx_data & 0xfeU))) {
        Verilated::overWidthError("ld_tx_data");}
    if (VL_UNLIKELY((vlSelf->tx_enable & 0xfeU))) {
        Verilated::overWidthError("tx_enable");}
    if (VL_UNLIKELY((vlSelf->rxclk & 0xfeU))) {
        Verilated::overWidthError("rxclk");}
    if (VL_UNLIKELY((vlSelf->uld_rx_data & 0xfeU))) {
        Verilated::overWidthError("uld_rx_data");}
    if (VL_UNLIKELY((vlSelf->rx_enable & 0xfeU))) {
        Verilated::overWidthError("rx_enable");}
    if (VL_UNLIKELY((vlSelf->rx_in & 0xfeU))) {
        Verilated::overWidthError("rx_in");}
}
#endif  // VL_DEBUG
