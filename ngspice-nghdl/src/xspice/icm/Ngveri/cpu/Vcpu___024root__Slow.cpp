// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu___024root.h"
#include "Vcpu__Syms.h"

//==========


void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf);

Vcpu___024root::Vcpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcpu___024root___ctor_var_reset(this);
}

void Vcpu___024root::__Vconfigure(Vcpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcpu___024root::~Vcpu___024root() {
}

extern const VlUnpacked<CData/*6:0*/, 16> Vcpu__ConstPool__TABLE_312cd52d_0;

void Vcpu___024root___settle__TOP__3(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__3\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    // Body
    vlSelf->CPU__DOT__clk = ((IData)(vlSelf->clkin) 
                             & (~ ((IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd) 
                                   >> 0xeU)));
    vlSelf->CPU__DOT__ram__DOT__data__out__en0 = ((IData)(
                                                          (0x800U 
                                                           == 
                                                           (0x1800U 
                                                            & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))))
                                                   ? 0xffU
                                                   : 0U);
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
    __Vtableidx1 = (0xfU & (IData)(vlSelf->OutPut));
    vlSelf->LED1 = Vcpu__ConstPool__TABLE_312cd52d_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->OutPut) 
                            >> 4U));
    vlSelf->LED2 = Vcpu__ConstPool__TABLE_312cd52d_0
        [__Vtableidx2];
    vlSelf->CPU__DOT__bus__out8 = ((0xf0U & (IData)(vlSelf->CPU__DOT__bus__out8)) 
                                   | (((0x400U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                        ? (IData)(vlSelf->CPU__DOT__Instout)
                                        : 0U) & ((0x400U 
                                                  & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                                  ? 0xfU
                                                  : 0U)));
}

void Vcpu___024root___initial__TOP__4(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__4\n"); );
    // Body
    vlSelf->CPU__DOT__ic__DOT__Inst_count = 7U;
    vlSelf->CPU__DOT__ic__DOT__reset_in = 0U;
    vlSelf->CPU__DOT__ram__DOT__Memory[0U] = 0x1aU;
    vlSelf->CPU__DOT__ram__DOT__Memory[1U] = 0x2bU;
    vlSelf->CPU__DOT__ram__DOT__Memory[2U] = 0x46U;
    vlSelf->CPU__DOT__ram__DOT__Memory[3U] = 0x3cU;
    vlSelf->CPU__DOT__ram__DOT__Memory[4U] = 0x2dU;
    vlSelf->CPU__DOT__ram__DOT__Memory[5U] = 0xe0U;
    vlSelf->CPU__DOT__ram__DOT__Memory[6U] = 0x1eU;
    vlSelf->CPU__DOT__ram__DOT__Memory[7U] = 0x2fU;
    vlSelf->CPU__DOT__ram__DOT__Memory[8U] = 0xe0U;
    vlSelf->CPU__DOT__ram__DOT__Memory[9U] = 0xf0U;
    vlSelf->CPU__DOT__ram__DOT__Memory[0xaU] = 3U;
    vlSelf->CPU__DOT__ram__DOT__Memory[0xbU] = 2U;
    vlSelf->CPU__DOT__ram__DOT__Memory[0xcU] = 1U;
    vlSelf->CPU__DOT__ram__DOT__Memory[0xdU] = 5U;
    vlSelf->CPU__DOT__ram__DOT__Memory[0xeU] = 0xaU;
    vlSelf->CPU__DOT__ram__DOT__Memory[0xfU] = 0xbU;
    vlSelf->CPU__DOT__Pcount = 0U;
}

void Vcpu___024root___settle__TOP__6(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__6\n"); );
    // Body
    vlSelf->CPU__DOT__bus__out9 = ((0xf0U & (IData)(vlSelf->CPU__DOT__bus__out9)) 
                                   | (((2U & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                        ? (IData)(vlSelf->CPU__DOT__Pcount)
                                        : 0U) & ((2U 
                                                  & (IData)(vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd))
                                                  ? 0xfU
                                                  : 0U)));
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

void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____VinpClk__TOP__CPU__DOT__clk 
        = vlSelf->__VinpClk__TOP__CPU__DOT__clk;
    Vcpu___024root___initial__TOP__4(vlSelf);
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
}

void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__3(vlSelf);
    Vcpu___024root___settle__TOP__6(vlSelf);
}

void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clkin = VL_RAND_RESET_I(1);
    vlSelf->OutPut = VL_RAND_RESET_I(8);
    vlSelf->LED1 = VL_RAND_RESET_I(7);
    vlSelf->LED2 = VL_RAND_RESET_I(7);
    vlSelf->CPU__DOT__bus = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__Aout = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__Bout = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__Instout = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__Pcount = VL_RAND_RESET_I(4);
    vlSelf->CPU__DOT__Addr_in = VL_RAND_RESET_I(4);
    vlSelf->CPU__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT____Vcellout__ic__ctrl_wrd = VL_RAND_RESET_I(15);
    vlSelf->CPU__DOT__bus__out8 = 0;
    vlSelf->CPU__DOT__bus__out9 = 0;
    vlSelf->CPU__DOT__A__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__B__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__InstReg__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__pc__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__MemAdd__DOT__CLK = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->CPU__DOT__ram__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->CPU__DOT__ram__DOT__buffer = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__ram__DOT__data__out__en0 = 0;
    vlSelf->CPU__DOT__ic__DOT__Inst_count = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__ic__DOT__reset_in = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__O__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__CPU__DOT__Pcount = VL_RAND_RESET_I(4);
    vlSelf->__VinpClk__TOP__CPU__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__CPU__DOT__clk = VL_RAND_RESET_I(1);
}
