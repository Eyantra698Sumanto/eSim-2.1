// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjserialadder.h"
#include "Vjserialadder__Syms.h"

//============================================================
// Constructors

Vjserialadder::Vjserialadder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjserialadder__Syms(_vcontextp__, _vcname__, this)}
    , y{vlSymsp->TOP.y}
    , carryout{vlSymsp->TOP.carryout}
    , isValid{vlSymsp->TOP.isValid}
    , currentsum{vlSymsp->TOP.currentsum}
    , currentcarryout{vlSymsp->TOP.currentcarryout}
    , currentbitcount{vlSymsp->TOP.currentbitcount}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , carryin{vlSymsp->TOP.carryin}
    , rootp{&(vlSymsp->TOP)}
{
}

Vjserialadder::Vjserialadder(const char* _vcname__)
    : Vjserialadder(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjserialadder::~Vjserialadder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjserialadder___024root___eval_initial(Vjserialadder___024root* vlSelf);
void Vjserialadder___024root___eval_settle(Vjserialadder___024root* vlSelf);
void Vjserialadder___024root___eval(Vjserialadder___024root* vlSelf);
QData Vjserialadder___024root___change_request(Vjserialadder___024root* vlSelf);
#ifdef VL_DEBUG
void Vjserialadder___024root___eval_debug_assertions(Vjserialadder___024root* vlSelf);
#endif  // VL_DEBUG
void Vjserialadder___024root___final(Vjserialadder___024root* vlSelf);

static void _eval_initial_loop(Vjserialadder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjserialadder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjserialadder___024root___eval_settle(&(vlSymsp->TOP));
        Vjserialadder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjserialadder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jserialadder.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjserialadder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjserialadder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjserialadder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjserialadder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjserialadder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjserialadder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jserialadder.v", 7, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjserialadder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjserialadder::final() {
    Vjserialadder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjserialadder::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjserialadder::name() const {
    return vlSymsp->name();
}
