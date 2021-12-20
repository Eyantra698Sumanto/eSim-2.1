// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo___024root.h"
#include "Vfifo__Syms.h"

//==========

VL_INLINE_OPT void Vfifo___024root___sequent__TOP__1(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*3:0*/ __Vdlyvdim0__fifo__DOT__m__DOT__mem__v0;
    CData/*3:0*/ __Vdlyvval__fifo__DOT__m__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__fifo__DOT__m__DOT__mem__v0;
    // Body
    __Vdlyvset__fifo__DOT__m__DOT__mem__v0 = 0U;
    vlSelf->fifo_underflow = ((~ (IData)(vlSelf->reset)) 
                              & ((((IData)(vlSelf->fifo_empty) 
                                   & (IData)(vlSelf->rd_en)) 
                                  & (~ (IData)(vlSelf->wr_en))) 
                                 | ((~ (IData)(vlSelf->wr_en)) 
                                    & (IData)(vlSelf->fifo_underflow))));
    vlSelf->fifo_overflow = ((~ (IData)(vlSelf->reset)) 
                             & ((((IData)(vlSelf->fifo_full) 
                                  & (IData)(vlSelf->wr_en)) 
                                 & (~ (IData)(vlSelf->rd_en))) 
                                | ((~ (IData)(vlSelf->rd_en)) 
                                   & (IData)(vlSelf->fifo_overflow))));
    if (vlSelf->wr_en) {
        __Vdlyvval__fifo__DOT__m__DOT__mem__v0 = vlSelf->datain;
        __Vdlyvset__fifo__DOT__m__DOT__mem__v0 = 1U;
        __Vdlyvdim0__fifo__DOT__m__DOT__mem__v0 = vlSelf->fifo__DOT__wptr;
    }
    vlSelf->fifo__DOT__wptr = ((IData)(vlSelf->reset)
                                ? 0U : (0xfU & ((IData)(vlSelf->wr_en)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->fifo__DOT__wptr))
                                                 : (IData)(vlSelf->fifo__DOT__wptr))));
    if (__Vdlyvset__fifo__DOT__m__DOT__mem__v0) {
        vlSelf->fifo__DOT__m__DOT__mem[__Vdlyvdim0__fifo__DOT__m__DOT__mem__v0] 
            = __Vdlyvval__fifo__DOT__m__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vfifo___024root___sequent__TOP__2(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ fifo__DOT__sf__DOT__bit_comp;
    CData/*0:0*/ fifo__DOT__sf__DOT__ptr_eq;
    CData/*3:0*/ fifo__DOT__sf__DOT__ptr_res;
    // Body
    vlSelf->fifo__DOT__rptr = ((IData)(vlSelf->reset)
                                ? 0U : (0xfU & ((IData)(vlSelf->rd_en)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->fifo__DOT__rptr))
                                                 : (IData)(vlSelf->fifo__DOT__rptr))));
    vlSelf->dataout = vlSelf->fifo__DOT__m__DOT__mem
        [vlSelf->fifo__DOT__rptr];
    fifo__DOT__sf__DOT__ptr_res = (0xfU & ((IData)(vlSelf->fifo__DOT__wptr) 
                                           - (IData)(vlSelf->fifo__DOT__rptr)));
    fifo__DOT__sf__DOT__bit_comp = (1U & (((IData)(vlSelf->fifo__DOT__wptr) 
                                           ^ (IData)(vlSelf->fifo__DOT__rptr)) 
                                          >> 3U));
    fifo__DOT__sf__DOT__ptr_eq = ((0U != (7U & ((IData)(vlSelf->fifo__DOT__wptr) 
                                                - (IData)(vlSelf->fifo__DOT__rptr))))
                                   ? 0U : 1U);
    vlSelf->fifo_threshold = ((IData)((0U != (0xcU 
                                              & (IData)(fifo__DOT__sf__DOT__ptr_res))))
                               ? 1U : 0U);
    vlSelf->fifo_empty = ((~ (IData)(fifo__DOT__sf__DOT__bit_comp)) 
                          & (IData)(fifo__DOT__sf__DOT__ptr_eq));
    vlSelf->fifo_full = ((IData)(fifo__DOT__sf__DOT__bit_comp) 
                         & (IData)(fifo__DOT__sf__DOT__ptr_eq));
}

void Vfifo___024root___eval(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vfifo___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->__Vclklast__TOP__reset)))) {
        Vfifo___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

QData Vfifo___024root___change_request_1(Vfifo___024root* vlSelf);

VL_INLINE_OPT QData Vfifo___024root___change_request(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___change_request\n"); );
    // Body
    return (Vfifo___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vfifo___024root___change_request_1(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfifo___024root___eval_debug_assertions(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->rd_en & 0xfeU))) {
        Verilated::overWidthError("rd_en");}
    if (VL_UNLIKELY((vlSelf->wr_en & 0xfeU))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY((vlSelf->datain & 0xf0U))) {
        Verilated::overWidthError("datain");}
}
#endif  // VL_DEBUG
