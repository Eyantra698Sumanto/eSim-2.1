// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdowncounter32bit.h"
#include "Vdowncounter32bit__Syms.h"

//============================================================
// Constructors

Vdowncounter32bit::Vdowncounter32bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdowncounter32bit__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdowncounter32bit::Vdowncounter32bit(const char* _vcname__)
    : Vdowncounter32bit(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdowncounter32bit::~Vdowncounter32bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdowncounter32bit___024root___eval_initial(Vdowncounter32bit___024root* vlSelf);
void Vdowncounter32bit___024root___eval_settle(Vdowncounter32bit___024root* vlSelf);
void Vdowncounter32bit___024root___eval(Vdowncounter32bit___024root* vlSelf);
QData Vdowncounter32bit___024root___change_request(Vdowncounter32bit___024root* vlSelf);
#ifdef VL_DEBUG
void Vdowncounter32bit___024root___eval_debug_assertions(Vdowncounter32bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vdowncounter32bit___024root___final(Vdowncounter32bit___024root* vlSelf);

static void _eval_initial_loop(Vdowncounter32bit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdowncounter32bit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdowncounter32bit___024root___eval_settle(&(vlSymsp->TOP));
        Vdowncounter32bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdowncounter32bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("downcounter32bit.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdowncounter32bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdowncounter32bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdowncounter32bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdowncounter32bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdowncounter32bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdowncounter32bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("downcounter32bit.v", 7, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdowncounter32bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdowncounter32bit::final() {
    Vdowncounter32bit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdowncounter32bit::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdowncounter32bit::name() const {
    return vlSymsp->name();
}
