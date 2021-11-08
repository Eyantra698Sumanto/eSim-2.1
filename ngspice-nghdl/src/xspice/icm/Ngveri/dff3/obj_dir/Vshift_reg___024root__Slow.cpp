// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_reg.h for the primary calling header

#include "Vshift_reg___024root.h"
#include "Vshift_reg__Syms.h"

//==========


void Vshift_reg___024root___ctor_var_reset(Vshift_reg___024root* vlSelf);

Vshift_reg___024root::Vshift_reg___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vshift_reg___024root___ctor_var_reset(this);
}

void Vshift_reg___024root::__Vconfigure(Vshift_reg__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vshift_reg___024root::~Vshift_reg___024root() {
}

void Vshift_reg___024root___initial__TOP__1(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    VL_WRITEF("[%0t] Tracing to logs/vlt_dump.vcd...\n\n",
              64,VL_TIME_UNITED_Q(1),-12);
    __Vtemp1[0U] = 0x2e766364U;
    __Vtemp1[1U] = 0x64756d70U;
    __Vtemp1[2U] = 0x766c745fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
}

void Vshift_reg___024root___settle__TOP__3(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->shift_reg__DOT__q_net = (((IData)(vlSelf->shift_reg__DOT____Vcellout__u2__q) 
                                      << 2U) | (((IData)(vlSelf->shift_reg__DOT____Vcellout__u1__q) 
                                                 << 1U) 
                                                | (IData)(vlSelf->shift_reg__DOT____Vcellout__u0__q)));
}

void Vshift_reg___024root___eval_initial(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_initial\n"); );
    // Body
    Vshift_reg___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
}

void Vshift_reg___024root___eval_settle(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_settle\n"); );
    // Body
    Vshift_reg___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vshift_reg___024root___final(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___final\n"); );
}

void Vshift_reg___024root___ctor_var_reset(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->d = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(1);
    vlSelf->shift_reg__DOT__q_net = VL_RAND_RESET_I(3);
    vlSelf->shift_reg__DOT____Vcellout__u0__q = VL_RAND_RESET_I(1);
    vlSelf->shift_reg__DOT____Vcellout__u1__q = VL_RAND_RESET_I(1);
    vlSelf->shift_reg__DOT____Vcellout__u2__q = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
