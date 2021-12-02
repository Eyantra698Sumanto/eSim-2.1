// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjtransmissiongate.h"
#include "Vjtransmissiongate__Syms.h"

//============================================================
// Constructors

Vjtransmissiongate::Vjtransmissiongate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjtransmissiongate__Syms(_vcontextp__, _vcname__, this)}
    , y{vlSymsp->TOP.y}
    , a{vlSymsp->TOP.a}
    , control{vlSymsp->TOP.control}
    , rootp{&(vlSymsp->TOP)}
{
}

Vjtransmissiongate::Vjtransmissiongate(const char* _vcname__)
    : Vjtransmissiongate(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjtransmissiongate::~Vjtransmissiongate() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjtransmissiongate___024root___eval_initial(Vjtransmissiongate___024root* vlSelf);
void Vjtransmissiongate___024root___eval_settle(Vjtransmissiongate___024root* vlSelf);
void Vjtransmissiongate___024root___eval(Vjtransmissiongate___024root* vlSelf);
QData Vjtransmissiongate___024root___change_request(Vjtransmissiongate___024root* vlSelf);
#ifdef VL_DEBUG
void Vjtransmissiongate___024root___eval_debug_assertions(Vjtransmissiongate___024root* vlSelf);
#endif  // VL_DEBUG
void Vjtransmissiongate___024root___final(Vjtransmissiongate___024root* vlSelf);

static void _eval_initial_loop(Vjtransmissiongate__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjtransmissiongate___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjtransmissiongate___024root___eval_settle(&(vlSymsp->TOP));
        Vjtransmissiongate___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjtransmissiongate___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jtransmissiongate.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjtransmissiongate___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjtransmissiongate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjtransmissiongate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjtransmissiongate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjtransmissiongate___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjtransmissiongate___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jtransmissiongate.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjtransmissiongate___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjtransmissiongate::final() {
    Vjtransmissiongate___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjtransmissiongate::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjtransmissiongate::name() const {
    return vlSymsp->name();
}
