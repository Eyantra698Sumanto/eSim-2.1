// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvert.h for the primary calling header

#include "VConvert___024root.h"
#include "VConvert__Syms.h"

//==========


void VConvert___024root___ctor_var_reset(VConvert___024root* vlSelf);

VConvert___024root::VConvert___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VConvert___024root___ctor_var_reset(this);
}

void VConvert___024root::__Vconfigure(VConvert__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VConvert___024root::~VConvert___024root() {
}

void VConvert___024root___initial__TOP__2(VConvert___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvert___024root___initial__TOP__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    VL_WRITEF("%1#\n[%0t] Tracing to logs/vlt_dump.vcd...\n\n",
              1,vlSelf->q,64,VL_TIME_UNITED_Q(1),-12);
    __Vtemp1[0U] = 0x2e766364U;
    __Vtemp1[1U] = 0x64756d70U;
    __Vtemp1[2U] = 0x766c745fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp1));
    VL_PRINTF_MT("-Info: Convert.v:16: $dumpvar ignored, as Verilated without --trace\n");
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
}

void VConvert___024root___eval_initial(VConvert___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvert___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rstn = vlSelf->rstn;
    VConvert___024root___initial__TOP__2(vlSelf);
}

void VConvert___024root___eval_settle(VConvert___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvert___024root___eval_settle\n"); );
}

void VConvert___024root___final(VConvert___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvert___024root___final\n"); );
}

void VConvert___024root___ctor_var_reset(VConvert___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvert___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->d = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(1);
}
