// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom_using_file.h for the primary calling header

#include "Vrom_using_file___024root.h"
#include "Vrom_using_file__Syms.h"

//==========


void Vrom_using_file___024root___ctor_var_reset(Vrom_using_file___024root* vlSelf);

Vrom_using_file___024root::Vrom_using_file___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrom_using_file___024root___ctor_var_reset(this);
}

void Vrom_using_file___024root::__Vconfigure(Vrom_using_file__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrom_using_file___024root::~Vrom_using_file___024root() {
}

extern const VlWide<11>/*351:0*/ Vrom_using_file__ConstPool__CONST_ea7fba78_0;

void Vrom_using_file___024root___initial__TOP__1(Vrom_using_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_using_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_using_file___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(false, 8, 256, 0, VL_CVT_PACK_STR_NW(11, Vrom_using_file__ConstPool__CONST_ea7fba78_0)
                 ,  &(vlSelf->rom_using_file__DOT__mem)
                 , 0, ~0ULL);
}

void Vrom_using_file___024root___eval_initial(Vrom_using_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_using_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_using_file___024root___eval_initial\n"); );
    // Body
    Vrom_using_file___024root___initial__TOP__1(vlSelf);
}

void Vrom_using_file___024root___combo__TOP__2(Vrom_using_file___024root* vlSelf);

void Vrom_using_file___024root___eval_settle(Vrom_using_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_using_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_using_file___024root___eval_settle\n"); );
    // Body
    Vrom_using_file___024root___combo__TOP__2(vlSelf);
}

void Vrom_using_file___024root___final(Vrom_using_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_using_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_using_file___024root___final\n"); );
}

void Vrom_using_file___024root___ctor_var_reset(Vrom_using_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_using_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_using_file___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->address = VL_RAND_RESET_I(8);
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->read_en = VL_RAND_RESET_I(1);
    vlSelf->ce = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->rom_using_file__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
}
