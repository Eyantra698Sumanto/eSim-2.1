// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light_controller.h for the primary calling header

#include "Vtraffic_light_controller___024root.h"
#include "Vtraffic_light_controller__Syms.h"

//==========

extern const VlUnpacked<CData/*2:0*/, 256> Vtraffic_light_controller__ConstPool__TABLE_a1f71685_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtraffic_light_controller__ConstPool__TABLE_5a41a674_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vtraffic_light_controller__ConstPool__TABLE_8f041616_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtraffic_light_controller__ConstPool__TABLE_38f2e7b7_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtraffic_light_controller__ConstPool__TABLE_380d7f69_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtraffic_light_controller__ConstPool__TABLE_d0d21850_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vtraffic_light_controller__ConstPool__TABLE_da08b6bc_0;

VL_INLINE_OPT void Vtraffic_light_controller___024root___sequent__TOP__1(Vtraffic_light_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtraffic_light_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_controller___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->Traffic_Light_Controller__DOT__count) 
                     << 4U) | (((IData)(vlSelf->Traffic_Light_Controller__DOT__ps) 
                                << 1U) | (IData)(vlSelf->rst)));
    vlSelf->Traffic_Light_Controller__DOT__ps = Vtraffic_light_controller__ConstPool__TABLE_a1f71685_0
        [__Vtableidx1];
    if ((2U & Vtraffic_light_controller__ConstPool__TABLE_5a41a674_0
         [__Vtableidx1])) {
        vlSelf->Traffic_Light_Controller__DOT__count 
            = Vtraffic_light_controller__ConstPool__TABLE_8f041616_0
            [__Vtableidx1];
    }
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

void Vtraffic_light_controller___024root___eval(Vtraffic_light_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtraffic_light_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_controller___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtraffic_light_controller___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vtraffic_light_controller___024root___change_request_1(Vtraffic_light_controller___024root* vlSelf);

VL_INLINE_OPT QData Vtraffic_light_controller___024root___change_request(Vtraffic_light_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtraffic_light_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_controller___024root___change_request\n"); );
    // Body
    return (Vtraffic_light_controller___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtraffic_light_controller___024root___change_request_1(Vtraffic_light_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtraffic_light_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_controller___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtraffic_light_controller___024root___eval_debug_assertions(Vtraffic_light_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtraffic_light_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_controller___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
