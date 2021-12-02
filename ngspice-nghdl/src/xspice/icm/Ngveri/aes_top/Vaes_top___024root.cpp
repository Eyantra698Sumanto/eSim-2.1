// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_top.h for the primary calling header

#include "Vaes_top___024root.h"
#include "Vaes_top__Syms.h"

//==========

VL_INLINE_OPT void Vaes_top___024root___sequent__TOP__2(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rstn) {
        vlSelf->AES_top__DOT__cr0__DOT__reg2[0U] = 0U;
        vlSelf->AES_top__DOT__cr0__DOT__reg2[1U] = 0U;
        vlSelf->AES_top__DOT__cr0__DOT__reg2[2U] = 0U;
        vlSelf->AES_top__DOT__cr0__DOT__reg2[3U] = 0U;
    } else {
        vlSelf->AES_top__DOT__cr0__DOT__reg2[0U] = 
            ((0U == (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd))
              ? vlSelf->cipher_key[0U] : vlSelf->AES_top__DOT__cr0__DOT__KStoAR[0U]);
        vlSelf->AES_top__DOT__cr0__DOT__reg2[1U] = 
            ((0U == (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd))
              ? vlSelf->cipher_key[1U] : vlSelf->AES_top__DOT__cr0__DOT__KStoAR[1U]);
        vlSelf->AES_top__DOT__cr0__DOT__reg2[2U] = 
            ((0U == (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd))
              ? vlSelf->cipher_key[2U] : vlSelf->AES_top__DOT__cr0__DOT__KStoAR[2U]);
        vlSelf->AES_top__DOT__cr0__DOT__reg2[3U] = 
            ((0U == (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd))
              ? vlSelf->cipher_key[3U] : vlSelf->AES_top__DOT__cr0__DOT__KStoAR[3U]);
    }
    if (vlSelf->rstn) {
        vlSelf->AES_top__DOT__c0__DOT__rnd = 0U;
        vlSelf->AES_top__DOT__c0__DOT__nextRnd = 0U;
        vlSelf->AES_top__DOT__c0__DOT__accept_temp = 0U;
        vlSelf->AES_top__DOT__c0__DOT__enables = 0U;
        vlSelf->AES_top__DOT__c0__DOT__done_temp = 0U;
        vlSelf->AES_top__DOT__c0__DOT__reg_completed = 1U;
    } else if (vlSelf->start) {
        vlSelf->AES_top__DOT__c0__DOT__reg_completed 
            = (0x3ffU & ((IData)(vlSelf->AES_top__DOT__c0__DOT__reg_completed) 
                         << 1U));
        vlSelf->AES_top__DOT__c0__DOT__rnd = 1U;
        vlSelf->AES_top__DOT__c0__DOT__accept_temp = 1U;
        vlSelf->AES_top__DOT__c0__DOT__enables = 3U;
    } else if (((1U <= (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd)) 
                & (9U > (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd)))) {
        vlSelf->AES_top__DOT__c0__DOT__nextRnd = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd)));
        vlSelf->AES_top__DOT__c0__DOT__reg_completed 
            = (0x3ffU & ((IData)(vlSelf->AES_top__DOT__c0__DOT__reg_completed) 
                         << 1U));
        vlSelf->AES_top__DOT__c0__DOT__enables = 0x1fU;
        vlSelf->AES_top__DOT__c0__DOT__accept_temp = 0U;
        vlSelf->AES_top__DOT__c0__DOT__rnd = vlSelf->AES_top__DOT__c0__DOT__nextRnd;
    } else if ((9U == (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd))) {
        vlSelf->AES_top__DOT__c0__DOT__nextRnd = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd)));
        vlSelf->AES_top__DOT__c0__DOT__reg_completed 
            = (0x3ffU & ((IData)(vlSelf->AES_top__DOT__c0__DOT__reg_completed) 
                         << 1U));
        vlSelf->AES_top__DOT__c0__DOT__enables = 0x1bU;
        vlSelf->AES_top__DOT__c0__DOT__done_temp = 1U;
        vlSelf->AES_top__DOT__c0__DOT__rnd = vlSelf->AES_top__DOT__c0__DOT__nextRnd;
    } else if ((0xaU == (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd))) {
        vlSelf->AES_top__DOT__c0__DOT__done_temp = 0U;
        vlSelf->AES_top__DOT__c0__DOT__rnd = 0U;
        vlSelf->AES_top__DOT__c0__DOT__nextRnd = 0U;
        vlSelf->AES_top__DOT__c0__DOT__enables = 0U;
        vlSelf->AES_top__DOT__c0__DOT__reg_completed = 1U;
    }
    if (vlSelf->rstn) {
        vlSelf->AES_top__DOT__cr0__DOT__reg1[0U] = 0U;
        vlSelf->AES_top__DOT__cr0__DOT__reg1[1U] = 0U;
        vlSelf->AES_top__DOT__cr0__DOT__reg1[2U] = 0U;
        vlSelf->AES_top__DOT__cr0__DOT__reg1[3U] = 0U;
    } else {
        vlSelf->AES_top__DOT__cr0__DOT__reg1[0U] = 
            (((IData)(vlSelf->AES_top__DOT__c0__DOT__accept_temp) 
              & (0U == (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd)))
              ? vlSelf->plain_text[0U] : vlSelf->AES_top__DOT__cr0__DOT__out[0U]);
        vlSelf->AES_top__DOT__cr0__DOT__reg1[1U] = 
            (((IData)(vlSelf->AES_top__DOT__c0__DOT__accept_temp) 
              & (0U == (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd)))
              ? vlSelf->plain_text[1U] : vlSelf->AES_top__DOT__cr0__DOT__out[1U]);
        vlSelf->AES_top__DOT__cr0__DOT__reg1[2U] = 
            (((IData)(vlSelf->AES_top__DOT__c0__DOT__accept_temp) 
              & (0U == (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd)))
              ? vlSelf->plain_text[2U] : vlSelf->AES_top__DOT__cr0__DOT__out[2U]);
        vlSelf->AES_top__DOT__cr0__DOT__reg1[3U] = 
            (((IData)(vlSelf->AES_top__DOT__c0__DOT__accept_temp) 
              & (0U == (IData)(vlSelf->AES_top__DOT__c0__DOT__rnd)))
              ? vlSelf->plain_text[3U] : vlSelf->AES_top__DOT__cr0__DOT__out[3U]);
    }
    vlSelf->done = vlSelf->AES_top__DOT__c0__DOT__done_temp;
    vlSelf->completed_round = vlSelf->AES_top__DOT__c0__DOT__reg_completed;
}

VL_INLINE_OPT void Vaes_top___024root___sequent__TOP__3(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b0;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b1;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b2;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b3;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b0;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b1;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b2;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b3;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b0;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b1;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b2;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b3;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b0;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b1;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b2;
    CData/*7:0*/ AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b3;
    CData/*3:0*/ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm;
    CData/*3:0*/ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm;
    CData/*3:0*/ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm;
    CData/*3:0*/ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__SBtoSR;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__SRtoMC;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__MCtoAR;
    IData/*31:0*/ AES_top__DOT__cr0__DOT__k0__DOT__tem;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__sB0__DOT__op_temp;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__sR0__DOT__op_temp;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__m0__DOT__op_temp;
    IData/*31:0*/ AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul0__op;
    IData/*31:0*/ AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul1__op;
    IData/*31:0*/ AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul2__op;
    IData/*31:0*/ AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul3__op;
    IData/*31:0*/ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__Vfuncout;
    IData/*31:0*/ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__Vfuncout;
    IData/*31:0*/ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__Vfuncout;
    IData/*31:0*/ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    // Body
    AES_top__DOT__cr0__DOT__k0__DOT__tem = (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__k0__DOT__a0.op) 
                                             << 0x18U) 
                                            | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__k0__DOT__a1.op) 
                                                << 0x10U) 
                                               | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__k0__DOT__a2.op) 
                                                   << 8U) 
                                                  | (IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__k0__DOT__a3.op))));
    AES_top__DOT__cr0__DOT__sB0__DOT__op_temp[0U] = 
        (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q12.op) 
          << 0x18U) | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q13.op) 
                        << 0x10U) | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q14.op) 
                                      << 8U) | (IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q15.op))));
    AES_top__DOT__cr0__DOT__sB0__DOT__op_temp[1U] = 
        (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q8.op) 
          << 0x18U) | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q9.op) 
                        << 0x10U) | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q10.op) 
                                      << 8U) | (IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q11.op))));
    AES_top__DOT__cr0__DOT__sB0__DOT__op_temp[2U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q0.op) 
                                                                                << 0x18U) 
                                                                               | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q1.op) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q2.op) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q3.op)))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q4.op) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q5.op) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q6.op) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q7.op))))))));
    AES_top__DOT__cr0__DOT__sB0__DOT__op_temp[3U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q0.op) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q1.op) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q2.op) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q3.op)))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q4.op) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q5.op) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q6.op) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q7.op))))))) 
                                                             >> 0x20U));
    __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm 
        = vlSelf->AES_top__DOT__c0__DOT__rnd;
    __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__Vfuncout 
        = ((8U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
            ? ((4U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
                ? 0U : ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
                         ? 0U : ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
                                  ? 0x36000000U : 0x1b000000U)))
            : ((4U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
                ? ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
                    ? ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
                        ? 0x80000000U : 0x40000000U)
                    : ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
                        ? 0x20000000U : 0x10000000U))
                : ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
                    ? ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
                        ? 0x8000000U : 0x4000000U) : 
                   ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__rndCm))
                     ? 0x2000000U : 0x1000000U))));
    vlSelf->AES_top__DOT__cr0__DOT__k0__DOT__op_temp[3U] 
        = ((vlSelf->AES_top__DOT__cr0__DOT__reg2[3U] 
            ^ AES_top__DOT__cr0__DOT__k0__DOT__tem) 
           ^ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__0__Vfuncout);
    __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm 
        = vlSelf->AES_top__DOT__c0__DOT__rnd;
    __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__Vfuncout 
        = ((8U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
            ? ((4U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
                ? 0U : ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
                         ? 0U : ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
                                  ? 0x36000000U : 0x1b000000U)))
            : ((4U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
                ? ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
                    ? ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
                        ? 0x80000000U : 0x40000000U)
                    : ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
                        ? 0x20000000U : 0x10000000U))
                : ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
                    ? ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
                        ? 0x8000000U : 0x4000000U) : 
                   ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__rndCm))
                     ? 0x2000000U : 0x1000000U))));
    vlSelf->AES_top__DOT__cr0__DOT__k0__DOT__op_temp[2U] 
        = (((vlSelf->AES_top__DOT__cr0__DOT__reg2[3U] 
             ^ AES_top__DOT__cr0__DOT__k0__DOT__tem) 
            ^ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__1__Vfuncout) 
           ^ (0x3fffffU & vlSelf->AES_top__DOT__cr0__DOT__reg2[2U]));
    __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm 
        = vlSelf->AES_top__DOT__c0__DOT__rnd;
    __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__Vfuncout 
        = ((8U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
            ? ((4U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
                ? 0U : ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
                         ? 0U : ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
                                  ? 0x36000000U : 0x1b000000U)))
            : ((4U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
                ? ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
                    ? ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
                        ? 0x80000000U : 0x40000000U)
                    : ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
                        ? 0x20000000U : 0x10000000U))
                : ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
                    ? ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
                        ? 0x8000000U : 0x4000000U) : 
                   ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__rndCm))
                     ? 0x2000000U : 0x1000000U))));
    vlSelf->AES_top__DOT__cr0__DOT__k0__DOT__op_temp[1U] 
        = ((((vlSelf->AES_top__DOT__cr0__DOT__reg2[3U] 
              ^ AES_top__DOT__cr0__DOT__k0__DOT__tem) 
             ^ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__2__Vfuncout) 
            ^ (0x3fffffU & vlSelf->AES_top__DOT__cr0__DOT__reg2[2U])) 
           ^ vlSelf->AES_top__DOT__cr0__DOT__reg2[1U]);
    __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm 
        = vlSelf->AES_top__DOT__c0__DOT__rnd;
    __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__Vfuncout 
        = ((8U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
            ? ((4U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
                ? 0U : ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
                         ? 0U : ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
                                  ? 0x36000000U : 0x1b000000U)))
            : ((4U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
                ? ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
                    ? ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
                        ? 0x80000000U : 0x40000000U)
                    : ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
                        ? 0x20000000U : 0x10000000U))
                : ((2U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
                    ? ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
                        ? 0x8000000U : 0x4000000U) : 
                   ((1U & (IData)(__Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__rndCm))
                     ? 0x2000000U : 0x1000000U))));
    vlSelf->AES_top__DOT__cr0__DOT__k0__DOT__op_temp[0U] 
        = (((((vlSelf->AES_top__DOT__cr0__DOT__reg2[3U] 
               ^ AES_top__DOT__cr0__DOT__k0__DOT__tem) 
              ^ __Vfunc_AES_top__DOT__cr0__DOT__k0__DOT__rcon__3__Vfuncout) 
             ^ (0x3fffffU & vlSelf->AES_top__DOT__cr0__DOT__reg2[2U])) 
            ^ vlSelf->AES_top__DOT__cr0__DOT__reg2[1U]) 
           ^ vlSelf->AES_top__DOT__cr0__DOT__reg2[0U]);
    if ((0x10U & (IData)(vlSelf->AES_top__DOT__c0__DOT__enables))) {
        AES_top__DOT__cr0__DOT__SBtoSR[0U] = AES_top__DOT__cr0__DOT__sB0__DOT__op_temp[0U];
        AES_top__DOT__cr0__DOT__SBtoSR[1U] = AES_top__DOT__cr0__DOT__sB0__DOT__op_temp[1U];
        AES_top__DOT__cr0__DOT__SBtoSR[2U] = AES_top__DOT__cr0__DOT__sB0__DOT__op_temp[2U];
        AES_top__DOT__cr0__DOT__SBtoSR[3U] = AES_top__DOT__cr0__DOT__sB0__DOT__op_temp[3U];
    } else {
        AES_top__DOT__cr0__DOT__SBtoSR[0U] = vlSelf->AES_top__DOT__cr0__DOT__reg1[0U];
        AES_top__DOT__cr0__DOT__SBtoSR[1U] = vlSelf->AES_top__DOT__cr0__DOT__reg1[1U];
        AES_top__DOT__cr0__DOT__SBtoSR[2U] = vlSelf->AES_top__DOT__cr0__DOT__reg1[2U];
        AES_top__DOT__cr0__DOT__SBtoSR[3U] = vlSelf->AES_top__DOT__cr0__DOT__reg1[3U];
    }
    if ((1U & (IData)(vlSelf->AES_top__DOT__c0__DOT__enables))) {
        vlSelf->AES_top__DOT__cr0__DOT__KStoAR[0U] 
            = vlSelf->AES_top__DOT__cr0__DOT__k0__DOT__op_temp[0U];
        vlSelf->AES_top__DOT__cr0__DOT__KStoAR[1U] 
            = vlSelf->AES_top__DOT__cr0__DOT__k0__DOT__op_temp[1U];
        vlSelf->AES_top__DOT__cr0__DOT__KStoAR[2U] 
            = vlSelf->AES_top__DOT__cr0__DOT__k0__DOT__op_temp[2U];
        vlSelf->AES_top__DOT__cr0__DOT__KStoAR[3U] 
            = vlSelf->AES_top__DOT__cr0__DOT__k0__DOT__op_temp[3U];
    } else {
        vlSelf->AES_top__DOT__cr0__DOT__KStoAR[0U] 
            = vlSelf->AES_top__DOT__cr0__DOT__reg2[0U];
        vlSelf->AES_top__DOT__cr0__DOT__KStoAR[1U] 
            = vlSelf->AES_top__DOT__cr0__DOT__reg2[1U];
        vlSelf->AES_top__DOT__cr0__DOT__KStoAR[2U] 
            = vlSelf->AES_top__DOT__cr0__DOT__reg2[2U];
        vlSelf->AES_top__DOT__cr0__DOT__KStoAR[3U] 
            = vlSelf->AES_top__DOT__cr0__DOT__reg2[3U];
    }
    __Vtemp18[1U] = (((IData)((((QData)((IData)(((0xff000000U 
                                                  & AES_top__DOT__cr0__DOT__SBtoSR[3U]) 
                                                 | ((0xff0000U 
                                                     & AES_top__DOT__cr0__DOT__SBtoSR[2U]) 
                                                    | ((0xff00U 
                                                        & AES_top__DOT__cr0__DOT__SBtoSR[1U]) 
                                                       | (0xffU 
                                                          & AES_top__DOT__cr0__DOT__SBtoSR[0U])))))) 
                                << 0x10U) | (QData)((IData)(
                                                            ((0xff00U 
                                                              & (AES_top__DOT__cr0__DOT__SBtoSR[2U] 
                                                                 >> 0x10U)) 
                                                             | (0xffU 
                                                                & (AES_top__DOT__cr0__DOT__SBtoSR[1U] 
                                                                   >> 0x10U))))))) 
                      >> 8U) | ((IData)(((((QData)((IData)(
                                                           ((0xff000000U 
                                                             & AES_top__DOT__cr0__DOT__SBtoSR[3U]) 
                                                            | ((0xff0000U 
                                                                & AES_top__DOT__cr0__DOT__SBtoSR[2U]) 
                                                               | ((0xff00U 
                                                                   & AES_top__DOT__cr0__DOT__SBtoSR[1U]) 
                                                                  | (0xffU 
                                                                     & AES_top__DOT__cr0__DOT__SBtoSR[0U])))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            ((0xff00U 
                                                              & (AES_top__DOT__cr0__DOT__SBtoSR[2U] 
                                                                 >> 0x10U)) 
                                                             | (0xffU 
                                                                & (AES_top__DOT__cr0__DOT__SBtoSR[1U] 
                                                                   >> 0x10U)))))) 
                                         >> 0x20U)) 
                                << 0x18U));
    __Vtemp19[0U] = ((0xff000000U & AES_top__DOT__cr0__DOT__SBtoSR[1U]) 
                     | ((0xff0000U & AES_top__DOT__cr0__DOT__SBtoSR[0U]) 
                        | ((0xff00U & AES_top__DOT__cr0__DOT__SBtoSR[3U]) 
                           | (0xffU & AES_top__DOT__cr0__DOT__SBtoSR[2U]))));
    AES_top__DOT__cr0__DOT__sR0__DOT__op_temp[0U] = 
        ((0xff000000U & AES_top__DOT__cr0__DOT__SBtoSR[0U]) 
         | ((0xff0000U & AES_top__DOT__cr0__DOT__SBtoSR[3U]) 
            | ((0xff00U & AES_top__DOT__cr0__DOT__SBtoSR[2U]) 
               | (0xffU & AES_top__DOT__cr0__DOT__SBtoSR[1U]))));
    AES_top__DOT__cr0__DOT__sR0__DOT__op_temp[1U] = 
        __Vtemp19[0U];
    AES_top__DOT__cr0__DOT__sR0__DOT__op_temp[2U] = 
        (((0xff0000U & ((IData)((((QData)((IData)((
                                                   (0xff000000U 
                                                    & AES_top__DOT__cr0__DOT__SBtoSR[3U]) 
                                                   | ((0xff0000U 
                                                       & AES_top__DOT__cr0__DOT__SBtoSR[2U]) 
                                                      | ((0xff00U 
                                                          & AES_top__DOT__cr0__DOT__SBtoSR[1U]) 
                                                         | (0xffU 
                                                            & AES_top__DOT__cr0__DOT__SBtoSR[0U])))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              ((0xff00U 
                                                                & (AES_top__DOT__cr0__DOT__SBtoSR[2U] 
                                                                   >> 0x10U)) 
                                                               | (0xffU 
                                                                  & (AES_top__DOT__cr0__DOT__SBtoSR[1U] 
                                                                     >> 0x10U))))))) 
                        << 0x10U)) | ((0xff00U & AES_top__DOT__cr0__DOT__SBtoSR[0U]) 
                                      | (0xffU & AES_top__DOT__cr0__DOT__SBtoSR[3U]))) 
         | (__Vtemp18[1U] << 0x18U));
    AES_top__DOT__cr0__DOT__sR0__DOT__op_temp[3U] = 
        ((__Vtemp18[1U] >> 8U) | (0xff000000U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((0xff000000U 
                                                                              & AES_top__DOT__cr0__DOT__SBtoSR[3U]) 
                                                                             | ((0xff0000U 
                                                                                & AES_top__DOT__cr0__DOT__SBtoSR[2U]) 
                                                                                | ((0xff00U 
                                                                                & AES_top__DOT__cr0__DOT__SBtoSR[1U]) 
                                                                                | (0xffU 
                                                                                & AES_top__DOT__cr0__DOT__SBtoSR[0U])))))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             ((0xff00U 
                                                                               & (AES_top__DOT__cr0__DOT__SBtoSR[2U] 
                                                                                >> 0x10U)) 
                                                                              | (0xffU 
                                                                                & (AES_top__DOT__cr0__DOT__SBtoSR[1U] 
                                                                                >> 0x10U)))))) 
                                                          >> 0x20U)) 
                                                 << 0x10U)));
    if ((8U & (IData)(vlSelf->AES_top__DOT__c0__DOT__enables))) {
        AES_top__DOT__cr0__DOT__SRtoMC[0U] = AES_top__DOT__cr0__DOT__sR0__DOT__op_temp[0U];
        AES_top__DOT__cr0__DOT__SRtoMC[1U] = AES_top__DOT__cr0__DOT__sR0__DOT__op_temp[1U];
        AES_top__DOT__cr0__DOT__SRtoMC[2U] = AES_top__DOT__cr0__DOT__sR0__DOT__op_temp[2U];
        AES_top__DOT__cr0__DOT__SRtoMC[3U] = AES_top__DOT__cr0__DOT__sR0__DOT__op_temp[3U];
    } else {
        AES_top__DOT__cr0__DOT__SRtoMC[0U] = AES_top__DOT__cr0__DOT__SBtoSR[0U];
        AES_top__DOT__cr0__DOT__SRtoMC[1U] = AES_top__DOT__cr0__DOT__SBtoSR[1U];
        AES_top__DOT__cr0__DOT__SRtoMC[2U] = AES_top__DOT__cr0__DOT__SBtoSR[2U];
        AES_top__DOT__cr0__DOT__SRtoMC[3U] = AES_top__DOT__cr0__DOT__SBtoSR[3U];
    }
    AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b0 
        = (0xffU & ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                     >> 0x1fU) ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                            << 9U) 
                                           | (0x1feU 
                                              & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                                 >> 0x17U))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                         << 9U) | (0x1feU & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                             >> 0x17U)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b1 
        = (0xffU & ((0x800000U & AES_top__DOT__cr0__DOT__SRtoMC[3U])
                     ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                  << 0x11U) | (0x1fffeU 
                                               & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                                  >> 0xfU))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                         << 0x11U) | (0x1fffeU & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                                  >> 0xfU)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b2 
        = (0xffU & ((0x8000U & AES_top__DOT__cr0__DOT__SRtoMC[3U])
                     ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                  << 0x19U) | (0x1fffffeU 
                                               & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                                  >> 7U))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                         << 0x19U) | (0x1fffffeU & 
                                      (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                       >> 7U)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b3 
        = (0xffU & ((0x80U & AES_top__DOT__cr0__DOT__SRtoMC[3U])
                     ? (0x1bU ^ (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                 << 1U)) : (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                            << 1U)));
    AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b0 
        = (0xffU & ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                     >> 0x1fU) ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                            << 9U) 
                                           | (0x1feU 
                                              & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                                 >> 0x17U))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                         << 9U) | (0x1feU & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                             >> 0x17U)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b1 
        = (0xffU & ((0x800000U & AES_top__DOT__cr0__DOT__SRtoMC[2U])
                     ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                  << 0x11U) | (0x1fffeU 
                                               & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                                  >> 0xfU))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                         << 0x11U) | (0x1fffeU & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                                  >> 0xfU)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b2 
        = (0xffU & ((0x8000U & AES_top__DOT__cr0__DOT__SRtoMC[2U])
                     ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                  << 0x19U) | (0x1fffffeU 
                                               & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                                  >> 7U))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                         << 0x19U) | (0x1fffffeU & 
                                      (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                       >> 7U)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b3 
        = (0xffU & ((0x80U & AES_top__DOT__cr0__DOT__SRtoMC[2U])
                     ? (0x1bU ^ (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                 << 1U)) : (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                            << 1U)));
    AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b0 
        = (0xffU & ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                     >> 0x1fU) ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                            << 9U) 
                                           | (0x1feU 
                                              & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                                 >> 0x17U))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                         << 9U) | (0x1feU & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                             >> 0x17U)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b1 
        = (0xffU & ((0x800000U & AES_top__DOT__cr0__DOT__SRtoMC[1U])
                     ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                  << 0x11U) | (0x1fffeU 
                                               & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                                  >> 0xfU))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                         << 0x11U) | (0x1fffeU & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                                  >> 0xfU)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b2 
        = (0xffU & ((0x8000U & AES_top__DOT__cr0__DOT__SRtoMC[1U])
                     ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                  << 0x19U) | (0x1fffffeU 
                                               & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                                  >> 7U))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                         << 0x19U) | (0x1fffffeU & 
                                      (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                       >> 7U)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b3 
        = (0xffU & ((0x80U & AES_top__DOT__cr0__DOT__SRtoMC[1U])
                     ? (0x1bU ^ (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                 << 1U)) : (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                            << 1U)));
    AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b0 
        = (0xffU & ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                     >> 0x1fU) ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                            << 9U) 
                                           | (0x1feU 
                                              & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                                 >> 0x17U))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                         << 9U) | (0x1feU & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                             >> 0x17U)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b1 
        = (0xffU & ((0x800000U & AES_top__DOT__cr0__DOT__SRtoMC[0U])
                     ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                  << 0x11U) | (0x1fffeU 
                                               & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                                  >> 0xfU))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                         << 0x11U) | (0x1fffeU & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                                  >> 0xfU)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b2 
        = (0xffU & ((0x8000U & AES_top__DOT__cr0__DOT__SRtoMC[0U])
                     ? (0x1bU ^ ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                  << 0x19U) | (0x1fffffeU 
                                               & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                                  >> 7U))))
                     : ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                         << 0x19U) | (0x1fffffeU & 
                                      (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                       >> 7U)))));
    AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b3 
        = (0xffU & ((0x80U & AES_top__DOT__cr0__DOT__SRtoMC[0U])
                     ? (0x1bU ^ (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                 << 1U)) : (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                            << 1U)));
    AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul0__op 
        = ((0xff000000U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b0) 
                               ^ AES_top__DOT__cr0__DOT__SRtoMC[3U]) 
                              << 0x18U) ^ (0xff000000U 
                                           & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                              << 0x10U))) 
                            ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b1) 
                               << 0x18U)) ^ (0xff000000U 
                                             & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                                << 8U)))) 
           | ((0xff0000U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b1) 
                                << 0x10U) ^ ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                                   >> 8U)))) 
                              ^ (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                 << 0x10U)) ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b2) 
                                               << 0x10U)) 
                            ^ (0xffff0000U & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                              << 8U)))) 
              | ((0xff00U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b2) 
                                 << 8U) ^ ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                            << 0x18U) 
                                           | (0xffff00U 
                                              & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                                 >> 8U)))) 
                               ^ ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                   << 0x10U) | (0xff00U 
                                                & (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                                   >> 0x10U)))) 
                              ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b3) 
                                 << 8U)) ^ (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                            << 8U))) 
                 | (0xffU & (((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b3) 
                                ^ ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                    << 0x18U) | (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                                 >> 8U))) 
                               ^ ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                   << 0x10U) | (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                                >> 0x10U))) 
                              ^ (IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul0__DOT__b0)) 
                             ^ ((AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                 << 8U) | (AES_top__DOT__cr0__DOT__SRtoMC[3U] 
                                           >> 0x18U)))))));
    AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul1__op 
        = ((0xff000000U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b0) 
                               ^ AES_top__DOT__cr0__DOT__SRtoMC[2U]) 
                              << 0x18U) ^ (0xff000000U 
                                           & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                              << 0x10U))) 
                            ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b1) 
                               << 0x18U)) ^ (0xff000000U 
                                             & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                                << 8U)))) 
           | ((0xff0000U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b1) 
                                << 0x10U) ^ ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                                   >> 8U)))) 
                              ^ (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                 << 0x10U)) ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b2) 
                                               << 0x10U)) 
                            ^ (0xffff0000U & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                              << 8U)))) 
              | ((0xff00U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b2) 
                                 << 8U) ^ ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                            << 0x18U) 
                                           | (0xffff00U 
                                              & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                                 >> 8U)))) 
                               ^ ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                   << 0x10U) | (0xff00U 
                                                & (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                                   >> 0x10U)))) 
                              ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b3) 
                                 << 8U)) ^ (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                            << 8U))) 
                 | (0xffU & (((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b3) 
                                ^ ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                    << 0x18U) | (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                                 >> 8U))) 
                               ^ ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                   << 0x10U) | (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                                >> 0x10U))) 
                              ^ (IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul1__DOT__b0)) 
                             ^ ((AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                 << 8U) | (AES_top__DOT__cr0__DOT__SRtoMC[2U] 
                                           >> 0x18U)))))));
    AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul2__op 
        = ((0xff000000U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b0) 
                               ^ AES_top__DOT__cr0__DOT__SRtoMC[1U]) 
                              << 0x18U) ^ (0xff000000U 
                                           & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                              << 0x10U))) 
                            ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b1) 
                               << 0x18U)) ^ (0xff000000U 
                                             & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                                << 8U)))) 
           | ((0xff0000U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b1) 
                                << 0x10U) ^ ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                                   >> 8U)))) 
                              ^ (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                 << 0x10U)) ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b2) 
                                               << 0x10U)) 
                            ^ (0xffff0000U & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                              << 8U)))) 
              | ((0xff00U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b2) 
                                 << 8U) ^ ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                            << 0x18U) 
                                           | (0xffff00U 
                                              & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                                 >> 8U)))) 
                               ^ ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                   << 0x10U) | (0xff00U 
                                                & (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                                   >> 0x10U)))) 
                              ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b3) 
                                 << 8U)) ^ (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                            << 8U))) 
                 | (0xffU & (((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b3) 
                                ^ ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                    << 0x18U) | (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                                 >> 8U))) 
                               ^ ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                   << 0x10U) | (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                                >> 0x10U))) 
                              ^ (IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul2__DOT__b0)) 
                             ^ ((AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                 << 8U) | (AES_top__DOT__cr0__DOT__SRtoMC[1U] 
                                           >> 0x18U)))))));
    AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul3__op 
        = ((0xff000000U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b0) 
                               ^ AES_top__DOT__cr0__DOT__SRtoMC[0U]) 
                              << 0x18U) ^ (0xff000000U 
                                           & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                              << 0x10U))) 
                            ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b1) 
                               << 0x18U)) ^ (0xff000000U 
                                             & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                                << 8U)))) 
           | ((0xff0000U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b1) 
                                << 0x10U) ^ ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                                   >> 8U)))) 
                              ^ (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                 << 0x10U)) ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b2) 
                                               << 0x10U)) 
                            ^ (0xffff0000U & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                              << 8U)))) 
              | ((0xff00U & ((((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b2) 
                                 << 8U) ^ ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                            << 0x18U) 
                                           | (0xffff00U 
                                              & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                                 >> 8U)))) 
                               ^ ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                   << 0x10U) | (0xff00U 
                                                & (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                                   >> 0x10U)))) 
                              ^ ((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b3) 
                                 << 8U)) ^ (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                            << 8U))) 
                 | (0xffU & (((((IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b3) 
                                ^ ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                    << 0x18U) | (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                                 >> 8U))) 
                               ^ ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                   << 0x10U) | (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                                >> 0x10U))) 
                              ^ (IData)(AES_top__DOT__cr0__DOT__m0__DOT__mul3__DOT__b0)) 
                             ^ ((AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                 << 8U) | (AES_top__DOT__cr0__DOT__SRtoMC[0U] 
                                           >> 0x18U)))))));
    AES_top__DOT__cr0__DOT__m0__DOT__op_temp[0U] = AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul3__op;
    AES_top__DOT__cr0__DOT__m0__DOT__op_temp[1U] = AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul2__op;
    AES_top__DOT__cr0__DOT__m0__DOT__op_temp[2U] = (IData)(
                                                           (((QData)((IData)(AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul0__op)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul1__op))));
    AES_top__DOT__cr0__DOT__m0__DOT__op_temp[3U] = (IData)(
                                                           ((((QData)((IData)(AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul0__op)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(AES_top__DOT__cr0__DOT__m0__DOT____Vcellout__mul1__op))) 
                                                            >> 0x20U));
    if ((4U & (IData)(vlSelf->AES_top__DOT__c0__DOT__enables))) {
        AES_top__DOT__cr0__DOT__MCtoAR[0U] = AES_top__DOT__cr0__DOT__m0__DOT__op_temp[0U];
        AES_top__DOT__cr0__DOT__MCtoAR[1U] = AES_top__DOT__cr0__DOT__m0__DOT__op_temp[1U];
        AES_top__DOT__cr0__DOT__MCtoAR[2U] = AES_top__DOT__cr0__DOT__m0__DOT__op_temp[2U];
        AES_top__DOT__cr0__DOT__MCtoAR[3U] = AES_top__DOT__cr0__DOT__m0__DOT__op_temp[3U];
    } else {
        AES_top__DOT__cr0__DOT__MCtoAR[0U] = AES_top__DOT__cr0__DOT__SRtoMC[0U];
        AES_top__DOT__cr0__DOT__MCtoAR[1U] = AES_top__DOT__cr0__DOT__SRtoMC[1U];
        AES_top__DOT__cr0__DOT__MCtoAR[2U] = AES_top__DOT__cr0__DOT__SRtoMC[2U];
        AES_top__DOT__cr0__DOT__MCtoAR[3U] = AES_top__DOT__cr0__DOT__SRtoMC[3U];
    }
    if ((2U & (IData)(vlSelf->AES_top__DOT__c0__DOT__enables))) {
        vlSelf->AES_top__DOT__cr0__DOT__out[0U] = (
                                                   AES_top__DOT__cr0__DOT__MCtoAR[0U] 
                                                   ^ 
                                                   vlSelf->AES_top__DOT__cr0__DOT__KStoAR[0U]);
        vlSelf->AES_top__DOT__cr0__DOT__out[1U] = (
                                                   AES_top__DOT__cr0__DOT__MCtoAR[1U] 
                                                   ^ 
                                                   vlSelf->AES_top__DOT__cr0__DOT__KStoAR[1U]);
        vlSelf->AES_top__DOT__cr0__DOT__out[2U] = (
                                                   AES_top__DOT__cr0__DOT__MCtoAR[2U] 
                                                   ^ 
                                                   vlSelf->AES_top__DOT__cr0__DOT__KStoAR[2U]);
        vlSelf->AES_top__DOT__cr0__DOT__out[3U] = (
                                                   AES_top__DOT__cr0__DOT__MCtoAR[3U] 
                                                   ^ 
                                                   vlSelf->AES_top__DOT__cr0__DOT__KStoAR[3U]);
    } else {
        vlSelf->AES_top__DOT__cr0__DOT__out[0U] = AES_top__DOT__cr0__DOT__MCtoAR[0U];
        vlSelf->AES_top__DOT__cr0__DOT__out[1U] = AES_top__DOT__cr0__DOT__MCtoAR[1U];
        vlSelf->AES_top__DOT__cr0__DOT__out[2U] = AES_top__DOT__cr0__DOT__MCtoAR[2U];
        vlSelf->AES_top__DOT__cr0__DOT__out[3U] = AES_top__DOT__cr0__DOT__MCtoAR[3U];
    }
    vlSelf->cipher_text[0U] = vlSelf->AES_top__DOT__cr0__DOT__out[0U];
    vlSelf->cipher_text[1U] = vlSelf->AES_top__DOT__cr0__DOT__out[1U];
    vlSelf->cipher_text[2U] = vlSelf->AES_top__DOT__cr0__DOT__out[2U];
    vlSelf->cipher_text[3U] = vlSelf->AES_top__DOT__cr0__DOT__out[3U];
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

void Vaes_top___024root___eval(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vaes_top___024root___sequent__TOP__2(vlSelf);
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
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vaes_top___024root___change_request_1(Vaes_top___024root* vlSelf);

VL_INLINE_OPT QData Vaes_top___024root___change_request(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___change_request\n"); );
    // Body
    return (Vaes_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vaes_top___024root___change_request_1(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vaes_top___024root___eval_debug_assertions(Vaes_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
}
#endif  // VL_DEBUG
