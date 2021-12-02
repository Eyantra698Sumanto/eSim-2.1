// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vi2c_master_top.h for the primary calling header

#ifndef VERILATED_VI2C_MASTER_TOP___024ROOT_H_
#define VERILATED_VI2C_MASTER_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vi2c_master_top__Syms;

//----------

VL_MODULE(Vi2c_master_top___024root) {
  public:

    // PORTS
    VL_IN8(wb_clk_i,0,0);
    VL_IN8(arst_i,0,0);
    VL_IN8(wb_rst_i,0,0);
    VL_IN8(wb_adr_i,2,0);
    VL_IN8(wb_dat_i,7,0);
    VL_OUT8(wb_dat_o,7,0);
    VL_IN8(wb_we_i,0,0);
    VL_IN8(wb_stb_i,0,0);
    VL_IN8(wb_cyc_i,0,0);
    VL_OUT8(wb_ack_o,0,0);
    VL_OUT8(wb_inta_o,0,0);
    VL_IN8(scl_pad_i,0,0);
    VL_OUT8(scl_pad_o,0,0);
    VL_OUT8(scl_padoen_o,0,0);
    VL_IN8(sda_pad_i,0,0);
    VL_OUT8(sda_pad_o,0,0);
    VL_OUT8(sda_padoen_o,0,0);

    // LOCAL SIGNALS
    CData/*7:0*/ i2c_master_top__DOT__ctr;
    CData/*7:0*/ i2c_master_top__DOT__txr;
    CData/*7:0*/ i2c_master_top__DOT__cr;
    CData/*7:0*/ i2c_master_top__DOT__sr;
    CData/*0:0*/ i2c_master_top__DOT__done;
    CData/*0:0*/ i2c_master_top__DOT__irxack;
    CData/*0:0*/ i2c_master_top__DOT__rxack;
    CData/*0:0*/ i2c_master_top__DOT__tip;
    CData/*0:0*/ i2c_master_top__DOT__irq_flag;
    CData/*0:0*/ i2c_master_top__DOT__i2c_busy;
    CData/*0:0*/ i2c_master_top__DOT__i2c_al;
    CData/*0:0*/ i2c_master_top__DOT__al;
    CData/*0:0*/ i2c_master_top__DOT__wb_wacc;
    CData/*3:0*/ i2c_master_top__DOT__byte_controller__DOT__core_cmd;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__core_txd;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__core_ack;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__core_rxd;
    CData/*7:0*/ i2c_master_top__DOT__byte_controller__DOT__sr;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__shift;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__ld;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__go;
    CData/*2:0*/ i2c_master_top__DOT__byte_controller__DOT__dcnt;
    CData/*4:0*/ i2c_master_top__DOT__byte_controller__DOT__c_state;
    CData/*1:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSCL;
    CData/*1:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cSDA;
    CData/*2:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL;
    CData/*2:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition;
    CData/*0:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop;
    SData/*15:0*/ i2c_master_top__DOT__prer;
    SData/*15:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    SData/*13:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt;
    IData/*17:0*/ i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state;

    // LOCAL VARIABLES
    CData/*2:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSDA;
    CData/*2:0*/ __Vdly__i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__fSCL;
    CData/*0:0*/ __Vdly__scl_padoen_o;
    CData/*0:0*/ __Vclklast__TOP__wb_clk_i;
    CData/*0:0*/ __Vclklast__TOP__arst_i;

    // INTERNAL VARIABLES
    Vi2c_master_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vi2c_master_top___024root);  ///< Copying not allowed
  public:
    Vi2c_master_top___024root(const char* name);
    ~Vi2c_master_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vi2c_master_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
