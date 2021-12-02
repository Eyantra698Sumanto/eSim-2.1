// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vparallel_crc.h for the primary calling header

#ifndef VERILATED_VPARALLEL_CRC___024ROOT_H_
#define VERILATED_VPARALLEL_CRC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vparallel_crc__Syms;

//----------

VL_MODULE(Vparallel_crc___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(init,0,0);
    VL_IN8(data_in,7,0);
    VL_OUT16(crc_out,15,0);

    // LOCAL SIGNALS
    SData/*15:0*/ parallel_crc__DOT__crc_reg;
    SData/*15:0*/ parallel_crc__DOT__next_crc;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vparallel_crc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vparallel_crc___024root);  ///< Copying not allowed
  public:
    Vparallel_crc___024root(const char* name);
    ~Vparallel_crc___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vparallel_crc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
