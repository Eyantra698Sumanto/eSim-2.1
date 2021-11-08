// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounter4bit.h"
#include "Vcounter4bit__Syms.h"

//============================================================
// Constructors

Vcounter4bit::Vcounter4bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcounter4bit__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rstn{vlSymsp->TOP.rstn}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcounter4bit::Vcounter4bit(const char* _vcname__)
    : Vcounter4bit(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcounter4bit::~Vcounter4bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcounter4bit___024root___eval_initial(Vcounter4bit___024root* vlSelf);
void Vcounter4bit___024root___eval_settle(Vcounter4bit___024root* vlSelf);
void Vcounter4bit___024root___eval(Vcounter4bit___024root* vlSelf);
QData Vcounter4bit___024root___change_request(Vcounter4bit___024root* vlSelf);
#ifdef VL_DEBUG
void Vcounter4bit___024root___eval_debug_assertions(Vcounter4bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcounter4bit___024root___final(Vcounter4bit___024root* vlSelf);

static void _eval_initial_loop(Vcounter4bit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcounter4bit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcounter4bit___024root___eval_settle(&(vlSymsp->TOP));
        Vcounter4bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcounter4bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("counter4bit.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcounter4bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcounter4bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter4bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcounter4bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcounter4bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcounter4bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("counter4bit.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcounter4bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vcounter4bit::final() {
    Vcounter4bit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vcounter4bit::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcounter4bit::name() const {
    return vlSymsp->name();
}
