// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_top.h for the primary calling header

#ifndef VERILATED_VAES_TOP_AES_SBOX_H_
#define VERILATED_VAES_TOP_AES_SBOX_H_  // guard

#include "verilated_heavy.h"

//==========

class Vaes_top__Syms;

//----------

VL_MODULE(Vaes_top_aes_sbox) {
  public:

    // PORTS
    VL_IN8(ip,7,0);
    VL_OUT8(op,7,0);

    // INTERNAL VARIABLES
    Vaes_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vaes_top_aes_sbox);  ///< Copying not allowed
  public:
    Vaes_top_aes_sbox(const char* name);
    ~Vaes_top_aes_sbox();

    // INTERNAL METHODS
    void __Vconfigure(Vaes_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
