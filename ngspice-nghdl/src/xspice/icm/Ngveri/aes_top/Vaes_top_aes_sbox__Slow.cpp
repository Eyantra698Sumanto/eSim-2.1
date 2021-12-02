// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_top.h for the primary calling header

#include "Vaes_top_aes_sbox.h"
#include "Vaes_top__Syms.h"

//==========


void Vaes_top_aes_sbox___ctor_var_reset(Vaes_top_aes_sbox* vlSelf);

Vaes_top_aes_sbox::Vaes_top_aes_sbox(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vaes_top_aes_sbox___ctor_var_reset(this);
}

void Vaes_top_aes_sbox::__Vconfigure(Vaes_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vaes_top_aes_sbox::~Vaes_top_aes_sbox() {
}

void Vaes_top_aes_sbox___ctor_var_reset(Vaes_top_aes_sbox* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaes_top_aes_sbox___ctor_var_reset\n"); );
    // Body
    vlSelf->ip = VL_RAND_RESET_I(8);
    vlSelf->op = VL_RAND_RESET_I(8);
}
