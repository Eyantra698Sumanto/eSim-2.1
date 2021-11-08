// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhalfadder.h"
#include "Vhalfadder__Syms.h"

//============================================================
// Constructors

Vhalfadder::Vhalfadder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vhalfadder__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , sum{vlSymsp->TOP.sum}
    , carry{vlSymsp->TOP.carry}
    , rootp{&(vlSymsp->TOP)}
{
}

Vhalfadder::Vhalfadder(const char* _vcname__)
    : Vhalfadder(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vhalfadder::~Vhalfadder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vhalfadder___024root___eval_initial(Vhalfadder___024root* vlSelf);
void Vhalfadder___024root___eval_settle(Vhalfadder___024root* vlSelf);
void Vhalfadder___024root___eval(Vhalfadder___024root* vlSelf);
QData Vhalfadder___024root___change_request(Vhalfadder___024root* vlSelf);
#ifdef VL_DEBUG
void Vhalfadder___024root___eval_debug_assertions(Vhalfadder___024root* vlSelf);
#endif  // VL_DEBUG
void Vhalfadder___024root___final(Vhalfadder___024root* vlSelf);

static void _eval_initial_loop(Vhalfadder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vhalfadder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vhalfadder___024root___eval_settle(&(vlSymsp->TOP));
        Vhalfadder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vhalfadder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("halfadder.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vhalfadder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vhalfadder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhalfadder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhalfadder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vhalfadder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vhalfadder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("halfadder.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vhalfadder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vhalfadder::final() {
    Vhalfadder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vhalfadder::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vhalfadder::name() const {
    return vlSymsp->name();
}
