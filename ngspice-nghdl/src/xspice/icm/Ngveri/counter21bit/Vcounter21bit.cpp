// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounter21bit.h"
#include "Vcounter21bit__Syms.h"

//============================================================
// Constructors

Vcounter21bit::Vcounter21bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcounter21bit__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcounter21bit::Vcounter21bit(const char* _vcname__)
    : Vcounter21bit(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcounter21bit::~Vcounter21bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcounter21bit___024root___eval_initial(Vcounter21bit___024root* vlSelf);
void Vcounter21bit___024root___eval_settle(Vcounter21bit___024root* vlSelf);
void Vcounter21bit___024root___eval(Vcounter21bit___024root* vlSelf);
QData Vcounter21bit___024root___change_request(Vcounter21bit___024root* vlSelf);
#ifdef VL_DEBUG
void Vcounter21bit___024root___eval_debug_assertions(Vcounter21bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcounter21bit___024root___final(Vcounter21bit___024root* vlSelf);

static void _eval_initial_loop(Vcounter21bit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcounter21bit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcounter21bit___024root___eval_settle(&(vlSymsp->TOP));
        Vcounter21bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcounter21bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("counter21bit.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcounter21bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcounter21bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter21bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcounter21bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcounter21bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcounter21bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("counter21bit.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcounter21bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vcounter21bit::final() {
    Vcounter21bit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vcounter21bit::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcounter21bit::name() const {
    return vlSymsp->name();
}
