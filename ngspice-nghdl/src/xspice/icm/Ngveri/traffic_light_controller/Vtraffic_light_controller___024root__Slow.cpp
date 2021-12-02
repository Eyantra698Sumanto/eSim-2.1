// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light_controller.h for the primary calling header

#include "Vtraffic_light_controller___024root.h"
#include "Vtraffic_light_controller__Syms.h"

//==========


void Vtraffic_light_controller___024root___ctor_var_reset(Vtraffic_light_controller___024root* vlSelf);

Vtraffic_light_controller___024root::Vtraffic_light_controller___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtraffic_light_controller___024root___ctor_var_reset(this);
}

void Vtraffic_light_controller___024root::__Vconfigure(Vtraffic_light_controller__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtraffic_light_controller___024root::~Vtraffic_light_controller___024root() {
}

extern const VlUnpacked<CData/*2:0*/, 8> Vtraffic_light_controller__ConstPool__TABLE_38f2e7b7_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtraffic_light_controller__ConstPool__TABLE_380d7f69_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtraffic_light_controller__ConstPool__TABLE_d0d21850_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtraffic_light_controller__ConstPool__TABLE_da08b6bc_0;

void Vtraffic_light_controller___024root___settle__TOP__2(Vtraffic_light_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtraffic_light_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_controller___024root___settle__TOP__2\n"); );
    // Variables
    CData/*2:0*/ __Vtableidx2;
    // Body
    __Vtableidx2 = vlSelf->Traffic_Light_Controller__DOT__ps;
    vlSelf->light_M1 = Vtraffic_light_controller__ConstPool__TABLE_38f2e7b7_0
        [__Vtableidx2];
    vlSelf->light_M2 = Vtraffic_light_controller__ConstPool__TABLE_380d7f69_0
        [__Vtableidx2];
    vlSelf->light_MT = Vtraffic_light_controller__ConstPool__TABLE_d0d21850_0
        [__Vtableidx2];
    vlSelf->light_S = Vtraffic_light_controller__ConstPool__TABLE_da08b6bc_0
        [__Vtableidx2];
}

void Vtraffic_light_controller___024root___eval_initial(Vtraffic_light_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtraffic_light_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_controller___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vtraffic_light_controller___024root___eval_settle(Vtraffic_light_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtraffic_light_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_controller___024root___eval_settle\n"); );
    // Body
    Vtraffic_light_controller___024root___settle__TOP__2(vlSelf);
}

void Vtraffic_light_controller___024root___final(Vtraffic_light_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtraffic_light_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_controller___024root___final\n"); );
}

void Vtraffic_light_controller___024root___ctor_var_reset(Vtraffic_light_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtraffic_light_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_controller___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->light_M1 = VL_RAND_RESET_I(3);
    vlSelf->light_S = VL_RAND_RESET_I(3);
    vlSelf->light_MT = VL_RAND_RESET_I(3);
    vlSelf->light_M2 = VL_RAND_RESET_I(3);
    vlSelf->Traffic_Light_Controller__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->Traffic_Light_Controller__DOT__ps = VL_RAND_RESET_I(3);
}
