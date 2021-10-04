// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm12.h for the primary calling header

#include "Vm12___024root.h"
#include "Vm12__Syms.h"

//==========


void Vm12___024root___ctor_var_reset(Vm12___024root* vlSelf);

Vm12___024root::Vm12___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vm12___024root___ctor_var_reset(this);
}

void Vm12___024root::__Vconfigure(Vm12__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vm12___024root::~Vm12___024root() {
}

void Vm12___024root___initial__TOP__1(Vm12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm12___024root___initial__TOP__1\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string("test.vcd"));
    VL_PRINTF_MT("-Info: m12.v:6: $dumpvar ignored, as Verilated without --trace\n");
}

void Vm12___024root___eval_initial(Vm12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm12___024root___eval_initial\n"); );
    // Body
    Vm12___024root___initial__TOP__1(vlSelf);
}

void Vm12___024root___combo__TOP__2(Vm12___024root* vlSelf);

void Vm12___024root___eval_settle(Vm12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm12___024root___eval_settle\n"); );
    // Body
    Vm12___024root___combo__TOP__2(vlSelf);
}

void Vm12___024root___final(Vm12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm12___024root___final\n"); );
}

void Vm12___024root___ctor_var_reset(Vm12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm12___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Y = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(1);
    vlSelf->B = VL_RAND_RESET_I(1);
}
