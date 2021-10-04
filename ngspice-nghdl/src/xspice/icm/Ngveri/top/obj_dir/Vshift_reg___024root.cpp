// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_reg.h for the primary calling header

#include "Vshift_reg___024root.h"
#include "Vshift_reg__Syms.h"

//==========

VL_INLINE_OPT void Vshift_reg___024root___sequent__TOP__2(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->q = ((IData)(vlSelf->rstn) & ((IData)(vlSelf->shift_reg__DOT__q_net) 
                                          >> 2U));
    vlSelf->shift_reg__DOT____Vcellout__u0__q = ((IData)(vlSelf->rstn) 
                                                 & (IData)(vlSelf->d));
    vlSelf->shift_reg__DOT____Vcellout__u2__q = ((IData)(vlSelf->rstn) 
                                                 & ((IData)(vlSelf->shift_reg__DOT__q_net) 
                                                    >> 1U));
    vlSelf->shift_reg__DOT____Vcellout__u1__q = ((IData)(vlSelf->rstn) 
                                                 & (IData)(vlSelf->shift_reg__DOT__q_net));
    vlSelf->shift_reg__DOT__q_net = (((IData)(vlSelf->shift_reg__DOT____Vcellout__u2__q) 
                                      << 2U) | (((IData)(vlSelf->shift_reg__DOT____Vcellout__u1__q) 
                                                 << 1U) 
                                                | (IData)(vlSelf->shift_reg__DOT____Vcellout__u0__q)));
}

void Vshift_reg___024root___eval(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rstn)) & (IData)(vlSelf->__Vclklast__TOP__rstn)))) {
        Vshift_reg___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
}

QData Vshift_reg___024root___change_request_1(Vshift_reg___024root* vlSelf);

VL_INLINE_OPT QData Vshift_reg___024root___change_request(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___change_request\n"); );
    // Body
    return (Vshift_reg___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vshift_reg___024root___change_request_1(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vshift_reg___024root___eval_debug_assertions(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->d & 0xfeU))) {
        Verilated::overWidthError("d");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
