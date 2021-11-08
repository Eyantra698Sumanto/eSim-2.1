// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftregister_pipo.h for the primary calling header

#include "Vshiftregister_pipo___024root.h"
#include "Vshiftregister_pipo__Syms.h"

//==========


void Vshiftregister_pipo___024root___ctor_var_reset(Vshiftregister_pipo___024root* vlSelf);

Vshiftregister_pipo___024root::Vshiftregister_pipo___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vshiftregister_pipo___024root___ctor_var_reset(this);
}

void Vshiftregister_pipo___024root::__Vconfigure(Vshiftregister_pipo__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vshiftregister_pipo___024root::~Vshiftregister_pipo___024root() {
}

void Vshiftregister_pipo___024root___eval_initial(Vshiftregister_pipo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister_pipo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister_pipo___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__Clk = vlSelf->Clk;
}

void Vshiftregister_pipo___024root___eval_settle(Vshiftregister_pipo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister_pipo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister_pipo___024root___eval_settle\n"); );
}

void Vshiftregister_pipo___024root___final(Vshiftregister_pipo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister_pipo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister_pipo___024root___final\n"); );
}

void Vshiftregister_pipo___024root___ctor_var_reset(Vshiftregister_pipo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister_pipo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister_pipo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Clk = VL_RAND_RESET_I(1);
    vlSelf->Pi = VL_RAND_RESET_I(4);
    vlSelf->Po = VL_RAND_RESET_I(4);
}
