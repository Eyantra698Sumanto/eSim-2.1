// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vadder_subtractor_4bit.h"
#include "Vadder_subtractor_4bit__Syms.h"

//============================================================
// Constructors

Vadder_subtractor_4bit::Vadder_subtractor_4bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vadder_subtractor_4bit__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , cin{vlSymsp->TOP.cin}
    , sum{vlSymsp->TOP.sum}
    , carry{vlSymsp->TOP.carry}
    , rootp{&(vlSymsp->TOP)}
{
}

Vadder_subtractor_4bit::Vadder_subtractor_4bit(const char* _vcname__)
    : Vadder_subtractor_4bit(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vadder_subtractor_4bit::~Vadder_subtractor_4bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vadder_subtractor_4bit___024root___eval_initial(Vadder_subtractor_4bit___024root* vlSelf);
void Vadder_subtractor_4bit___024root___eval_settle(Vadder_subtractor_4bit___024root* vlSelf);
void Vadder_subtractor_4bit___024root___eval(Vadder_subtractor_4bit___024root* vlSelf);
QData Vadder_subtractor_4bit___024root___change_request(Vadder_subtractor_4bit___024root* vlSelf);
#ifdef VL_DEBUG
void Vadder_subtractor_4bit___024root___eval_debug_assertions(Vadder_subtractor_4bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vadder_subtractor_4bit___024root___final(Vadder_subtractor_4bit___024root* vlSelf);

static void _eval_initial_loop(Vadder_subtractor_4bit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vadder_subtractor_4bit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vadder_subtractor_4bit___024root___eval_settle(&(vlSymsp->TOP));
        Vadder_subtractor_4bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vadder_subtractor_4bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("adder_subtractor_4bit.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vadder_subtractor_4bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vadder_subtractor_4bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadder_subtractor_4bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vadder_subtractor_4bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vadder_subtractor_4bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vadder_subtractor_4bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("adder_subtractor_4bit.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vadder_subtractor_4bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vadder_subtractor_4bit::final() {
    Vadder_subtractor_4bit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vadder_subtractor_4bit::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vadder_subtractor_4bit::name() const {
    return vlSymsp->name();
}
