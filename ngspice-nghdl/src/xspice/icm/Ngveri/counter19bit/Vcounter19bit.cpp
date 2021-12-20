// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounter19bit.h"
#include "Vcounter19bit__Syms.h"

//============================================================
// Constructors

Vcounter19bit::Vcounter19bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcounter19bit__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcounter19bit::Vcounter19bit(const char* _vcname__)
    : Vcounter19bit(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcounter19bit::~Vcounter19bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcounter19bit___024root___eval_initial(Vcounter19bit___024root* vlSelf);
void Vcounter19bit___024root___eval_settle(Vcounter19bit___024root* vlSelf);
void Vcounter19bit___024root___eval(Vcounter19bit___024root* vlSelf);
QData Vcounter19bit___024root___change_request(Vcounter19bit___024root* vlSelf);
#ifdef VL_DEBUG
void Vcounter19bit___024root___eval_debug_assertions(Vcounter19bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcounter19bit___024root___final(Vcounter19bit___024root* vlSelf);

static void _eval_initial_loop(Vcounter19bit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcounter19bit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcounter19bit___024root___eval_settle(&(vlSymsp->TOP));
        Vcounter19bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcounter19bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("counter19bit.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcounter19bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcounter19bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter19bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcounter19bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcounter19bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcounter19bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("counter19bit.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcounter19bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vcounter19bit::final() {
    Vcounter19bit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vcounter19bit::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcounter19bit::name() const {
    return vlSymsp->name();
}
