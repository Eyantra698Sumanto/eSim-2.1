// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjunsignedarraymultiplier.h for the primary calling header

#ifndef VERILATED_VJUNSIGNEDARRAYMULTIPLIER___024ROOT_H_
#define VERILATED_VJUNSIGNEDARRAYMULTIPLIER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjunsignedarraymultiplier__Syms;

//----------

VL_MODULE(Vjunsignedarraymultiplier___024root) {
  public:

    // PORTS
    VL_OUT8(PRODUCT,7,0);
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);

    // LOCAL SIGNALS
    CData/*5:0*/ junsignedArrayMultiplier__DOT__S;
    SData/*14:0*/ junsignedArrayMultiplier__DOT__W;
    SData/*10:0*/ junsignedArrayMultiplier__DOT__C;

    // LOCAL VARIABLES
    CData/*0:0*/ junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2;
    CData/*0:0*/ junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1;
    CData/*0:0*/ junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2;
    CData/*0:0*/ junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1;
    CData/*0:0*/ junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2;
    CData/*0:0*/ junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2;
    CData/*0:0*/ __Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber2;
    CData/*0:0*/ __Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa03____pinNumber1;
    CData/*0:0*/ __Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber2;
    CData/*0:0*/ __Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa04____pinNumber1;
    CData/*0:0*/ __Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa06____pinNumber2;
    CData/*0:0*/ __Vchglast__TOP__junsignedArrayMultiplier__DOT____Vcellout__jfa07____pinNumber2;
    SData/*10:0*/ __Vchglast__TOP__junsignedArrayMultiplier__DOT__C;

    // INTERNAL VARIABLES
    Vjunsignedarraymultiplier__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjunsignedarraymultiplier___024root);  ///< Copying not allowed
  public:
    Vjunsignedarraymultiplier___024root(const char* name);
    ~Vjunsignedarraymultiplier___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjunsignedarraymultiplier__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
