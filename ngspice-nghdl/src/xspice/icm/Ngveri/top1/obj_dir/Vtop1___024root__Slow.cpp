// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop1.h for the primary calling header

#include "Vtop1___024root.h"
#include "Vtop1__Syms.h"

//==========


void Vtop1___024root___ctor_var_reset(Vtop1___024root* vlSelf);

Vtop1___024root::Vtop1___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop1___024root___ctor_var_reset(this);
}

void Vtop1___024root::__Vconfigure(Vtop1__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop1___024root::~Vtop1___024root() {
}

extern const VlWide<9>/*287:0*/ Vtop1__ConstPool__CONST_8aaa57a3_0;
extern const VlWide<9>/*287:0*/ Vtop1__ConstPool__CONST_81cf83eb_0;

void Vtop1___024root___settle__TOP__2(Vtop1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop1___024root___settle__TOP__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    // Body
    vlSelf->passed = (0x28U < vlSelf->cyc_cnt);
    vlSelf->top1__DOT__clkF_MUL_valid_a8 = ((IData)(vlSelf->top1__DOT__gen_clkF_MUL_valid_a8__DOT__latched_clk_en) 
                                            & (IData)(vlSelf->clk));
    vlSelf->top1__DOT__clkP_MUL_valid_a2 = ((IData)(vlSelf->top1__DOT__gen_clkP_MUL_valid_a2__DOT__latched_clk_en) 
                                            & (IData)(vlSelf->clk));
    vlSelf->top1__DOT__clkP_MUL_valid_a3 = ((IData)(vlSelf->top1__DOT__gen_clkP_MUL_valid_a3__DOT__latched_clk_en) 
                                            & (IData)(vlSelf->clk));
    vlSelf->top1__DOT__clkP_MUL_valid_a4 = ((IData)(vlSelf->top1__DOT__gen_clkP_MUL_valid_a4__DOT__latched_clk_en) 
                                            & (IData)(vlSelf->clk));
    vlSelf->top1__DOT__clkP_MUL_valid_a5 = ((IData)(vlSelf->top1__DOT__gen_clkP_MUL_valid_a5__DOT__latched_clk_en) 
                                            & (IData)(vlSelf->clk));
    vlSelf->top1__DOT__clkP_MUL_valid_a6 = ((IData)(vlSelf->top1__DOT__gen_clkP_MUL_valid_a6__DOT__latched_clk_en) 
                                            & (IData)(vlSelf->clk));
    vlSelf->top1__DOT__clkP_MUL_valid_a7 = ((IData)(vlSelf->top1__DOT__gen_clkP_MUL_valid_a7__DOT__latched_clk_en) 
                                            & (IData)(vlSelf->clk));
    if (vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_reset_a1) {
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[0U] 
            = Vtop1__ConstPool__CONST_8aaa57a3_0[0U];
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[1U] 
            = Vtop1__ConstPool__CONST_8aaa57a3_0[1U];
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[2U] 
            = Vtop1__ConstPool__CONST_8aaa57a3_0[2U];
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[3U] 
            = Vtop1__ConstPool__CONST_8aaa57a3_0[3U];
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[4U] 
            = Vtop1__ConstPool__CONST_8aaa57a3_0[4U];
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[5U] 
            = Vtop1__ConstPool__CONST_8aaa57a3_0[5U];
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[6U] 
            = Vtop1__ConstPool__CONST_8aaa57a3_0[6U];
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[7U] 
            = Vtop1__ConstPool__CONST_8aaa57a3_0[7U];
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[8U] 
            = Vtop1__ConstPool__CONST_8aaa57a3_0[8U];
    } else {
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[0U] 
            = ((vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U] 
                << 1U) ^ (Vtop1__ConstPool__CONST_81cf83eb_0[0U] 
                          & (- (IData)((1U & vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[1U] 
            = (((vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U] 
                 >> 0x1fU) | (vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U] 
                              << 1U)) ^ (Vtop1__ConstPool__CONST_81cf83eb_0[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[2U] 
            = (((vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U] 
                 >> 0x1fU) | (vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U] 
                              << 1U)) ^ (Vtop1__ConstPool__CONST_81cf83eb_0[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[3U] 
            = (((vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U] 
                 >> 0x1fU) | (vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U] 
                              << 1U)) ^ (Vtop1__ConstPool__CONST_81cf83eb_0[3U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[4U] 
            = (((vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U] 
                 >> 0x1fU) | (vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U] 
                              << 1U)) ^ (Vtop1__ConstPool__CONST_81cf83eb_0[4U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[5U] 
            = (((vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U] 
                 >> 0x1fU) | (vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U] 
                              << 1U)) ^ (Vtop1__ConstPool__CONST_81cf83eb_0[5U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[6U] 
            = (((vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U] 
                 >> 0x1fU) | (vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U] 
                              << 1U)) ^ (Vtop1__ConstPool__CONST_81cf83eb_0[6U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[7U] 
            = (((vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U] 
                 >> 0x1fU) | (vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U] 
                              << 1U)) ^ (Vtop1__ConstPool__CONST_81cf83eb_0[7U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1[8U] 
            = ((vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U] 
                >> 0x1fU) ^ (Vtop1__ConstPool__CONST_81cf83eb_0[8U] 
                             & (- (IData)((1U & vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top1__DOT__gen_clkF_MUL_valid_a8__DOT__latched_clk_en 
            = vlSelf->top1__DOT__MUL_valid_a7;
    }
    vlSelf->failed = vlSelf->top1__DOT__MUL_Error_a7;
    VL_EXTEND_WQ(70,35, __Vtemp8, vlSelf->top1__DOT__MUL_aa_a7);
    VL_EXTEND_WQ(70,35, __Vtemp9, vlSelf->top1__DOT__MUL_bb_a7);
    VL_MUL_W(3, __Vtemp10, __Vtemp8, __Vtemp9);
    vlSelf->top1__DOT__MUL_Error_a6 = ((IData)(vlSelf->reset)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->top1__DOT__MUL_Error_a7) 
                                                   | (0U 
                                                      != 
                                                      (((__Vtemp10[0U] 
                                                         ^ 
                                                         vlSelf->top1__DOT__MUL_mm_a7[0U]) 
                                                        | (__Vtemp10[1U] 
                                                           ^ 
                                                           vlSelf->top1__DOT__MUL_mm_a7[1U])) 
                                                       | ((0x3fU 
                                                           & __Vtemp10[2U]) 
                                                          ^ 
                                                          vlSelf->top1__DOT__MUL_mm_a7[2U]))))));
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top1__DOT__gen_clkP_MUL_valid_a7__DOT__latched_clk_en 
            = vlSelf->top1__DOT__MUL_valid_a6;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top1__DOT__gen_clkP_MUL_valid_a6__DOT__latched_clk_en 
            = vlSelf->top1__DOT__MUL_valid_a5;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top1__DOT__gen_clkP_MUL_valid_a5__DOT__latched_clk_en 
            = vlSelf->top1__DOT__MUL_valid_a4;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top1__DOT__gen_clkP_MUL_valid_a4__DOT__latched_clk_en 
            = vlSelf->top1__DOT__MUL_valid_a3;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top1__DOT__gen_clkP_MUL_valid_a3__DOT__latched_clk_en 
            = vlSelf->top1__DOT__MUL_valid_a2;
    }
    vlSelf->top1__DOT__RW_rand_vect[0U] = vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U];
    vlSelf->top1__DOT__RW_rand_vect[1U] = vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U];
    vlSelf->top1__DOT__RW_rand_vect[2U] = vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U];
    vlSelf->top1__DOT__RW_rand_vect[3U] = vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U];
    vlSelf->top1__DOT__RW_rand_vect[4U] = vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U];
    vlSelf->top1__DOT__RW_rand_vect[5U] = vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U];
    vlSelf->top1__DOT__RW_rand_vect[6U] = vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U];
    vlSelf->top1__DOT__RW_rand_vect[7U] = vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U];
    vlSelf->top1__DOT__RW_rand_vect[8U] = (((IData)(
                                                    (0x7fffffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U]))))) 
                                            << 1U) 
                                           | vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U]);
    vlSelf->top1__DOT__RW_rand_vect[9U] = (((IData)(
                                                    (0x7fffffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U]))))) 
                                            >> 0x1fU) 
                                           | ((IData)(
                                                      ((0x7fffffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U])))) 
                                                       >> 0x20U)) 
                                              << 1U));
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top1__DOT__gen_clkP_MUL_valid_a2__DOT__latched_clk_en 
            = vlSelf->top1__DOT__MUL_valid_a1;
    }
}

void Vtop1___024root___eval_initial(Vtop1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop1___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__top1__DOT__clkF_MUL_valid_a8 
        = vlSelf->top1__DOT__clkF_MUL_valid_a8;
    vlSelf->__Vclklast__TOP__top1__DOT__clkP_MUL_valid_a2 
        = vlSelf->top1__DOT__clkP_MUL_valid_a2;
    vlSelf->__Vclklast__TOP__top1__DOT__clkP_MUL_valid_a3 
        = vlSelf->top1__DOT__clkP_MUL_valid_a3;
    vlSelf->__Vclklast__TOP__top1__DOT__clkP_MUL_valid_a4 
        = vlSelf->top1__DOT__clkP_MUL_valid_a4;
    vlSelf->__Vclklast__TOP__top1__DOT__clkP_MUL_valid_a5 
        = vlSelf->top1__DOT__clkP_MUL_valid_a5;
    vlSelf->__Vclklast__TOP__top1__DOT__clkP_MUL_valid_a6 
        = vlSelf->top1__DOT__clkP_MUL_valid_a6;
    vlSelf->__Vclklast__TOP__top1__DOT__clkP_MUL_valid_a7 
        = vlSelf->top1__DOT__clkP_MUL_valid_a7;
}

void Vtop1___024root___eval_settle(Vtop1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop1___024root___eval_settle\n"); );
    // Body
    Vtop1___024root___settle__TOP__2(vlSelf);
}

void Vtop1___024root___final(Vtop1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop1___024root___final\n"); );
}

void Vtop1___024root___ctor_var_reset(Vtop1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->cyc_cnt = VL_RAND_RESET_I(32);
    vlSelf->passed = VL_RAND_RESET_I(1);
    vlSelf->failed = VL_RAND_RESET_I(1);
    VL_ZERO_RESET_W(320, vlSelf->top1__DOT__RW_rand_vect);
    vlSelf->top1__DOT__MUL_Error_a6 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__MUL_Error_a7 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__MUL_aa_a1 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_aa_a2 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_aa_a3 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_aa_a4 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_aa_a5 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_aa_a6 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_aa_a7 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_bb_a1 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_bb_a2 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_bb_a3 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_bb_a4 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_bb_a5 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_bb_a6 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_bb_a7 = VL_RAND_RESET_Q(35);
    VL_RAND_RESET_W(70, vlSelf->top1__DOT__MUL_mm_a7);
    vlSelf->top1__DOT__MUL_mm1_a3 = VL_RAND_RESET_I(17);
    vlSelf->top1__DOT__MUL_mm1_a4 = VL_RAND_RESET_I(17);
    vlSelf->top1__DOT__MUL_mm1_a5 = VL_RAND_RESET_I(17);
    vlSelf->top1__DOT__MUL_mm1_a6 = VL_RAND_RESET_I(17);
    vlSelf->top1__DOT__MUL_mm2_a4 = VL_RAND_RESET_Q(36);
    vlSelf->top1__DOT__MUL_mm3_a5 = VL_RAND_RESET_Q(36);
    vlSelf->top1__DOT__MUL_mm3_a6 = VL_RAND_RESET_I(17);
    vlSelf->top1__DOT__MUL_mm4_a6 = VL_RAND_RESET_Q(36);
    vlSelf->top1__DOT__MUL_pp1_a2 = VL_RAND_RESET_Q(34);
    vlSelf->top1__DOT__MUL_pp1_a3 = VL_RAND_RESET_I(17);
    vlSelf->top1__DOT__MUL_pp2_a3 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_pp3_a4 = VL_RAND_RESET_Q(35);
    vlSelf->top1__DOT__MUL_pp4_a5 = VL_RAND_RESET_Q(36);
    vlSelf->top1__DOT__MUL_valid_a1 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__MUL_valid_a2 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__MUL_valid_a3 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__MUL_valid_a4 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__MUL_valid_a5 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__MUL_valid_a6 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__MUL_valid_a7 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__clkF_MUL_valid_a8 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__clkP_MUL_valid_a2 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__clkP_MUL_valid_a3 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__clkP_MUL_valid_a4 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__clkP_MUL_valid_a5 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__clkP_MUL_valid_a6 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__clkP_MUL_valid_a7 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(257, vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a1);
    VL_RAND_RESET_W(257, vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2);
    vlSelf->top1__DOT__pseudo_rand__DOT__DEFAULT_reset_a1 = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__gen_clkF_MUL_valid_a8__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__gen_clkP_MUL_valid_a2__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__gen_clkP_MUL_valid_a3__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__gen_clkP_MUL_valid_a4__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__gen_clkP_MUL_valid_a5__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__gen_clkP_MUL_valid_a6__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top1__DOT__gen_clkP_MUL_valid_a7__DOT__latched_clk_en = VL_RAND_RESET_I(1);
}
