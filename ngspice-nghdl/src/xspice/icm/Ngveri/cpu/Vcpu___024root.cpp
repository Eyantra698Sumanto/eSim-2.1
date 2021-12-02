// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu___024root.h"
#include "Vcpu__Syms.h"

//==========

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__2(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__ram__DOT__Memory__v0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__ram__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__ram__DOT__Memory__v0;
    // Body
    __Vdlyvset__CPU__DOT__ram__DOT__Memory__v0 = 0U;
    vlSelf->CPU__DOT__ic__DOT__Inst_count = ((IData)(vlSelf->CPU__DOT__ic__DOT__reset_in)
                                              ? 0U : 
                                             (7U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->CPU__DOT__ic__DOT__Inst_count))));
    vlSelf->CPU__DOT__ic__DOT__reset_in = 0U;
    if ((4U & (IData)(vlSelf->CPU__DOT__ic__DOT__Inst_count))) {
        if ((2U & (IData)(vlSelf->CPU__DOT__ic__DOT__Inst_count))) {
            vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd = 0U;
        } else if ((1U & (IData)(vlSelf->CPU__DOT__ic__DOT__Inst_count))) {
            vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd = 0U;
        } else {
            vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd 
                = ((0x80U & (IData)(vlSelf->CPU__DOT__Instout))
                    ? 0U : ((0x40U & (IData)(vlSelf->CPU__DOT__Instout))
                             ? 0U : ((0x20U & (IData)(vlSelf->CPU__DOT__Instout))
                                      ? ((0x10U & (IData)(vlSelf->CPU__DOT__Instout))
                                          ? 0x160U : 0x140U)
                                      : 0U)));
            vlSelf->CPU__DOT__ic__DOT__reset_in = 1U;
        }
    } else {
        vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd 
            = ((2U & (IData)(vlSelf->CPU__DOT__ic__DOT__Inst_count))
                ? ((1U & (IData)(vlSelf->CPU__DOT__ic__DOT__Inst_count))
                    ? ((0x80U & (IData)(vlSelf->CPU__DOT__Instout))
                        ? 0U : ((0x40U & (IData)(vlSelf->CPU__DOT__Instout))
                                 ? 0U : ((0x20U & (IData)(vlSelf->CPU__DOT__Instout))
                                          ? 0x810U : 
                                         ((0x10U & (IData)(vlSelf->CPU__DOT__Instout))
                                           ? 0x900U
                                           : 0U))))
                    : ((0x80U & (IData)(vlSelf->CPU__DOT__Instout))
                        ? ((0x40U & (IData)(vlSelf->CPU__DOT__Instout))
                            ? ((0x20U & (IData)(vlSelf->CPU__DOT__Instout))
                                ? ((0x10U & (IData)(vlSelf->CPU__DOT__Instout))
                                    ? 0x4000U : 0x88U)
                                : 0U) : 0U) : ((0x40U 
                                                & (IData)(vlSelf->CPU__DOT__Instout))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(vlSelf->CPU__DOT__Instout))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->CPU__DOT__Instout))
                                                     ? 0U
                                                     : 0x401U))
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->CPU__DOT__Instout))
                                                    ? 0x2400U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->CPU__DOT__Instout))
                                                     ? 0x2400U
                                                     : 0U)))))
                : ((1U & (IData)(vlSelf->CPU__DOT__ic__DOT__Inst_count))
                    ? 0xa04U : 0x2002U));
    }
    if ((IData)((0x1000U == (0x1800U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))))) {
        __Vdlyvval__CPU__DOT__ram__DOT__Memory__v0 
            = vlSelf->CPU__DOT__bus;
        __Vdlyvset__CPU__DOT__ram__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__CPU__DOT__ram__DOT__Memory__v0 
            = vlSelf->CPU__DOT__Addr_in;
    }
    if ((1U & (~ (IData)((0x1000U == (0x1800U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))))))) {
        vlSelf->CPU__DOT__ram__DOT__buffer = vlSelf->CPU__DOT__ram__DOT__Memory
            [vlSelf->CPU__DOT__Addr_in];
    }
    vlSelf->CPU__DOT__ram__DOT__data__out__en0 = ((IData)(
                                                          (0x800U 
                                                           == 
                                                           (0x1800U 
                                                            & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))))
                                                   ? 0xffU
                                                   : 0U);
    if (__Vdlyvset__CPU__DOT__ram__DOT__Memory__v0) {
        vlSelf->CPU__DOT__ram__DOT__Memory[__Vdlyvdim0__CPU__DOT__ram__DOT__Memory__v0] 
            = __Vdlyvval__CPU__DOT__ram__DOT__Memory__v0;
    }
}

VL_INLINE_OPT void Vcpu___024root___combo__TOP__5(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->CPU__DOT__clk = ((IData)(vlSelf->clkin) 
                             & (~ ((IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd) 
                                   >> 0xeU)));
    vlSelf->CPU__DOT__MemAdd__DOT__CLK = ((IData)(vlSelf->CPU__DOT__clk) 
                                          & ((IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd) 
                                             >> 0xdU));
    vlSelf->CPU__DOT__A__DOT__CLK = ((IData)(vlSelf->CPU__DOT__clk) 
                                     & ((IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd) 
                                        >> 8U));
    vlSelf->CPU__DOT__B__DOT__CLK = ((IData)(vlSelf->CPU__DOT__clk) 
                                     & ((IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd) 
                                        >> 4U));
    vlSelf->CPU__DOT__O__DOT__CLK = ((IData)(vlSelf->CPU__DOT__clk) 
                                     & ((IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd) 
                                        >> 3U));
    vlSelf->CPU__DOT__InstReg__DOT__CLK = ((IData)(vlSelf->CPU__DOT__clk) 
                                           & ((IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd) 
                                              >> 9U));
    vlSelf->CPU__DOT__pc__DOT__CLK = ((IData)(vlSelf->CPU__DOT__clk) 
                                      & ((IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd) 
                                         >> 2U));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__7(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->CPU__DOT__Addr_in = (0xfU & (IData)(vlSelf->CPU__DOT__bus));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__8(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__8\n"); );
    // Body
    vlSelf->CPU__DOT__Aout = vlSelf->CPU__DOT__bus;
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__9(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__9\n"); );
    // Body
    vlSelf->CPU__DOT__Bout = vlSelf->CPU__DOT__bus;
}

extern const VlUnpacked<CData/*6:0*/, 16> Vcpu__ConstPool__TABLE_312cd52d_0;

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__10(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__10\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    // Body
    vlSelf->OutPut = vlSelf->CPU__DOT__bus;
    __Vtableidx1 = (0xfU & (IData)(vlSelf->OutPut));
    vlSelf->LED1 = Vcpu__ConstPool__TABLE_312cd52d_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->OutPut) 
                            >> 4U));
    vlSelf->LED2 = Vcpu__ConstPool__TABLE_312cd52d_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__11(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->CPU__DOT__Instout = vlSelf->CPU__DOT__bus;
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__13(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__13\n"); );
    // Body
    vlSelf->__Vdly__CPU__DOT__Pcount = vlSelf->CPU__DOT__Pcount;
}

VL_INLINE_OPT void Vcpu___024root___multiclk__TOP__14(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___multiclk__TOP__14\n"); );
    // Body
    vlSelf->CPU__DOT__bus__out8 = ((0xf0U & (IData)(vlSelf->CPU__DOT__bus__out8)) 
                                   | (((0x400U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                        ? (IData)(vlSelf->CPU__DOT__Instout)
                                        : 0U) & ((0x400U 
                                                  & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                                  ? 0xfU
                                                  : 0U)));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__15(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__15\n"); );
    // Body
    if ((1U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))) {
        vlSelf->__Vdly__CPU__DOT__Pcount = (0xfU & (IData)(vlSelf->CPU__DOT__bus));
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__16(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__16\n"); );
    // Body
    vlSelf->__Vdly__CPU__DOT__Pcount = (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelf->CPU__DOT__Pcount)));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__17(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__17\n"); );
    // Body
    vlSelf->CPU__DOT__Pcount = vlSelf->__Vdly__CPU__DOT__Pcount;
}

VL_INLINE_OPT void Vcpu___024root___multiclk__TOP__18(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___multiclk__TOP__18\n"); );
    // Body
    vlSelf->CPU__DOT__bus__out9 = ((0xf0U & (IData)(vlSelf->CPU__DOT__bus__out9)) 
                                   | (((2U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                        ? (IData)(vlSelf->CPU__DOT__Pcount)
                                        : 0U) & ((2U 
                                                  & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                                  ? 0xfU
                                                  : 0U)));
}

VL_INLINE_OPT void Vcpu___024root___multiclk__TOP__19(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___multiclk__TOP__19\n"); );
    // Body
    vlSelf->CPU__DOT__bus = ((((((((0x80U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                    ? (IData)(vlSelf->CPU__DOT__Aout)
                                    : 0U) & ((0x80U 
                                              & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                              ? 0xffU
                                              : 0U)) 
                                 & ((0x80U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                     ? 0xffU : 0U)) 
                                | ((((0x40U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                      ? (0x1ffU & (
                                                   (0x20U 
                                                    & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                                    ? 
                                                   ((IData)(vlSelf->CPU__DOT__Aout) 
                                                    - (IData)(vlSelf->CPU__DOT__Bout))
                                                    : 
                                                   ((IData)(vlSelf->CPU__DOT__Aout) 
                                                    + (IData)(vlSelf->CPU__DOT__Bout))))
                                      : 0U) & ((0x40U 
                                                & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                                ? 0xffU
                                                : 0U)) 
                                   & ((0x40U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                       ? 0xffU : 0U))) 
                               | ((((IData)((0x800U 
                                             == (0x1800U 
                                                 & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))))
                                     ? (IData)(vlSelf->CPU__DOT__ram__DOT__buffer)
                                     : 0U) & (IData)(vlSelf->CPU__DOT__ram__DOT__data__out__en0)) 
                                  & (IData)(vlSelf->CPU__DOT__ram__DOT__data__out__en0))) 
                              | ((IData)(vlSelf->CPU__DOT__bus__out8) 
                                 & ((0x400U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                     ? 0xfU : 0U))) 
                             | ((IData)(vlSelf->CPU__DOT__bus__out9) 
                                & ((2U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                    ? 0xfU : 0U)));
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->__VinpClk__TOP__CPU__DOT__clk)) 
         & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__CPU__DOT__clk))) {
        Vcpu___024root___sequent__TOP__2(vlSelf);
    }
    Vcpu___024root___combo__TOP__5(vlSelf);
    if (((IData)(vlSelf->CPU__DOT__MemAdd__DOT__CLK) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__MemAdd__DOT__CLK)))) {
        Vcpu___024root___sequent__TOP__7(vlSelf);
    }
    if (((IData)(vlSelf->CPU__DOT__A__DOT__CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__A__DOT__CLK)))) {
        Vcpu___024root___sequent__TOP__8(vlSelf);
    }
    if (((IData)(vlSelf->CPU__DOT__B__DOT__CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__B__DOT__CLK)))) {
        Vcpu___024root___sequent__TOP__9(vlSelf);
    }
    if (((IData)(vlSelf->CPU__DOT__O__DOT__CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__O__DOT__CLK)))) {
        Vcpu___024root___sequent__TOP__10(vlSelf);
    }
    if (((IData)(vlSelf->CPU__DOT__InstReg__DOT__CLK) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__InstReg__DOT__CLK)))) {
        Vcpu___024root___sequent__TOP__11(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__CPU__DOT__clk) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__CPU__DOT__clk))) 
         | ((IData)(vlSelf->CPU__DOT__pc__DOT__CLK) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__pc__DOT__CLK))))) {
        Vcpu___024root___sequent__TOP__13(vlSelf);
    }
    if ((((IData)(vlSelf->CPU__DOT__InstReg__DOT__CLK) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__InstReg__DOT__CLK))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__CPU__DOT__clk)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__CPU__DOT__clk)))) {
        Vcpu___024root___multiclk__TOP__14(vlSelf);
    }
    if (((IData)(vlSelf->__VinpClk__TOP__CPU__DOT__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__CPU__DOT__clk)))) {
        Vcpu___024root___sequent__TOP__15(vlSelf);
    }
    if (((IData)(vlSelf->CPU__DOT__pc__DOT__CLK) & 
         (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__pc__DOT__CLK)))) {
        Vcpu___024root___sequent__TOP__16(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__CPU__DOT__clk) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__CPU__DOT__clk))) 
         | ((IData)(vlSelf->CPU__DOT__pc__DOT__CLK) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__pc__DOT__CLK))))) {
        Vcpu___024root___sequent__TOP__17(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__CPU__DOT__clk) 
          ^ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__CPU__DOT__clk)) 
         | ((IData)(vlSelf->CPU__DOT__pc__DOT__CLK) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__pc__DOT__CLK))))) {
        Vcpu___024root___multiclk__TOP__18(vlSelf);
    }
    if (((((((IData)(vlSelf->CPU__DOT__A__DOT__CLK) 
             & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__A__DOT__CLK))) 
            | ((IData)(vlSelf->CPU__DOT__B__DOT__CLK) 
               & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__B__DOT__CLK)))) 
           | ((IData)(vlSelf->CPU__DOT__InstReg__DOT__CLK) 
              & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__InstReg__DOT__CLK)))) 
          | ((IData)(vlSelf->__VinpClk__TOP__CPU__DOT__clk) 
             ^ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__CPU__DOT__clk))) 
         | ((IData)(vlSelf->CPU__DOT__pc__DOT__CLK) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__CPU__DOT__pc__DOT__CLK))))) {
        Vcpu___024root___multiclk__TOP__19(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP____VinpClk__TOP__CPU__DOT__clk 
        = vlSelf->__VinpClk__TOP__CPU__DOT__clk;
    vlSelf->__Vclklast__TOP__CPU__DOT__MemAdd__DOT__CLK 
        = vlSelf->CPU__DOT__MemAdd__DOT__CLK;
    vlSelf->__Vclklast__TOP__CPU__DOT__A__DOT__CLK 
        = vlSelf->CPU__DOT__A__DOT__CLK;
    vlSelf->__Vclklast__TOP__CPU__DOT__B__DOT__CLK 
        = vlSelf->CPU__DOT__B__DOT__CLK;
    vlSelf->__Vclklast__TOP__CPU__DOT__O__DOT__CLK 
        = vlSelf->CPU__DOT__O__DOT__CLK;
    vlSelf->__Vclklast__TOP__CPU__DOT__InstReg__DOT__CLK 
        = vlSelf->CPU__DOT__InstReg__DOT__CLK;
    vlSelf->__Vclklast__TOP__CPU__DOT__pc__DOT__CLK 
        = vlSelf->CPU__DOT__pc__DOT__CLK;
    vlSelf->__VinpClk__TOP__CPU__DOT__clk = vlSelf->CPU__DOT__clk;
}

QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf);

VL_INLINE_OPT QData Vcpu___024root___change_request(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request\n"); );
    // Body
    return (Vcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->CPU__DOT__clk ^ vlSelf->__Vchglast__TOP__CPU__DOT__clk));
    VL_DEBUG_IF( if(__req && ((vlSelf->CPU__DOT__clk ^ vlSelf->__Vchglast__TOP__CPU__DOT__clk))) VL_DBG_MSGF("        CHANGE: cpu.v:27: CPU.clk\n"); );
    // Final
    vlSelf->__Vchglast__TOP__CPU__DOT__clk = vlSelf->CPU__DOT__clk;
    return __req;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clkin & 0xfeU))) {
        Verilated::overWidthError("clkin");}
}
#endif  // VL_DEBUG
