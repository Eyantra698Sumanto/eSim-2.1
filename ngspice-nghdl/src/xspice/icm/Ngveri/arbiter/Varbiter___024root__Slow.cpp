// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varbiter.h for the primary calling header

#include "Varbiter___024root.h"
#include "Varbiter__Syms.h"

//==========


void Varbiter___024root___ctor_var_reset(Varbiter___024root* vlSelf);

Varbiter___024root::Varbiter___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Varbiter___024root___ctor_var_reset(this);
}

void Varbiter___024root::__Vconfigure(Varbiter__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Varbiter___024root::~Varbiter___024root() {
}

void Varbiter___024root___settle__TOP__2(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->gnt3 = vlSelf->arbiter__DOT__lgnt3;
    vlSelf->gnt2 = vlSelf->arbiter__DOT__lgnt2;
    vlSelf->gnt1 = vlSelf->arbiter__DOT__lgnt1;
    vlSelf->gnt0 = vlSelf->arbiter__DOT__lgnt0;
    vlSelf->arbiter__DOT__lgnt = ((((IData)(vlSelf->arbiter__DOT__lgnt3) 
                                    | (IData)(vlSelf->arbiter__DOT__lgnt2)) 
                                   << 1U) | ((IData)(vlSelf->arbiter__DOT__lgnt3) 
                                             | (IData)(vlSelf->arbiter__DOT__lgnt1)));
    vlSelf->arbiter__DOT__lcomreq = (((((IData)(vlSelf->req3) 
                                        & (IData)(vlSelf->arbiter__DOT__lgnt3)) 
                                       | ((IData)(vlSelf->req2) 
                                          & (IData)(vlSelf->arbiter__DOT__lgnt2))) 
                                      | ((IData)(vlSelf->req1) 
                                         & (IData)(vlSelf->arbiter__DOT__lgnt1))) 
                                     | ((IData)(vlSelf->req0) 
                                        & (IData)(vlSelf->arbiter__DOT__lgnt0)));
    vlSelf->arbiter__DOT__beg = (((((IData)(vlSelf->req3) 
                                    | (IData)(vlSelf->req2)) 
                                   | (IData)(vlSelf->req1)) 
                                  | (IData)(vlSelf->req0)) 
                                 & (~ (IData)(vlSelf->arbiter__DOT__lcomreq)));
}

void Varbiter___024root___eval_initial(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Varbiter___024root___eval_settle(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___eval_settle\n"); );
    // Body
    Varbiter___024root___settle__TOP__2(vlSelf);
}

void Varbiter___024root___final(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___final\n"); );
}

void Varbiter___024root___ctor_var_reset(Varbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->req3 = VL_RAND_RESET_I(1);
    vlSelf->req2 = VL_RAND_RESET_I(1);
    vlSelf->req1 = VL_RAND_RESET_I(1);
    vlSelf->req0 = VL_RAND_RESET_I(1);
    vlSelf->gnt3 = VL_RAND_RESET_I(1);
    vlSelf->gnt2 = VL_RAND_RESET_I(1);
    vlSelf->gnt1 = VL_RAND_RESET_I(1);
    vlSelf->gnt0 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT__beg = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT__lgnt = VL_RAND_RESET_I(2);
    vlSelf->arbiter__DOT__lcomreq = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT__lgnt0 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT__lgnt1 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT__lgnt2 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT__lgnt3 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT__lasmask = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT__lmask0 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT__lmask1 = VL_RAND_RESET_I(1);
    vlSelf->arbiter__DOT__ledge = VL_RAND_RESET_I(1);
}
