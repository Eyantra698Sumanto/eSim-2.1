// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign.h"           // For This
#include "Vdesign__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vdesign) {
    Vdesign__Syms* __restrict vlSymsp = __VlSymsp = new Vdesign__Syms(this, name());
    Vdesign* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vdesign::__Vconfigure(Vdesign__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vdesign::~Vdesign() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vdesign::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdesign::eval\n"); );
    Vdesign__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vdesign* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vdesign::_eval_initial_loop(Vdesign__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vdesign::_combo__TOP__1(Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign::_combo__TOP__1\n"); );
    Vdesign* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Y = (((IData)(vlTOPp->D1) & (IData)(vlTOPp->S)) 
		 | ((IData)(vlTOPp->D0) & (~ (IData)(vlTOPp->S))));
}

void Vdesign::_eval(Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign::_eval\n"); );
    Vdesign* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vdesign::_eval_initial(Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign::_eval_initial\n"); );
    Vdesign* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdesign::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign::final\n"); );
    // Variables
    Vdesign__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdesign* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdesign::_eval_settle(Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign::_eval_settle\n"); );
    Vdesign* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vdesign::_change_request(Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign::_change_request\n"); );
    Vdesign* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdesign::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((D0 & 0xfeU))) {
	Verilated::overWidthError("D0");}
    if (VL_UNLIKELY((D1 & 0xfeU))) {
	Verilated::overWidthError("D1");}
    if (VL_UNLIKELY((S & 0xfeU))) {
	Verilated::overWidthError("S");}
}
#endif // VL_DEBUG

void Vdesign::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign::_ctor_var_reset\n"); );
    // Body
    Y = VL_RAND_RESET_I(1);
    D0 = VL_RAND_RESET_I(1);
    D1 = VL_RAND_RESET_I(1);
    S = VL_RAND_RESET_I(1);
}
