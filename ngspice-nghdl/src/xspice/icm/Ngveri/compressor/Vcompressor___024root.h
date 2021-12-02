// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcompressor.h for the primary calling header

#ifndef VERILATED_VCOMPRESSOR___024ROOT_H_
#define VERILATED_VCOMPRESSOR___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcompressor__Syms;

//----------

VL_MODULE(Vcompressor___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_INW(UnCompressedCache,255,0,8);
    VL_OUTW(CompressedCache,255,0,8);
    VL_OUTW(DeCompressedCache,255,0,8);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ COMPRESSOR__DOT__mark8_1;
        CData/*0:0*/ COMPRESSOR__DOT__mark8_2;
        CData/*0:0*/ COMPRESSOR__DOT__mark8_3;
        CData/*0:0*/ COMPRESSOR__DOT__mark4_1;
        CData/*0:0*/ COMPRESSOR__DOT__mark4_2;
        CData/*0:0*/ COMPRESSOR__DOT__mark4_3;
        CData/*0:0*/ COMPRESSOR__DOT__mark4_4;
        CData/*0:0*/ COMPRESSOR__DOT__mark4_5;
        CData/*0:0*/ COMPRESSOR__DOT__mark4_6;
        CData/*0:0*/ COMPRESSOR__DOT__mark4_7;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_1;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_2;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_3;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_4;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_5;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_6;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_7;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_8;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_9;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_10;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_11;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_12;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_13;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_14;
        CData/*0:0*/ COMPRESSOR__DOT__mark2_15;
        CData/*0:0*/ COMPRESSOR__DOT__CoN1;
        CData/*0:0*/ COMPRESSOR__DOT__CoN2;
        CData/*0:0*/ COMPRESSOR__DOT__CoN3;
        CData/*0:0*/ COMPRESSOR__DOT__CoN4;
        CData/*0:0*/ COMPRESSOR__DOT__CoN5;
        CData/*0:0*/ COMPRESSOR__DOT__CoN6;
        SData/*15:0*/ COMPRESSOR__DOT__Base2;
        SData/*15:0*/ COMPRESSOR__DOT__del2_1;
        SData/*15:0*/ COMPRESSOR__DOT__del2_2;
        SData/*15:0*/ COMPRESSOR__DOT__del2_3;
        SData/*15:0*/ COMPRESSOR__DOT__del2_4;
        SData/*15:0*/ COMPRESSOR__DOT__del2_5;
        SData/*15:0*/ COMPRESSOR__DOT__del2_6;
        SData/*15:0*/ COMPRESSOR__DOT__del2_7;
        SData/*15:0*/ COMPRESSOR__DOT__del2_8;
        SData/*15:0*/ COMPRESSOR__DOT__del2_9;
        SData/*15:0*/ COMPRESSOR__DOT__del2_10;
        SData/*15:0*/ COMPRESSOR__DOT__del2_11;
        SData/*15:0*/ COMPRESSOR__DOT__del2_12;
        SData/*15:0*/ COMPRESSOR__DOT__del2_13;
        SData/*15:0*/ COMPRESSOR__DOT__del2_14;
        SData/*15:0*/ COMPRESSOR__DOT__del2_15;
        VlWide<3>/*95:0*/ COMPRESSOR__DOT__CCL1;
        VlWide<3>/*95:0*/ COMPRESSOR__DOT__CCL4;
        VlWide<4>/*127:0*/ COMPRESSOR__DOT__CCL2;
        VlWide<6>/*191:0*/ COMPRESSOR__DOT__CCL3;
        VlWide<5>/*159:0*/ COMPRESSOR__DOT__CCL5;
        VlWide<5>/*143:0*/ COMPRESSOR__DOT__CCL6;
        IData/*31:0*/ COMPRESSOR__DOT__Base4;
        IData/*31:0*/ COMPRESSOR__DOT__del4_1;
        IData/*31:0*/ COMPRESSOR__DOT__del4_2;
        IData/*31:0*/ COMPRESSOR__DOT__del4_3;
        IData/*31:0*/ COMPRESSOR__DOT__del4_4;
        IData/*31:0*/ COMPRESSOR__DOT__del4_5;
        IData/*31:0*/ COMPRESSOR__DOT__del4_6;
        IData/*31:0*/ COMPRESSOR__DOT__del4_7;
        QData/*63:0*/ COMPRESSOR__DOT__Base8;
        QData/*63:0*/ COMPRESSOR__DOT__del8_1;
        QData/*63:0*/ COMPRESSOR__DOT__del8_2;
    };
    struct {
        QData/*63:0*/ COMPRESSOR__DOT__del8_3;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    Vcompressor__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcompressor___024root);  ///< Copying not allowed
  public:
    Vcompressor___024root(const char* name);
    ~Vcompressor___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcompressor__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
