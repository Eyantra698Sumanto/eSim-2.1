// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAES_TOP__SYMS_H_
#define VERILATED_VAES_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vaes_top.h"

// INCLUDE MODULE CLASSES
#include "Vaes_top___024root.h"
#include "Vaes_top_aes_sbox.h"

// SYMS CLASS (contains all model state)
class Vaes_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaes_top* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaes_top___024root             TOP;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__k0__DOT__a0;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__k0__DOT__a1;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__k0__DOT__a2;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__k0__DOT__a3;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q0;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q1;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q10;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q11;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q12;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q13;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q14;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q15;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q2;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q3;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q4;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q5;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q6;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q7;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q8;
    Vaes_top_aes_sbox              TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q9;

    // CONSTRUCTORS
    Vaes_top__Syms(VerilatedContext* contextp, const char* namep, Vaes_top* modelp);
    ~Vaes_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
