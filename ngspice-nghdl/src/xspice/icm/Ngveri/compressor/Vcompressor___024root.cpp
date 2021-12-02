// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcompressor.h for the primary calling header

#include "Vcompressor___024root.h"
#include "Vcompressor__Syms.h"

//==========

VL_INLINE_OPT void Vcompressor___024root___sequent__TOP__1(Vcompressor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompressor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompressor___024root___sequent__TOP__1\n"); );
    // Variables
    VlWide<8>/*255:0*/ __Vtemp1;
    VlWide<8>/*255:0*/ __Vtemp2;
    VlWide<8>/*255:0*/ __Vtemp3;
    VlWide<8>/*255:0*/ __Vtemp4;
    VlWide<8>/*255:0*/ __Vtemp5;
    VlWide<8>/*255:0*/ __Vtemp6;
    VlWide<5>/*159:0*/ __Vtemp18;
    // Body
    if (vlSelf->COMPRESSOR__DOT__CoN1) {
        VL_EXTEND_WW(256,96, __Vtemp1, vlSelf->COMPRESSOR__DOT__CCL1);
        vlSelf->CompressedCache[0U] = __Vtemp1[0U];
        vlSelf->CompressedCache[1U] = __Vtemp1[1U];
        vlSelf->CompressedCache[2U] = __Vtemp1[2U];
        vlSelf->CompressedCache[3U] = __Vtemp1[3U];
        vlSelf->CompressedCache[4U] = __Vtemp1[4U];
        vlSelf->CompressedCache[5U] = __Vtemp1[5U];
        vlSelf->CompressedCache[6U] = __Vtemp1[6U];
        vlSelf->CompressedCache[7U] = __Vtemp1[7U];
        vlSelf->DeCompressedCache[0U] = (IData)((((QData)((IData)(
                                                                  vlSelf->CompressedCache[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->CompressedCache[0U]))));
        vlSelf->DeCompressedCache[1U] = (IData)(((((QData)((IData)(
                                                                   vlSelf->CompressedCache[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CompressedCache[0U]))) 
                                                 >> 0x20U));
        vlSelf->DeCompressedCache[2U] = (IData)(((IData)(vlSelf->COMPRESSOR__DOT__mark8_1)
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelf->CompressedCache[2U] 
                                                                      >> 8U)))) 
                                                  - vlSelf->COMPRESSOR__DOT__Base8)
                                                  : 
                                                 (vlSelf->COMPRESSOR__DOT__Base8 
                                                  - (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlSelf->CompressedCache[2U] 
                                                                        >> 8U)))))));
        vlSelf->DeCompressedCache[3U] = (IData)((((IData)(vlSelf->COMPRESSOR__DOT__mark8_1)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlSelf->CompressedCache[2U] 
                                                                       >> 8U)))) 
                                                   - vlSelf->COMPRESSOR__DOT__Base8)
                                                   : 
                                                  (vlSelf->COMPRESSOR__DOT__Base8 
                                                   - (QData)((IData)(
                                                                     (0xffU 
                                                                      & (vlSelf->CompressedCache[2U] 
                                                                         >> 8U)))))) 
                                                 >> 0x20U));
        vlSelf->DeCompressedCache[4U] = (IData)(((IData)(vlSelf->COMPRESSOR__DOT__mark8_2)
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelf->CompressedCache[2U] 
                                                                      >> 0x10U)))) 
                                                  - vlSelf->COMPRESSOR__DOT__Base8)
                                                  : 
                                                 (vlSelf->COMPRESSOR__DOT__Base8 
                                                  - (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlSelf->CompressedCache[2U] 
                                                                        >> 0x10U)))))));
        vlSelf->DeCompressedCache[5U] = (IData)((((IData)(vlSelf->COMPRESSOR__DOT__mark8_2)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlSelf->CompressedCache[2U] 
                                                                       >> 0x10U)))) 
                                                   - vlSelf->COMPRESSOR__DOT__Base8)
                                                   : 
                                                  (vlSelf->COMPRESSOR__DOT__Base8 
                                                   - (QData)((IData)(
                                                                     (0xffU 
                                                                      & (vlSelf->CompressedCache[2U] 
                                                                         >> 0x10U)))))) 
                                                 >> 0x20U));
        vlSelf->DeCompressedCache[6U] = (IData)(((IData)(vlSelf->COMPRESSOR__DOT__mark8_3)
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (vlSelf->CompressedCache[2U] 
                                                                   >> 0x18U))) 
                                                  - vlSelf->COMPRESSOR__DOT__Base8)
                                                  : 
                                                 (vlSelf->COMPRESSOR__DOT__Base8 
                                                  - (QData)((IData)(
                                                                    (vlSelf->CompressedCache[2U] 
                                                                     >> 0x18U))))));
        vlSelf->DeCompressedCache[7U] = (IData)((((IData)(vlSelf->COMPRESSOR__DOT__mark8_3)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (vlSelf->CompressedCache[2U] 
                                                                    >> 0x18U))) 
                                                   - vlSelf->COMPRESSOR__DOT__Base8)
                                                   : 
                                                  (vlSelf->COMPRESSOR__DOT__Base8 
                                                   - (QData)((IData)(
                                                                     (vlSelf->CompressedCache[2U] 
                                                                      >> 0x18U))))) 
                                                 >> 0x20U));
    } else if (vlSelf->COMPRESSOR__DOT__CoN2) {
        VL_EXTEND_WW(256,128, __Vtemp2, vlSelf->COMPRESSOR__DOT__CCL2);
        vlSelf->CompressedCache[0U] = __Vtemp2[0U];
        vlSelf->CompressedCache[1U] = __Vtemp2[1U];
        vlSelf->CompressedCache[2U] = __Vtemp2[2U];
        vlSelf->CompressedCache[3U] = __Vtemp2[3U];
        vlSelf->CompressedCache[4U] = __Vtemp2[4U];
        vlSelf->CompressedCache[5U] = __Vtemp2[5U];
        vlSelf->CompressedCache[6U] = __Vtemp2[6U];
        vlSelf->CompressedCache[7U] = __Vtemp2[7U];
        vlSelf->DeCompressedCache[0U] = (IData)((((QData)((IData)(
                                                                  vlSelf->CompressedCache[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->CompressedCache[0U]))));
        vlSelf->DeCompressedCache[1U] = (IData)(((((QData)((IData)(
                                                                   vlSelf->CompressedCache[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CompressedCache[0U]))) 
                                                 >> 0x20U));
        vlSelf->DeCompressedCache[2U] = (IData)(((IData)(vlSelf->COMPRESSOR__DOT__mark8_1)
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (vlSelf->CompressedCache[2U] 
                                                                   >> 0x10U))) 
                                                  - vlSelf->COMPRESSOR__DOT__Base8)
                                                  : 
                                                 (vlSelf->COMPRESSOR__DOT__Base8 
                                                  - (QData)((IData)(
                                                                    (vlSelf->CompressedCache[2U] 
                                                                     >> 0x10U))))));
        vlSelf->DeCompressedCache[3U] = (IData)((((IData)(vlSelf->COMPRESSOR__DOT__mark8_1)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (vlSelf->CompressedCache[2U] 
                                                                    >> 0x10U))) 
                                                   - vlSelf->COMPRESSOR__DOT__Base8)
                                                   : 
                                                  (vlSelf->COMPRESSOR__DOT__Base8 
                                                   - (QData)((IData)(
                                                                     (vlSelf->CompressedCache[2U] 
                                                                      >> 0x10U))))) 
                                                 >> 0x20U));
        vlSelf->DeCompressedCache[4U] = (IData)(((IData)(vlSelf->COMPRESSOR__DOT__mark8_2)
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->CompressedCache[3U]))) 
                                                  - vlSelf->COMPRESSOR__DOT__Base8)
                                                  : 
                                                 (vlSelf->COMPRESSOR__DOT__Base8 
                                                  - (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->CompressedCache[3U]))))));
        vlSelf->DeCompressedCache[5U] = (IData)((((IData)(vlSelf->COMPRESSOR__DOT__mark8_2)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlSelf->CompressedCache[3U]))) 
                                                   - vlSelf->COMPRESSOR__DOT__Base8)
                                                   : 
                                                  (vlSelf->COMPRESSOR__DOT__Base8 
                                                   - (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSelf->CompressedCache[3U]))))) 
                                                 >> 0x20U));
        vlSelf->DeCompressedCache[6U] = (IData)(((IData)(vlSelf->COMPRESSOR__DOT__mark8_3)
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (vlSelf->CompressedCache[3U] 
                                                                   >> 0x10U))) 
                                                  - vlSelf->COMPRESSOR__DOT__Base8)
                                                  : 
                                                 (vlSelf->COMPRESSOR__DOT__Base8 
                                                  - (QData)((IData)(
                                                                    (vlSelf->CompressedCache[3U] 
                                                                     >> 0x10U))))));
        vlSelf->DeCompressedCache[7U] = (IData)((((IData)(vlSelf->COMPRESSOR__DOT__mark8_3)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (vlSelf->CompressedCache[3U] 
                                                                    >> 0x10U))) 
                                                   - vlSelf->COMPRESSOR__DOT__Base8)
                                                   : 
                                                  (vlSelf->COMPRESSOR__DOT__Base8 
                                                   - (QData)((IData)(
                                                                     (vlSelf->CompressedCache[3U] 
                                                                      >> 0x10U))))) 
                                                 >> 0x20U));
    } else if (vlSelf->COMPRESSOR__DOT__CoN3) {
        VL_EXTEND_WW(256,192, __Vtemp3, vlSelf->COMPRESSOR__DOT__CCL3);
        vlSelf->CompressedCache[0U] = __Vtemp3[0U];
        vlSelf->CompressedCache[1U] = __Vtemp3[1U];
        vlSelf->CompressedCache[2U] = __Vtemp3[2U];
        vlSelf->CompressedCache[3U] = __Vtemp3[3U];
        vlSelf->CompressedCache[4U] = __Vtemp3[4U];
        vlSelf->CompressedCache[5U] = __Vtemp3[5U];
        vlSelf->CompressedCache[6U] = __Vtemp3[6U];
        vlSelf->CompressedCache[7U] = __Vtemp3[7U];
        vlSelf->DeCompressedCache[0U] = (IData)((((QData)((IData)(
                                                                  vlSelf->CompressedCache[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->CompressedCache[0U]))));
        vlSelf->DeCompressedCache[1U] = (IData)(((((QData)((IData)(
                                                                   vlSelf->CompressedCache[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CompressedCache[0U]))) 
                                                 >> 0x20U));
        vlSelf->DeCompressedCache[2U] = (IData)(((IData)(vlSelf->COMPRESSOR__DOT__mark8_1)
                                                  ? 
                                                 ((QData)((IData)(
                                                                  vlSelf->CompressedCache[3U])) 
                                                  - vlSelf->COMPRESSOR__DOT__Base8)
                                                  : 
                                                 (vlSelf->COMPRESSOR__DOT__Base8 
                                                  - (QData)((IData)(
                                                                    vlSelf->CompressedCache[3U])))));
        vlSelf->DeCompressedCache[3U] = (IData)((((IData)(vlSelf->COMPRESSOR__DOT__mark8_1)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   vlSelf->CompressedCache[3U])) 
                                                   - vlSelf->COMPRESSOR__DOT__Base8)
                                                   : 
                                                  (vlSelf->COMPRESSOR__DOT__Base8 
                                                   - (QData)((IData)(
                                                                     vlSelf->CompressedCache[3U])))) 
                                                 >> 0x20U));
        vlSelf->DeCompressedCache[4U] = (IData)(((IData)(vlSelf->COMPRESSOR__DOT__mark8_2)
                                                  ? 
                                                 ((QData)((IData)(
                                                                  vlSelf->CompressedCache[4U])) 
                                                  - vlSelf->COMPRESSOR__DOT__Base8)
                                                  : 
                                                 (vlSelf->COMPRESSOR__DOT__Base8 
                                                  - (QData)((IData)(
                                                                    vlSelf->CompressedCache[4U])))));
        vlSelf->DeCompressedCache[5U] = (IData)((((IData)(vlSelf->COMPRESSOR__DOT__mark8_2)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   vlSelf->CompressedCache[4U])) 
                                                   - vlSelf->COMPRESSOR__DOT__Base8)
                                                   : 
                                                  (vlSelf->COMPRESSOR__DOT__Base8 
                                                   - (QData)((IData)(
                                                                     vlSelf->CompressedCache[4U])))) 
                                                 >> 0x20U));
        vlSelf->DeCompressedCache[6U] = (IData)(((IData)(vlSelf->COMPRESSOR__DOT__mark8_3)
                                                  ? 
                                                 ((QData)((IData)(
                                                                  vlSelf->CompressedCache[5U])) 
                                                  - vlSelf->COMPRESSOR__DOT__Base8)
                                                  : 
                                                 (vlSelf->COMPRESSOR__DOT__Base8 
                                                  - (QData)((IData)(
                                                                    vlSelf->CompressedCache[5U])))));
        vlSelf->DeCompressedCache[7U] = (IData)((((IData)(vlSelf->COMPRESSOR__DOT__mark8_3)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   vlSelf->CompressedCache[5U])) 
                                                   - vlSelf->COMPRESSOR__DOT__Base8)
                                                   : 
                                                  (vlSelf->COMPRESSOR__DOT__Base8 
                                                   - (QData)((IData)(
                                                                     vlSelf->CompressedCache[5U])))) 
                                                 >> 0x20U));
    } else if (vlSelf->COMPRESSOR__DOT__CoN4) {
        VL_EXTEND_WW(256,96, __Vtemp4, vlSelf->COMPRESSOR__DOT__CCL4);
        vlSelf->CompressedCache[0U] = __Vtemp4[0U];
        vlSelf->CompressedCache[1U] = __Vtemp4[1U];
        vlSelf->CompressedCache[2U] = __Vtemp4[2U];
        vlSelf->CompressedCache[3U] = __Vtemp4[3U];
        vlSelf->CompressedCache[4U] = __Vtemp4[4U];
        vlSelf->CompressedCache[5U] = __Vtemp4[5U];
        vlSelf->CompressedCache[6U] = __Vtemp4[6U];
        vlSelf->CompressedCache[7U] = __Vtemp4[7U];
        vlSelf->DeCompressedCache[0U] = vlSelf->CompressedCache[0U];
        vlSelf->DeCompressedCache[1U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_1)
                                          ? ((0xffU 
                                              & (vlSelf->CompressedCache[1U] 
                                                 >> 8U)) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (0xffU 
                                                & (vlSelf->CompressedCache[1U] 
                                                   >> 8U))));
        vlSelf->DeCompressedCache[2U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_2)
                                          ? ((0xffU 
                                              & (vlSelf->CompressedCache[1U] 
                                                 >> 0x10U)) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (0xffU 
                                                & (vlSelf->CompressedCache[1U] 
                                                   >> 0x10U))));
        vlSelf->DeCompressedCache[3U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_3)
                                          ? ((vlSelf->CompressedCache[1U] 
                                              >> 0x18U) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (vlSelf->CompressedCache[1U] 
                                                >> 0x18U)));
        vlSelf->DeCompressedCache[4U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_4)
                                          ? ((0xffU 
                                              & vlSelf->CompressedCache[2U]) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (0xffU 
                                                & vlSelf->CompressedCache[2U])));
        vlSelf->DeCompressedCache[5U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_5)
                                          ? ((0xffU 
                                              & (vlSelf->CompressedCache[2U] 
                                                 >> 8U)) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (0xffU 
                                                & (vlSelf->CompressedCache[2U] 
                                                   >> 8U))));
        vlSelf->DeCompressedCache[6U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_6)
                                          ? ((0xffU 
                                              & (vlSelf->CompressedCache[2U] 
                                                 >> 0x10U)) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (0xffU 
                                                & (vlSelf->CompressedCache[2U] 
                                                   >> 0x10U))));
        vlSelf->DeCompressedCache[7U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_7)
                                          ? ((vlSelf->CompressedCache[2U] 
                                              >> 0x18U) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (vlSelf->CompressedCache[2U] 
                                                >> 0x18U)));
    } else if (vlSelf->COMPRESSOR__DOT__CoN5) {
        VL_EXTEND_WW(256,160, __Vtemp5, vlSelf->COMPRESSOR__DOT__CCL5);
        vlSelf->CompressedCache[0U] = __Vtemp5[0U];
        vlSelf->CompressedCache[1U] = __Vtemp5[1U];
        vlSelf->CompressedCache[2U] = __Vtemp5[2U];
        vlSelf->CompressedCache[3U] = __Vtemp5[3U];
        vlSelf->CompressedCache[4U] = __Vtemp5[4U];
        vlSelf->CompressedCache[5U] = __Vtemp5[5U];
        vlSelf->CompressedCache[6U] = __Vtemp5[6U];
        vlSelf->CompressedCache[7U] = __Vtemp5[7U];
        vlSelf->DeCompressedCache[0U] = vlSelf->CompressedCache[0U];
        vlSelf->DeCompressedCache[1U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_1)
                                          ? ((vlSelf->CompressedCache[1U] 
                                              >> 0x10U) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (vlSelf->CompressedCache[1U] 
                                                >> 0x10U)));
        vlSelf->DeCompressedCache[2U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_2)
                                          ? ((0xffffU 
                                              & vlSelf->CompressedCache[2U]) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (0xffffU 
                                                & vlSelf->CompressedCache[2U])));
        vlSelf->DeCompressedCache[3U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_3)
                                          ? ((vlSelf->CompressedCache[2U] 
                                              >> 0x10U) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (vlSelf->CompressedCache[2U] 
                                                >> 0x10U)));
        vlSelf->DeCompressedCache[4U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_4)
                                          ? ((0xffffU 
                                              & vlSelf->CompressedCache[3U]) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (0xffffU 
                                                & vlSelf->CompressedCache[3U])));
        vlSelf->DeCompressedCache[5U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_5)
                                          ? ((vlSelf->CompressedCache[3U] 
                                              >> 0x10U) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (vlSelf->CompressedCache[3U] 
                                                >> 0x10U)));
        vlSelf->DeCompressedCache[6U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_6)
                                          ? ((0xffffU 
                                              & vlSelf->CompressedCache[4U]) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (0xffffU 
                                                & vlSelf->CompressedCache[4U])));
        vlSelf->DeCompressedCache[7U] = ((IData)(vlSelf->COMPRESSOR__DOT__mark4_7)
                                          ? ((vlSelf->CompressedCache[4U] 
                                              >> 0x10U) 
                                             - vlSelf->COMPRESSOR__DOT__Base4)
                                          : (vlSelf->COMPRESSOR__DOT__Base4 
                                             - (vlSelf->CompressedCache[4U] 
                                                >> 0x10U)));
    } else if (vlSelf->COMPRESSOR__DOT__CoN6) {
        VL_EXTEND_WW(256,144, __Vtemp6, vlSelf->COMPRESSOR__DOT__CCL6);
        vlSelf->CompressedCache[0U] = __Vtemp6[0U];
        vlSelf->CompressedCache[1U] = __Vtemp6[1U];
        vlSelf->CompressedCache[2U] = __Vtemp6[2U];
        vlSelf->CompressedCache[3U] = __Vtemp6[3U];
        vlSelf->CompressedCache[4U] = __Vtemp6[4U];
        vlSelf->CompressedCache[5U] = __Vtemp6[5U];
        vlSelf->CompressedCache[6U] = __Vtemp6[6U];
        vlSelf->CompressedCache[7U] = __Vtemp6[7U];
        vlSelf->DeCompressedCache[0U] = ((0xffff0000U 
                                          & vlSelf->DeCompressedCache[0U]) 
                                         | (0xffffU 
                                            & vlSelf->CompressedCache[0U]));
        vlSelf->DeCompressedCache[0U] = ((0xffffU & 
                                          vlSelf->DeCompressedCache[0U]) 
                                         | (((IData)(vlSelf->COMPRESSOR__DOT__mark2_1)
                                              ? ((vlSelf->CompressedCache[0U] 
                                                  >> 0x18U) 
                                                 - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                              : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                 - 
                                                 (vlSelf->CompressedCache[0U] 
                                                  >> 0x18U))) 
                                            << 0x10U));
        vlSelf->DeCompressedCache[1U] = ((0xffff0000U 
                                          & vlSelf->DeCompressedCache[1U]) 
                                         | (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__mark2_2)
                                                ? (
                                                   (0xffU 
                                                    & vlSelf->CompressedCache[1U]) 
                                                   - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                                : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                   - 
                                                   (0xffU 
                                                    & vlSelf->CompressedCache[1U])))));
        vlSelf->DeCompressedCache[1U] = ((0xffffU & 
                                          vlSelf->DeCompressedCache[1U]) 
                                         | (((IData)(vlSelf->COMPRESSOR__DOT__mark2_3)
                                              ? ((0xffU 
                                                  & (vlSelf->CompressedCache[1U] 
                                                     >> 8U)) 
                                                 - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                              : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                 - 
                                                 (0xffU 
                                                  & (vlSelf->CompressedCache[1U] 
                                                     >> 8U)))) 
                                            << 0x10U));
        vlSelf->DeCompressedCache[2U] = ((0xffff0000U 
                                          & vlSelf->DeCompressedCache[2U]) 
                                         | (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__mark2_4)
                                                ? (
                                                   (0xffU 
                                                    & (vlSelf->CompressedCache[1U] 
                                                       >> 0x10U)) 
                                                   - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                                : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                   - 
                                                   (0xffU 
                                                    & (vlSelf->CompressedCache[1U] 
                                                       >> 0x10U))))));
        vlSelf->DeCompressedCache[2U] = ((0xffffU & 
                                          vlSelf->DeCompressedCache[2U]) 
                                         | (((IData)(vlSelf->COMPRESSOR__DOT__mark2_5)
                                              ? ((vlSelf->CompressedCache[1U] 
                                                  >> 0x18U) 
                                                 - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                              : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                 - 
                                                 (vlSelf->CompressedCache[1U] 
                                                  >> 0x18U))) 
                                            << 0x10U));
        vlSelf->DeCompressedCache[3U] = ((0xffff0000U 
                                          & vlSelf->DeCompressedCache[3U]) 
                                         | (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__mark2_6)
                                                ? (
                                                   (0xffU 
                                                    & vlSelf->CompressedCache[2U]) 
                                                   - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                                : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                   - 
                                                   (0xffU 
                                                    & vlSelf->CompressedCache[2U])))));
        vlSelf->DeCompressedCache[3U] = ((0xffffU & 
                                          vlSelf->DeCompressedCache[3U]) 
                                         | (((IData)(vlSelf->COMPRESSOR__DOT__mark2_7)
                                              ? ((0xffU 
                                                  & (vlSelf->CompressedCache[2U] 
                                                     >> 8U)) 
                                                 - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                              : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                 - 
                                                 (0xffU 
                                                  & (vlSelf->CompressedCache[2U] 
                                                     >> 8U)))) 
                                            << 0x10U));
        vlSelf->DeCompressedCache[4U] = ((0xffff0000U 
                                          & vlSelf->DeCompressedCache[4U]) 
                                         | (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__mark2_8)
                                                ? (
                                                   (0xffU 
                                                    & (vlSelf->CompressedCache[2U] 
                                                       >> 0x10U)) 
                                                   - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                                : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                   - 
                                                   (0xffU 
                                                    & (vlSelf->CompressedCache[2U] 
                                                       >> 0x10U))))));
        vlSelf->DeCompressedCache[4U] = ((0xffffU & 
                                          vlSelf->DeCompressedCache[4U]) 
                                         | (((IData)(vlSelf->COMPRESSOR__DOT__mark2_9)
                                              ? ((vlSelf->CompressedCache[2U] 
                                                  >> 0x18U) 
                                                 - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                              : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                 - 
                                                 (vlSelf->CompressedCache[2U] 
                                                  >> 0x18U))) 
                                            << 0x10U));
        vlSelf->DeCompressedCache[5U] = ((0xffff0000U 
                                          & vlSelf->DeCompressedCache[5U]) 
                                         | (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__mark2_10)
                                                ? (
                                                   (0xffU 
                                                    & vlSelf->CompressedCache[3U]) 
                                                   - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                                : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                   - 
                                                   (0xffU 
                                                    & vlSelf->CompressedCache[3U])))));
        vlSelf->DeCompressedCache[5U] = ((0xffffU & 
                                          vlSelf->DeCompressedCache[5U]) 
                                         | (((IData)(vlSelf->COMPRESSOR__DOT__mark2_11)
                                              ? ((0xffU 
                                                  & (vlSelf->CompressedCache[3U] 
                                                     >> 8U)) 
                                                 - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                              : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                 - 
                                                 (0xffU 
                                                  & (vlSelf->CompressedCache[3U] 
                                                     >> 8U)))) 
                                            << 0x10U));
        vlSelf->DeCompressedCache[6U] = ((0xffff0000U 
                                          & vlSelf->DeCompressedCache[6U]) 
                                         | (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__mark2_12)
                                                ? (
                                                   (0xffU 
                                                    & (vlSelf->CompressedCache[3U] 
                                                       >> 0x10U)) 
                                                   - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                                : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                   - 
                                                   (0xffU 
                                                    & (vlSelf->CompressedCache[3U] 
                                                       >> 0x10U))))));
        vlSelf->DeCompressedCache[6U] = ((0xffffU & 
                                          vlSelf->DeCompressedCache[6U]) 
                                         | (((IData)(vlSelf->COMPRESSOR__DOT__mark2_13)
                                              ? ((vlSelf->CompressedCache[3U] 
                                                  >> 0x18U) 
                                                 - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                              : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                 - 
                                                 (vlSelf->CompressedCache[3U] 
                                                  >> 0x18U))) 
                                            << 0x10U));
        vlSelf->DeCompressedCache[7U] = ((0xffff0000U 
                                          & vlSelf->DeCompressedCache[7U]) 
                                         | (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__mark2_14)
                                                ? (
                                                   (0xffU 
                                                    & vlSelf->CompressedCache[4U]) 
                                                   - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                                : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                   - 
                                                   (0xffU 
                                                    & vlSelf->CompressedCache[4U])))));
        vlSelf->DeCompressedCache[7U] = ((0xffffU & 
                                          vlSelf->DeCompressedCache[7U]) 
                                         | (((IData)(vlSelf->COMPRESSOR__DOT__mark2_15)
                                              ? ((0xffU 
                                                  & (vlSelf->CompressedCache[4U] 
                                                     >> 8U)) 
                                                 - (IData)(vlSelf->COMPRESSOR__DOT__Base2))
                                              : ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                                 - 
                                                 (0xffU 
                                                  & (vlSelf->CompressedCache[4U] 
                                                     >> 8U)))) 
                                            << 0x10U));
    } else {
        vlSelf->CompressedCache[0U] = vlSelf->UnCompressedCache[0U];
        vlSelf->CompressedCache[1U] = vlSelf->UnCompressedCache[1U];
        vlSelf->CompressedCache[2U] = vlSelf->UnCompressedCache[2U];
        vlSelf->CompressedCache[3U] = vlSelf->UnCompressedCache[3U];
        vlSelf->CompressedCache[4U] = vlSelf->UnCompressedCache[4U];
        vlSelf->CompressedCache[5U] = vlSelf->UnCompressedCache[5U];
        vlSelf->CompressedCache[6U] = vlSelf->UnCompressedCache[6U];
        vlSelf->CompressedCache[7U] = vlSelf->UnCompressedCache[7U];
    }
    vlSelf->COMPRESSOR__DOT__Base8 = (((QData)((IData)(
                                                       vlSelf->UnCompressedCache[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->UnCompressedCache[0U])));
    vlSelf->COMPRESSOR__DOT__Base4 = vlSelf->UnCompressedCache[0U];
    vlSelf->COMPRESSOR__DOT__Base2 = (0xffffU & vlSelf->UnCompressedCache[0U]);
    VL_WRITEF("input = %x\n\n",256,vlSelf->UnCompressedCache.data());
    if ((vlSelf->COMPRESSOR__DOT__Base8 > (((QData)((IData)(
                                                            vlSelf->UnCompressedCache[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->UnCompressedCache[2U]))))) {
        vlSelf->COMPRESSOR__DOT__del8_1 = (vlSelf->COMPRESSOR__DOT__Base8 
                                           - (((QData)((IData)(
                                                               vlSelf->UnCompressedCache[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->UnCompressedCache[2U]))));
    } else {
        vlSelf->COMPRESSOR__DOT__del8_1 = ((((QData)((IData)(
                                                             vlSelf->UnCompressedCache[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->UnCompressedCache[2U]))) 
                                           - vlSelf->COMPRESSOR__DOT__Base8);
        vlSelf->COMPRESSOR__DOT__mark8_1 = 1U;
    }
    if ((vlSelf->COMPRESSOR__DOT__Base8 > (((QData)((IData)(
                                                            vlSelf->UnCompressedCache[5U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->UnCompressedCache[4U]))))) {
        vlSelf->COMPRESSOR__DOT__del8_2 = (vlSelf->COMPRESSOR__DOT__Base8 
                                           - (((QData)((IData)(
                                                               vlSelf->UnCompressedCache[5U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->UnCompressedCache[4U]))));
    } else {
        vlSelf->COMPRESSOR__DOT__del8_2 = ((((QData)((IData)(
                                                             vlSelf->UnCompressedCache[5U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->UnCompressedCache[4U]))) 
                                           - vlSelf->COMPRESSOR__DOT__Base8);
        vlSelf->COMPRESSOR__DOT__mark8_2 = 1U;
    }
    if ((vlSelf->COMPRESSOR__DOT__Base8 > (((QData)((IData)(
                                                            vlSelf->UnCompressedCache[7U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->UnCompressedCache[6U]))))) {
        vlSelf->COMPRESSOR__DOT__del8_3 = (vlSelf->COMPRESSOR__DOT__Base8 
                                           - (((QData)((IData)(
                                                               vlSelf->UnCompressedCache[7U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->UnCompressedCache[6U]))));
    } else {
        vlSelf->COMPRESSOR__DOT__del8_3 = ((((QData)((IData)(
                                                             vlSelf->UnCompressedCache[7U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->UnCompressedCache[6U]))) 
                                           - vlSelf->COMPRESSOR__DOT__Base8);
        vlSelf->COMPRESSOR__DOT__mark8_3 = 1U;
    }
    VL_WRITEF(" 8_1: del1= %x, del2 =%x, del3 = %x \n\n",
              64,vlSelf->COMPRESSOR__DOT__del8_1,64,
              vlSelf->COMPRESSOR__DOT__del8_2,64,vlSelf->COMPRESSOR__DOT__del8_3);
    if (((((0xffffffffffffffULL == (vlSelf->COMPRESSOR__DOT__del8_1 
                                    >> 8U)) | (0ULL 
                                               == (vlSelf->COMPRESSOR__DOT__del8_1 
                                                   >> 8U))) 
          & ((0xffffffffffffffULL == (vlSelf->COMPRESSOR__DOT__del8_2 
                                      >> 8U)) | (0ULL 
                                                 == 
                                                 (vlSelf->COMPRESSOR__DOT__del8_2 
                                                  >> 8U)))) 
         & ((0xffffffffffffffULL == (vlSelf->COMPRESSOR__DOT__del8_3 
                                     >> 8U)) | (0ULL 
                                                == 
                                                (vlSelf->COMPRESSOR__DOT__del8_3 
                                                 >> 8U))))) {
        vlSelf->COMPRESSOR__DOT__CoN1 = 1U;
        vlSelf->COMPRESSOR__DOT__CCL1[0U] = (IData)(vlSelf->COMPRESSOR__DOT__Base8);
        vlSelf->COMPRESSOR__DOT__CCL1[1U] = (IData)(
                                                    (vlSelf->COMPRESSOR__DOT__Base8 
                                                     >> 0x20U));
        vlSelf->COMPRESSOR__DOT__CCL1[2U] = (((IData)(vlSelf->COMPRESSOR__DOT__del8_3) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & ((IData)(vlSelf->COMPRESSOR__DOT__del8_2) 
                                                    << 0x10U)) 
                                                | (0xff00U 
                                                   & ((IData)(vlSelf->COMPRESSOR__DOT__del8_1) 
                                                      << 8U))));
    } else {
        vlSelf->COMPRESSOR__DOT__CoN1 = 0U;
    }
    VL_WRITEF("CoN1 = %b, CCL1 = %x \n",1,vlSelf->COMPRESSOR__DOT__CoN1,
              96,vlSelf->COMPRESSOR__DOT__CCL1.data());
    if (((((0xffffffffffffULL == (vlSelf->COMPRESSOR__DOT__del8_1 
                                  >> 0x10U)) | (0ULL 
                                                == 
                                                (vlSelf->COMPRESSOR__DOT__del8_1 
                                                 >> 0x10U))) 
          & ((0xffffffffffffULL == (vlSelf->COMPRESSOR__DOT__del8_2 
                                    >> 0x10U)) | (0ULL 
                                                  == 
                                                  (vlSelf->COMPRESSOR__DOT__del8_2 
                                                   >> 0x10U)))) 
         & ((0xffffffffffffULL == (vlSelf->COMPRESSOR__DOT__del8_3 
                                   >> 0x10U)) | (0ULL 
                                                 == 
                                                 (vlSelf->COMPRESSOR__DOT__del8_3 
                                                  >> 0x10U))))) {
        vlSelf->COMPRESSOR__DOT__CoN2 = 1U;
        vlSelf->COMPRESSOR__DOT__CCL2[0U] = (IData)(vlSelf->COMPRESSOR__DOT__Base8);
        vlSelf->COMPRESSOR__DOT__CCL2[1U] = (IData)(
                                                    (vlSelf->COMPRESSOR__DOT__Base8 
                                                     >> 0x20U));
        vlSelf->COMPRESSOR__DOT__CCL2[2U] = (IData)(
                                                    (((QData)((IData)(
                                                                      (((IData)(vlSelf->COMPRESSOR__DOT__del8_3) 
                                                                        << 0x10U) 
                                                                       | (0xffffU 
                                                                          & (IData)(vlSelf->COMPRESSOR__DOT__del8_2))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((IData)(vlSelf->COMPRESSOR__DOT__del8_1) 
                                                                        << 0x10U)))));
        vlSelf->COMPRESSOR__DOT__CCL2[3U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       (((IData)(vlSelf->COMPRESSOR__DOT__del8_3) 
                                                                         << 0x10U) 
                                                                        | (0xffffU 
                                                                           & (IData)(vlSelf->COMPRESSOR__DOT__del8_2))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelf->COMPRESSOR__DOT__del8_1) 
                                                                         << 0x10U)))) 
                                                     >> 0x20U));
    } else {
        vlSelf->COMPRESSOR__DOT__CoN2 = 0U;
    }
    VL_WRITEF("CoN2 = %b, CCL2 = %x \n",1,vlSelf->COMPRESSOR__DOT__CoN2,
              128,vlSelf->COMPRESSOR__DOT__CCL2.data());
    if (((((0xffffffffU == (IData)((vlSelf->COMPRESSOR__DOT__del8_1 
                                    >> 0x20U))) | (0U 
                                                   == (IData)(
                                                              (vlSelf->COMPRESSOR__DOT__del8_1 
                                                               >> 0x20U)))) 
          & ((0xffffffffU == (IData)((vlSelf->COMPRESSOR__DOT__del8_2 
                                      >> 0x20U))) | 
             (0U == (IData)((vlSelf->COMPRESSOR__DOT__del8_2 
                             >> 0x20U))))) & ((0xffffffffU 
                                               == (IData)(
                                                          (vlSelf->COMPRESSOR__DOT__del8_3 
                                                           >> 0x20U))) 
                                              | (0U 
                                                 == (IData)(
                                                            (vlSelf->COMPRESSOR__DOT__del8_3 
                                                             >> 0x20U)))))) {
        vlSelf->COMPRESSOR__DOT__CoN3 = 1U;
        vlSelf->COMPRESSOR__DOT__CCL3[0U] = (IData)(vlSelf->COMPRESSOR__DOT__Base8);
        vlSelf->COMPRESSOR__DOT__CCL3[1U] = (IData)(
                                                    (vlSelf->COMPRESSOR__DOT__Base8 
                                                     >> 0x20U));
        vlSelf->COMPRESSOR__DOT__CCL3[2U] = 0U;
        vlSelf->COMPRESSOR__DOT__CCL3[3U] = (IData)(vlSelf->COMPRESSOR__DOT__del8_1);
        vlSelf->COMPRESSOR__DOT__CCL3[4U] = (IData)(
                                                    (((QData)((IData)(vlSelf->COMPRESSOR__DOT__del8_3)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->COMPRESSOR__DOT__del8_2))));
        vlSelf->COMPRESSOR__DOT__CCL3[5U] = (IData)(
                                                    ((((QData)((IData)(vlSelf->COMPRESSOR__DOT__del8_3)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->COMPRESSOR__DOT__del8_2))) 
                                                     >> 0x20U));
    } else {
        vlSelf->COMPRESSOR__DOT__CoN3 = 0U;
    }
    VL_WRITEF("CoN3 = %b, CCL3 = %x \n",1,vlSelf->COMPRESSOR__DOT__CoN3,
              192,vlSelf->COMPRESSOR__DOT__CCL3.data());
    if ((vlSelf->COMPRESSOR__DOT__Base4 > vlSelf->UnCompressedCache[1U])) {
        vlSelf->COMPRESSOR__DOT__del4_1 = (vlSelf->COMPRESSOR__DOT__Base4 
                                           - vlSelf->UnCompressedCache[1U]);
    } else {
        vlSelf->COMPRESSOR__DOT__del4_1 = (vlSelf->UnCompressedCache[1U] 
                                           - vlSelf->COMPRESSOR__DOT__Base4);
        vlSelf->COMPRESSOR__DOT__mark4_1 = 1U;
    }
    if ((vlSelf->COMPRESSOR__DOT__Base4 > vlSelf->UnCompressedCache[2U])) {
        vlSelf->COMPRESSOR__DOT__del4_2 = (vlSelf->COMPRESSOR__DOT__Base4 
                                           - vlSelf->UnCompressedCache[2U]);
    } else {
        vlSelf->COMPRESSOR__DOT__del4_2 = (vlSelf->UnCompressedCache[2U] 
                                           - vlSelf->COMPRESSOR__DOT__Base4);
        vlSelf->COMPRESSOR__DOT__mark4_2 = 1U;
    }
    if ((vlSelf->COMPRESSOR__DOT__Base4 > vlSelf->UnCompressedCache[3U])) {
        vlSelf->COMPRESSOR__DOT__del4_3 = (vlSelf->COMPRESSOR__DOT__Base4 
                                           - vlSelf->UnCompressedCache[3U]);
    } else {
        vlSelf->COMPRESSOR__DOT__del4_3 = (vlSelf->UnCompressedCache[3U] 
                                           - vlSelf->COMPRESSOR__DOT__Base4);
        vlSelf->COMPRESSOR__DOT__mark4_3 = 1U;
    }
    if ((vlSelf->COMPRESSOR__DOT__Base4 > vlSelf->UnCompressedCache[4U])) {
        vlSelf->COMPRESSOR__DOT__del4_4 = (vlSelf->COMPRESSOR__DOT__Base4 
                                           - vlSelf->UnCompressedCache[4U]);
    } else {
        vlSelf->COMPRESSOR__DOT__del4_4 = (vlSelf->UnCompressedCache[4U] 
                                           - vlSelf->COMPRESSOR__DOT__Base4);
        vlSelf->COMPRESSOR__DOT__mark4_4 = 1U;
    }
    if ((vlSelf->COMPRESSOR__DOT__Base4 > vlSelf->UnCompressedCache[5U])) {
        vlSelf->COMPRESSOR__DOT__del4_5 = (vlSelf->COMPRESSOR__DOT__Base4 
                                           - vlSelf->UnCompressedCache[5U]);
    } else {
        vlSelf->COMPRESSOR__DOT__del4_5 = (vlSelf->UnCompressedCache[5U] 
                                           - vlSelf->COMPRESSOR__DOT__Base4);
        vlSelf->COMPRESSOR__DOT__mark4_5 = 1U;
    }
    if ((vlSelf->COMPRESSOR__DOT__Base4 > vlSelf->UnCompressedCache[6U])) {
        vlSelf->COMPRESSOR__DOT__del4_6 = (vlSelf->COMPRESSOR__DOT__Base4 
                                           - vlSelf->UnCompressedCache[6U]);
    } else {
        vlSelf->COMPRESSOR__DOT__del4_6 = (vlSelf->UnCompressedCache[6U] 
                                           - vlSelf->COMPRESSOR__DOT__Base4);
        vlSelf->COMPRESSOR__DOT__mark4_6 = 1U;
    }
    if ((vlSelf->COMPRESSOR__DOT__Base4 > vlSelf->UnCompressedCache[7U])) {
        vlSelf->COMPRESSOR__DOT__del4_7 = (vlSelf->COMPRESSOR__DOT__Base4 
                                           - vlSelf->UnCompressedCache[7U]);
    } else {
        vlSelf->COMPRESSOR__DOT__del4_7 = (vlSelf->UnCompressedCache[7U] 
                                           - vlSelf->COMPRESSOR__DOT__Base4);
        vlSelf->COMPRESSOR__DOT__mark4_7 = 1U;
    }
    VL_WRITEF(" BASE 4: del1= %x, del2 =%x, del3 = %x del4 = %x del5 = %x del6 = %x del7 = %x\n\n",
              32,vlSelf->COMPRESSOR__DOT__del4_1,32,
              vlSelf->COMPRESSOR__DOT__del4_2,32,vlSelf->COMPRESSOR__DOT__del4_3,
              32,vlSelf->COMPRESSOR__DOT__del4_4,32,
              vlSelf->COMPRESSOR__DOT__del4_5,32,vlSelf->COMPRESSOR__DOT__del4_6,
              32,vlSelf->COMPRESSOR__DOT__del4_7);
    if (((((((((0xffffffU == (vlSelf->COMPRESSOR__DOT__del4_1 
                              >> 8U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_1 
                                                >> 8U))) 
              & ((0xffffffU == (vlSelf->COMPRESSOR__DOT__del4_2 
                                >> 8U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_2 
                                                  >> 8U)))) 
             & ((0xffffffU == (vlSelf->COMPRESSOR__DOT__del4_3 
                               >> 8U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_3 
                                                 >> 8U)))) 
            & ((0xffffffU == (vlSelf->COMPRESSOR__DOT__del4_4 
                              >> 8U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_4 
                                                >> 8U)))) 
           & ((0xffffffU == (vlSelf->COMPRESSOR__DOT__del4_5 
                             >> 8U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_5 
                                               >> 8U)))) 
          & ((0xffffffU == (vlSelf->COMPRESSOR__DOT__del4_6 
                            >> 8U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_6 
                                              >> 8U)))) 
         & ((0xffffffU == (vlSelf->COMPRESSOR__DOT__del4_7 
                           >> 8U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_7 
                                             >> 8U))))) {
        vlSelf->COMPRESSOR__DOT__CoN4 = 1U;
        vlSelf->COMPRESSOR__DOT__CCL4[0U] = vlSelf->COMPRESSOR__DOT__Base4;
        vlSelf->COMPRESSOR__DOT__CCL4[1U] = (IData)(
                                                    (((QData)((IData)(
                                                                      ((vlSelf->COMPRESSOR__DOT__del4_7 
                                                                        << 0x18U) 
                                                                       | ((0xff0000U 
                                                                           & (vlSelf->COMPRESSOR__DOT__del4_6 
                                                                              << 0x10U)) 
                                                                          | ((0xff00U 
                                                                              & (vlSelf->COMPRESSOR__DOT__del4_5 
                                                                                << 8U)) 
                                                                             | (0xffU 
                                                                                & vlSelf->COMPRESSOR__DOT__del4_4)))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->COMPRESSOR__DOT__del4_3 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & (vlSelf->COMPRESSOR__DOT__del4_2 
                                                                               << 0x10U)) 
                                                                           | (0xff00U 
                                                                              & (vlSelf->COMPRESSOR__DOT__del4_1 
                                                                                << 8U))))))));
        vlSelf->COMPRESSOR__DOT__CCL4[2U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelf->COMPRESSOR__DOT__del4_7 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & (vlSelf->COMPRESSOR__DOT__del4_6 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & (vlSelf->COMPRESSOR__DOT__del4_5 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & vlSelf->COMPRESSOR__DOT__del4_4)))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((vlSelf->COMPRESSOR__DOT__del4_3 
                                                                          << 0x18U) 
                                                                         | ((0xff0000U 
                                                                             & (vlSelf->COMPRESSOR__DOT__del4_2 
                                                                                << 0x10U)) 
                                                                            | (0xff00U 
                                                                               & (vlSelf->COMPRESSOR__DOT__del4_1 
                                                                                << 8U))))))) 
                                                     >> 0x20U));
    } else {
        vlSelf->COMPRESSOR__DOT__CoN4 = 0U;
    }
    VL_WRITEF("CoN4 = %b, CCL4 = %x \n",1,vlSelf->COMPRESSOR__DOT__CoN4,
              96,vlSelf->COMPRESSOR__DOT__CCL4.data());
    if (((((((((0xffffU == (vlSelf->COMPRESSOR__DOT__del4_1 
                            >> 0x10U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_1 
                                                 >> 0x10U))) 
              & ((0xffffU == (vlSelf->COMPRESSOR__DOT__del4_2 
                              >> 0x10U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_2 
                                                   >> 0x10U)))) 
             & ((0xffffU == (vlSelf->COMPRESSOR__DOT__del4_3 
                             >> 0x10U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_3 
                                                  >> 0x10U)))) 
            & ((0xffffU == (vlSelf->COMPRESSOR__DOT__del4_4 
                            >> 0x10U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_4 
                                                 >> 0x10U)))) 
           & ((0xffffU == (vlSelf->COMPRESSOR__DOT__del4_5 
                           >> 0x10U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_5 
                                                >> 0x10U)))) 
          & ((0xffffU == (vlSelf->COMPRESSOR__DOT__del4_6 
                          >> 0x10U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_6 
                                               >> 0x10U)))) 
         & ((0xffffU == (vlSelf->COMPRESSOR__DOT__del4_7 
                         >> 0x10U)) | (0U == (vlSelf->COMPRESSOR__DOT__del4_7 
                                              >> 0x10U))))) {
        vlSelf->COMPRESSOR__DOT__CoN5 = 1U;
        vlSelf->COMPRESSOR__DOT__CCL5[0U] = vlSelf->COMPRESSOR__DOT__Base4;
        vlSelf->COMPRESSOR__DOT__CCL5[1U] = (vlSelf->COMPRESSOR__DOT__del4_1 
                                             << 0x10U);
        vlSelf->COMPRESSOR__DOT__CCL5[2U] = ((vlSelf->COMPRESSOR__DOT__del4_3 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->COMPRESSOR__DOT__del4_2));
        vlSelf->COMPRESSOR__DOT__CCL5[3U] = (IData)(
                                                    (((QData)((IData)(
                                                                      ((vlSelf->COMPRESSOR__DOT__del4_7 
                                                                        << 0x10U) 
                                                                       | (0xffffU 
                                                                          & vlSelf->COMPRESSOR__DOT__del4_6)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->COMPRESSOR__DOT__del4_5 
                                                                         << 0x10U) 
                                                                        | (0xffffU 
                                                                           & vlSelf->COMPRESSOR__DOT__del4_4))))));
        vlSelf->COMPRESSOR__DOT__CCL5[4U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelf->COMPRESSOR__DOT__del4_7 
                                                                         << 0x10U) 
                                                                        | (0xffffU 
                                                                           & vlSelf->COMPRESSOR__DOT__del4_6)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((vlSelf->COMPRESSOR__DOT__del4_5 
                                                                          << 0x10U) 
                                                                         | (0xffffU 
                                                                            & vlSelf->COMPRESSOR__DOT__del4_4))))) 
                                                     >> 0x20U));
    } else {
        vlSelf->COMPRESSOR__DOT__CoN5 = 0U;
    }
    VL_WRITEF("CoN5 = %b, CCL5 = %x \n",1,vlSelf->COMPRESSOR__DOT__CoN5,
              160,vlSelf->COMPRESSOR__DOT__CCL5.data());
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (vlSelf->UnCompressedCache[0U] >> 0x10U))) {
        vlSelf->COMPRESSOR__DOT__del2_1 = (0xffffU 
                                           & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                              - ((vlSelf->UnCompressedCache[0U] 
                                                  << 0x10U) 
                                                 | (vlSelf->UnCompressedCache[0U] 
                                                    >> 0x10U))));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_1 = (0xffffU 
                                           & (((vlSelf->UnCompressedCache[0U] 
                                                << 0x10U) 
                                               | (vlSelf->UnCompressedCache[0U] 
                                                  >> 0x10U)) 
                                              - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_1 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (0xffffU & vlSelf->UnCompressedCache[1U]))) {
        vlSelf->COMPRESSOR__DOT__del2_2 = (0xffffU 
                                           & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                              - vlSelf->UnCompressedCache[1U]));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_2 = (0xffffU 
                                           & (vlSelf->UnCompressedCache[1U] 
                                              - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_2 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (vlSelf->UnCompressedCache[1U] >> 0x10U))) {
        vlSelf->COMPRESSOR__DOT__del2_3 = (0xffffU 
                                           & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                              - ((vlSelf->UnCompressedCache[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->UnCompressedCache[1U] 
                                                    >> 0x10U))));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_3 = (0xffffU 
                                           & (((vlSelf->UnCompressedCache[1U] 
                                                << 0x10U) 
                                               | (vlSelf->UnCompressedCache[1U] 
                                                  >> 0x10U)) 
                                              - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_3 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (0xffffU & vlSelf->UnCompressedCache[2U]))) {
        vlSelf->COMPRESSOR__DOT__del2_4 = (0xffffU 
                                           & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                              - vlSelf->UnCompressedCache[2U]));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_4 = (0xffffU 
                                           & (vlSelf->UnCompressedCache[2U] 
                                              - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_4 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (vlSelf->UnCompressedCache[2U] >> 0x10U))) {
        vlSelf->COMPRESSOR__DOT__del2_5 = (0xffffU 
                                           & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                              - ((vlSelf->UnCompressedCache[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->UnCompressedCache[2U] 
                                                    >> 0x10U))));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_5 = (0xffffU 
                                           & (((vlSelf->UnCompressedCache[2U] 
                                                << 0x10U) 
                                               | (vlSelf->UnCompressedCache[2U] 
                                                  >> 0x10U)) 
                                              - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_5 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (0xffffU & vlSelf->UnCompressedCache[3U]))) {
        vlSelf->COMPRESSOR__DOT__del2_6 = (0xffffU 
                                           & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                              - vlSelf->UnCompressedCache[3U]));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_6 = (0xffffU 
                                           & (vlSelf->UnCompressedCache[3U] 
                                              - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_6 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (vlSelf->UnCompressedCache[3U] >> 0x10U))) {
        vlSelf->COMPRESSOR__DOT__del2_6 = (0xffffU 
                                           & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                              - ((vlSelf->UnCompressedCache[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->UnCompressedCache[3U] 
                                                    >> 0x10U))));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_6 = (0xffffU 
                                           & (((vlSelf->UnCompressedCache[3U] 
                                                << 0x10U) 
                                               | (vlSelf->UnCompressedCache[3U] 
                                                  >> 0x10U)) 
                                              - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_6 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (0xffffU & vlSelf->UnCompressedCache[4U]))) {
        vlSelf->COMPRESSOR__DOT__del2_7 = (0xffffU 
                                           & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                              - vlSelf->UnCompressedCache[4U]));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_7 = (0xffffU 
                                           & (vlSelf->UnCompressedCache[4U] 
                                              - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_7 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (vlSelf->UnCompressedCache[4U] >> 0x10U))) {
        vlSelf->COMPRESSOR__DOT__del2_8 = (0xffffU 
                                           & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                              - ((vlSelf->UnCompressedCache[4U] 
                                                  << 0x10U) 
                                                 | (vlSelf->UnCompressedCache[4U] 
                                                    >> 0x10U))));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_8 = (0xffffU 
                                           & (((vlSelf->UnCompressedCache[4U] 
                                                << 0x10U) 
                                               | (vlSelf->UnCompressedCache[4U] 
                                                  >> 0x10U)) 
                                              - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_8 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (0xffffU & vlSelf->UnCompressedCache[5U]))) {
        vlSelf->COMPRESSOR__DOT__del2_9 = (0xffffU 
                                           & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                              - vlSelf->UnCompressedCache[5U]));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_9 = (0xffffU 
                                           & (vlSelf->UnCompressedCache[5U] 
                                              - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_9 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (vlSelf->UnCompressedCache[5U] >> 0x10U))) {
        vlSelf->COMPRESSOR__DOT__del2_10 = (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                               - ((
                                                   vlSelf->UnCompressedCache[5U] 
                                                   << 0x10U) 
                                                  | (vlSelf->UnCompressedCache[5U] 
                                                     >> 0x10U))));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_10 = (0xffffU 
                                            & (((vlSelf->UnCompressedCache[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->UnCompressedCache[5U] 
                                                   >> 0x10U)) 
                                               - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_10 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (vlSelf->UnCompressedCache[5U] >> 0x10U))) {
        vlSelf->COMPRESSOR__DOT__del2_11 = (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                               - ((
                                                   vlSelf->UnCompressedCache[5U] 
                                                   << 0x10U) 
                                                  | (vlSelf->UnCompressedCache[5U] 
                                                     >> 0x10U))));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_11 = (0xffffU 
                                            & (((vlSelf->UnCompressedCache[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->UnCompressedCache[5U] 
                                                   >> 0x10U)) 
                                               - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_11 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (0xffffU & vlSelf->UnCompressedCache[6U]))) {
        vlSelf->COMPRESSOR__DOT__del2_12 = (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                               - vlSelf->UnCompressedCache[6U]));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_12 = (0xffffU 
                                            & (vlSelf->UnCompressedCache[6U] 
                                               - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_12 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (vlSelf->UnCompressedCache[6U] >> 0x10U))) {
        vlSelf->COMPRESSOR__DOT__del2_13 = (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                               - ((
                                                   vlSelf->UnCompressedCache[6U] 
                                                   << 0x10U) 
                                                  | (vlSelf->UnCompressedCache[6U] 
                                                     >> 0x10U))));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_13 = (0xffffU 
                                            & (((vlSelf->UnCompressedCache[6U] 
                                                 << 0x10U) 
                                                | (vlSelf->UnCompressedCache[6U] 
                                                   >> 0x10U)) 
                                               - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_13 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (0xffffU & vlSelf->UnCompressedCache[7U]))) {
        vlSelf->COMPRESSOR__DOT__del2_14 = (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                               - vlSelf->UnCompressedCache[7U]));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_14 = (0xffffU 
                                            & (vlSelf->UnCompressedCache[7U] 
                                               - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_14 = 1U;
    }
    if (((IData)(vlSelf->COMPRESSOR__DOT__Base2) > 
         (vlSelf->UnCompressedCache[7U] >> 0x10U))) {
        vlSelf->COMPRESSOR__DOT__del2_15 = (0xffffU 
                                            & ((IData)(vlSelf->COMPRESSOR__DOT__Base2) 
                                               - ((
                                                   vlSelf->UnCompressedCache[7U] 
                                                   << 0x10U) 
                                                  | (vlSelf->UnCompressedCache[7U] 
                                                     >> 0x10U))));
    } else {
        vlSelf->COMPRESSOR__DOT__del2_15 = (0xffffU 
                                            & (((vlSelf->UnCompressedCache[7U] 
                                                 << 0x10U) 
                                                | (vlSelf->UnCompressedCache[7U] 
                                                   >> 0x10U)) 
                                               - (IData)(vlSelf->COMPRESSOR__DOT__Base2)));
        vlSelf->COMPRESSOR__DOT__mark2_15 = 1U;
    }
    VL_WRITEF(" BASE 2: del1= %x, del2 =%x, del3 = %x del4 = %x del5 = %x del6 = %x del7 = %x\tdel8= %x, del9 =%x, del10 = %x del11 = %x del12 = %x del13 = %x del14 = %x del7 = %x \n\n",
              16,vlSelf->COMPRESSOR__DOT__del2_1,16,
              (IData)(vlSelf->COMPRESSOR__DOT__del2_2),
              16,vlSelf->COMPRESSOR__DOT__del2_3,16,
              (IData)(vlSelf->COMPRESSOR__DOT__del2_4),
              16,vlSelf->COMPRESSOR__DOT__del2_5,16,
              (IData)(vlSelf->COMPRESSOR__DOT__del2_6),
              16,vlSelf->COMPRESSOR__DOT__del2_7,16,
              (IData)(vlSelf->COMPRESSOR__DOT__del2_8),
              16,vlSelf->COMPRESSOR__DOT__del2_9,16,
              (IData)(vlSelf->COMPRESSOR__DOT__del2_10),
              16,vlSelf->COMPRESSOR__DOT__del2_11,16,
              (IData)(vlSelf->COMPRESSOR__DOT__del2_12),
              16,vlSelf->COMPRESSOR__DOT__del2_13,16,
              (IData)(vlSelf->COMPRESSOR__DOT__del2_14),
              16,vlSelf->COMPRESSOR__DOT__del2_15);
    if (((((((((((((((((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_1) 
                                           >> 8U))) 
                       | (0U == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_1) 
                                          >> 8U)))) 
                      & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_2) 
                                             >> 8U))) 
                         | (0U == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_2) 
                                            >> 8U))))) 
                     & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_3) 
                                            >> 8U))) 
                        | (0U == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_3) 
                                           >> 8U))))) 
                    & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_4) 
                                           >> 8U))) 
                       | (0U == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_4) 
                                          >> 8U))))) 
                   & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_5) 
                                          >> 8U))) 
                      | (0U == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_5) 
                                         >> 8U))))) 
                  & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_6) 
                                         >> 8U))) | 
                     (0U == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_6) 
                                      >> 8U))))) & 
                 ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_7) 
                                      >> 8U))) | (0U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->COMPRESSOR__DOT__del2_7) 
                                                      >> 8U))))) 
                & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_8) 
                                       >> 8U))) | (0U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->COMPRESSOR__DOT__del2_8) 
                                                       >> 8U))))) 
               & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_9) 
                                      >> 8U))) | (0U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->COMPRESSOR__DOT__del2_9) 
                                                      >> 8U))))) 
              & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_10) 
                                     >> 8U))) | (0U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->COMPRESSOR__DOT__del2_10) 
                                                     >> 8U))))) 
             & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_11) 
                                    >> 8U))) | (0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->COMPRESSOR__DOT__del2_11) 
                                                    >> 8U))))) 
            & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_12) 
                                   >> 8U))) | (0U == 
                                               (0xffU 
                                                & ((IData)(vlSelf->COMPRESSOR__DOT__del2_12) 
                                                   >> 8U))))) 
           & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_13) 
                                  >> 8U))) | (0U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->COMPRESSOR__DOT__del2_13) 
                                                  >> 8U))))) 
          & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_14) 
                                 >> 8U))) | (0U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->COMPRESSOR__DOT__del2_14) 
                                                 >> 8U))))) 
         & ((0xffU == (0xffU & ((IData)(vlSelf->COMPRESSOR__DOT__del2_15) 
                                >> 8U))) | (0U == (0xffU 
                                                   & ((IData)(vlSelf->COMPRESSOR__DOT__del2_15) 
                                                      >> 8U)))))) {
        vlSelf->COMPRESSOR__DOT__CoN6 = 1U;
        __Vtemp18[2U] = (((0xff00U & ((IData)(vlSelf->COMPRESSOR__DOT__del2_7) 
                                      << 8U)) | (0xffU 
                                                 & (IData)(vlSelf->COMPRESSOR__DOT__del2_6))) 
                         | ((IData)((((QData)((IData)(
                                                      (((IData)(vlSelf->COMPRESSOR__DOT__del2_15) 
                                                        << 0x18U) 
                                                       | ((0xff0000U 
                                                           & ((IData)(vlSelf->COMPRESSOR__DOT__del2_14) 
                                                              << 0x10U)) 
                                                          | ((0xff00U 
                                                              & ((IData)(vlSelf->COMPRESSOR__DOT__del2_13) 
                                                                 << 8U)) 
                                                             | (0xffU 
                                                                & (IData)(vlSelf->COMPRESSOR__DOT__del2_12))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((IData)(vlSelf->COMPRESSOR__DOT__del2_11) 
                                                                    << 0x18U) 
                                                                   | ((0xff0000U 
                                                                       & ((IData)(vlSelf->COMPRESSOR__DOT__del2_10) 
                                                                          << 0x10U)) 
                                                                      | ((0xff00U 
                                                                          & ((IData)(vlSelf->COMPRESSOR__DOT__del2_9) 
                                                                             << 8U)) 
                                                                         | (0xffU 
                                                                            & (IData)(vlSelf->COMPRESSOR__DOT__del2_8))))))))) 
                            << 0x10U));
        __Vtemp18[3U] = (((IData)((((QData)((IData)(
                                                    (((IData)(vlSelf->COMPRESSOR__DOT__del2_15) 
                                                      << 0x18U) 
                                                     | ((0xff0000U 
                                                         & ((IData)(vlSelf->COMPRESSOR__DOT__del2_14) 
                                                            << 0x10U)) 
                                                        | ((0xff00U 
                                                            & ((IData)(vlSelf->COMPRESSOR__DOT__del2_13) 
                                                               << 8U)) 
                                                           | (0xffU 
                                                              & (IData)(vlSelf->COMPRESSOR__DOT__del2_12))))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->COMPRESSOR__DOT__del2_11) 
                                                                  << 0x18U) 
                                                                 | ((0xff0000U 
                                                                     & ((IData)(vlSelf->COMPRESSOR__DOT__del2_10) 
                                                                        << 0x10U)) 
                                                                    | ((0xff00U 
                                                                        & ((IData)(vlSelf->COMPRESSOR__DOT__del2_9) 
                                                                           << 8U)) 
                                                                       | (0xffU 
                                                                          & (IData)(vlSelf->COMPRESSOR__DOT__del2_8))))))))) 
                          >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                  (((IData)(vlSelf->COMPRESSOR__DOT__del2_15) 
                                                                    << 0x18U) 
                                                                   | ((0xff0000U 
                                                                       & ((IData)(vlSelf->COMPRESSOR__DOT__del2_14) 
                                                                          << 0x10U)) 
                                                                      | ((0xff00U 
                                                                          & ((IData)(vlSelf->COMPRESSOR__DOT__del2_13) 
                                                                             << 8U)) 
                                                                         | (0xffU 
                                                                            & (IData)(vlSelf->COMPRESSOR__DOT__del2_12))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->COMPRESSOR__DOT__del2_11) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & ((IData)(vlSelf->COMPRESSOR__DOT__del2_10) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((IData)(vlSelf->COMPRESSOR__DOT__del2_9) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (IData)(vlSelf->COMPRESSOR__DOT__del2_8)))))))) 
                                                >> 0x20U)) 
                                       << 0x10U));
        vlSelf->COMPRESSOR__DOT__CCL6[0U] = (((IData)(vlSelf->COMPRESSOR__DOT__del2_1) 
                                              << 0x18U) 
                                             | (IData)(vlSelf->COMPRESSOR__DOT__Base2));
        vlSelf->COMPRESSOR__DOT__CCL6[1U] = (((0xff00U 
                                               & ((IData)(vlSelf->COMPRESSOR__DOT__del2_3) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (IData)(vlSelf->COMPRESSOR__DOT__del2_2))) 
                                             | (((IData)(vlSelf->COMPRESSOR__DOT__del2_5) 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & ((IData)(vlSelf->COMPRESSOR__DOT__del2_4) 
                                                      << 0x10U))));
        vlSelf->COMPRESSOR__DOT__CCL6[2U] = __Vtemp18[2U];
        vlSelf->COMPRESSOR__DOT__CCL6[3U] = __Vtemp18[3U];
        vlSelf->COMPRESSOR__DOT__CCL6[4U] = ((IData)(
                                                     ((((QData)((IData)(
                                                                        (((IData)(vlSelf->COMPRESSOR__DOT__del2_15) 
                                                                          << 0x18U) 
                                                                         | ((0xff0000U 
                                                                             & ((IData)(vlSelf->COMPRESSOR__DOT__del2_14) 
                                                                                << 0x10U)) 
                                                                            | ((0xff00U 
                                                                                & ((IData)(vlSelf->COMPRESSOR__DOT__del2_13) 
                                                                                << 8U)) 
                                                                               | (0xffU 
                                                                                & (IData)(vlSelf->COMPRESSOR__DOT__del2_12))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->COMPRESSOR__DOT__del2_11) 
                                                                           << 0x18U) 
                                                                          | ((0xff0000U 
                                                                              & ((IData)(vlSelf->COMPRESSOR__DOT__del2_10) 
                                                                                << 0x10U)) 
                                                                             | ((0xff00U 
                                                                                & ((IData)(vlSelf->COMPRESSOR__DOT__del2_9) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (IData)(vlSelf->COMPRESSOR__DOT__del2_8)))))))) 
                                                      >> 0x20U)) 
                                             >> 0x10U);
    } else {
        vlSelf->COMPRESSOR__DOT__CoN6 = 0U;
    }
    VL_WRITEF("CoN6 = %b, CCL6 = %x \n",1,vlSelf->COMPRESSOR__DOT__CoN6,
              144,vlSelf->COMPRESSOR__DOT__CCL6.data());
}

void Vcompressor___024root___eval(Vcompressor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompressor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompressor___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vcompressor___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vcompressor___024root___change_request_1(Vcompressor___024root* vlSelf);

VL_INLINE_OPT QData Vcompressor___024root___change_request(Vcompressor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompressor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompressor___024root___change_request\n"); );
    // Body
    return (Vcompressor___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcompressor___024root___change_request_1(Vcompressor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompressor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompressor___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcompressor___024root___eval_debug_assertions(Vcompressor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompressor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompressor___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
}
#endif  // VL_DEBUG
