// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjunsignedarraymultiplier.h for the primary calling header

#include "Vjunsignedarraymultiplier___024root.h"
#include "Vjunsignedarraymultiplier__Syms.h"

//==========


void Vjunsignedarraymultiplier___024root___ctor_var_reset(Vjunsignedarraymultiplier___024root* vlSelf);

Vjunsignedarraymultiplier___024root::Vjunsignedarraymultiplier___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjunsignedarraymultiplier___024root___ctor_var_reset(this);
}

void Vjunsignedarraymultiplier___024root::__Vconfigure(Vjunsignedarraymultiplier__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vjunsignedarraymultiplier___024root::~Vjunsignedarraymultiplier___024root() {
}

void Vjunsignedarraymultiplier___024root___eval_initial(Vjunsignedarraymultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjunsignedarraymultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjunsignedarraymultiplier___024root___eval_initial\n"); );
}

void Vjunsignedarraymultiplier___024root___combo__TOP__1(Vjunsignedarraymultiplier___024root* vlSelf);

void Vjunsignedarraymultiplier___024root___eval_settle(Vjunsignedarraymultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjunsignedarraymultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjunsignedarraymultiplier___024root___eval_settle\n"); );
    // Body
    Vjunsignedarraymultiplier___024root___combo__TOP__1(vlSelf);
}

void Vjunsignedarraymultiplier___024root___final(Vjunsignedarraymultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjunsignedarraymultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjunsignedarraymultiplier___024root___final\n"); );
}

void Vjunsignedarraymultiplier___024root___ctor_var_reset(Vjunsignedarraymultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjunsignedarraymultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjunsignedarraymultiplier___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PRODUCT = VL_RAND_RESET_I(8);
    vlSelf->A = VL_RAND_RESET_I(4);
    vlSelf->B = VL_RAND_RESET_I(4);
    vlSelf->junsignedArrayMultiplier__DOT__W = VL_RAND_RESET_I(15);
    vlSelf->junsignedArrayMultiplier__DOT__C = VL_RAND_RESET_I(11);
    vlSelf->junsignedArrayMultiplier__DOT__S = VL_RAND_RESET_I(6);
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2 = VL_RAND_RESET_I(1);
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2 = VL_RAND_RESET_I(1);
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2 = VL_RAND_RESET_I(1);
    vlSelf->junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT__C = VL_RAND_RESET_I(11);
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2 = VL_RAND_RESET_I(1);
}
