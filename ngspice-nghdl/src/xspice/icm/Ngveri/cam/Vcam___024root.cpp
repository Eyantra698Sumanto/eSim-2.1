// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcam.h for the primary calling header

#include "Vcam___024root.h"
#include "Vcam__Syms.h"

//==========

VL_INLINE_OPT void Vcam___024root___sequent__TOP__1(Vcam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcam___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->cam_enable) {
        vlSelf->cam_addr_out = vlSelf->cam__DOT__cam_addr_combo;
        vlSelf->cam_hit_out = ((IData)(vlSelf->cam__DOT__cam_hit_combo) 
                               & 1U);
    } else {
        vlSelf->cam_addr_out = 0U;
        vlSelf->cam_hit_out = 0U;
    }
}

VL_INLINE_OPT void Vcam___024root___settle__TOP__2(Vcam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcam___024root___settle__TOP__2\n"); );
    // Variables
    CData/*0:0*/ cam__DOT__found_match;
    // Body
    vlSelf->cam__DOT__cam_addr_combo = 0U;
    cam__DOT__found_match = 0U;
    vlSelf->cam__DOT__cam_hit_combo = 0U;
    if ((1U & (IData)(vlSelf->cam_data_in))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 0U;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 1U) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 1U;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 2U) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 2U;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 3U) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 3U;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 4U) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 4U;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 5U) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 5U;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 6U) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 6U;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 7U) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 7U;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 8U) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 8U;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 9U) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 9U;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 0xaU) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 0xaU;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 0xbU) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 0xbU;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 0xcU) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 0xcU;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 0xdU) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 0xdU;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 0xeU) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 0xeU;
    }
    if ((1U & (((IData)(vlSelf->cam_data_in) >> 0xfU) 
               & (~ (IData)(cam__DOT__found_match))))) {
        cam__DOT__found_match = 1U;
        vlSelf->cam__DOT__cam_hit_combo = 1U;
        vlSelf->cam__DOT__cam_addr_combo = 0xfU;
    }
}

void Vcam___024root___eval(Vcam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcam___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcam___024root___sequent__TOP__1(vlSelf);
    }
    Vcam___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcam___024root___change_request_1(Vcam___024root* vlSelf);

VL_INLINE_OPT QData Vcam___024root___change_request(Vcam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcam___024root___change_request\n"); );
    // Body
    return (Vcam___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcam___024root___change_request_1(Vcam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcam___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcam___024root___eval_debug_assertions(Vcam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->cam_enable & 0xfeU))) {
        Verilated::overWidthError("cam_enable");}
}
#endif  // VL_DEBUG
