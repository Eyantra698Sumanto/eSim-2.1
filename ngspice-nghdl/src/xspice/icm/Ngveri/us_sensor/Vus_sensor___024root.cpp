// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vus_sensor.h for the primary calling header

#include "Vus_sensor___024root.h"
#include "Vus_sensor__Syms.h"

//==========

VL_INLINE_OPT void Vus_sensor___024root___sequent__TOP__1(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->echo) {
        if (vlSelf->echo) {
            vlSelf->us_sensor__DOT__t_c = ((IData)(1U) 
                                           + vlSelf->us_sensor__DOT__t_c);
            vlSelf->us_sensor__DOT__t_2c = vlSelf->us_sensor__DOT__t_c;
        }
    } else {
        vlSelf->us_sensor__DOT__t_3c = ((IData)(1U) 
                                        + vlSelf->us_sensor__DOT__t_2c);
        vlSelf->us_sensor__DOT__t_c = 0U;
    }
    if (vlSelf->atrigger) {
        vlSelf->us_sensor__DOT__count = ((IData)(1U) 
                                         + vlSelf->us_sensor__DOT__count);
        if ((vlSelf->us_sensor__DOT__count == vlSelf->us_sensor__DOT__on_count)) {
            vlSelf->us_sensor__DOT__count = 0U;
            vlSelf->atrigger = 0U;
        }
    } else {
        vlSelf->us_sensor__DOT__count = ((IData)(1U) 
                                         + vlSelf->us_sensor__DOT__count);
        if ((vlSelf->us_sensor__DOT__count == vlSelf->us_sensor__DOT__off_count)) {
            vlSelf->us_sensor__DOT__count = 0U;
            vlSelf->atrigger = 1U;
        }
    }
    vlSelf->us_sensor__DOT__m1__DOT__count = ((IData)(1U) 
                                              + vlSelf->us_sensor__DOT__m1__DOT__count);
    if ((0x32U == vlSelf->us_sensor__DOT__m1__DOT__count)) {
        vlSelf->us_sensor__DOT__m1__DOT__nclk = (1U 
                                                 & (~ (IData)(vlSelf->us_sensor__DOT__m1__DOT__nclk)));
        vlSelf->us_sensor__DOT__m1__DOT__count = 0U;
    }
}

VL_INLINE_OPT void Vus_sensor___024root___sequent__TOP__3(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___sequent__TOP__3\n"); );
    // Body
    if ((0U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__segno))) {
        vlSelf->en = 6U;
        vlSelf->us_sensor__DOT__m1__DOT__cas = vlSelf->us_sensor__DOT__m1__DOT__c;
    } else if ((1U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__segno))) {
        vlSelf->en = 5U;
        vlSelf->us_sensor__DOT__m1__DOT__cas = vlSelf->us_sensor__DOT__m1__DOT__b;
    } else if ((2U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__segno))) {
        vlSelf->en = 3U;
        vlSelf->us_sensor__DOT__m1__DOT__cas = vlSelf->us_sensor__DOT__m1__DOT__a;
    }
    if (((((((((0U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas)) 
               | (1U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))) 
              | (2U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))) 
             | (3U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))) 
            | (4U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))) 
           | (5U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))) 
          | (6U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))) 
         | (7U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas)))) {
        vlSelf->ss = ((0U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))
                       ? 0xc0U : ((1U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))
                                   ? 0xf9U : ((2U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))
                                               ? 0xa8U
                                               : ((3U 
                                                   == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))
                                                   ? 0xb0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))
                                                    ? 0x99U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))
                                                     ? 0x92U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))
                                                      ? 0x82U
                                                      : 0xf8U)))))));
    } else if ((8U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))) {
        vlSelf->ss = 0x80U;
    } else if ((9U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__cas))) {
        vlSelf->ss = 0x90U;
    }
    vlSelf->us_sensor__DOT__m1__DOT__segno = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->us_sensor__DOT__m1__DOT__segno)));
    if ((3U == (IData)(vlSelf->us_sensor__DOT__m1__DOT__segno))) {
        vlSelf->us_sensor__DOT__m1__DOT__segno = 0U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 1024> Vus_sensor__ConstPool__TABLE_84a98a76_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vus_sensor__ConstPool__TABLE_5049f12a_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vus_sensor__ConstPool__TABLE_496d81ad_0;

VL_INLINE_OPT void Vus_sensor___024root___settle__TOP__4(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___settle__TOP__4\n"); );
    // Variables
    SData/*9:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (0x3ffU & VL_DIV_III(32, ((IData)(0x22U) 
                                             * vlSelf->us_sensor__DOT__t_3c), (IData)(0x30d40U)));
    vlSelf->us_sensor__DOT__m1__DOT__c = Vus_sensor__ConstPool__TABLE_84a98a76_0
        [__Vtableidx1];
    vlSelf->us_sensor__DOT__m1__DOT__b = Vus_sensor__ConstPool__TABLE_5049f12a_0
        [__Vtableidx1];
    vlSelf->us_sensor__DOT__m1__DOT__a = Vus_sensor__ConstPool__TABLE_496d81ad_0
        [__Vtableidx1];
}

void Vus_sensor___024root___eval(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vus_sensor___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->us_sensor__DOT__m1__DOT__nclk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__us_sensor__DOT__m1__DOT__nclk)))) {
        Vus_sensor___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vus_sensor___024root___settle__TOP__4(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__us_sensor__DOT__m1__DOT__nclk 
        = vlSelf->us_sensor__DOT__m1__DOT__nclk;
}

QData Vus_sensor___024root___change_request_1(Vus_sensor___024root* vlSelf);

VL_INLINE_OPT QData Vus_sensor___024root___change_request(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___change_request\n"); );
    // Body
    return (Vus_sensor___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vus_sensor___024root___change_request_1(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vus_sensor___024root___eval_debug_assertions(Vus_sensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vus_sensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vus_sensor___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->echo & 0xfeU))) {
        Verilated::overWidthError("echo");}
}
#endif  // VL_DEBUG
