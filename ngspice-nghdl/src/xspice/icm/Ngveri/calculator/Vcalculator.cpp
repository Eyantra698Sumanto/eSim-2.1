// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcalculator.h"
#include "Vcalculator__Syms.h"

//============================================================
// Constructors

Vcalculator::Vcalculator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcalculator__Syms(_vcontextp__, _vcname__, this)}
    , astr{vlSymsp->TOP.astr}
    , res{vlSymsp->TOP.res}
    , seven_out{vlSymsp->TOP.seven_out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcalculator::Vcalculator(const char* _vcname__)
    : Vcalculator(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcalculator::~Vcalculator() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcalculator___024root___eval_initial(Vcalculator___024root* vlSelf);
void Vcalculator___024root___eval_settle(Vcalculator___024root* vlSelf);
void Vcalculator___024root___eval(Vcalculator___024root* vlSelf);
QData Vcalculator___024root___change_request(Vcalculator___024root* vlSelf);
#ifdef VL_DEBUG
void Vcalculator___024root___eval_debug_assertions(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG
void Vcalculator___024root___final(Vcalculator___024root* vlSelf);

static void _eval_initial_loop(Vcalculator__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcalculator___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcalculator___024root___eval_settle(&(vlSymsp->TOP));
        Vcalculator___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcalculator___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("calculator.v", 37, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcalculator___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcalculator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcalculator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcalculator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcalculator___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcalculator___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("calculator.v", 37, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcalculator___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vcalculator::final() {
    Vcalculator___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vcalculator::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcalculator::name() const {
    return vlSymsp->name();
}
