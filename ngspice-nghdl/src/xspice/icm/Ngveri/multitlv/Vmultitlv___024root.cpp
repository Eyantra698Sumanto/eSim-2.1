// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultitlv.h for the primary calling header

#include "Vmultitlv___024root.h"
#include "Vmultitlv__Syms.h"

//==========

VL_INLINE_OPT void Vmultitlv___024root___combo__TOP__1(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->passed = (0x28U < vlSelf->cyc_cnt);
    vlSelf->multitlv__DOT__clkF_MUL_valid_a8 = ((IData)(vlSelf->multitlv__DOT__gen_clkF_MUL_valid_a8__DOT__latched_clk_en) 
                                                & (IData)(vlSelf->clk));
    vlSelf->multitlv__DOT__clkP_MUL_valid_a2 = ((IData)(vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a2__DOT__latched_clk_en) 
                                                & (IData)(vlSelf->clk));
    vlSelf->multitlv__DOT__clkP_MUL_valid_a3 = ((IData)(vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a3__DOT__latched_clk_en) 
                                                & (IData)(vlSelf->clk));
    vlSelf->multitlv__DOT__clkP_MUL_valid_a4 = ((IData)(vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a4__DOT__latched_clk_en) 
                                                & (IData)(vlSelf->clk));
    vlSelf->multitlv__DOT__clkP_MUL_valid_a5 = ((IData)(vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a5__DOT__latched_clk_en) 
                                                & (IData)(vlSelf->clk));
    vlSelf->multitlv__DOT__clkP_MUL_valid_a6 = ((IData)(vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a6__DOT__latched_clk_en) 
                                                & (IData)(vlSelf->clk));
    vlSelf->multitlv__DOT__clkP_MUL_valid_a7 = ((IData)(vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a7__DOT__latched_clk_en) 
                                                & (IData)(vlSelf->clk));
}

extern const VlWide<9>/*287:0*/ Vmultitlv__ConstPool__CONST_8aaa57a3_0;
extern const VlWide<9>/*287:0*/ Vmultitlv__ConstPool__CONST_81cf83eb_0;

VL_INLINE_OPT void Vmultitlv___024root___sequent__TOP__3(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_reset_a1 
        = vlSelf->reset;
    vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U] 
        = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[0U];
    vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U] 
        = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[1U];
    vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U] 
        = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[2U];
    vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U] 
        = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[3U];
    vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U] 
        = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[4U];
    vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U] 
        = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[5U];
    vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U] 
        = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[6U];
    vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U] 
        = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[7U];
    vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U] 
        = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[8U];
    vlSelf->multitlv__DOT__MUL_bb_a7 = vlSelf->multitlv__DOT__MUL_bb_a6;
    vlSelf->multitlv__DOT__MUL_aa_a7 = vlSelf->multitlv__DOT__MUL_aa_a6;
    vlSelf->multitlv__DOT__MUL_valid_a7 = vlSelf->multitlv__DOT__MUL_valid_a6;
    if (vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_reset_a1) {
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[0U] 
            = Vmultitlv__ConstPool__CONST_8aaa57a3_0[0U];
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[1U] 
            = Vmultitlv__ConstPool__CONST_8aaa57a3_0[1U];
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[2U] 
            = Vmultitlv__ConstPool__CONST_8aaa57a3_0[2U];
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[3U] 
            = Vmultitlv__ConstPool__CONST_8aaa57a3_0[3U];
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[4U] 
            = Vmultitlv__ConstPool__CONST_8aaa57a3_0[4U];
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[5U] 
            = Vmultitlv__ConstPool__CONST_8aaa57a3_0[5U];
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[6U] 
            = Vmultitlv__ConstPool__CONST_8aaa57a3_0[6U];
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[7U] 
            = Vmultitlv__ConstPool__CONST_8aaa57a3_0[7U];
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[8U] 
            = Vmultitlv__ConstPool__CONST_8aaa57a3_0[8U];
    } else {
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[0U] 
            = ((vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U] 
                << 1U) ^ (Vmultitlv__ConstPool__CONST_81cf83eb_0[0U] 
                          & (- (IData)((1U & vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[1U] 
            = (((vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U] 
                 >> 0x1fU) | (vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U] 
                              << 1U)) ^ (Vmultitlv__ConstPool__CONST_81cf83eb_0[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[2U] 
            = (((vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U] 
                 >> 0x1fU) | (vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U] 
                              << 1U)) ^ (Vmultitlv__ConstPool__CONST_81cf83eb_0[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[3U] 
            = (((vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U] 
                 >> 0x1fU) | (vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U] 
                              << 1U)) ^ (Vmultitlv__ConstPool__CONST_81cf83eb_0[3U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[4U] 
            = (((vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U] 
                 >> 0x1fU) | (vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U] 
                              << 1U)) ^ (Vmultitlv__ConstPool__CONST_81cf83eb_0[4U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[5U] 
            = (((vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U] 
                 >> 0x1fU) | (vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U] 
                              << 1U)) ^ (Vmultitlv__ConstPool__CONST_81cf83eb_0[5U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[6U] 
            = (((vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U] 
                 >> 0x1fU) | (vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U] 
                              << 1U)) ^ (Vmultitlv__ConstPool__CONST_81cf83eb_0[6U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[7U] 
            = (((vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U] 
                 >> 0x1fU) | (vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U] 
                              << 1U)) ^ (Vmultitlv__ConstPool__CONST_81cf83eb_0[7U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[8U] 
            = ((vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U] 
                >> 0x1fU) ^ (Vmultitlv__ConstPool__CONST_81cf83eb_0[8U] 
                             & (- (IData)((1U & vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
    }
    vlSelf->multitlv__DOT__MUL_bb_a6 = vlSelf->multitlv__DOT__MUL_bb_a5;
    vlSelf->multitlv__DOT__MUL_aa_a6 = vlSelf->multitlv__DOT__MUL_aa_a5;
    vlSelf->multitlv__DOT__MUL_valid_a6 = vlSelf->multitlv__DOT__MUL_valid_a5;
    vlSelf->multitlv__DOT__MUL_bb_a5 = vlSelf->multitlv__DOT__MUL_bb_a4;
    vlSelf->multitlv__DOT__MUL_aa_a5 = vlSelf->multitlv__DOT__MUL_aa_a4;
    vlSelf->multitlv__DOT__MUL_valid_a5 = vlSelf->multitlv__DOT__MUL_valid_a4;
    vlSelf->multitlv__DOT__MUL_valid_a4 = vlSelf->multitlv__DOT__MUL_valid_a3;
    vlSelf->multitlv__DOT__MUL_valid_a3 = vlSelf->multitlv__DOT__MUL_valid_a2;
    vlSelf->multitlv__DOT__MUL_valid_a2 = vlSelf->multitlv__DOT__MUL_valid_a1;
    vlSelf->multitlv__DOT__MUL_valid_a1 = (1U & vlSelf->multitlv__DOT__RW_rand_vect[0U]);
}

VL_INLINE_OPT void Vmultitlv___024root___sequent__TOP__4(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->multitlv__DOT__MUL_Error_a7 = vlSelf->multitlv__DOT__MUL_Error_a6;
    vlSelf->failed = vlSelf->multitlv__DOT__MUL_Error_a7;
}

VL_INLINE_OPT void Vmultitlv___024root___sequent__TOP__10(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___sequent__TOP__10\n"); );
    // Body
    vlSelf->multitlv__DOT__MUL_mm_a7[0U] = (IData)(
                                                   (((QData)((IData)(vlSelf->multitlv__DOT__MUL_mm3_a6)) 
                                                     << 0x11U) 
                                                    | (QData)((IData)(vlSelf->multitlv__DOT__MUL_mm1_a6))));
    vlSelf->multitlv__DOT__MUL_mm_a7[1U] = (((IData)(vlSelf->multitlv__DOT__MUL_mm4_a6) 
                                             << 2U) 
                                            | (IData)(
                                                      ((((QData)((IData)(vlSelf->multitlv__DOT__MUL_mm3_a6)) 
                                                         << 0x11U) 
                                                        | (QData)((IData)(vlSelf->multitlv__DOT__MUL_mm1_a6))) 
                                                       >> 0x20U)));
    vlSelf->multitlv__DOT__MUL_mm_a7[2U] = (((IData)(vlSelf->multitlv__DOT__MUL_mm4_a6) 
                                             >> 0x1eU) 
                                            | ((IData)(
                                                       (vlSelf->multitlv__DOT__MUL_mm4_a6 
                                                        >> 0x20U)) 
                                               << 2U));
}

VL_INLINE_OPT void Vmultitlv___024root___combo__TOP__11(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___combo__TOP__11\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    // Body
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->multitlv__DOT__gen_clkF_MUL_valid_a8__DOT__latched_clk_en 
            = vlSelf->multitlv__DOT__MUL_valid_a7;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a7__DOT__latched_clk_en 
            = vlSelf->multitlv__DOT__MUL_valid_a6;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a6__DOT__latched_clk_en 
            = vlSelf->multitlv__DOT__MUL_valid_a5;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a5__DOT__latched_clk_en 
            = vlSelf->multitlv__DOT__MUL_valid_a4;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a4__DOT__latched_clk_en 
            = vlSelf->multitlv__DOT__MUL_valid_a3;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a3__DOT__latched_clk_en 
            = vlSelf->multitlv__DOT__MUL_valid_a2;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->multitlv__DOT__gen_clkP_MUL_valid_a2__DOT__latched_clk_en 
            = vlSelf->multitlv__DOT__MUL_valid_a1;
    }
    VL_EXTEND_WQ(70,35, __Vtemp21, vlSelf->multitlv__DOT__MUL_aa_a7);
    VL_EXTEND_WQ(70,35, __Vtemp22, vlSelf->multitlv__DOT__MUL_bb_a7);
    VL_MUL_W(3, __Vtemp23, __Vtemp21, __Vtemp22);
    vlSelf->multitlv__DOT__MUL_Error_a6 = ((IData)(vlSelf->reset)
                                            ? 0U : 
                                           (1U & ((IData)(vlSelf->multitlv__DOT__MUL_Error_a7) 
                                                  | (0U 
                                                     != 
                                                     (((__Vtemp23[0U] 
                                                        ^ 
                                                        vlSelf->multitlv__DOT__MUL_mm_a7[0U]) 
                                                       | (__Vtemp23[1U] 
                                                          ^ 
                                                          vlSelf->multitlv__DOT__MUL_mm_a7[1U])) 
                                                      | ((0x3fU 
                                                          & __Vtemp23[2U]) 
                                                         ^ 
                                                         vlSelf->multitlv__DOT__MUL_mm_a7[2U]))))));
}

VL_INLINE_OPT void Vmultitlv___024root___sequent__TOP__12(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___sequent__TOP__12\n"); );
    // Body
    vlSelf->multitlv__DOT__MUL_mm1_a6 = vlSelf->multitlv__DOT__MUL_mm1_a5;
    vlSelf->multitlv__DOT__MUL_mm3_a6 = (0x1ffffU & (IData)(vlSelf->multitlv__DOT__MUL_mm3_a5));
    vlSelf->multitlv__DOT__MUL_mm4_a6 = (0xfffffffffULL 
                                         & (vlSelf->multitlv__DOT__MUL_pp4_a5 
                                            + (QData)((IData)(
                                                              (0x7ffffU 
                                                               & (IData)(
                                                                         (vlSelf->multitlv__DOT__MUL_mm3_a5 
                                                                          >> 0x11U)))))));
}

VL_INLINE_OPT void Vmultitlv___024root___sequent__TOP__13(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___sequent__TOP__13\n"); );
    // Body
    vlSelf->multitlv__DOT__MUL_mm1_a5 = vlSelf->multitlv__DOT__MUL_mm1_a4;
    vlSelf->multitlv__DOT__MUL_pp4_a5 = (0xfffffffffULL 
                                         & ((QData)((IData)(
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       (vlSelf->multitlv__DOT__MUL_aa_a4 
                                                                        >> 0x11U))))) 
                                            * (QData)((IData)(
                                                              (0x3ffffU 
                                                               & (IData)(
                                                                         (vlSelf->multitlv__DOT__MUL_bb_a4 
                                                                          >> 0x11U)))))));
    vlSelf->multitlv__DOT__MUL_mm3_a5 = (0xfffffffffULL 
                                         & (vlSelf->multitlv__DOT__MUL_pp3_a4 
                                            + vlSelf->multitlv__DOT__MUL_mm2_a4));
}

VL_INLINE_OPT void Vmultitlv___024root___sequent__TOP__14(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___sequent__TOP__14\n"); );
    // Body
    vlSelf->multitlv__DOT__MUL_mm1_a4 = vlSelf->multitlv__DOT__MUL_mm1_a3;
    vlSelf->multitlv__DOT__MUL_pp3_a4 = (0x7ffffffffULL 
                                         & ((QData)((IData)(
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       (vlSelf->multitlv__DOT__MUL_aa_a3 
                                                                        >> 0x11U))))) 
                                            * (QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelf->multitlv__DOT__MUL_bb_a3))))));
    vlSelf->multitlv__DOT__MUL_mm2_a4 = (0xfffffffffULL 
                                         & (vlSelf->multitlv__DOT__MUL_pp2_a3 
                                            + (QData)((IData)(vlSelf->multitlv__DOT__MUL_pp1_a3))));
}

VL_INLINE_OPT void Vmultitlv___024root___sequent__TOP__15(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___sequent__TOP__15\n"); );
    // Body
    vlSelf->multitlv__DOT__MUL_aa_a4 = vlSelf->multitlv__DOT__MUL_aa_a3;
    vlSelf->multitlv__DOT__MUL_bb_a4 = vlSelf->multitlv__DOT__MUL_bb_a3;
    vlSelf->multitlv__DOT__MUL_aa_a3 = vlSelf->multitlv__DOT__MUL_aa_a2;
    vlSelf->multitlv__DOT__MUL_bb_a3 = vlSelf->multitlv__DOT__MUL_bb_a2;
}

VL_INLINE_OPT void Vmultitlv___024root___sequent__TOP__16(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___sequent__TOP__16\n"); );
    // Body
    vlSelf->multitlv__DOT__MUL_mm1_a3 = (0x1ffffU & (IData)(vlSelf->multitlv__DOT__MUL_pp1_a2));
    vlSelf->multitlv__DOT__MUL_pp1_a3 = (0x1ffffU & (IData)(
                                                            (vlSelf->multitlv__DOT__MUL_pp1_a2 
                                                             >> 0x11U)));
    vlSelf->multitlv__DOT__MUL_pp2_a3 = (0x7ffffffffULL 
                                         & ((QData)((IData)(
                                                            (0x1ffffU 
                                                             & (IData)(vlSelf->multitlv__DOT__MUL_aa_a2)))) 
                                            * (QData)((IData)(
                                                              (0x3ffffU 
                                                               & (IData)(
                                                                         (vlSelf->multitlv__DOT__MUL_bb_a2 
                                                                          >> 0x11U)))))));
}

VL_INLINE_OPT void Vmultitlv___024root___sequent__TOP__17(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___sequent__TOP__17\n"); );
    // Body
    vlSelf->multitlv__DOT__MUL_pp1_a2 = (0x3ffffffffULL 
                                         & ((QData)((IData)(
                                                            (0x1ffffU 
                                                             & (IData)(vlSelf->multitlv__DOT__MUL_aa_a1)))) 
                                            * (QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelf->multitlv__DOT__MUL_bb_a1))))));
}

VL_INLINE_OPT void Vmultitlv___024root___sequent__TOP__18(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___sequent__TOP__18\n"); );
    // Body
    vlSelf->multitlv__DOT__MUL_aa_a2 = vlSelf->multitlv__DOT__MUL_aa_a1;
    vlSelf->multitlv__DOT__MUL_bb_a2 = vlSelf->multitlv__DOT__MUL_bb_a1;
    vlSelf->multitlv__DOT__MUL_aa_a1 = (0x7ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->multitlv__DOT__RW_rand_vect[4U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->multitlv__DOT__RW_rand_vect[3U])) 
                                              >> 0x1cU)));
    vlSelf->multitlv__DOT__MUL_bb_a1 = (0x7ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->multitlv__DOT__RW_rand_vect[8U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelf->multitlv__DOT__RW_rand_vect[7U])) 
                                              >> 0x18U)));
    vlSelf->multitlv__DOT__RW_rand_vect[0U] = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U];
    vlSelf->multitlv__DOT__RW_rand_vect[1U] = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U];
    vlSelf->multitlv__DOT__RW_rand_vect[2U] = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U];
    vlSelf->multitlv__DOT__RW_rand_vect[3U] = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U];
    vlSelf->multitlv__DOT__RW_rand_vect[4U] = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U];
    vlSelf->multitlv__DOT__RW_rand_vect[5U] = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U];
    vlSelf->multitlv__DOT__RW_rand_vect[6U] = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U];
    vlSelf->multitlv__DOT__RW_rand_vect[7U] = vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U];
    vlSelf->multitlv__DOT__RW_rand_vect[8U] = (((IData)(
                                                        (0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U]))))) 
                                                << 1U) 
                                               | vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U]);
    vlSelf->multitlv__DOT__RW_rand_vect[9U] = (((IData)(
                                                        (0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U]))))) 
                                                >> 0x1fU) 
                                               | ((IData)(
                                                          ((0x7fffffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->multitlv__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U])))) 
                                                           >> 0x20U)) 
                                                  << 1U));
}

void Vmultitlv___024root___eval(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___eval\n"); );
    // Body
    Vmultitlv___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vmultitlv___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->multitlv__DOT__clkF_MUL_valid_a8) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__multitlv__DOT__clkF_MUL_valid_a8)))) {
        Vmultitlv___024root___sequent__TOP__4(vlSelf);
    }
    if (((IData)(vlSelf->multitlv__DOT__clkP_MUL_valid_a7) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a7)))) {
        Vmultitlv___024root___sequent__TOP__10(vlSelf);
    }
    Vmultitlv___024root___combo__TOP__11(vlSelf);
    if (((IData)(vlSelf->multitlv__DOT__clkP_MUL_valid_a6) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a6)))) {
        Vmultitlv___024root___sequent__TOP__12(vlSelf);
    }
    if (((IData)(vlSelf->multitlv__DOT__clkP_MUL_valid_a5) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a5)))) {
        Vmultitlv___024root___sequent__TOP__13(vlSelf);
    }
    if (((IData)(vlSelf->multitlv__DOT__clkP_MUL_valid_a4) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a4)))) {
        Vmultitlv___024root___sequent__TOP__14(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vmultitlv___024root___sequent__TOP__15(vlSelf);
    }
    if (((IData)(vlSelf->multitlv__DOT__clkP_MUL_valid_a3) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a3)))) {
        Vmultitlv___024root___sequent__TOP__16(vlSelf);
    }
    if (((IData)(vlSelf->multitlv__DOT__clkP_MUL_valid_a2) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a2)))) {
        Vmultitlv___024root___sequent__TOP__17(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vmultitlv___024root___sequent__TOP__18(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__multitlv__DOT__clkF_MUL_valid_a8 
        = vlSelf->multitlv__DOT__clkF_MUL_valid_a8;
    vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a2 
        = vlSelf->multitlv__DOT__clkP_MUL_valid_a2;
    vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a3 
        = vlSelf->multitlv__DOT__clkP_MUL_valid_a3;
    vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a4 
        = vlSelf->multitlv__DOT__clkP_MUL_valid_a4;
    vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a5 
        = vlSelf->multitlv__DOT__clkP_MUL_valid_a5;
    vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a6 
        = vlSelf->multitlv__DOT__clkP_MUL_valid_a6;
    vlSelf->__Vclklast__TOP__multitlv__DOT__clkP_MUL_valid_a7 
        = vlSelf->multitlv__DOT__clkP_MUL_valid_a7;
}

QData Vmultitlv___024root___change_request_1(Vmultitlv___024root* vlSelf);

VL_INLINE_OPT QData Vmultitlv___024root___change_request(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___change_request\n"); );
    // Body
    return (Vmultitlv___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmultitlv___024root___change_request_1(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmultitlv___024root___eval_debug_assertions(Vmultitlv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultitlv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultitlv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
