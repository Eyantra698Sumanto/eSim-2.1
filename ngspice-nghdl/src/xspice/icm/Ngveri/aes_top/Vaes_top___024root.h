// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_top.h for the primary calling header

#ifndef VERILATED_VAES_TOP___024ROOT_H_
#define VERILATED_VAES_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vaes_top__Syms;
class Vaes_top_aes_sbox;


//----------

VL_MODULE(Vaes_top___024root) {
  public:
    // CELLS
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a0;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a1;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a2;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a3;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q0;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q1;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q2;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q3;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q4;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q5;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q6;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q7;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q8;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q9;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q10;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q11;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q12;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q13;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q14;
    Vaes_top_aes_sbox* __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q15;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(start,0,0);
    VL_IN8(rstn,0,0);
    VL_OUT8(done,0,0);
    VL_OUT16(completed_round,9,0);
    VL_INW(plain_text,127,0,4);
    VL_INW(cipher_key,127,0,4);
    VL_OUTW(cipher_text,127,0,4);

    // LOCAL SIGNALS
    CData/*3:0*/ AES_top__DOT__c0__DOT__rnd;
    CData/*3:0*/ AES_top__DOT__c0__DOT__nextRnd;
    CData/*0:0*/ AES_top__DOT__c0__DOT__accept_temp;
    CData/*4:0*/ AES_top__DOT__c0__DOT__enables;
    CData/*0:0*/ AES_top__DOT__c0__DOT__done_temp;
    SData/*9:0*/ AES_top__DOT__c0__DOT__reg_completed;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__reg1;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__reg2;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__out;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__KStoAR;
    VlWide<4>/*127:0*/ AES_top__DOT__cr0__DOT__k0__DOT__op_temp;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vaes_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vaes_top___024root);  ///< Copying not allowed
  public:
    Vaes_top___024root(const char* name);
    ~Vaes_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vaes_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
