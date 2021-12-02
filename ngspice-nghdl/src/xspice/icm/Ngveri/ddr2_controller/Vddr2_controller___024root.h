// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vddr2_controller.h for the primary calling header

#ifndef VERILATED_VDDR2_CONTROLLER___024ROOT_H_
#define VERILATED_VDDR2_CONTROLLER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vddr2_controller__Syms;

//----------

VL_MODULE(Vddr2_controller___024root) {
  public:

    // PORTS
    VL_IN8(CLK,0,0);
    VL_IN8(RESET,0,0);
    VL_IN8(CMD,2,0);
    VL_IN8(SZ,1,0);
    VL_IN8(OP,2,0);
    VL_IN8(FETCHING,0,0);
    VL_IN8(INITDDR,0,0);
    VL_OUT8(FILLCOUNT,6,0);
    VL_OUT8(VALIDOUT,0,0);
    VL_OUT8(NOTFULL,0,0);
    VL_OUT8(READY,0,0);
    VL_OUT8(C0_DM_PAD,1,0);
    VL_OUT8(C0_ODT_PAD,0,0);
    VL_OUT8(C0_CK_PAD,0,0);
    VL_OUT8(C0_CKBAR_PAD,0,0);
    VL_OUT8(C0_CKE_PAD,0,0);
    VL_OUT8(C0_CSBAR_PAD,0,0);
    VL_OUT8(C0_RASBAR_PAD,0,0);
    VL_OUT8(C0_CASBAR_PAD,0,0);
    VL_OUT8(C0_WEBAR_PAD,0,0);
    VL_OUT8(C0_BA_PAD,1,0);
    VL_INOUT8(C0_DQS_PAD,1,0);
    VL_INOUT8(C0_DQSBAR_PAD,1,0);
    VL_IN16(DIN,15,0);
    VL_OUT16(DOUT,15,0);
    VL_OUT16(C0_A_PAD,12,0);
    VL_INOUT16(C0_DQ_PAD,15,0);
    VL_IN(ADDR,24,0);
    VL_OUT(RADDR,24,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ddr2_controller__DOT__listen_ringBuff;
        CData/*0:0*/ ddr2_controller__DOT__ring__DOT__fStrobe;
        CData/*0:0*/ ddr2_controller__DOT__ri_i;
        CData/*0:0*/ ddr2_controller__DOT__ts_i;
        CData/*1:0*/ ddr2_controller__DOT__dqs_i;
        CData/*1:0*/ ddr2_controller__DOT__dm_i;
        CData/*0:0*/ ddr2_controller__DOT__init_csbar;
        CData/*0:0*/ ddr2_controller__DOT__init_rasbar;
        CData/*0:0*/ ddr2_controller__DOT__init_webar;
        CData/*1:0*/ ddr2_controller__DOT__init_ba;
        CData/*0:0*/ ddr2_controller__DOT__init_casbar;
        CData/*0:0*/ ddr2_controller__DOT__init_odt;
        CData/*0:0*/ ddr2_controller__DOT__init_cke;
        CData/*0:0*/ ddr2_controller__DOT__ck;
        CData/*0:0*/ ddr2_controller__DOT__emptyBar_cmdFIFO;
        CData/*0:0*/ ddr2_controller__DOT__emptyBar_dataFIFO;
        CData/*0:0*/ ddr2_controller__DOT__emptyBar_returnFIFO;
        CData/*0:0*/ ddr2_controller__DOT__put_returnFIFO;
        CData/*0:0*/ ddr2_controller__DOT__get_cmdFIFO;
        CData/*0:0*/ ddr2_controller__DOT__get_dataFIFO;
        CData/*0:0*/ ddr2_controller__DOT__notfull_cmdFIFO;
        CData/*0:0*/ ddr2_controller__DOT__notfull_dataFIFO;
        CData/*0:0*/ ddr2_controller__DOT__fullBar_returnFIFO;
        CData/*2:0*/ ddr2_controller__DOT__readPtr_ringBuff;
        CData/*6:0*/ ddr2_controller__DOT__fillcount_returnFIFO;
        CData/*0:0*/ ddr2_controller__DOT__put_dataFIFO_reg;
        CData/*0:0*/ ddr2_controller__DOT__put_dataFIFO;
        CData/*0:0*/ ddr2_controller__DOT__put_cmdFIFO;
        CData/*4:0*/ ddr2_controller__DOT__putFIFOCnt_reg;
        CData/*0:0*/ ddr2_controller__DOT__putFIFO_state;
        CData/*5:0*/ ddr2_controller__DOT__FIFO_DATA__DOT__rd_ptr;
        CData/*5:0*/ ddr2_controller__DOT__FIFO_DATA__DOT__wr_ptr;
        CData/*6:0*/ ddr2_controller__DOT__FIFO_CMD__DOT__fillcount;
        CData/*5:0*/ ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr;
        CData/*5:0*/ ddr2_controller__DOT__FIFO_CMD__DOT__wr_ptr;
        CData/*5:0*/ ddr2_controller__DOT__FIFO_RETURN__DOT__rd_ptr;
        CData/*5:0*/ ddr2_controller__DOT__FIFO_RETURN__DOT__wr_ptr;
        CData/*4:0*/ ddr2_controller__DOT__XINIT__DOT__state_reg;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__csbar;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__rasbar;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__casbar;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__webar;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__csbarb;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__rasbarb;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__casbarb;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__webarb;
        CData/*5:0*/ ddr2_controller__DOT__TPL__DOT__cnt_reg;
        CData/*3:0*/ ddr2_controller__DOT__TPL__DOT__blkCnt_reg;
        CData/*3:0*/ ddr2_controller__DOT__TPL__DOT__state;
        CData/*1:0*/ ddr2_controller__DOT__TPL__DOT__block_state;
        CData/*1:0*/ ddr2_controller__DOT__TPL__DOT__bank_address;
        CData/*1:0*/ ddr2_controller__DOT__TPL__DOT__bankb_address;
        CData/*2:0*/ ddr2_controller__DOT__TPL__DOT__cmd_reg;
        CData/*1:0*/ ddr2_controller__DOT__TPL__DOT__sz_reg;
        CData/*1:0*/ ddr2_controller__DOT__TPL__DOT__szBlk_reg;
        CData/*1:0*/ ddr2_controller__DOT__TPL__DOT__szRd_reg;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__flag;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__get_dataFIFO_p;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__get_dataFIFO_n;
        CData/*0:0*/ ddr2_controller__DOT__TPL__DOT__flag_a;
        CData/*0:0*/ ddr2_controller__DOT__ring__DOT__F0;
        CData/*2:0*/ ddr2_controller__DOT__ring__DOT__count;
        SData/*15:0*/ ddr2_controller__DOT__dq_o;
        SData/*15:0*/ ddr2_controller__DOT__dq_i;
    };
    struct {
        SData/*12:0*/ ddr2_controller__DOT__init_a;
        SData/*12:0*/ ddr2_controller__DOT__a;
        SData/*15:0*/ ddr2_controller__DOT__din_dataFIFO;
        SData/*11:0*/ ddr2_controller__DOT__TPL__DOT__refCnt_reg;
        SData/*12:0*/ ddr2_controller__DOT__TPL__DOT__row_address;
        SData/*9:0*/ ddr2_controller__DOT__TPL__DOT__column_address;
        SData/*12:0*/ ddr2_controller__DOT__TPL__DOT__rowb_address;
        SData/*9:0*/ ddr2_controller__DOT__TPL__DOT__columnb_address;
        SData/*9:0*/ ddr2_controller__DOT__TPL__DOT__column_address_wire;
        SData/*15:0*/ ddr2_controller__DOT__ring__DOT__r0;
        SData/*15:0*/ ddr2_controller__DOT__ring__DOT__r1;
        SData/*15:0*/ ddr2_controller__DOT__ring__DOT__r2;
        SData/*15:0*/ ddr2_controller__DOT__ring__DOT__r3;
        SData/*15:0*/ ddr2_controller__DOT__ring__DOT__r4;
        SData/*15:0*/ ddr2_controller__DOT__ring__DOT__r5;
        SData/*15:0*/ ddr2_controller__DOT__ring__DOT__r6;
        SData/*15:0*/ ddr2_controller__DOT__ring__DOT__r7;
        IData/*24:0*/ ddr2_controller__DOT__addr_returnFIFO;
        IData/*16:0*/ ddr2_controller__DOT__XINIT__DOT__cntr_reg;
        IData/*24:0*/ ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg;
        QData/*32:0*/ ddr2_controller__DOT__in_xaddrfin;
        VlUnpacked<SData/*15:0*/, 64> ddr2_controller__DOT__FIFO_DATA__DOT__queue;
        VlUnpacked<QData/*32:0*/, 64> ddr2_controller__DOT__FIFO_CMD__DOT__queue;
        VlUnpacked<QData/*40:0*/, 64> ddr2_controller__DOT__FIFO_RETURN__DOT__queue;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out45;
        CData/*1:0*/ ddr2_controller__DOT__XSSTL__DOT__dm_pad__out__out46;
        CData/*1:0*/ ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out49;
        CData/*1:0*/ ddr2_controller__DOT__XSSTL__DOT__dqs_pad__out__out50;
        CData/*1:0*/ ddr2_controller__DOT__XSSTL__DOT__ba_pad__out__out59;
        CData/*1:0*/ ddr2_controller__DOT__XSSTL__DOT__ba_pad__out__out60;
        CData/*0:0*/ __Vdly__ddr2_controller__DOT__ck;
        CData/*6:0*/ __Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__fillcount;
        CData/*5:0*/ __Vdlyvdim0__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0;
        CData/*0:0*/ __Vdlyvset__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0;
        CData/*5:0*/ __Vdlyvdim0__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1;
        CData/*0:0*/ __Vdlyvset__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1;
        CData/*5:0*/ __Vdly__ddr2_controller__DOT__FIFO_CMD__DOT__rd_ptr;
        CData/*6:0*/ __Vdly__ddr2_controller__DOT__fillcount_returnFIFO;
        CData/*4:0*/ __Vdly__ddr2_controller__DOT__XINIT__DOT__state_reg;
        CData/*0:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__flag;
        CData/*3:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__state;
        CData/*5:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__cnt_reg;
        CData/*0:0*/ __Vdly__ddr2_controller__DOT__get_cmdFIFO;
        CData/*2:0*/ __Vdly__ddr2_controller__DOT__readPtr_ringBuff;
        CData/*2:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__cmd_reg;
        CData/*1:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__sz_reg;
        CData/*1:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__szRd_reg;
        CData/*1:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__szBlk_reg;
        CData/*3:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__blkCnt_reg;
        CData/*1:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__block_state;
        CData/*0:0*/ __VinpClk__TOP__ddr2_controller__DOT__listen_ringBuff;
        CData/*0:0*/ __Vclklast__TOP__CLK;
        CData/*0:0*/ __Vclklast__TOP__ddr2_controller__DOT__ring__DOT__fStrobe;
        CData/*0:0*/ __Vclklast__TOP__RESET;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ddr2_controller__DOT__listen_ringBuff;
        CData/*0:0*/ __Vchglast__TOP__ddr2_controller__DOT__listen_ringBuff;
        CData/*0:0*/ __Vchglast__TOP__ddr2_controller__DOT__ring__DOT__F0;
        SData/*15:0*/ ddr2_controller__DOT__dq_pad__en11;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out61;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out62;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out63;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out64;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out65;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out66;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out67;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out68;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out69;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out70;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out71;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out72;
        SData/*12:0*/ ddr2_controller__DOT__XSSTL__DOT__a_pad__out__out73;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out74;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out75;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out76;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out77;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out78;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out79;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out80;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out81;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out82;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out83;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out84;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out85;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out86;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out87;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out88;
        SData/*15:0*/ ddr2_controller__DOT__XSSTL__DOT__dq_pad__out__out89;
        IData/*16:0*/ __Vdly__ddr2_controller__DOT__XINIT__DOT__cntr_reg;
    };
    struct {
        IData/*24:0*/ __Vdly__ddr2_controller__DOT__TPL__DOT__addr_cmdFIFO_reg;
        IData/*24:0*/ __Vdly__ddr2_controller__DOT__addr_returnFIFO;
        QData/*32:0*/ ddr2_controller__DOT____Vcellout__FIFO_CMD__data_out;
        QData/*40:0*/ ddr2_controller__DOT____Vcellinp__FIFO_RETURN__data_in;
        QData/*40:0*/ ddr2_controller__DOT____Vcellout__FIFO_RETURN__data_out;
        QData/*32:0*/ __Vdlyvval__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v0;
        QData/*32:0*/ __Vdlyvval__ddr2_controller__DOT__FIFO_CMD__DOT__queue__v1;
    };

    // INTERNAL VARIABLES
    Vddr2_controller__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vddr2_controller___024root);  ///< Copying not allowed
  public:
    Vddr2_controller___024root(const char* name);
    ~Vddr2_controller___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vddr2_controller__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
