// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_master_top.h for the primary calling header

#include "Vi2c_master_top___024root.h"
#include "Vi2c_master_top__Syms.h"

//==========


void Vi2c_master_top___024root___ctor_var_reset(Vi2c_master_top___024root* vlSelf);

Vi2c_master_top___024root::Vi2c_master_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vi2c_master_top___024root___ctor_var_reset(this);
}

void Vi2c_master_top___024root::__Vconfigure(Vi2c_master_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vi2c_master_top___024root::~Vi2c_master_top___024root() {
}

void Vi2c_master_top___024root___initial__TOP__1(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->scl_pad_o = 0U;
    vlSelf->sda_pad_o = 0U;
}

void Vi2c_master_top___024root___settle__TOP__4(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->i2c_master_top__DOT__sr = ((((IData)(vlSelf->i2c_master_top__DOT__rxack) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->i2c_master_top__DOT__i2c_busy) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->i2c_master_top__DOT__al) 
                                                      << 5U))) 
                                       | (((IData)(vlSelf->i2c_master_top__DOT__tip) 
                                           << 1U) | (IData)(vlSelf->i2c_master_top__DOT__irq_flag)));
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__go 
        = (1U & ((IData)((0U != (0x70U & (IData)(vlSelf->i2c_master_top__DOT__cr)))) 
                 & (~ (IData)(vlSelf->i2c_master_top__DOT__done))));
    vlSelf->i2c_master_top__DOT__wb_wacc = ((IData)(vlSelf->wb_we_i) 
                                            & (IData)(vlSelf->wb_ack_o));
}

void Vi2c_master_top___024root___eval_initial(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___eval_initial\n"); );
    // Body
    Vi2c_master_top___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__wb_clk_i = vlSelf->wb_clk_i;
    vlSelf->__Vclklast__TOP__arst_i = vlSelf->arst_i;
}

void Vi2c_master_top___024root___eval_settle(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___eval_settle\n"); );
    // Body
    Vi2c_master_top___024root___settle__TOP__4(vlSelf);
}

void Vi2c_master_top___024root___final(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___final\n"); );
}

void Vi2c_master_top___024root___ctor_var_reset(Vi2c_master_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_master_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_master_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->wb_clk_i = VL_RAND_RESET_I(1);
    vlSelf->wb_rst_i = VL_RAND_RESET_I(1);
    vlSelf->arst_i = VL_RAND_RESET_I(1);
    vlSelf->wb_adr_i = VL_RAND_RESET_I(3);
    vlSelf->wb_dat_i = VL_RAND_RESET_I(8);
    vlSelf->wb_dat_o = VL_RAND_RESET_I(8);
    vlSelf->wb_we_i = VL_RAND_RESET_I(1);
    vlSelf->wb_stb_i = VL_RAND_RESET_I(1);
    vlSelf->wb_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->wb_ack_o = VL_RAND_RESET_I(1);
    vlSelf->wb_inta_o = VL_RAND_RESET_I(1);
    vlSelf->scl_pad_i = VL_RAND_RESET_I(1);
    vlSelf->scl_pad_o = VL_RAND_RESET_I(1);
    vlSelf->scl_padoen_o = VL_RAND_RESET_I(1);
    vlSelf->sda_pad_i = VL_RAND_RESET_I(1);
    vlSelf->sda_pad_o = VL_RAND_RESET_I(1);
    vlSelf->sda_padoen_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__prer = VL_RAND_RESET_I(16);
    vlSelf->i2c_master_top__DOT__ctr = VL_RAND_RESET_I(8);
    vlSelf->i2c_master_top__DOT__txr = VL_RAND_RESET_I(8);
    vlSelf->i2c_master_top__DOT__cr = VL_RAND_RESET_I(8);
    vlSelf->i2c_master_top__DOT__sr = VL_RAND_RESET_I(8);
    vlSelf->i2c_master_top__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__irxack = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__rxack = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__tip = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__irq_flag = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__i2c_busy = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__i2c_al = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__al = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__wb_wacc = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_cmd = VL_RAND_RESET_I(4);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_txd = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_ack = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__core_rxd = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__sr = VL_RAND_RESET_I(8);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__shift = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__ld = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__go = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__dcnt = VL_RAND_RESET_I(3);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__c_state = VL_RAND_RESET_I(5);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL = VL_RAND_RESET_I(2);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA = VL_RAND_RESET_I(2);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL = VL_RAND_RESET_I(3);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA = VL_RAND_RESET_I(3);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt = VL_RAND_RESET_I(16);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt = VL_RAND_RESET_I(14);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = VL_RAND_RESET_I(18);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition = VL_RAND_RESET_I(1);
    vlSelf->i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__scl_padoen_o = VL_RAND_RESET_I(1);
}
