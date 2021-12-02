// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vddr2_controller.h for the primary calling header

#include "Vddr2_controller___024root.h"
#include "Vddr2_controller__Syms.h"

//==========

VL_INLINE_OPT void Vddr2_controller___024root___sequent__TOP__2(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*1:0*/ ddr2_controller__DOT__dqs_pad__en12;
    CData/*0:0*/ __Vdly__ddr2_controller__DOT__putFIFO_state;
    CData/*4:0*/ __Vdly__ddr2_controller__DOT__putFIFOCnt_reg;
    CData/*6:0*/ __Vdly__FILLCOUNT;
    CData/*5:0*/ __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr;
    CData/*5:0*/ __Vdlyvdim0__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v0;
    CData/*0:0*/ __Vdlyvset__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v0;
    CData/*5:0*/ __Vdlyvdim0__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v1;
    CData/*0:0*/ __Vdlyvset__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v1;
    CData/*5:0*/ __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr;
    CData/*5:0*/ __Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr;
    CData/*5:0*/ __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr;
    CData/*5:0*/ __Vdlyvdim0__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v0;
    CData/*0:0*/ __Vdlyvset__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v0;
    CData/*5:0*/ __Vdlyvdim0__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v1;
    CData/*0:0*/ __Vdlyvset__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v1;
    CData/*5:0*/ __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr;
    CData/*0:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__flag_a;
    CData/*1:0*/ __Vdly__ddr2_controller__DOT__dqs_i;
    SData/*15:0*/ __Vdlyvval__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v0;
    SData/*15:0*/ __Vdlyvval__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v1;
    SData/*12:0*/ __Vdly__ddr2_controller__DOT__a;
    SData/*11:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__refCnt_reg;
    QData/*40:0*/ __Vdlyvval__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v0;
    QData/*40:0*/ __Vdlyvval__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v1;
    // Body
    vlSelf->__Vdly__ddr2_controller__DOT__ck = vlSelf->ddr2_controller__DOT__ck;
    __Vdly__ddr2_controller__DOT__putFIFOCnt_reg = vlSelf->ddr2_controller__DOT__putFIFOCnt_reg;
    __Vdly__ddr2_controller__DOT__putFIFO_state = vlSelf->ddr2_controller__DOT__putFIFO_state;
    vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr 
        = vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr;
    __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr 
        = vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr;
    __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr 
        = vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr;
    __Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr 
        = vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr;
    vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__fillcount 
        = vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount;
    __Vdly__FILLCOUNT = vlSelf->FILLCOUNT;
    __Vdlyvset__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v0 = 0U;
    __Vdlyvset__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v1 = 0U;
    vlSelf->__Vdlyvset__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0 = 0U;
    vlSelf->__Vdlyvset__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1 = 0U;
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__block_state;
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg;
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szBlk_reg 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__szBlk_reg;
    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg 
        = vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg;
    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
        = vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg;
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szRd_reg 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__szRd_reg;
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__sz_reg 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg;
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cmd_reg 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg;
    vlSelf->__Vdly__ddr2_controller__DOT__get_cmdFIFO 
        = vlSelf->ddr2_controller__DOT__get_cmdFIFO;
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg;
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__state;
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg;
    __Vdly__ddr2_controller__DOT__TPL__DOT__refCnt_reg 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__refCnt_reg;
    vlSelf->__Vdly__ddr2_controller__DOT__addr_returnFIFO 
        = vlSelf->ddr2_controller__DOT__addr_returnFIFO;
    vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff 
        = vlSelf->ddr2_controller__DOT__readPtr_ringBuff;
    __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr 
        = vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr;
    vlSelf->__Vdly__ddr2_controller__DOT__fillcount_returnFIFO 
        = vlSelf->ddr2_controller__DOT__fillcount_returnFIFO;
    __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr 
        = vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr;
    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__flag 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__flag;
    __Vdly__ddr2_controller__DOT__TPL__DOT__flag_a 
        = vlSelf->ddr2_controller__DOT__TPL__DOT__flag_a;
    __Vdly__ddr2_controller__DOT__a = vlSelf->ddr2_controller__DOT__a;
    __Vdlyvset__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v0 = 0U;
    __Vdlyvset__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v1 = 0U;
    __Vdly__ddr2_controller__DOT__dqs_i = vlSelf->ddr2_controller__DOT__dqs_i;
    vlSelf->VALIDOUT = (0U != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO));
    vlSelf->__Vdly__ddr2_controller__DOT__ck = (1U 
                                                & ((IData)(vlSelf->RESET) 
                                                   | (~ (IData)(vlSelf->ddr2_controller__DOT__ck))));
    if (vlSelf->RESET) {
        vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_n = 0U;
    }
    if ((((9U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
          & (1U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) 
         | (((4U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg)) 
             & (0xaU == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) 
            & (0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))))) {
        vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_n = 1U;
        if ((((0xaU == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
              & (3U > (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) 
             | (2U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg)))) {
            vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_n = 0U;
        }
    }
    if (vlSelf->RESET) {
        __Vdly__ddr2_controller__DOT__putFIFO_state = 0U;
        __Vdly__ddr2_controller__DOT__putFIFOCnt_reg = 0U;
        vlSelf->ddr2_controller__DOT__put_dataFIFO_reg = 0U;
    } else if (vlSelf->ddr2_controller__DOT__putFIFO_state) {
        if (vlSelf->ddr2_controller__DOT__putFIFO_state) {
            if ((0U != (IData)(vlSelf->ddr2_controller__DOT__putFIFOCnt_reg))) {
                __Vdly__ddr2_controller__DOT__putFIFOCnt_reg 
                    = (0x1fU & ((IData)(vlSelf->ddr2_controller__DOT__putFIFOCnt_reg) 
                                - (IData)(1U)));
            } else {
                __Vdly__ddr2_controller__DOT__putFIFO_state = 0U;
                vlSelf->ddr2_controller__DOT__put_dataFIFO_reg = 0U;
                __Vdly__ddr2_controller__DOT__putFIFOCnt_reg = 0U;
            }
        }
    } else {
        __Vdly__ddr2_controller__DOT__putFIFOCnt_reg = 0U;
        vlSelf->ddr2_controller__DOT__put_dataFIFO_reg = 0U;
        if (((4U == (IData)(vlSelf->CMD)) & (IData)(vlSelf->ddr2_controller__DOT__put_cmdFIFO))) {
            __Vdly__ddr2_controller__DOT__putFIFO_state = 1U;
            vlSelf->ddr2_controller__DOT__put_dataFIFO_reg = 1U;
            __Vdly__ddr2_controller__DOT__putFIFOCnt_reg 
                = ((2U & (IData)(vlSelf->SZ)) ? ((1U 
                                                  & (IData)(vlSelf->SZ))
                                                  ? 0x1eU
                                                  : 0x16U)
                    : ((1U & (IData)(vlSelf->SZ)) ? 0xeU
                        : 6U));
        }
    }
    if (vlSelf->RESET) {
        __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr = 0U;
    } else if ((((IData)(vlSelf->ddr2_controller__DOT__put_dataFIFO) 
                 & (IData)(vlSelf->ddr2_controller__DOT__get_dataFIFO)) 
                & (0U != (IData)(vlSelf->FILLCOUNT)))) {
        vlSelf->ddr2_controller__DOT__din_dataFIFO 
            = vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__queue
            [vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr];
        __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr)));
    } else if ((1U & (~ ((IData)(vlSelf->ddr2_controller__DOT__put_dataFIFO) 
                         & (0x40U != (IData)(vlSelf->FILLCOUNT)))))) {
        if (((IData)(vlSelf->ddr2_controller__DOT__get_dataFIFO) 
             & (0U != (IData)(vlSelf->FILLCOUNT)))) {
            vlSelf->ddr2_controller__DOT__din_dataFIFO 
                = vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__queue
                [vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr];
            __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr)));
        } else {
            __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr 
                = vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr;
        }
    }
    if (vlSelf->RESET) {
        vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__fillcount = 0U;
    } else if ((1U & (~ (((IData)(vlSelf->ddr2_controller__DOT__put_cmdFIFO) 
                          & (IData)(vlSelf->ddr2_controller__DOT__get_cmdFIFO)) 
                         & (IData)(vlSelf->ddr2_controller__DOT__emptyBar_cmdFIFO))))) {
        vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__fillcount 
            = (0x7fU & (((IData)(vlSelf->ddr2_controller__DOT__put_cmdFIFO) 
                         & (IData)(vlSelf->ddr2_controller__DOT__notfull_cmdFIFO))
                         ? ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount))
                         : (((IData)(vlSelf->ddr2_controller__DOT__get_cmdFIFO) 
                             & (IData)(vlSelf->ddr2_controller__DOT__emptyBar_cmdFIFO))
                             ? ((IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount) 
                                - (IData)(1U)) : (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount))));
    }
    if (vlSelf->RESET) {
        __Vdly__FILLCOUNT = 0U;
    } else if ((1U & (~ (((IData)(vlSelf->ddr2_controller__DOT__put_dataFIFO) 
                          & (IData)(vlSelf->ddr2_controller__DOT__get_dataFIFO)) 
                         & (IData)(vlSelf->ddr2_controller__DOT__emptyBar_dataFIFO))))) {
        __Vdly__FILLCOUNT = (0x7fU & (((IData)(vlSelf->ddr2_controller__DOT__put_dataFIFO) 
                                       & (IData)(vlSelf->ddr2_controller__DOT__notfull_dataFIFO))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelf->FILLCOUNT))
                                       : (((IData)(vlSelf->ddr2_controller__DOT__get_dataFIFO) 
                                           & (IData)(vlSelf->ddr2_controller__DOT__emptyBar_dataFIFO))
                                           ? ((IData)(vlSelf->FILLCOUNT) 
                                              - (IData)(1U))
                                           : (IData)(vlSelf->FILLCOUNT))));
    }
    if (vlSelf->RESET) {
        __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr = 0U;
    } else if ((((IData)(vlSelf->ddr2_controller__DOT__put_dataFIFO) 
                 & (IData)(vlSelf->ddr2_controller__DOT__get_dataFIFO)) 
                & (0U != (IData)(vlSelf->FILLCOUNT)))) {
        __Vdlyvval__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v0 
            = vlSelf->DIN;
        __Vdlyvset__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v0 = 1U;
        __Vdlyvdim0__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v0 
            = vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr;
        __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr)));
    } else if (((IData)(vlSelf->ddr2_controller__DOT__put_dataFIFO) 
                & (0x40U != (IData)(vlSelf->FILLCOUNT)))) {
        __Vdlyvval__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v1 
            = vlSelf->DIN;
        __Vdlyvset__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v1 = 1U;
        __Vdlyvdim0__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v1 
            = vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr;
        __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr)));
    } else if ((1U & (~ ((IData)(vlSelf->ddr2_controller__DOT__get_dataFIFO) 
                         & (0U != (IData)(vlSelf->FILLCOUNT)))))) {
        __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr 
            = vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr;
    }
    if (vlSelf->RESET) {
        __Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr = 0U;
    } else if ((((IData)(vlSelf->ddr2_controller__DOT__put_cmdFIFO) 
                 & (IData)(vlSelf->ddr2_controller__DOT__get_cmdFIFO)) 
                & (0U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount)))) {
        vlSelf->__Vdlyvval__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0 
            = vlSelf->ddr2_controller__DOT__in_xaddrfin;
        vlSelf->__Vdlyvset__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0 = 1U;
        vlSelf->__Vdlyvdim0__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0 
            = vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr;
        __Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr)));
    } else if (((IData)(vlSelf->ddr2_controller__DOT__put_cmdFIFO) 
                & (0x40U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount)))) {
        vlSelf->__Vdlyvval__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1 
            = vlSelf->ddr2_controller__DOT__in_xaddrfin;
        vlSelf->__Vdlyvset__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1 = 1U;
        vlSelf->__Vdlyvdim0__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1 
            = vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr;
        __Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr)));
    } else if ((1U & (~ ((IData)(vlSelf->ddr2_controller__DOT__get_cmdFIFO) 
                         & (0U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount)))))) {
        __Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr 
            = vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr;
    }
    if (vlSelf->RESET) {
        vlSelf->__Vdly__ddr2_controller__DOT__fillcount_returnFIFO = 0U;
    } else if ((1U & (~ (((IData)(vlSelf->ddr2_controller__DOT__put_returnFIFO) 
                          & (IData)(vlSelf->FETCHING)) 
                         & (IData)(vlSelf->ddr2_controller__DOT__emptyBar_returnFIFO))))) {
        vlSelf->__Vdly__ddr2_controller__DOT__fillcount_returnFIFO 
            = (0x7fU & (((IData)(vlSelf->ddr2_controller__DOT__put_returnFIFO) 
                         & (IData)(vlSelf->ddr2_controller__DOT__fullBar_returnFIFO))
                         ? ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO))
                         : (((IData)(vlSelf->FETCHING) 
                             & (IData)(vlSelf->ddr2_controller__DOT__emptyBar_returnFIFO))
                             ? ((IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO) 
                                - (IData)(1U)) : (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO))));
    }
    if (vlSelf->RESET) {
        __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr = 0U;
    } else if ((((IData)(vlSelf->ddr2_controller__DOT__put_returnFIFO) 
                 & (IData)(vlSelf->FETCHING)) & (0U 
                                                 != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO)))) {
        vlSelf->ddr2_controller__DOT____Vcellout__FIFO_RETURN__data_out 
            = vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__queue
            [vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr];
        __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr)));
    } else if ((1U & (~ ((IData)(vlSelf->ddr2_controller__DOT__put_returnFIFO) 
                         & (0x40U != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO)))))) {
        if (((IData)(vlSelf->FETCHING) & (0U != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO)))) {
            vlSelf->ddr2_controller__DOT____Vcellout__FIFO_RETURN__data_out 
                = vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__queue
                [vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr];
            __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr)));
        } else {
            __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr 
                = vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr;
        }
    }
    if (vlSelf->RESET) {
        __Vdly__ddr2_controller__DOT__a = 0U;
        __Vdly__ddr2_controller__DOT__TPL__DOT__flag_a = 0U;
    } else {
        __Vdly__ddr2_controller__DOT__a = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)
                                            ? (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__rowb_address)
                                            : (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__row_address));
        if (vlSelf->ddr2_controller__DOT__TPL__DOT__flag_a) {
            __Vdly__ddr2_controller__DOT__a = vlSelf->ddr2_controller__DOT__a;
            __Vdly__ddr2_controller__DOT__TPL__DOT__flag_a = 0U;
        } else if (((1U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__block_state)) 
                    & (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg)))))) {
            __Vdly__ddr2_controller__DOT__a = (0x400U 
                                               | (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__column_address_wire));
            __Vdly__ddr2_controller__DOT__TPL__DOT__flag_a = 1U;
        } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg)))))) {
            if ((2U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
                __Vdly__ddr2_controller__DOT__a = (0x400U 
                                                   | (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__column_address_wire));
                __Vdly__ddr2_controller__DOT__TPL__DOT__flag_a = 1U;
            }
            if ((0xbU == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
                __Vdly__ddr2_controller__DOT__a = 0x400U;
                __Vdly__ddr2_controller__DOT__TPL__DOT__flag_a = 1U;
            }
        }
    }
    if (vlSelf->RESET) {
        __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr = 0U;
    } else if ((((IData)(vlSelf->ddr2_controller__DOT__put_returnFIFO) 
                 & (IData)(vlSelf->FETCHING)) & (0U 
                                                 != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO)))) {
        __Vdlyvval__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v0 
            = vlSelf->ddr2_controller__DOT____Vcellinp__FIFO_RETURN__data_in;
        __Vdlyvset__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v0 = 1U;
        __Vdlyvdim0__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v0 
            = vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr;
        __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr)));
    } else if (((IData)(vlSelf->ddr2_controller__DOT__put_returnFIFO) 
                & (0x40U != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO)))) {
        __Vdlyvval__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v1 
            = vlSelf->ddr2_controller__DOT____Vcellinp__FIFO_RETURN__data_in;
        __Vdlyvset__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v1 = 1U;
        __Vdlyvdim0__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v1 
            = vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr;
        __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr)));
    } else if ((1U & (~ ((IData)(vlSelf->FETCHING) 
                         & (0U != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO)))))) {
        __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr 
            = vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr;
    }
    if (((9U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
         & (3U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg)))) {
        vlSelf->ddr2_controller__DOT__ri_i = 0U;
    } else if (((0xaU == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
                & (0U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg)))) {
        vlSelf->ddr2_controller__DOT__ri_i = 1U;
    }
    if (((9U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
         & (3U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg)))) {
        __Vdly__ddr2_controller__DOT__dqs_i = 0U;
    }
    if ((((9U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
          & (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))))) 
         | ((0xaU == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
            & (0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))))) {
        __Vdly__ddr2_controller__DOT__dqs_i = (3U & 
                                               (~ (IData)(vlSelf->ddr2_controller__DOT__dqs_i)));
    }
    if (((9U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
         & (3U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg)))) {
        vlSelf->ddr2_controller__DOT__ts_i = 1U;
    } else if (((0xaU == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
                & (0U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg)))) {
        vlSelf->ddr2_controller__DOT__ts_i = 0U;
    }
    vlSelf->ddr2_controller__DOT__putFIFO_state = __Vdly__ddr2_controller__DOT__putFIFO_state;
    vlSelf->ddr2_controller__DOT__putFIFOCnt_reg = __Vdly__ddr2_controller__DOT__putFIFOCnt_reg;
    vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr 
        = __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr;
    vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr 
        = __Vdly__ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr;
    if (__Vdlyvset__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v0) {
        vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__queue[__Vdlyvdim0__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v0] 
            = __Vdlyvval__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v0;
    }
    if (__Vdlyvset__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v1) {
        vlSelf->ddr2_controller__DOT__FIFO_DATA__DOT__queue[__Vdlyvdim0__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v1] 
            = __Vdlyvval__ddr2_controller__DOT__FIFO_DATA__DOT__queue__v1;
    }
    vlSelf->FILLCOUNT = __Vdly__FILLCOUNT;
    vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr 
        = __Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr;
    vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr 
        = __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr;
    vlSelf->ddr2_controller__DOT__TPL__DOT__flag_a 
        = __Vdly__ddr2_controller__DOT__TPL__DOT__flag_a;
    vlSelf->ddr2_controller__DOT__a = __Vdly__ddr2_controller__DOT__a;
    vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr 
        = __Vdly__ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr;
    if (__Vdlyvset__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v0) {
        vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__queue[__Vdlyvdim0__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v0] 
            = __Vdlyvval__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v0;
    }
    if (__Vdlyvset__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v1) {
        vlSelf->ddr2_controller__DOT__FIFO_RETURN__DOT__queue[__Vdlyvdim0__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v1] 
            = __Vdlyvval__ddr2_controller__DOT__FIFO_RETURN__DOT__queue__v1;
    }
    vlSelf->ddr2_controller__DOT__dqs_i = __Vdly__ddr2_controller__DOT__dqs_i;
    vlSelf->ddr2_controller__DOT__notfull_dataFIFO 
        = (0x40U != (IData)(vlSelf->FILLCOUNT));
    vlSelf->ddr2_controller__DOT__emptyBar_dataFIFO 
        = (0U != (IData)(vlSelf->FILLCOUNT));
    vlSelf->RADDR = (0x1ffffffU & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_RETURN__data_out 
                                           >> 0x10U)));
    vlSelf->DOUT = (0xffffU & (IData)(vlSelf->ddr2_controller__DOT____Vcellout__FIFO_RETURN__data_out));
    if (((1U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
         & (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg)))))) {
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szBlk_reg 
            = (3U & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                             >> 3U)));
    }
    if ((((3U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
          & (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))))) 
         & (0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg)))) {
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg = 3U;
    }
    if ((((8U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
          & (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))))) 
         & (0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg)))) {
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg = 3U;
    }
    if (vlSelf->RESET) {
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__rowb_address = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__bankb_address = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__columnb_address = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szBlk_reg = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 1U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 1U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 1U;
    } else if (vlSelf->ddr2_controller__DOT__TPL__DOT__flag) {
        if ((2U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__block_state))) {
            if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__block_state))) {
                if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg))) {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg 
                        = (0xfU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg) 
                                   - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 3U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 1U;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szBlk_reg 
                        = (3U & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__szBlk_reg) 
                                 - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 0U;
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg = 3U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 1U;
                }
            } else if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg 
                    = (0xfU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg) 
                               - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 2U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 0U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szBlk_reg 
                    = (3U & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__szBlk_reg) 
                             - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 0U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg = 3U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__block_state))) {
            if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg 
                    = (0xfU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg) 
                               - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 1U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg = 1U;
                if ((4U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 0U;
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 2U;
                } else if ((3U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 1U;
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 3U;
                } else {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 1U;
                }
            }
        } else {
            if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg 
                    = (0xfU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg) 
                               - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 1U;
            } else if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__szBlk_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 1U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 1U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbarb = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbarb = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbarb = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webarb = 1U;
            }
            if ((1U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg))) {
                vlSelf->ddr2_controller__DOT__TPL__DOT__rowb_address 
                    = (0x1fffU & (vlSelf->ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg 
                                  >> 0xcU));
                vlSelf->ddr2_controller__DOT__TPL__DOT__columnb_address 
                    = ((0x3f8U & (vlSelf->ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg 
                                  >> 2U)) | (7U & vlSelf->ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg));
                vlSelf->ddr2_controller__DOT__TPL__DOT__bankb_address 
                    = (3U & (vlSelf->ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg 
                             >> 3U));
            }
        }
    }
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
    vlSelf->C0_DQS_PAD = (((((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out49) 
                             & (IData)(vlSelf->ddr2_controller__DOT__ts_i)) 
                            | ((IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out50) 
                               & ((IData)(vlSelf->ddr2_controller__DOT__ts_i) 
                                  << 1U))) & (IData)(ddr2_controller__DOT__dqs_pad__en12)) 
                          & (IData)(ddr2_controller__DOT__dqs_pad__en12));
}

VL_INLINE_OPT void Vddr2_controller___024root___sequent__TOP__3(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___sequent__TOP__3\n"); );
    // Body
    if ((((9U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)) 
          & (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))))) 
         | (((4U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg)) 
             & (0xaU == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) 
            & (0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))))) {
        vlSelf->ddr2_controller__DOT__dm_i = 0U;
        vlSelf->ddr2_controller__DOT__dq_i = vlSelf->ddr2_controller__DOT__din_dataFIFO;
    } else {
        vlSelf->ddr2_controller__DOT__dm_i = 3U;
        vlSelf->ddr2_controller__DOT__dq_i = 0U;
    }
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out45 
        = ((2U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out45)) 
           | (1U & (IData)(vlSelf->ddr2_controller__DOT__dm_i)));
    vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out46 
        = ((1U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out46)) 
           | (2U & (IData)(vlSelf->ddr2_controller__DOT__dm_i)));
    vlSelf->C0_DM_PAD = ((1U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out45)) 
                         | (2U & (IData)(vlSelf->ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out46)));
}

VL_INLINE_OPT void Vddr2_controller___024root___combo__TOP__5(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___combo__TOP__5\n"); );
    // Variables
    CData/*1:0*/ ddr2_controller__DOT__dqs_o;
    // Body
    vlSelf->ddr2_controller__DOT__in_xaddrfin = (((QData)((IData)(vlSelf->ADDR)) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->CMD) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->SZ) 
                                                                        << 3U) 
                                                                       | (IData)(vlSelf->OP))))));
    ddr2_controller__DOT__dqs_o = ((IData)(vlSelf->C0_DQS_PAD) 
                                   & (- (IData)((IData)(vlSelf->ddr2_controller__DOT__ri_i))));
    vlSelf->ddr2_controller__DOT__ring__DOT__fStrobe 
        = ((IData)(ddr2_controller__DOT__dqs_o) & ((IData)(vlSelf->ddr2_controller__DOT__listen_ringBuff) 
                                                   | (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__F0)));
}

VL_INLINE_OPT void Vddr2_controller___024root___multiclk__TOP__6(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___multiclk__TOP__6\n"); );
    // Variables
    SData/*15:0*/ ddr2_controller__DOT__C0_DQ_PAD__out__out17;
    // Body
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
    vlSelf->C0_DQ_PAD = (((IData)(ddr2_controller__DOT__C0_DQ_PAD__out__out17) 
                          & (IData)(vlSelf->ddr2_controller__DOT__dq_pad__en11)) 
                         & (IData)(vlSelf->ddr2_controller__DOT__dq_pad__en11));
}

VL_INLINE_OPT void Vddr2_controller___024root___sequent__TOP__7(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___sequent__TOP__7\n"); );
    // Body
    if ((0U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
        if ((1U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
            if ((2U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
                if ((3U == (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
                    vlSelf->ddr2_controller__DOT__ring__DOT__r6 
                        = vlSelf->ddr2_controller__DOT__dq_o;
                }
            }
        }
    }
    if ((0U == (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
        vlSelf->ddr2_controller__DOT__ring__DOT__r0 
            = vlSelf->ddr2_controller__DOT__dq_o;
    }
    if ((0U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
        if ((1U == (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
            vlSelf->ddr2_controller__DOT__ring__DOT__r2 
                = vlSelf->ddr2_controller__DOT__dq_o;
        }
    }
    if ((0U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
        if ((1U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
            if ((2U == (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
                vlSelf->ddr2_controller__DOT__ring__DOT__r4 
                    = vlSelf->ddr2_controller__DOT__dq_o;
            }
        }
    }
}

VL_INLINE_OPT void Vddr2_controller___024root___sequent__TOP__8(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___sequent__TOP__8\n"); );
    // Body
    if ((0U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
        if ((1U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
            if ((2U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
                if ((3U == (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
                    vlSelf->ddr2_controller__DOT__ring__DOT__r7 
                        = vlSelf->ddr2_controller__DOT__dq_o;
                }
            }
        }
    }
    if ((0U == (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
        vlSelf->ddr2_controller__DOT__ring__DOT__r1 
            = vlSelf->ddr2_controller__DOT__dq_o;
    }
    if ((0U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
        if ((1U == (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
            vlSelf->ddr2_controller__DOT__ring__DOT__r3 
                = vlSelf->ddr2_controller__DOT__dq_o;
        }
    }
    if ((0U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
        if ((1U != (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
            if ((2U == (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
                vlSelf->ddr2_controller__DOT__ring__DOT__r5 
                    = vlSelf->ddr2_controller__DOT__dq_o;
            }
        }
    }
}

VL_INLINE_OPT void Vddr2_controller___024root___sequent__TOP__9(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___sequent__TOP__9\n"); );
    // Variables
    CData/*2:0*/ __Vdly__ddr2_controller__DOT__ring__DOT__count;
    // Body
    __Vdly__ddr2_controller__DOT__ring__DOT__count 
        = vlSelf->ddr2_controller__DOT__ring__DOT__count;
    if (vlSelf->RESET) {
        vlSelf->ddr2_controller__DOT__ring__DOT__F0 = 0U;
        __Vdly__ddr2_controller__DOT__ring__DOT__count = 0U;
    } else if (vlSelf->ddr2_controller__DOT__listen_ringBuff) {
        vlSelf->ddr2_controller__DOT__ring__DOT__F0 = 1U;
    } else if ((3U > (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
        __Vdly__ddr2_controller__DOT__ring__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count)));
    } else if ((3U == (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__count))) {
        __Vdly__ddr2_controller__DOT__ring__DOT__count = 0U;
        vlSelf->ddr2_controller__DOT__ring__DOT__F0 = 0U;
    }
    vlSelf->ddr2_controller__DOT__ring__DOT__count 
        = __Vdly__ddr2_controller__DOT__ring__DOT__count;
}

VL_INLINE_OPT void Vddr2_controller___024root___combo__TOP__10(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___combo__TOP__10\n"); );
    // Body
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
}

VL_INLINE_OPT void Vddr2_controller___024root___sequent__TOP__11(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___sequent__TOP__11\n"); );
    // Variables
    CData/*1:0*/ ddr2_controller__DOT__ba_i;
    SData/*12:0*/ ddr2_controller__DOT__a_i;
    SData/*11:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__refCnt_reg;
    // Body
    __Vdly__ddr2_controller__DOT__TPL__DOT__refCnt_reg 
        = ((1U & ((IData)(vlSelf->RESET) | (~ (IData)(vlSelf->READY))))
            ? 0xf3cU : (0xfffU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__refCnt_reg) 
                                  - (IData)(1U))));
    if (((((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag) 
           & (0U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__block_state))) 
          & (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg))))) 
         & (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__szBlk_reg)))))) {
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__flag = 0U;
    }
    if ((((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag) 
          & ((3U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__block_state)) 
             | (2U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__block_state)))) 
         & (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg)))))) {
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg 
            = (0x1ffffffU & ((IData)(8U) + vlSelf->ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg));
    }
    if (vlSelf->RESET) {
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0U;
        vlSelf->ddr2_controller__DOT__put_returnFIFO = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__get_cmdFIFO = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_p = 0U;
        vlSelf->ddr2_controller__DOT__listen_ringBuff = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__addr_returnFIFO = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__row_address = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__bank_address = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__column_address = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__flag = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cmd_reg = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__sz_reg = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szRd_reg = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
    } else if ((8U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
        if ((4U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
            if ((2U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state)))) {
                    if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                            = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                                        - (IData)(1U)));
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0xeU;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                    } else {
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0U;
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
                if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                        = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0xdU;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0xeU;
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0x37U;
                    __Vdly__ddr2_controller__DOT__TPL__DOT__refCnt_reg = 0xf3cU;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
            } else if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                    = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                                - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0xcU;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0xdU;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
            if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
                if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                        = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0xbU;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 0U;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0xcU;
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 7U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
            } else if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                    = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                                - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0xaU;
                if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0x11U;
                if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
            if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                    = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                                - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 9U;
                if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0xaU;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                    = ((4U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))
                        ? ((2U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg))
                            ? ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg))
                                ? 0x1fU : 0x17U) : 
                           ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg))
                             ? 0xfU : 7U)) : 7U);
                if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
            }
        } else if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                            - (IData)(1U)));
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 8U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_p = 0U;
            if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 0U;
            }
        } else {
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 9U;
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0xcU;
            if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
            }
            if (((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg)) 
                 & (4U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg)))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg 
                    = (0x1ffffffU & ((IData)(8U) + vlSelf->ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg));
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__flag = 1U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__flag = 0U;
            }
        }
    } else if ((4U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
        if ((2U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
            if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
                if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                        = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 7U;
                    if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                        vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                    }
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0U;
                    vlSelf->ddr2_controller__DOT__put_returnFIFO = 0U;
                    if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                        vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                    }
                }
                if ((1U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
                    vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff)));
                    vlSelf->__Vdly__ddr2_controller__DOT__addr_returnFIFO 
                        = (0x1ffffffU & ((IData)(1U) 
                                         + vlSelf->ddr2_controller__DOT__addr_returnFIFO));
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff = 0U;
                    vlSelf->ddr2_controller__DOT__put_returnFIFO = 0U;
                }
            } else {
                if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                        = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 6U;
                    vlSelf->ddr2_controller__DOT__listen_ringBuff = 0U;
                    if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                        vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                    }
                } else {
                    if ((1U & ((1U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg)) 
                               | (~ (IData)((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__szRd_reg))))))) {
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 7U;
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 3U;
                        vlSelf->ddr2_controller__DOT__put_returnFIFO = 1U;
                    } else {
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szRd_reg 
                            = (3U & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__szRd_reg) 
                                     - (IData)(1U)));
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 4U;
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                        vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                    }
                }
                if ((1U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
                    vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff)));
                    vlSelf->__Vdly__ddr2_controller__DOT__addr_returnFIFO 
                        = (0x1ffffffU & ((IData)(1U) 
                                         + vlSelf->ddr2_controller__DOT__addr_returnFIFO));
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff = 0U;
                }
                if ((((3U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg)) 
                      & (4U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) 
                     & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg) 
                        == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__szRd_reg)))) {
                    vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff = 0U;
                    vlSelf->ddr2_controller__DOT__put_returnFIFO = 1U;
                    vlSelf->__Vdly__ddr2_controller__DOT__addr_returnFIFO 
                        = (0x1ffffffU & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                                                 >> 8U)));
                }
            }
        } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
            if ((1U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff)));
                vlSelf->__Vdly__ddr2_controller__DOT__addr_returnFIFO 
                    = (0x1ffffffU & ((IData)(1U) + vlSelf->ddr2_controller__DOT__addr_returnFIFO));
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff = 0U;
            }
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 6U;
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 5U;
            vlSelf->ddr2_controller__DOT__listen_ringBuff 
                = (1U & (~ (((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg) 
                             == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__szRd_reg)) 
                            & (3U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg)))));
            if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
            }
        } else {
            if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                    = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                                - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 4U;
                vlSelf->ddr2_controller__DOT__listen_ringBuff = 0U;
                if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
            } else if ((0x40U != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 5U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0U;
                if ((((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg) 
                      == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__szRd_reg)) 
                     | (1U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg)))) {
                    vlSelf->ddr2_controller__DOT__listen_ringBuff = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
            }
            if ((1U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__readPtr_ringBuff)));
                vlSelf->__Vdly__ddr2_controller__DOT__addr_returnFIFO 
                    = (0x1ffffffU & ((IData)(1U) + vlSelf->ddr2_controller__DOT__addr_returnFIFO));
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
        if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
            if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                    = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                                - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 3U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_p = 0U;
                if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 4U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0xdU;
                if ((1U & (~ (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)))) {
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
                if (((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg)) 
                     & (3U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg)))) {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg 
                        = (0x1ffffffU & ((IData)(8U) 
                                         + vlSelf->ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg));
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__flag = 1U;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__flag = 0U;
                }
            }
        } else if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                            - (IData)(1U)));
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 2U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
        } else if ((4U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
            if ((2U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
            } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 8U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_p = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
            if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 2U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                if ((2U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg))) {
                    if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg))) {
                        if ((0x20U > (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO))) {
                            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 3U;
                            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
                            vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                            vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                            vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
                            vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                        }
                    } else if ((0x28U > (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO))) {
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 3U;
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg))) {
                    if ((0x30U > (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO))) {
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 3U;
                        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
                        vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                    }
                } else if ((0x38U > (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO))) {
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 3U;
                    vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
                    vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                }
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 8U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_p = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg))) {
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 3U;
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
        } else {
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0U;
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
        }
    } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__state))) {
        if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
                = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                            - (IData)(1U)));
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 1U;
            vlSelf->__Vdly__ddr2_controller__DOT__get_cmdFIFO = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
        } else {
            vlSelf->__Vdly__ddr2_controller__DOT__addr_returnFIFO 
                = (0x1ffffffU & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                                         >> 8U)));
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 2U;
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg 
                = (0x1ffffffU & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                                         >> 8U)));
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cmd_reg 
                = (7U & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                                 >> 5U)));
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__sz_reg 
                = (3U & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                                 >> 3U)));
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szRd_reg 
                = (3U & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                                 >> 3U)));
            if (vlSelf->ddr2_controller__DOT__ck) {
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
            } else {
                vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
                vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
                vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 2U;
            }
        }
        if ((1U == (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
            vlSelf->ddr2_controller__DOT__TPL__DOT__row_address 
                = (0x1fffU & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                                      >> 0x14U)));
            vlSelf->ddr2_controller__DOT__TPL__DOT__column_address 
                = ((0x3f8U & ((IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                                       >> 0xdU)) << 3U)) 
                   | (7U & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                                    >> 8U))));
            vlSelf->ddr2_controller__DOT__TPL__DOT__bank_address 
                = (3U & (IData)((vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                                 >> 0xbU)));
        }
    } else if (((IData)(vlSelf->READY) & (0x64U > (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__refCnt_reg)))) {
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0xbU;
        if (vlSelf->ddr2_controller__DOT__ck) {
            vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 0U;
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 1U;
        } else {
            vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
            vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
            vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 2U;
        }
    } else if ((0U != (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg))) {
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg 
            = (0x3fU & ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg) 
                        - (IData)(1U)));
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__csbar = 0U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__rasbar = 1U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__casbar = 1U;
        vlSelf->ddr2_controller__DOT__TPL__DOT__webar = 1U;
    } else if (((0U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount)) 
                & (IData)(vlSelf->READY))) {
        vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff = 7U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 1U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 2U;
        vlSelf->__Vdly__ddr2_controller__DOT__get_cmdFIFO = 1U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__flag = 0U;
    } else {
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__get_cmdFIFO = 0U;
    }
    vlSelf->ddr2_controller__DOT__TPL__DOT__refCnt_reg 
        = __Vdly__ddr2_controller__DOT__TPL__DOT__refCnt_reg;
    vlSelf->ddr2_controller__DOT__TPL__DOT__szBlk_reg 
        = vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szBlk_reg;
    vlSelf->ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg 
        = vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg;
    vlSelf->ddr2_controller__DOT__TPL__DOT__szRd_reg 
        = vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__szRd_reg;
    vlSelf->ddr2_controller__DOT__TPL__DOT__sz_reg 
        = vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__sz_reg;
    vlSelf->ddr2_controller__DOT__TPL__DOT__block_state 
        = vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__block_state;
    vlSelf->ddr2_controller__DOT__TPL__DOT__blkCnt_reg 
        = vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg;
    vlSelf->ddr2_controller__DOT__TPL__DOT__cmd_reg 
        = vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cmd_reg;
    vlSelf->ddr2_controller__DOT__TPL__DOT__state = vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__state;
    vlSelf->ddr2_controller__DOT__TPL__DOT__cnt_reg 
        = vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg;
    vlSelf->ddr2_controller__DOT__ck = vlSelf->__Vdly__ddr2_controller__DOT__ck;
    vlSelf->ddr2_controller__DOT__fillcount_returnFIFO 
        = vlSelf->__Vdly__ddr2_controller__DOT__fillcount_returnFIFO;
    vlSelf->ddr2_controller__DOT__readPtr_ringBuff 
        = vlSelf->__Vdly__ddr2_controller__DOT__readPtr_ringBuff;
    vlSelf->ddr2_controller__DOT__addr_returnFIFO = vlSelf->__Vdly__ddr2_controller__DOT__addr_returnFIFO;
    vlSelf->ddr2_controller__DOT__TPL__DOT__flag = vlSelf->__Vdly__ddr2_controller__DOT__TPL__DOT__flag;
    vlSelf->ddr2_controller__DOT__get_dataFIFO = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_p) 
                                                  | (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__get_dataFIFO_n));
    vlSelf->C0_CKBAR_PAD = (1U & (~ (IData)(vlSelf->ddr2_controller__DOT__ck)));
    vlSelf->C0_CK_PAD = vlSelf->ddr2_controller__DOT__ck;
    vlSelf->ddr2_controller__DOT__fullBar_returnFIFO 
        = (0x40U != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO));
    vlSelf->ddr2_controller__DOT__emptyBar_returnFIFO 
        = (0U != (IData)(vlSelf->ddr2_controller__DOT__fillcount_returnFIFO));
    vlSelf->ddr2_controller__DOT__TPL__DOT__column_address_wire 
        = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)
            ? (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__columnb_address)
            : (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__column_address));
    if (vlSelf->RESET) {
        vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr = 0U;
    } else if ((((IData)(vlSelf->ddr2_controller__DOT__put_cmdFIFO) 
                 & (IData)(vlSelf->ddr2_controller__DOT__get_cmdFIFO)) 
                & (0U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount)))) {
        vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
            = vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__queue
            [vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr];
        vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr)));
    } else if ((1U & (~ ((IData)(vlSelf->ddr2_controller__DOT__put_cmdFIFO) 
                         & (0x40U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount)))))) {
        if (((IData)(vlSelf->ddr2_controller__DOT__get_cmdFIFO) 
             & (0U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount)))) {
            vlSelf->ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out 
                = vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__queue
                [vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr];
            vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr)));
        } else {
            vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr 
                = vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr;
        }
    }
    if (vlSelf->RESET) {
        vlSelf->ddr2_controller__DOT__init_cke = 0U;
        vlSelf->ddr2_controller__DOT__init_odt = 0U;
        vlSelf->ddr2_controller__DOT__init_a = 0U;
        vlSelf->ddr2_controller__DOT__init_ba = 0U;
        vlSelf->ddr2_controller__DOT__init_csbar = 0U;
        vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
        vlSelf->ddr2_controller__DOT__init_casbar = 1U;
        vlSelf->ddr2_controller__DOT__init_webar = 1U;
        vlSelf->READY = 0U;
        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 0x186a0U;
        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0U;
        vlSelf->ddr2_controller__DOT__init_cke = 0U;
        vlSelf->ddr2_controller__DOT__init_odt = 0U;
    } else if ((0x10U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
        if ((8U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
            if ((4U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                if ((2U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                    if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                        if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                               - (IData)(1U)));
                            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1fU;
                        } else {
                            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1dU;
                            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 3U;
                            vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                            vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
                            vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                            vlSelf->ddr2_controller__DOT__init_webar = 1U;
                        }
                    } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                            = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                           - (IData)(1U)));
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1eU;
                    } else {
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1fU;
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                        vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_casbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_webar = 0U;
                        vlSelf->ddr2_controller__DOT__init_ba = 1U;
                        vlSelf->ddr2_controller__DOT__init_a = 0x7a4U;
                    }
                } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                    if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                            = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                           - (IData)(1U)));
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1cU;
                    } else {
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1cU;
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                        vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_casbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_webar = 0U;
                        vlSelf->ddr2_controller__DOT__init_a 
                            = (0x1c7fU & (IData)(vlSelf->ddr2_controller__DOT__init_a));
                    }
                } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                        = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                       - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1cU;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x14U;
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 3U;
                    vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                    vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_webar = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                    if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                            = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                           - (IData)(1U)));
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1bU;
                    } else {
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1aU;
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                        vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_casbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_webar = 0U;
                        vlSelf->ddr2_controller__DOT__init_ba = 0U;
                        vlSelf->ddr2_controller__DOT__init_a = 0x643U;
                    }
                } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                        = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                       - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1aU;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1eU;
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 0x195U;
                    vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                    vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_webar = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                        = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                       - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x19U;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x1bU;
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 0x18fU;
                    vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                    vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_webar = 1U;
                }
            } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                    = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                   - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x18U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x19U;
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                vlSelf->ddr2_controller__DOT__init_casbar = 0U;
                vlSelf->ddr2_controller__DOT__init_webar = 1U;
            }
        } else if ((4U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
            if ((2U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                    if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                            = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                           - (IData)(1U)));
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x17U;
                    } else {
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x16U;
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 4U;
                        vlSelf->ddr2_controller__DOT__init_odt = 1U;
                        vlSelf->READY = 1U;
                    }
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x16U;
                    vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                    vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_webar = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                        = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                       - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x15U;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x17U;
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 7U;
                    vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                    vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_webar = 1U;
                }
            } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                    = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                   - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x14U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x15U;
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                vlSelf->ddr2_controller__DOT__init_webar = 0U;
                vlSelf->ddr2_controller__DOT__init_a 
                    = (0x400U | (IData)(vlSelf->ddr2_controller__DOT__init_a));
            }
        } else {
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0U;
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 0U;
            vlSelf->ddr2_controller__DOT__init_csbar = 0U;
            vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
            vlSelf->ddr2_controller__DOT__init_casbar = 1U;
            vlSelf->ddr2_controller__DOT__init_webar = 1U;
        }
    } else if ((8U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
        if ((4U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
            if ((2U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                    if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                            = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                           - (IData)(1U)));
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xfU;
                    } else {
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xeU;
                        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                        vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_casbar = 0U;
                        vlSelf->ddr2_controller__DOT__init_webar = 0U;
                        vlSelf->ddr2_controller__DOT__init_ba = 0U;
                        vlSelf->ddr2_controller__DOT__init_a = 0x743U;
                    }
                } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                        = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                       - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xeU;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xaU;
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 3U;
                    vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                    vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_webar = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                        = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                       - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xdU;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xfU;
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 3U;
                    vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                    vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_webar = 1U;
                }
            } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                    = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                   - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xcU;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xdU;
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                vlSelf->ddr2_controller__DOT__init_casbar = 0U;
                vlSelf->ddr2_controller__DOT__init_webar = 0U;
                vlSelf->ddr2_controller__DOT__init_ba = 1U;
                vlSelf->ddr2_controller__DOT__init_a = 0x420U;
            }
        } else if ((2U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                        = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                       - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xbU;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 9U;
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 7U;
                    vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                    vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_webar = 1U;
                }
            } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                    = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                   - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xaU;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xbU;
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                vlSelf->ddr2_controller__DOT__init_webar = 0U;
                vlSelf->ddr2_controller__DOT__init_a 
                    = (0x400U | (IData)(vlSelf->ddr2_controller__DOT__init_a));
            }
        } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
            if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                    = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                   - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 9U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 8U;
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                vlSelf->ddr2_controller__DOT__init_casbar = 0U;
                vlSelf->ddr2_controller__DOT__init_webar = 1U;
            }
        } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                               - (IData)(1U)));
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 8U;
        } else {
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0x18U;
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 0x18fU;
            vlSelf->ddr2_controller__DOT__init_csbar = 0U;
            vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
            vlSelf->ddr2_controller__DOT__init_casbar = 1U;
            vlSelf->ddr2_controller__DOT__init_webar = 1U;
        }
    } else if ((4U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
        if ((2U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
                if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                        = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                       - (IData)(1U)));
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 7U;
                } else {
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 5U;
                    vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 3U;
                    vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                    vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                    vlSelf->ddr2_controller__DOT__init_webar = 1U;
                }
            } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                    = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                   - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 6U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 7U;
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                vlSelf->ddr2_controller__DOT__init_ba = 2U;
                vlSelf->ddr2_controller__DOT__init_a = 0U;
                vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                vlSelf->ddr2_controller__DOT__init_casbar = 0U;
                vlSelf->ddr2_controller__DOT__init_webar = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
            if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                    = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                   - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 5U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 4U;
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                vlSelf->ddr2_controller__DOT__init_casbar = 0U;
                vlSelf->ddr2_controller__DOT__init_webar = 0U;
                vlSelf->ddr2_controller__DOT__init_ba = 3U;
                vlSelf->ddr2_controller__DOT__init_a = 0U;
            }
        } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                               - (IData)(1U)));
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 4U;
        } else {
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 0xcU;
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 3U;
            vlSelf->ddr2_controller__DOT__init_csbar = 0U;
            vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
            vlSelf->ddr2_controller__DOT__init_casbar = 1U;
            vlSelf->ddr2_controller__DOT__init_webar = 1U;
        }
    } else if ((2U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
        if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
            if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                    = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                                   - (IData)(1U)));
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 3U;
            } else {
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 2U;
                vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 1U;
                vlSelf->ddr2_controller__DOT__init_csbar = 0U;
                vlSelf->ddr2_controller__DOT__init_rasbar = 0U;
                vlSelf->ddr2_controller__DOT__init_casbar = 1U;
                vlSelf->ddr2_controller__DOT__init_webar = 0U;
                vlSelf->ddr2_controller__DOT__init_a 
                    = (0x400U | (IData)(vlSelf->ddr2_controller__DOT__init_a));
            }
        } else if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                               - (IData)(1U)));
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 2U;
        } else {
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 6U;
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 7U;
            vlSelf->ddr2_controller__DOT__init_csbar = 0U;
            vlSelf->ddr2_controller__DOT__init_rasbar = 1U;
            vlSelf->ddr2_controller__DOT__init_casbar = 1U;
            vlSelf->ddr2_controller__DOT__init_webar = 1U;
        }
    } else if ((1U & (IData)(vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg))) {
        if ((0U != vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg)) {
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                = (0x1ffffU & (vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
                               - (IData)(1U)));
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 1U;
        } else {
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg = 3U;
            vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg = 0xc7U;
            vlSelf->ddr2_controller__DOT__init_cke = 1U;
        }
    } else {
        vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg 
            = ((IData)(vlSelf->INITDDR) ? 1U : 0U);
    }
    vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr 
        = vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr;
    vlSelf->ddr2_controller__DOT__get_cmdFIFO = vlSelf->__Vdly__ddr2_controller__DOT__get_cmdFIFO;
    if (vlSelf->__Vdlyvset__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0) {
        vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__queue[vlSelf->__Vdlyvdim0__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0] 
            = vlSelf->__Vdlyvval__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0;
    }
    if (vlSelf->__Vdlyvset__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1) {
        vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__queue[vlSelf->__Vdlyvdim0__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1] 
            = vlSelf->__Vdlyvval__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1;
    }
    vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount 
        = vlSelf->__Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__fillcount;
    vlSelf->ddr2_controller__DOT__XINIT__DOT__cntr_reg 
        = vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg;
    vlSelf->ddr2_controller__DOT__XINIT__DOT__state_reg 
        = vlSelf->__Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg;
    vlSelf->ddr2_controller__DOT__notfull_cmdFIFO = 
        (0x40U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount));
    vlSelf->ddr2_controller__DOT__emptyBar_cmdFIFO 
        = (0U != (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount));
    vlSelf->NOTFULL = (1U & (~ ((0x21U <= (IData)(vlSelf->FILLCOUNT)) 
                                | (0x40U == (IData)(vlSelf->ddr2_controller__DOT__FIFO_CMD__DOT__fillcount)))));
    vlSelf->C0_CKE_PAD = vlSelf->ddr2_controller__DOT__init_cke;
    vlSelf->C0_ODT_PAD = vlSelf->ddr2_controller__DOT__init_odt;
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
        ddr2_controller__DOT__ba_i = ((IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__flag)
                                       ? (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__bankb_address)
                                       : (IData)(vlSelf->ddr2_controller__DOT__TPL__DOT__bank_address));
        ddr2_controller__DOT__a_i = vlSelf->ddr2_controller__DOT__a;
    } else {
        vlSelf->C0_CSBAR_PAD = vlSelf->ddr2_controller__DOT__init_csbar;
        vlSelf->C0_RASBAR_PAD = vlSelf->ddr2_controller__DOT__init_rasbar;
        vlSelf->C0_CASBAR_PAD = vlSelf->ddr2_controller__DOT__init_casbar;
        vlSelf->C0_WEBAR_PAD = vlSelf->ddr2_controller__DOT__init_webar;
        ddr2_controller__DOT__ba_i = vlSelf->ddr2_controller__DOT__init_ba;
        ddr2_controller__DOT__a_i = vlSelf->ddr2_controller__DOT__init_a;
    }
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
}

VL_INLINE_OPT void Vddr2_controller___024root___multiclk__TOP__12(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___multiclk__TOP__12\n"); );
    // Body
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
}

extern const VlUnpacked<CData/*0:0*/, 32> Vddr2_controller__ConstPool__TABLE_55a83eef_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vddr2_controller__ConstPool__TABLE_23a28453_0;

VL_INLINE_OPT void Vddr2_controller___024root___combo__TOP__13(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___combo__TOP__13\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->CMD) << 2U) | 
                    (((IData)(vlSelf->NOTFULL) << 1U) 
                     | (IData)(vlSelf->ddr2_controller__DOT__put_dataFIFO_reg)));
    vlSelf->ddr2_controller__DOT__put_dataFIFO = Vddr2_controller__ConstPool__TABLE_55a83eef_0
        [__Vtableidx1];
    vlSelf->ddr2_controller__DOT__put_cmdFIFO = Vddr2_controller__ConstPool__TABLE_23a28453_0
        [__Vtableidx1];
}

void Vddr2_controller___024root___eval(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK)))) {
        Vddr2_controller___024root___sequent__TOP__2(vlSelf);
    }
    if (((~ (IData)(vlSelf->CLK)) & (IData)(vlSelf->__Vclklast__TOP__CLK))) {
        Vddr2_controller___024root___sequent__TOP__3(vlSelf);
    }
    Vddr2_controller___024root___combo__TOP__5(vlSelf);
    if (((IData)(vlSelf->CLK) ^ (IData)(vlSelf->__Vclklast__TOP__CLK))) {
        Vddr2_controller___024root___multiclk__TOP__6(vlSelf);
    }
    if (((IData)(vlSelf->ddr2_controller__DOT__ring__DOT__fStrobe) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ddr2_controller__DOT__ring__DOT__fStrobe)))) {
        Vddr2_controller___024root___sequent__TOP__7(vlSelf);
    }
    if (((~ (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__fStrobe)) 
         & (IData)(vlSelf->__Vclklast__TOP__ddr2_controller__DOT__ring__DOT__fStrobe))) {
        Vddr2_controller___024root___sequent__TOP__8(vlSelf);
    }
    if (((((IData)(vlSelf->RESET) & (~ (IData)(vlSelf->__Vclklast__TOP__RESET))) 
          | ((IData)(vlSelf->__VinpClk__TOP__ddr2_controller__DOT__listen_ringBuff) 
             & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ddr2_controller__DOT__listen_ringBuff)))) 
         | ((~ (IData)(vlSelf->ddr2_controller__DOT__ring__DOT__fStrobe)) 
            & (IData)(vlSelf->__Vclklast__TOP__ddr2_controller__DOT__ring__DOT__fStrobe)))) {
        Vddr2_controller___024root___sequent__TOP__9(vlSelf);
    }
    Vddr2_controller___024root___combo__TOP__10(vlSelf);
    if (((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK)))) {
        Vddr2_controller___024root___sequent__TOP__11(vlSelf);
    }
    if ((((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK))) 
         | ((IData)(vlSelf->ddr2_controller__DOT__ring__DOT__fStrobe) 
            ^ (IData)(vlSelf->__Vclklast__TOP__ddr2_controller__DOT__ring__DOT__fStrobe)))) {
        Vddr2_controller___024root___multiclk__TOP__12(vlSelf);
    }
    Vddr2_controller___024root___combo__TOP__13(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    vlSelf->__Vclklast__TOP__ddr2_controller__DOT__ring__DOT__fStrobe 
        = vlSelf->ddr2_controller__DOT__ring__DOT__fStrobe;
    vlSelf->__Vclklast__TOP__RESET = vlSelf->RESET;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ddr2_controller__DOT__listen_ringBuff 
        = vlSelf->__VinpClk__TOP__ddr2_controller__DOT__listen_ringBuff;
    vlSelf->__VinpClk__TOP__ddr2_controller__DOT__listen_ringBuff 
        = vlSelf->ddr2_controller__DOT__listen_ringBuff;
}

QData Vddr2_controller___024root___change_request_1(Vddr2_controller___024root* vlSelf);

VL_INLINE_OPT QData Vddr2_controller___024root___change_request(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___change_request\n"); );
    // Body
    return (Vddr2_controller___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vddr2_controller___024root___change_request_1(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ddr2_controller__DOT__listen_ringBuff ^ vlSelf->__Vchglast__TOP__ddr2_controller__DOT__listen_ringBuff)
         | (vlSelf->ddr2_controller__DOT__ring__DOT__F0 ^ vlSelf->__Vchglast__TOP__ddr2_controller__DOT__ring__DOT__F0));
    VL_DEBUG_IF( if(__req && ((vlSelf->ddr2_controller__DOT__listen_ringBuff ^ vlSelf->__Vchglast__TOP__ddr2_controller__DOT__listen_ringBuff))) VL_DBG_MSGF("        CHANGE: ddr2_controller.v:501: ddr2_controller.listen_ringBuff\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ddr2_controller__DOT__ring__DOT__F0 ^ vlSelf->__Vchglast__TOP__ddr2_controller__DOT__ring__DOT__F0))) VL_DBG_MSGF("        CHANGE: ddr2_ring_buffer8.v:36: ddr2_controller.ring.F0\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ddr2_controller__DOT__listen_ringBuff 
        = vlSelf->ddr2_controller__DOT__listen_ringBuff;
    vlSelf->__Vchglast__TOP__ddr2_controller__DOT__ring__DOT__F0 
        = vlSelf->ddr2_controller__DOT__ring__DOT__F0;
    return __req;
}

#ifdef VL_DEBUG
void Vddr2_controller___024root___eval_debug_assertions(Vddr2_controller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vddr2_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr2_controller___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RESET & 0xfeU))) {
        Verilated::overWidthError("RESET");}
    if (VL_UNLIKELY((vlSelf->CMD & 0xf8U))) {
        Verilated::overWidthError("CMD");}
    if (VL_UNLIKELY((vlSelf->SZ & 0xfcU))) {
        Verilated::overWidthError("SZ");}
    if (VL_UNLIKELY((vlSelf->OP & 0xf8U))) {
        Verilated::overWidthError("OP");}
    if (VL_UNLIKELY((vlSelf->FETCHING & 0xfeU))) {
        Verilated::overWidthError("FETCHING");}
    if (VL_UNLIKELY((vlSelf->ADDR & 0xfe000000U))) {
        Verilated::overWidthError("ADDR");}
    if (VL_UNLIKELY((vlSelf->INITDDR & 0xfeU))) {
        Verilated::overWidthError("INITDDR");}
    if (VL_UNLIKELY((vlSelf->C0_DQS_PAD & 0xfcU))) {
        Verilated::overWidthError("C0_DQS_PAD");}
    if (VL_UNLIKELY((vlSelf->C0_DQSBAR_PAD & 0xfcU))) {
        Verilated::overWidthError("C0_DQSBAR_PAD");}
}
#endif  // VL_DEBUG
