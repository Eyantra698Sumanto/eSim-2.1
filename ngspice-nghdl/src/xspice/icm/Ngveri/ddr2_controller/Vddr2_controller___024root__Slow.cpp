// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vddr2_controller.h for the primary calling header

#include "Vddr2_controller___024root.h"
#include "Vddr2_controller__Syms.h"

//==========


void Vddr2_controller___024root___ctor_var_reset(Vddr2_controller___024root* vlSelf);

Vddr2_controller___024root::Vddr2_controller___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vddr2_controller___024root___ctor_var_reset(this);
}

void Vddr2_controller___024root::__Vconfigure(Vddr2_controller__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vddr2_controller___024root::~Vddr2_controller___024root() {
}

void Vddr2_controller___024root___initial__TOP__1(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->C0_DQSBAR_PAD = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 32> Vddr2_controller__ConstPool__TABLE_55a83eef_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vddr2_controller__ConstPool__TABLE_23a28453_0;

void Vddr2_controller___024root___settle__TOP__4(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___settle__TOP__4\n"); );
    // Variables
    CData/*1:0*/ ddr2_controller__DOT__dqs_o;
    CData/*1:0*/ ddr2_controller__DOT__ba_i;
    CData/*1:0*/ ddr2_controller__DOT__dqs_pad__en12;
    CData/*4:0*/ __Vtableidx1;
    SData/*12:0*/ ddr2_controller__DOT__a_i;
    SData/*15:0*/ ddr2_controller__DOT__C0_DQ_PAD__out__out17;
    // Body
    vlSelf->ddr2_controller__DOT__in_xaddrfin = (((QData)((IData)(vlSelf->ADDR)) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->CMD) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->SZ) 
                                                                        << 3U) 
                                                                       | (IData)(vlSelf->OP))))));
    vlSelf->RADDR = (0x1ffffffU & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_RETURN__data_out 
                                           >> 0x10U)));
    vlSelf->DOUT = (0xffffU & (IData)(vlSelf->ddr2_controller__DOT____Vcellout__FIFO_RETURN__data_out));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out45 
        = ((2U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out45)) 
           | (1U & (IData)(vlSelf->ddr2_controller__DOT__dm_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out46 
        = ((1U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out46)) 
           | (2U & (IData)(vlSelf->ddr2_controller__DOT__dm_i)));
    vlSelf->ddr2_controller__DOT__dq_pad__en11 = (0xffffU 
                                                  & ((((((((((((((((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                   | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                      << 1U)) 
                                                                  | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                     << 2U)) 
                                                                 | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                    << 3U)) 
                                                                | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                   << 4U)) 
                                                               | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                  << 5U)) 
                                                              | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                 << 6U)) 
                                                             | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                << 7U)) 
                                                            | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                               << 8U)) 
                                                           | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                              << 9U)) 
                                                          | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                             << 0xaU)) 
                                                         | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                            << 0xbU)) 
                                                        | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                           << 0xcU)) 
                                                       | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                          << 0xdU)) 
                                                      | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                         << 0xeU)) 
                                                     | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                        << 0xfU)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out74 
        = ((0xfffeU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out74)) 
           | ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
              & (IData)(vlSelf->ddr2_controller__DOT__ts_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out75 
        = ((0xfffdU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out75)) 
           | (0xfffffffeU & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 1U))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out76 
        = ((0xfffbU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out76)) 
           | (0xfffffffcU & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 2U))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out77 
        = ((0xfff7U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out77)) 
           | (0xfffffff8U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 3U))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out78 
        = ((0xffefU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out78)) 
           | (0xfffffff0U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 4U))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out79 
        = ((0xffdfU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out79)) 
           | (0xffffffe0U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 5U))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out80 
        = ((0xffbfU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out80)) 
           | (0xffffffc0U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 6U))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out81 
        = ((0xff7fU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out81)) 
           | (0xffffff80U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 7U))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out82 
        = ((0xfeffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out82)) 
           | (0xffffff00U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 8U))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out83 
        = ((0xfdffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out83)) 
           | (0xfffffe00U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 9U))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out84 
        = ((0xfbffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out84)) 
           | (0xfffffc00U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 0xaU))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out85 
        = ((0xf7ffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out85)) 
           | (0xfffff800U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 0xbU))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out86 
        = ((0xefffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out86)) 
           | (0xfffff000U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 0xcU))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out87 
        = ((0xdfffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out87)) 
           | (0xffffe000U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 0xdU))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out88 
        = ((0xbfffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out88)) 
           | (0xffffc000U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 0xeU))));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out89 
        = ((0x7fffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out89)) 
           | (0xffff8000U & ((IData)(vlSelf->ddr2_controller__DOT__dq_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 0xfU))));
    ddr2_controller__DOT__dqs_pad__en12 = (3U & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                 | ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                    << 1U)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out49 
        = ((2U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out49)) 
           | ((IData)(vlSelf->ddr2_controller__DOT__dqs_i) 
              & (IData)(vlSelf->ddr2_controller__DOT__ts_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out50 
        = ((1U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out50)) 
           | (0xfffffffeU & ((IData)(vlSelf->ddr2_controller__DOT__dqs_i) 
                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                << 1U))));
    vlSelf->ddr2_controller__DOT__notfull_dataFIFO 
        = (0x40U != (IData)(vlSelf->FILLCOUNT));
    vlSelf->ddr2_controller__DOT__emptyBar_dataFIFO 
        = (0U != (IData)(vlSelf->FILLCOUNT));
    vlSelf->C0_CKBAR_PAD = (1U & (~ (IData)(vlSelf->ddr2_controller__DOT__ck)));
    vlSelf->C0_CK_PAD = vlSelf->ddr2_controller__DOT__ck;
    vlSelf->ddr2_controller__DOT__fullBar_returnFIFO 
        = (0x40U != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO));
    vlSelf->ddr2_controller__DOT__emptyBar_returnFIFO 
        = (0U != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO));
    vlSelf->ddr2_controller__DOT__get_dataFIFO = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_p) 
                                                  | (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_n));
    vlSelf->ddr2_controller__DOT__TPL__DOT__column_address_wire 
        = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)
            ? (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__columnb_address)
            : (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__column_address));
    vlSelf->ddr2_controller__DOT____Vcellinp__FIFO_RETURN__data_in 
        = (((QData)((IData)(vlSelf->ddr2_controller__DOT__addr_returnFIFO)) 
            << 0x10U) | (QData)((IData)(((4U & (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff))
                                          ? ((2U & (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff))
                                                  ? (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__r7)
                                                  : (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__r6))
                                              : ((1U 
                                                  & (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff))
                                                  ? (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__r5)
                                                  : (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__r4)))
                                          : ((2U & (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff))
                                                  ? (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__r3)
                                                  : (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__r2))
                                              : ((1U 
                                                  & (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff))
                                                  ? (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__r1)
                                                  : (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__r0)))))));
    vlSelf->C0_CKE_PAD = vlSelf->ddr2_controller__DOT__init_cke;
    vlSelf->C0_ODT_PAD = vlSelf->ddr2_controller__DOT__init_odt;
    vlSelf->ddr2_controller__DOT__notfull_cmdFIFO = 
        (0x40U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount));
    vlSelf->ddr2_controller__DOT__emptyBar_cmdFIFO 
        = (0U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount));
    if (vlSelf->READY) {
        vlSelf->C0_CSBAR_PAD = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)
                                 ? (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb)
                                 : (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__csbar));
        vlSelf->C0_RASBAR_PAD = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)
                                  ? (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb)
                                  : (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar));
        vlSelf->C0_CASBAR_PAD = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)
                                  ? (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb)
                                  : (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__casbar));
        vlSelf->C0_WEBAR_PAD = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)
                                 ? (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__webarb)
                                 : (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__webar));
    } else {
        vlSelf->C0_CSBAR_PAD = vlSelf->ddr2_controller__DOT__init_csbar;
        vlSelf->C0_RASBAR_PAD = vlSelf->ddr2_controller__DOT__init_rasbar;
        vlSelf->C0_CASBAR_PAD = vlSelf->ddr2_controller__DOT__init_casbar;
        vlSelf->C0_WEBAR_PAD = vlSelf->ddr2_controller__DOT__init_webar;
    }
    vlSelf->NOTFULL = (1U & (~ ((0x21U <= (IData)(vlSelf->FILLCOUNT)) 
                                | (0x40U == (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount)))));
    if (vlSelf->READY) {
        ddr2_controller__DOT__ba_i = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)
                                       ? (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__bankb_address)
                                       : (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__bank_address));
        ddr2_controller__DOT__a_i = vlSelf->ddr2_controller__DOT__a;
    } else {
        ddr2_controller__DOT__ba_i = vlSelf->ddr2_controller__DOT__init_ba;
        ddr2_controller__DOT__a_i = vlSelf->ddr2_controller__DOT__init_a;
    }
    vlSelf->C0_DM_PAD = ((1U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out45)) 
                         | (2U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out46)));
    ddr2_controller__DOT__C0_DQ_PAD__out__out17 = (
                                                   ((((((((((((((((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out74) 
                                                                  & (IData)(vlSelf->ddr2_controller__DOT__ts_i)) 
                                                                 | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out75) 
                                                                    & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                       << 1U))) 
                                                                | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out76) 
                                                                   & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                      << 2U))) 
                                                               | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out77) 
                                                                  & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                     << 3U))) 
                                                              | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out78) 
                                                                 & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                    << 4U))) 
                                                             | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out79) 
                                                                & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                   << 5U))) 
                                                            | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out80) 
                                                               & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                  << 6U))) 
                                                           | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out81) 
                                                              & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                 << 7U))) 
                                                          | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out82) 
                                                             & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                                << 8U))) 
                                                         | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out83) 
                                                            & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                               << 9U))) 
                                                        | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out84) 
                                                           & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                              << 0xaU))) 
                                                       | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out85) 
                                                          & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                             << 0xbU))) 
                                                      | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out86) 
                                                         & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                            << 0xcU))) 
                                                     | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out87) 
                                                        & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                           << 0xdU))) 
                                                    | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out88) 
                                                       & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                          << 0xeU))) 
                                                   | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out89) 
                                                      & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                                         << 0xfU)));
    vlSelf->C0_DQS_PAD = (((((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out49) 
                             & (IData)(vlSelf->ddr2_controller__DOT__ts_i)) 
                            | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out50) 
                               & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                  << 1U))) & (IData)(ddr2_controller__DOT__dqs_pad__en12)) 
                          & (IData)(ddr2_controller__DOT__dqs_pad__en12));
    __Vtableidx1 = (((IData)(vlSelf->CMD) << 2U) | 
                    (((IData)(vlSelf->NOTFULL) << 1U) 
                     | (IData)(vlSelf->ddr2_controller__DOT__put_dataFIFO_reg)));
    vlSelf->ddr2_controller__DOT__put_dataFIFO = Vddr2_controller__ConstPool__TABLE_55a83eef_0
        [__Vtableidx1];
    vlSelf->ddr2_controller__DOT__put_cmdFIFO = Vddr2_controller__ConstPool__TABLE_23a28453_0
        [__Vtableidx1];
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__ba_pad__out__out59 
        = ((2U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__ba_pad__out__out59)) 
           | (1U & (IData)(ddr2_controller__DOT__ba_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__ba_pad__out__out60 
        = ((1U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__ba_pad__out__out60)) 
           | (2U & (IData)(ddr2_controller__DOT__ba_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out61 
        = ((0x1ffeU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out61)) 
           | (1U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out62 
        = ((0x1ffdU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out62)) 
           | (2U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out63 
        = ((0x1ffbU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out63)) 
           | (4U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out64 
        = ((0x1ff7U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out64)) 
           | (8U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out65 
        = ((0x1fefU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out65)) 
           | (0x10U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out66 
        = ((0x1fdfU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out66)) 
           | (0x20U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out67 
        = ((0x1fbfU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out67)) 
           | (0x40U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out68 
        = ((0x1f7fU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out68)) 
           | (0x80U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out69 
        = ((0x1effU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out69)) 
           | (0x100U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out70 
        = ((0x1dffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out70)) 
           | (0x200U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out71 
        = ((0x1bffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out71)) 
           | (0x400U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out72 
        = ((0x17ffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out72)) 
           | (0x800U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out73 
        = ((0xfffU & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out73)) 
           | (0x1000U & (IData)(ddr2_controller__DOT__a_i)));
    vlSelf->C0_DQ_PAD = (((IData)(ddr2_controller__DOT__C0_DQ_PAD__out__out17) 
                          & (IData)(vlSelf->ddr2_controller__DOT__dq_pad__en11)) 
                         & (IData)(vlSelf->ddr2_controller__DOT__dq_pad__en11));
    ddr2_controller__DOT__dqs_o = ((IData)(vlSelf->C0_DQS_PAD) 
                                   & (- (IData)((IData)(vlSelf->ddr2_controller__DOT__ri_i))));
    vlSelf->C0_BA_PAD = ((1U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__ba_pad__out__out59)) 
                         | (2U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__ba_pad__out__out60)));
    vlSelf->C0_A_PAD = (((((((((((((1U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out61)) 
                                   | (2U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out62))) 
                                  | (4U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out63))) 
                                 | (8U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out64))) 
                                | (0x10U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out65))) 
                               | (0x20U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out66))) 
                              | (0x40U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out67))) 
                             | (0x80U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out68))) 
                            | (0x100U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out69))) 
                           | (0x200U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out70))) 
                          | (0x400U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out71))) 
                         | (0x800U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out72))) 
                        | (0x1000U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out73)));
    vlSelf->ddr2_controller__DOT__dq_o = ((0xfff8U 
                                           & (IData)(vlSelf->ddr2_controller__DOT__dq_o)) 
                                          | ((0xfffffffcU 
                                              & ((IData)(vlSelf->C0_DQ_PAD) 
                                                 & ((IData)(vlSelf->ddr2_controller__DOT__ri_i) 
                                                    << 2U))) 
                                             | (3U 
                                                & ((IData)(vlSelf->C0_DQ_PAD) 
                                                   & (- (IData)((IData)(vlSelf->ddr2_controller__DOT__ri_i)))))));
    vlSelf->ddr2_controller__DOT__dq_o = ((0xffc7U 
                                           & (IData)(vlSelf->ddr2_controller__DOT__dq_o)) 
                                          | ((0xffffffe0U 
                                              & ((IData)(vlSelf->C0_DQ_PAD) 
                                                 & ((IData)(vlSelf->ddr2_controller__DOT__ri_i) 
                                                    << 5U))) 
                                             | (0x18U 
                                                & ((IData)(vlSelf->C0_DQ_PAD) 
                                                   & ((- (IData)((IData)(vlSelf->ddr2_controller__DOT__ri_i))) 
                                                      << 3U)))));
    vlSelf->ddr2_controller__DOT__dq_o = ((0xfe3fU 
                                           & (IData)(vlSelf->ddr2_controller__DOT__dq_o)) 
                                          | ((0xffffff00U 
                                              & ((IData)(vlSelf->C0_DQ_PAD) 
                                                 & ((IData)(vlSelf->ddr2_controller__DOT__ri_i) 
                                                    << 8U))) 
                                             | (0xc0U 
                                                & ((IData)(vlSelf->C0_DQ_PAD) 
                                                   & ((- (IData)((IData)(vlSelf->ddr2_controller__DOT__ri_i))) 
                                                      << 6U)))));
    vlSelf->ddr2_controller__DOT__dq_o = ((0xf1ffU 
                                           & (IData)(vlSelf->ddr2_controller__DOT__dq_o)) 
                                          | ((0xfffff800U 
                                              & ((IData)(vlSelf->C0_DQ_PAD) 
                                                 & ((IData)(vlSelf->ddr2_controller__DOT__ri_i) 
                                                    << 0xbU))) 
                                             | (0x600U 
                                                & ((IData)(vlSelf->C0_DQ_PAD) 
                                                   & ((- (IData)((IData)(vlSelf->ddr2_controller__DOT__ri_i))) 
                                                      << 9U)))));
    vlSelf->ddr2_controller__DOT__dq_o = ((0x8fffU 
                                           & (IData)(vlSelf->ddr2_controller__DOT__dq_o)) 
                                          | ((0xffffc000U 
                                              & ((IData)(vlSelf->C0_DQ_PAD) 
                                                 & ((IData)(vlSelf->ddr2_controller__DOT__ri_i) 
                                                    << 0xeU))) 
                                             | (0x3000U 
                                                & ((IData)(vlSelf->C0_DQ_PAD) 
                                                   & ((- (IData)((IData)(vlSelf->ddr2_controller__DOT__ri_i))) 
                                                      << 0xcU)))));
    vlSelf->ddr2_controller__DOT__dq_o = ((0x7fffU 
                                           & (IData)(vlSelf->ddr2_controller__DOT__dq_o)) 
                                          | (0xffff8000U 
                                             & ((IData)(vlSelf->C0_DQ_PAD) 
                                                & ((IData)(vlSelf->ddr2_controller__DOT__ri_i) 
                                                   << 0xfU))));
    vlSelf->ddr2_controller__DOT__ring__DOT__fStrobe 
        = ((IData)(ddr2_controller__DOT__dqs_o) & ((IData)(vlSelf->ddr2_controller__DOT__listen_ringBuff) 
                                                   | (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__F0)));
}

void Vddr2_controller___024root___eval_initial(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___eval_initial\n"); );
    // Body
    Vddr2_controller___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    vlSelf->__Vclklast__TOP__ddr2_controller__DOT__ring__DOT__fStrobe 
        = vlSelf->ddr2_controller__DOT__ring__DOT__fStrobe;
    vlSelf->__Vclklast__TOP__RESET = vlSelf->RESET;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ddr2_controller__DOT__listen_ringBuff 
        = vlSelf->__VinpClk__TOP__ddr2_controller__DOT__listen_ringBuff;
}

void Vddr2_controller___024root___eval_settle(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___eval_settle\n"); );
    // Body
    Vddr2_controller___024root___settle__TOP__4(vlSelf);
}

void Vddr2_controller___024root___final(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___final\n"); );
}

void Vddr2_controller___024root___ctor_var_reset(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->RESET = VL_RAND_RESET_I(1);
    vlSelf->CMD = VL_RAND_RESET_I(3);
    vlSelf->SZ = VL_RAND_RESET_I(2);
    vlSelf->OP = VL_RAND_RESET_I(3);
    vlSelf->FETCHING = VL_RAND_RESET_I(1);
    vlSelf->DIN = VL_RAND_RESET_I(16);
    vlSelf->ADDR = VL_RAND_RESET_I(25);
    vlSelf->INITDDR = VL_RAND_RESET_I(1);
    vlSelf->DOUT = VL_RAND_RESET_I(16);
    vlSelf->RADDR = VL_RAND_RESET_I(25);
    vlSelf->FILLCOUNT = VL_RAND_RESET_I(7);
    vlSelf->VALIDOUT = VL_RAND_RESET_I(1);
    vlSelf->NOTFULL = VL_RAND_RESET_I(1);
    vlSelf->READY = VL_RAND_RESET_I(1);
    vlSelf->C0_DM_PAD = VL_RAND_RESET_I(2);
    vlSelf->C0_ODT_PAD = VL_RAND_RESET_I(1);
    vlSelf->C0_CK_PAD = VL_RAND_RESET_I(1);
    vlSelf->C0_CKBAR_PAD = VL_RAND_RESET_I(1);
    vlSelf->C0_CKE_PAD = VL_RAND_RESET_I(1);
    vlSelf->C0_CSBAR_PAD = VL_RAND_RESET_I(1);
    vlSelf->C0_RASBAR_PAD = VL_RAND_RESET_I(1);
    vlSelf->C0_CASBAR_PAD = VL_RAND_RESET_I(1);
    vlSelf->C0_WEBAR_PAD = VL_RAND_RESET_I(1);
    vlSelf->C0_BA_PAD = VL_RAND_RESET_I(2);
    vlSelf->C0_A_PAD = VL_RAND_RESET_I(13);
    vlSelf->C0_DQ_PAD = VL_RAND_RESET_I(16);
    vlSelf->C0_DQS_PAD = VL_RAND_RESET_I(2);
    vlSelf->C0_DQSBAR_PAD = VL_RAND_RESET_I(2);
    vlSelf->ddr2_controller__DOT__dq_o = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__ri_i = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__ts_i = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__dq_i = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__dqs_i = VL_RAND_RESET_I(2);
    vlSelf->ddr2_controller__DOT__dm_i = VL_RAND_RESET_I(2);
    vlSelf->ddr2_controller__DOT__init_csbar = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__init_rasbar = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__init_webar = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__init_ba = VL_RAND_RESET_I(2);
    vlSelf->ddr2_controller__DOT__init_a = VL_RAND_RESET_I(13);
    vlSelf->ddr2_controller__DOT__init_casbar = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__init_odt = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__init_cke = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__a = VL_RAND_RESET_I(13);
    vlSelf->ddr2_controller__DOT__ck = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__din_dataFIFO = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__emptyBar_cmdFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__emptyBar_dataFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__emptyBar_returnFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__addr_returnFIFO = VL_RAND_RESET_I(25);
    vlSelf->ddr2_controller__DOT__put_returnFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__get_cmdFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__get_dataFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__notfull_cmdFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__notfull_dataFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__fullBar_returnFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__readPtr_ringBuff = VL_RAND_RESET_I(3);
    vlSelf->ddr2_controller__DOT__fillcount_returnFIFO = VL_RAND_RESET_I(7);
    vlSelf->ddr2_controller__DOT__in_xaddrfin = VL_RAND_RESET_Q(33);
    vlSelf->ddr2_controller__DOT__put_dataFIFO_reg = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__put_dataFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__put_cmdFIFO = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__putFIFOCnt_reg = VL_RAND_RESET_I(5);
    vlSelf->ddr2_controller__DOT__putFIFO_state = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out = VL_RAND_RESET_Q(33);
    vlSelf->ddr2_controller__DOT____Vcellinp__FIFO_RETURN__data_in = VL_RAND_RESET_Q(41);
    vlSelf->ddr2_controller__DOT____Vcellout__FIFO_RETURN__data_out = VL_RAND_RESET_Q(41);
    vlSelf->ddr2_controller__DOT__listen_ringBuff = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__dq_pad__en11 = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__queue[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr = VL_RAND_RESET_I(6);
    vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr = VL_RAND_RESET_I(6);
    vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__queue[__Vi0] = VL_RAND_RESET_Q(33);
    }
    vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr = VL_RAND_RESET_I(6);
    vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__queue[__Vi0] = VL_RAND_RESET_Q(41);
    }
    vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr = VL_RAND_RESET_I(6);
    vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr = VL_RAND_RESET_I(6);
    vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg = VL_RAND_RESET_I(17);
    vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg = VL_RAND_RESET_I(5);
    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg = VL_RAND_RESET_I(25);
    vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg = VL_RAND_RESET_I(6);
    vlSelf->ddr2_controller__DOT__TPL__DOT__refCnt_reg = VL_RAND_RESET_I(12);
    vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg = VL_RAND_RESET_I(4);
    vlSelf->ddr2_controller__DOT__TPL__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->ddr2_controller__DOT__TPL__DOT__block_state = VL_RAND_RESET_I(2);
    vlSelf->ddr2_controller__DOT__TPL__DOT__row_address = VL_RAND_RESET_I(13);
    vlSelf->ddr2_controller__DOT__TPL__DOT__bank_address = VL_RAND_RESET_I(2);
    vlSelf->ddr2_controller__DOT__TPL__DOT__column_address = VL_RAND_RESET_I(10);
    vlSelf->ddr2_controller__DOT__TPL__DOT__rowb_address = VL_RAND_RESET_I(13);
    vlSelf->ddr2_controller__DOT__TPL__DOT__bankb_address = VL_RAND_RESET_I(2);
    vlSelf->ddr2_controller__DOT__TPL__DOT__columnb_address = VL_RAND_RESET_I(10);
    vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg = VL_RAND_RESET_I(3);
    vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg = VL_RAND_RESET_I(2);
    vlSelf->ddr2_controller__DOT__TPL__DOT__szBlk_reg = VL_RAND_RESET_I(2);
    vlSelf->ddr2_controller__DOT__TPL__DOT__szRd_reg = VL_RAND_RESET_I(2);
    vlSelf->ddr2_controller__DOT__TPL__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_p = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_n = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__TPL__DOT__column_address_wire = VL_RAND_RESET_I(10);
    vlSelf->ddr2_controller__DOT__TPL__DOT__flag_a = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__ring__DOT__r0 = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__ring__DOT__r1 = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__ring__DOT__r2 = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__ring__DOT__r3 = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__ring__DOT__r4 = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__ring__DOT__r5 = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__ring__DOT__r6 = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__ring__DOT__r7 = VL_RAND_RESET_I(16);
    vlSelf->ddr2_controller__DOT__ring__DOT__F0 = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__ring__DOT__fStrobe = VL_RAND_RESET_I(1);
    vlSelf->ddr2_controller__DOT__ring__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out45 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out46 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out49 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out50 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__ba_pad__out__out59 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__ba_pad__out__out60 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out61 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out62 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out63 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out64 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out65 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out66 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out67 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out68 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out69 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out70 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out71 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out72 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out73 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out74 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out75 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out76 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out77 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out78 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out79 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out80 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out81 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out82 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out83 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out84 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out85 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out86 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out87 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out88 = 0;
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out89 = 0;
    vlSelf->__Vdly__ddr2_controller__DOT__ck = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__fillcount = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvdim0__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0 = 0;
    vlSelf->__Vdlyvval__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0 = VL_RAND_RESET_Q(33);
    vlSelf->__Vdlyvset__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0 = 0;
    vlSelf->__Vdlyvdim0__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1 = 0;
    vlSelf->__Vdlyvval__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1 = VL_RAND_RESET_Q(33);
    vlSelf->__Vdlyvset__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1 = 0;
    vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__ddr2_controller__DOT__fillcount_returnFIFO = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = VL_RAND_RESET_I(17);
    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg = VL_RAND_RESET_I(25);
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__ddr2_controller__DOT__get_cmdFIFO = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ddr2_controller__DOT__addr_returnFIFO = VL_RAND_RESET_I(25);
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cmd_reg = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__sz_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szRd_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szBlk_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = VL_RAND_RESET_I(2);
    vlSelf->__VinpClk__TOP__ddr2_controller__DOT__listen_ringBuff = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ddr2_controller__DOT__listen_ringBuff = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ddr2_controller__DOT__ring__DOT__F0 = VL_RAND_RESET_I(1);
}
