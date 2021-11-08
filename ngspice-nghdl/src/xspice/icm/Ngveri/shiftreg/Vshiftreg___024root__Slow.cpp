// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftreg.h for the primary calling header

#include "Vshiftreg___024root.h"
#include "Vshiftreg__Syms.h"

//==========


void Vshiftreg___024root___ctor_var_reset(Vshiftreg___024root* vlSelf);

Vshiftreg___024root::Vshiftreg___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vshiftreg___024root___ctor_var_reset(this);
}

void Vshiftreg___024root::__Vconfigure(Vshiftreg__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vshiftreg___024root::~Vshiftreg___024root() {
}

void Vshiftreg___024root___initial__TOP__1(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    VL_WRITEF("[%0t] Tracing to logs/vlt_dump.vcd...\n\n",
              64,VL_TIME_UNITED_Q(1),-12);
    __Vtemp1[0U] = 0x2e766364U;
    __Vtemp1[1U] = 0x64756d70U;
    __Vtemp1[2U] = 0x766c745fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp1));
    VL_PRINTF_MT("-Info: shiftreg.v:17: $dumpvar ignored, as Verilated without --trace\n");
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
}

void Vshiftreg___024root___settle__TOP__3(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->shiftreg__DOT__q_net = (((IData)(vlSelf->shiftreg__DOT____Vcellout__u2__q) 
                                     << 2U) | (((IData)(vlSelf->shiftreg__DOT____Vcellout__u1__q) 
                                                << 1U) 
                                               | (IData)(vlSelf->shiftreg__DOT____Vcellout__u0__q)));
}

void Vshiftreg___024root___eval_initial(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___eval_initial\n"); );
    // Body
    Vshiftreg___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
}

void Vshiftreg___024root___eval_settle(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___eval_settle\n"); );
    // Body
    Vshiftreg___024root___settle__TOP__3(vlSelf);
}

void Vshiftreg___024root___final(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___final\n"); );
}

void Vshiftreg___024root___ctor_var_reset(Vshiftreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftreg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->d = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(1);
    vlSelf->shiftreg__DOT__q_net = VL_RAND_RESET_I(3);
    vlSelf->shiftreg__DOT____Vcellout__u0__q = VL_RAND_RESET_I(1);
    vlSelf->shiftreg__DOT____Vcellout__u1__q = VL_RAND_RESET_I(1);
    vlSelf->shiftreg__DOT____Vcellout__u2__q = VL_RAND_RESET_I(1);
}
