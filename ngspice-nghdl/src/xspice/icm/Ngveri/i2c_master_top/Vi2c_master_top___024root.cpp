// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_master_top.h for the primary calling header

#include "Vi2c_master_top___024root.h"
#include "Vi2c_master_top__Syms.h"

//==========

VL_INLINE_OPT void Vi2c_master_top___024root___sequent__TOP__2(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->wb_ack_o = (((IData)(vlSelf->wb_cyc_i) 
                         & (IData)(vlSelf->wb_stb_i)) 
                        & (~ (IData)(vlSelf->wb_ack_o)));
    vlSelf->wb_dat_o = (0xffU & ((4U & (IData)(vlSelf->wb_adr_i))
                                  ? ((2U & (IData)(vlSelf->wb_adr_i))
                                      ? ((1U & (IData)(vlSelf->wb_adr_i))
                                          ? 0U : (IData)(vlSelf->i2c_master_top__DOT__cr))
                                      : ((1U & (IData)(vlSelf->wb_adr_i))
                                          ? (IData)(vlSelf->i2c_master_top__DOT__txr)
                                          : (IData)(vlSelf->i2c_master_top__DOT__sr)))
                                  : ((2U & (IData)(vlSelf->wb_adr_i))
                                      ? ((1U & (IData)(vlSelf->wb_adr_i))
                                          ? (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__sr)
                                          : (IData)(vlSelf->i2c_master_top__DOT__ctr))
                                      : ((1U & (IData)(vlSelf->wb_adr_i))
                                          ? ((IData)(vlSelf->i2c_master_top__DOT__prer) 
                                             >> 8U)
                                          : (IData)(vlSelf->i2c_master_top__DOT__prer)))));
}

VL_INLINE_OPT void Vi2c_master_top___024root___sequent__TOP__3(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*7:0*/ __Vdly__i2c_master_top__DOT__cr;
    CData/*7:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__sr;
    CData/*2:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__dcnt;
    CData/*3:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd;
    CData/*0:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_txd;
    CData/*4:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state;
    CData/*0:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
    CData/*1:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA;
    CData/*1:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL;
    CData/*0:0*/ __Vdly__sda_padoen_o;
    CData/*0:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    SData/*15:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    IData/*17:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
    // Body
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL;
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA;
    vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL;
    vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA;
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    __Vdly__sda_padoen_o = vlSelf->sda_padoen_o;
    vlSelf->__Vdly__scl_padoen_o = vlSelf->scl_padoen_o;
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__c_state;
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_txd 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_txd;
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd;
    __Vdly__i2c_master_top__DOT__cr = vlSelf->i2c_master_top__DOT__cr;
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__dcnt 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__dcnt;
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__sr 
        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__sr;
    if (vlSelf->arst_i) {
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL 
            = ((IData)(vlSelf->wb_rst_i) ? 0U : ((2U 
                                                  & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->scl_pad_i)));
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA 
            = ((IData)(vlSelf->wb_rst_i) ? 0U : ((2U 
                                                  & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->sda_pad_i)));
    } else {
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL = 0U;
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA = 0U;
    }
    if (vlSelf->arst_i) {
        if (vlSelf->wb_rst_i) {
            vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL = 7U;
        } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt)))))) {
            vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL 
                = ((6U & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL) 
                          << 1U)) | (1U & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL) 
                                           >> 1U)));
        }
    } else {
        vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL = 7U;
    }
    if (vlSelf->arst_i) {
        if (vlSelf->wb_rst_i) {
            vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA = 7U;
        } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt)))))) {
            vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA 
                = ((6U & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA) 
                          << 1U)) | (1U & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA) 
                                           >> 1U)));
        }
    } else {
        vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA = 7U;
    }
    vlSelf->i2c_master_top__DOT__tip = ((IData)(vlSelf->arst_i) 
                                        & ((~ (IData)(vlSelf->wb_rst_i)) 
                                           & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x30U 
                                                       & (IData)(vlSelf->i2c_master_top__DOT__cr))))));
    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait 
        = ((IData)(vlSelf->arst_i) & ((((IData)(vlSelf->scl_padoen_o) 
                                        & (~ (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen))) 
                                       & (~ (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL))) 
                                      | ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait) 
                                         & (~ (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL)))));
    vlSelf->wb_inta_o = ((IData)(vlSelf->arst_i) & 
                         ((~ (IData)(vlSelf->wb_rst_i)) 
                          & ((IData)(vlSelf->i2c_master_top__DOT__irq_flag) 
                             & ((IData)(vlSelf->i2c_master_top__DOT__ctr) 
                                >> 6U))));
    if (vlSelf->arst_i) {
        vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt 
            = ((1U & ((IData)(vlSelf->wb_rst_i) | (~ 
                                                   ((IData)(vlSelf->i2c_master_top__DOT__ctr) 
                                                    >> 7U))))
                ? 0U : (0x3fffU & ((0U != (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt))
                                    ? ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt) 
                                       - (IData)(1U))
                                    : ((IData)(vlSelf->i2c_master_top__DOT__prer) 
                                       >> 2U))));
        vlSelf->i2c_master_top__DOT__i2c_busy = (((~ (IData)(vlSelf->wb_rst_i)) 
                                                  & (((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition) 
                                                      | (IData)(vlSelf->i2c_master_top__DOT__i2c_busy)) 
                                                     & (~ (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition)))) 
                                                 & 1U);
        vlSelf->i2c_master_top__DOT__al = (((~ (IData)(vlSelf->wb_rst_i)) 
                                            & ((IData)(vlSelf->i2c_master_top__DOT__i2c_al) 
                                               | ((IData)(vlSelf->i2c_master_top__DOT__al) 
                                                  & (~ 
                                                     ((IData)(vlSelf->i2c_master_top__DOT__cr) 
                                                      >> 7U))))) 
                                           & 1U);
        vlSelf->i2c_master_top__DOT__rxack = (((~ (IData)(vlSelf->wb_rst_i)) 
                                               & (IData)(vlSelf->i2c_master_top__DOT__irxack)) 
                                              & 1U);
        vlSelf->i2c_master_top__DOT__irq_flag = (((~ (IData)(vlSelf->wb_rst_i)) 
                                                  & ((((IData)(vlSelf->i2c_master_top__DOT__done) 
                                                       | (IData)(vlSelf->i2c_master_top__DOT__i2c_al)) 
                                                      | (IData)(vlSelf->i2c_master_top__DOT__irq_flag)) 
                                                     & (~ (IData)(vlSelf->i2c_master_top__DOT__cr)))) 
                                                 & 1U);
    } else {
        vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt = 0U;
        vlSelf->i2c_master_top__DOT__i2c_busy = 0U;
        vlSelf->i2c_master_top__DOT__al = 0U;
        vlSelf->i2c_master_top__DOT__rxack = 0U;
        vlSelf->i2c_master_top__DOT__irq_flag = 0U;
    }
    if (vlSelf->arst_i) {
        if (vlSelf->wb_rst_i) {
            __Vdly__i2c_master_top__DOT__cr = 0U;
        } else if (vlSelf->i2c_master_top__DOT__wb_wacc) {
            if ((((IData)(vlSelf->i2c_master_top__DOT__ctr) 
                  >> 7U) & (4U == (IData)(vlSelf->wb_adr_i)))) {
                __Vdly__i2c_master_top__DOT__cr = vlSelf->wb_dat_i;
            }
        } else {
            if (((IData)(vlSelf->i2c_master_top__DOT__done) 
                 | (IData)(vlSelf->i2c_master_top__DOT__i2c_al))) {
                __Vdly__i2c_master_top__DOT__cr = (0xfU 
                                                   & (IData)(__Vdly__i2c_master_top__DOT__cr));
            }
            __Vdly__i2c_master_top__DOT__cr = (0xf8U 
                                               & (IData)(__Vdly__i2c_master_top__DOT__cr));
        }
    } else {
        __Vdly__i2c_master_top__DOT__cr = 0U;
    }
    if (vlSelf->arst_i) {
        if (vlSelf->wb_rst_i) {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__dcnt = 0U;
        } else if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__ld) {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__dcnt = 7U;
        } else if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__shift) {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__dcnt 
                = (7U & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__dcnt) 
                         - (IData)(1U)));
        }
    } else {
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__dcnt = 0U;
    }
    if (vlSelf->arst_i) {
        if (vlSelf->wb_rst_i) {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__sr = 0U;
        } else if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__ld) {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__sr 
                = vlSelf->i2c_master_top__DOT__txr;
        } else if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__shift) {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__sr 
                = ((0xfeU & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__sr) 
                             << 1U)) | (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_rxd));
        }
    } else {
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__sr = 0U;
    }
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition 
        = ((IData)(vlSelf->arst_i) & ((~ (IData)(vlSelf->wb_rst_i)) 
                                      & (((~ (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA)) 
                                          & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA)) 
                                         & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL))));
    vlSelf->i2c_master_top__DOT__sr = ((((IData)(vlSelf->i2c_master_top__DOT__rxack) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->i2c_master_top__DOT__i2c_busy) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->i2c_master_top__DOT__al) 
                                                      << 5U))) 
                                       | (((IData)(vlSelf->i2c_master_top__DOT__tip) 
                                           << 1U) | (IData)(vlSelf->i2c_master_top__DOT__irq_flag)));
    if (vlSelf->arst_i) {
        if (vlSelf->wb_rst_i) {
            vlSelf->i2c_master_top__DOT__txr = 0U;
        } else if (vlSelf->i2c_master_top__DOT__wb_wacc) {
            if ((1U & (~ ((IData)(vlSelf->wb_adr_i) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->wb_adr_i))) {
                    if ((1U & (IData)(vlSelf->wb_adr_i))) {
                        vlSelf->i2c_master_top__DOT__txr 
                            = vlSelf->wb_dat_i;
                    }
                }
            }
        }
    } else {
        vlSelf->i2c_master_top__DOT__txr = 0U;
    }
    if (vlSelf->arst_i) {
        if (((IData)(vlSelf->wb_rst_i) | (IData)(vlSelf->i2c_master_top__DOT__i2c_al))) {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 0U;
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_txd = 0U;
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__shift = 0U;
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__ld = 0U;
            vlSelf->i2c_master_top__DOT__done = 0U;
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 0U;
            vlSelf->i2c_master_top__DOT__irxack = 0U;
        } else {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_txd 
                = (1U & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__sr) 
                         >> 7U));
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__shift = 0U;
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__ld = 0U;
            vlSelf->i2c_master_top__DOT__done = 0U;
            if ((0U == (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__go) {
                    if ((0x80U & (IData)(vlSelf->i2c_master_top__DOT__cr))) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 1U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 1U;
                    } else if ((0x20U & (IData)(vlSelf->i2c_master_top__DOT__cr))) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 2U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 8U;
                    } else if ((0x10U & (IData)(vlSelf->i2c_master_top__DOT__cr))) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 4U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 4U;
                    } else {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 0x10U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 2U;
                    }
                    vlSelf->i2c_master_top__DOT__byte_controller__DOT__ld = 1U;
                }
            } else if ((1U == (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                    if ((0x20U & (IData)(vlSelf->i2c_master_top__DOT__cr))) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 2U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 8U;
                    } else {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 4U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 4U;
                    }
                    vlSelf->i2c_master_top__DOT__byte_controller__DOT__ld = 1U;
                }
            } else if ((4U == (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                    if ((0U != (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__dcnt))) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 4U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 4U;
                        vlSelf->i2c_master_top__DOT__byte_controller__DOT__shift = 1U;
                    } else {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 8U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 8U;
                    }
                }
            } else if ((2U == (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                    if ((0U != (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__dcnt))) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 2U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 8U;
                    } else {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 8U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 4U;
                    }
                    vlSelf->i2c_master_top__DOT__byte_controller__DOT__shift = 1U;
                    __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_txd 
                        = (1U & ((IData)(vlSelf->i2c_master_top__DOT__cr) 
                                 >> 3U));
                }
            } else if ((8U == (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                    if ((0x40U & (IData)(vlSelf->i2c_master_top__DOT__cr))) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 0x10U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 2U;
                    } else {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 0U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 0U;
                        vlSelf->i2c_master_top__DOT__done = 1U;
                    }
                    vlSelf->i2c_master_top__DOT__irxack 
                        = vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_rxd;
                    __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_txd = 1U;
                } else {
                    __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_txd 
                        = (1U & ((IData)(vlSelf->i2c_master_top__DOT__cr) 
                                 >> 3U));
                }
            } else if ((0x10U == (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                    __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 0U;
                    __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 0U;
                    vlSelf->i2c_master_top__DOT__done = 1U;
                }
            }
        }
    } else {
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd = 0U;
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_txd = 0U;
        vlSelf->i2c_master_top__DOT__byte_controller__DOT__shift = 0U;
        vlSelf->i2c_master_top__DOT__byte_controller__DOT__ld = 0U;
        vlSelf->i2c_master_top__DOT__done = 0U;
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state = 0U;
        vlSelf->i2c_master_top__DOT__irxack = 0U;
    }
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__c_state 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__c_state;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__dcnt 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__dcnt;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__sr 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__sr;
    vlSelf->i2c_master_top__DOT__cr = __Vdly__i2c_master_top__DOT__cr;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__go 
        = (1U & ((IData)((0U != (0x70U & (IData)(vlSelf->i2c_master_top__DOT__cr)))) 
                 & (~ (IData)(vlSelf->i2c_master_top__DOT__done))));
    if (vlSelf->arst_i) {
        if (((IData)(vlSelf->wb_rst_i) | (IData)(vlSelf->i2c_master_top__DOT__i2c_al))) {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack = 0U;
            vlSelf->__Vdly__scl_padoen_o = 1U;
            __Vdly__sda_padoen_o = 1U;
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
        } else {
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack = 0U;
            if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) {
                if (((((((((0U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                           | (1U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                          | (2U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                         | (4U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                        | (8U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                       | (0x10U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                      | (0x20U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                     | (0x40U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                    if ((0U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        vlSelf->__Vdly__scl_padoen_o 
                            = vlSelf->scl_padoen_o;
                        __Vdly__sda_padoen_o = vlSelf->sda_padoen_o;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                            = ((8U & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                ? ((4U & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                    ? 0U : ((2U & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                              ? 0U : 0x200U)))
                                : ((4U & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                    ? ((2U & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                                 ? 0U
                                                 : 0x2000U))
                                    : ((2U & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                        ? ((1U & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                            ? 0U : 0x20U)
                                        : ((1U & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                            ? 1U : 0U))));
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((1U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        vlSelf->__Vdly__scl_padoen_o 
                            = vlSelf->scl_padoen_o;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 2U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((2U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 4U;
                        vlSelf->__Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((4U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 8U;
                        vlSelf->__Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((8U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x10U;
                        vlSelf->__Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x10U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                        vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack = 1U;
                        vlSelf->__Vdly__scl_padoen_o = 0U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x20U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x40U;
                        vlSelf->__Vdly__scl_padoen_o = 0U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x80U;
                        vlSelf->__Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    }
                } else if (((((((((0x80U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                                  | (0x100U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                 | (0x200U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                | (0x400U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                               | (0x800U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                              | (0x1000U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                             | (0x2000U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                            | (0x4000U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                    if ((0x80U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x100U;
                        vlSelf->__Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x100U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                        vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack = 1U;
                        vlSelf->__Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x200U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x400U;
                        vlSelf->__Vdly__scl_padoen_o = 0U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x400U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x800U;
                        vlSelf->__Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x800U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x1000U;
                        vlSelf->__Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x1000U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                        vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack = 1U;
                        vlSelf->__Vdly__scl_padoen_o = 0U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x2000U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x4000U;
                        vlSelf->__Vdly__scl_padoen_o = 0U;
                        __Vdly__sda_padoen_o = vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_txd;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else {
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x8000U;
                        vlSelf->__Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_txd;
                        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    }
                } else if ((0x8000U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x10000U;
                    vlSelf->__Vdly__scl_padoen_o = 1U;
                    __Vdly__sda_padoen_o = vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_txd;
                    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 1U;
                } else if ((0x10000U == vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                    vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack = 1U;
                    vlSelf->__Vdly__scl_padoen_o = 0U;
                    __Vdly__sda_padoen_o = vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_txd;
                    __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                }
            }
        }
    } else {
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
        vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack = 0U;
        vlSelf->__Vdly__scl_padoen_o = 1U;
        __Vdly__sda_padoen_o = 1U;
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
    }
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_txd 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_txd;
    vlSelf->i2c_master_top__DOT__i2c_al = ((IData)(vlSelf->arst_i) 
                                           & ((~ (IData)(vlSelf->wb_rst_i)) 
                                              & ((((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk) 
                                                   & (~ (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA))) 
                                                  & (IData)(vlSelf->sda_padoen_o)) 
                                                 | (((0U 
                                                      != vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                                                     & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition)) 
                                                    & (~ (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop))))));
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    vlSelf->sda_padoen_o = __Vdly__sda_padoen_o;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition 
        = ((IData)(vlSelf->arst_i) & ((~ (IData)(vlSelf->wb_rst_i)) 
                                      & (((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA) 
                                          & (~ (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA))) 
                                         & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL))));
    if (vlSelf->arst_i) {
        if (vlSelf->wb_rst_i) {
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop = 0U;
        } else if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) {
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop 
                = (2U == (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd));
        }
    } else {
        vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop = 0U;
    }
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__core_cmd;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA 
        = (1U & ((~ (IData)(vlSelf->arst_i)) | ((IData)(vlSelf->wb_rst_i) 
                                                | (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA))));
    if (vlSelf->arst_i) {
        if ((1U & ((((IData)(vlSelf->wb_rst_i) | (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt))))) 
                    | (~ ((IData)(vlSelf->i2c_master_top__DOT__ctr) 
                          >> 7U))) | (((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL) 
                                       & (~ (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL))) 
                                      & (IData)(vlSelf->scl_padoen_o))))) {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
                = vlSelf->i2c_master_top__DOT__prer;
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 1U;
        } else if (vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait) {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
                = vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 0U;
        } else {
            __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
                = (0xffffU & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                              - (IData)(1U)));
            vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 0U;
        }
    } else {
        __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt = 0U;
        vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 1U;
    }
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait 
        = __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
    if (vlSelf->arst_i) {
        if (vlSelf->wb_rst_i) {
            vlSelf->i2c_master_top__DOT__prer = 0xffffU;
        } else if (vlSelf->i2c_master_top__DOT__wb_wacc) {
            if ((1U & (~ ((IData)(vlSelf->wb_adr_i) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->wb_adr_i) 
                              >> 1U)))) {
                    vlSelf->i2c_master_top__DOT__prer 
                        = ((1U & (IData)(vlSelf->wb_adr_i))
                            ? ((0xffU & (IData)(vlSelf->i2c_master_top__DOT__prer)) 
                               | ((IData)(vlSelf->wb_dat_i) 
                                  << 8U)) : ((0xff00U 
                                              & (IData)(vlSelf->i2c_master_top__DOT__prer)) 
                                             | (IData)(vlSelf->wb_dat_i)));
                }
            }
        }
    } else {
        vlSelf->i2c_master_top__DOT__prer = 0xffffU;
    }
    if (vlSelf->arst_i) {
        if (vlSelf->wb_rst_i) {
            vlSelf->i2c_master_top__DOT__ctr = 0U;
        } else if (vlSelf->i2c_master_top__DOT__wb_wacc) {
            if ((1U & (~ ((IData)(vlSelf->wb_adr_i) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->wb_adr_i))) {
                    if ((1U & (~ (IData)(vlSelf->wb_adr_i)))) {
                        vlSelf->i2c_master_top__DOT__ctr 
                            = vlSelf->wb_dat_i;
                    }
                }
            }
        }
    } else {
        vlSelf->i2c_master_top__DOT__ctr = 0U;
    }
}

VL_INLINE_OPT void Vi2c_master_top___024root___sequent__TOP__5(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen 
        = vlSelf->scl_padoen_o;
    if (((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL) 
         & (~ (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL)))) {
        vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_rxd 
            = vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA;
    }
}

VL_INLINE_OPT void Vi2c_master_top___024root___combo__TOP__6(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___combo__TOP__6\n"); );
    // Body
    vlSelf->i2c_master_top__DOT__wb_wacc = ((IData)(vlSelf->wb_we_i) 
                                            & (IData)(vlSelf->wb_ack_o));
}

VL_INLINE_OPT void Vi2c_master_top___024root___sequent__TOP__7(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->scl_padoen_o = vlSelf->__Vdly__scl_padoen_o;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA 
        = (1U & ((~ (IData)(vlSelf->arst_i)) | ((IData)(vlSelf->wb_rst_i) 
                                                | (((3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA) 
                                                         >> 1U))) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA)))) 
                                                   | (((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA) 
                                                       >> 2U) 
                                                      & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA))))));
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL 
        = (1U & ((~ (IData)(vlSelf->arst_i)) | ((IData)(vlSelf->wb_rst_i) 
                                                | (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL))));
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA 
        = vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA;
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL 
        = (1U & ((~ (IData)(vlSelf->arst_i)) | ((IData)(vlSelf->wb_rst_i) 
                                                | (((3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL) 
                                                         >> 1U))) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL)))) 
                                                   | (((IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL) 
                                                       >> 2U) 
                                                      & (IData)(vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL))))));
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL 
        = vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL;
}

void Vi2c_master_top___024root___eval(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->wb_clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__wb_clk_i)))) {
        Vi2c_master_top___024root___sequent__TOP__2(vlSelf);
    }
    if ((((~ (IData)(vlSelf->arst_i)) & (IData)(vlSelf->__Vclklast__TOP__arst_i)) 
         | ((IData)(vlSelf->wb_clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__wb_clk_i))))) {
        Vi2c_master_top___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->wb_clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__wb_clk_i)))) {
        Vi2c_master_top___024root___sequent__TOP__5(vlSelf);
    }
    Vi2c_master_top___024root___combo__TOP__6(vlSelf);
    if ((((~ (IData)(vlSelf->arst_i)) & (IData)(vlSelf->__Vclklast__TOP__arst_i)) 
         | ((IData)(vlSelf->wb_clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__wb_clk_i))))) {
        Vi2c_master_top___024root___sequent__TOP__7(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__wb_clk_i = vlSelf->wb_clk_i;
    vlSelf->__Vclklast__TOP__arst_i = vlSelf->arst_i;
}

QData Vi2c_master_top___024root___change_request_1(Vi2c_master_top___024root* vlSelf);

VL_INLINE_OPT QData Vi2c_master_top___024root___change_request(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___change_request\n"); );
    // Body
    return (Vi2c_master_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vi2c_master_top___024root___change_request_1(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vi2c_master_top___024root___eval_debug_assertions(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->wb_clk_i & 0xfeU))) {
        Verilated::overWidthError("wb_clk_i");}
    if (VL_UNLIKELY((vlSelf->wb_rst_i & 0xfeU))) {
        Verilated::overWidthError("wb_rst_i");}
    if (VL_UNLIKELY((vlSelf->arst_i & 0xfeU))) {
        Verilated::overWidthError("arst_i");}
    if (VL_UNLIKELY((vlSelf->wb_adr_i & 0xf8U))) {
        Verilated::overWidthError("wb_adr_i");}
    if (VL_UNLIKELY((vlSelf->wb_we_i & 0xfeU))) {
        Verilated::overWidthError("wb_we_i");}
    if (VL_UNLIKELY((vlSelf->wb_stb_i & 0xfeU))) {
        Verilated::overWidthError("wb_stb_i");}
    if (VL_UNLIKELY((vlSelf->wb_cyc_i & 0xfeU))) {
        Verilated::overWidthError("wb_cyc_i");}
    if (VL_UNLIKELY((vlSelf->scl_pad_i & 0xfeU))) {
        Verilated::overWidthError("scl_pad_i");}
    if (VL_UNLIKELY((vlSelf->sda_pad_i & 0xfeU))) {
        Verilated::overWidthError("sda_pad_i");}
}
#endif  // VL_DEBUG
