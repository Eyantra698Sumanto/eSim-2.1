// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_top.h for the primary calling header

#include "Vaes_top___024root.h"
#include "Vaes_top__Syms.h"

//==========


void Vaes_top___024root___ctor_var_reset(Vaes_top___024root* vlSelf);

Vaes_top___024root::Vaes_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vaes_top___024root___ctor_var_reset(this);
}

void Vaes_top___024root::__Vconfigure(Vaes_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vaes_top___024root::~Vaes_top___024root() {
}

void Vaes_top___024root___initial__TOP__1(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->AES_top__DOT__c0__DOT__done_temp = 0U;
    vlSelf->AES_top__DOT__cr0__DOT__reg2[0U] = 0U;
    vlSelf->AES_top__DOT__cr0__DOT__reg2[1U] = 0U;
    vlSelf->AES_top__DOT__cr0__DOT__reg2[2U] = 0U;
    vlSelf->AES_top__DOT__cr0__DOT__reg2[3U] = 0U;
    vlSelf->AES_top__DOT__c0__DOT__enables = 0U;
    vlSelf->AES_top__DOT__cr0__DOT__reg1[0U] = 0U;
    vlSelf->AES_top__DOT__cr0__DOT__reg1[1U] = 0U;
    vlSelf->AES_top__DOT__cr0__DOT__reg1[2U] = 0U;
    vlSelf->AES_top__DOT__cr0__DOT__reg1[3U] = 0U;
    vlSelf->AES_top__DOT__c0__DOT__nextRnd = 0U;
    vlSelf->AES_top__DOT__c0__DOT__accept_temp = 0U;
    vlSelf->AES_top__DOT__c0__DOT__reg_completed = 1U;
    vlSelf->AES_top__DOT__c0__DOT__rnd = 0U;
}

void Vaes_top___024root___settle__TOP__4(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->done = vlSelf->AES_top__DOT__c0__DOT__done_temp;
    vlSelf->completed_round = vlSelf->AES_top__DOT__c0__DOT__reg_completed;
}

void Vaes_top___024root___eval_initial(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___eval_initial\n"); );
    // Body
    Vaes_top___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__k0__DOT__a0__1(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__k0__DOT__a1__2(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__k0__DOT__a2__3(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__k0__DOT__a3__4(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q0__5(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q1__6(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q2__7(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q3__8(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q4__9(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q5__10(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q6__11(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q7__12(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q8__13(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q9__14(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q10__15(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q11__16(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q12__17(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q13__18(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q14__19(Vaes_top_aes_sbox* vlSelf);
void Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q15__20(Vaes_top_aes_sbox* vlSelf);
void Vaes_top___024root___sequent__TOP__3(Vaes_top___024root* vlSelf);

void Vaes_top___024root___eval_settle(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___eval_settle\n"); );
    // Body
    Vaes_top___024root___settle__TOP__4(vlSelf);
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__k0__DOT__a0__1((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__k0__DOT__a0));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__k0__DOT__a1__2((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__k0__DOT__a1));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__k0__DOT__a2__3((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__k0__DOT__a2));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__k0__DOT__a3__4((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__k0__DOT__a3));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q0__5((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q0));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q1__6((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q1));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q2__7((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q2));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q3__8((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q3));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q4__9((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q4));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q5__10((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q5));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q6__11((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q6));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q7__12((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q7));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q8__13((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q8));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q9__14((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q9));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q10__15((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q10));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q11__16((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q11));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q12__17((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q12));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q13__18((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q13));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q14__19((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q14));
    Vaes_top_aes_sbox___sequent__TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q15__20((&vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q15));
    Vaes_top___024root___sequent__TOP__3(vlSelf);
}

void Vaes_top___024root___final(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___final\n"); );
}

void Vaes_top___024root___ctor_var_reset(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->plain_text);
    VL_RAND_RESET_W(128, vlSelf->cipher_key);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->completed_round = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(128, vlSelf->cipher_text);
    vlSelf->AES_top__DOT__c0__DOT__reg_completed = VL_RAND_RESET_I(10);
    vlSelf->AES_top__DOT__c0__DOT__rnd = VL_RAND_RESET_I(4);
    vlSelf->AES_top__DOT__c0__DOT__nextRnd = VL_RAND_RESET_I(4);
    vlSelf->AES_top__DOT__c0__DOT__accept_temp = VL_RAND_RESET_I(1);
    vlSelf->AES_top__DOT__c0__DOT__enables = VL_RAND_RESET_I(5);
    vlSelf->AES_top__DOT__c0__DOT__done_temp = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->AES_top__DOT__cr0__DOT__reg1);
    VL_RAND_RESET_W(128, vlSelf->AES_top__DOT__cr0__DOT__reg2);
    VL_RAND_RESET_W(128, vlSelf->AES_top__DOT__cr0__DOT__out);
    VL_RAND_RESET_W(128, vlSelf->AES_top__DOT__cr0__DOT__KStoAR);
    VL_RAND_RESET_W(128, vlSelf->AES_top__DOT__cr0__DOT__k0__DOT__op_temp);
}
