// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmodule.h for the primary calling header

#include "Vmodule.h"
#include "Vmodule__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmodule) {
    Vmodule__Syms* __restrict vlSymsp = __VlSymsp = new Vmodule__Syms(this, name());
    Vmodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmodule::__Vconfigure(Vmodule__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmodule::~Vmodule() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vmodule::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmodule::eval\n"); );
    Vmodule__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vmodule::_eval_initial_loop(Vmodule__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vmodule::_combo__TOP__1(Vmodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule::_combo__TOP__1\n"); );
    Vmodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Y = ((IData)(vlTOPp->A) & (IData)(vlTOPp->B));
}

void Vmodule::_eval(Vmodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule::_eval\n"); );
    Vmodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vmodule::_eval_initial(Vmodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule::_eval_initial\n"); );
    Vmodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmodule::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule::final\n"); );
    // Variables
    Vmodule__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmodule::_eval_settle(Vmodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule::_eval_settle\n"); );
    Vmodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vmodule::_change_request(Vmodule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule::_change_request\n"); );
    Vmodule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmodule::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((A & 0xfeU))) {
	Verilated::overWidthError("A");}
    if (VL_UNLIKELY((B & 0xfeU))) {
	Verilated::overWidthError("B");}
}
#endif // VL_DEBUG

void Vmodule::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule::_ctor_var_reset\n"); );
    // Body
    Y = VL_RAND_RESET_I(1);
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
}
