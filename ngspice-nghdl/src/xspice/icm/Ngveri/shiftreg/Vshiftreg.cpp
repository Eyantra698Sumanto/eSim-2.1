// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshiftreg.h"
#include "Vshiftreg__Syms.h"

//============================================================
// Constructors

Vshiftreg::Vshiftreg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vshiftreg__Syms(_vcontextp__, _vcname__, this)}
    , d{vlSymsp->TOP.d}
    , rstn{vlSymsp->TOP.rstn}
    , clk{vlSymsp->TOP.clk}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
}

Vshiftreg::Vshiftreg(const char* _vcname__)
    : Vshiftreg(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vshiftreg::~Vshiftreg() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vshiftreg___024root___eval_initial(Vshiftreg___024root* vlSelf);
void Vshiftreg___024root___eval_settle(Vshiftreg___024root* vlSelf);
void Vshiftreg___024root___eval(Vshiftreg___024root* vlSelf);
QData Vshiftreg___024root___change_request(Vshiftreg___024root* vlSelf);
#ifdef VL_DEBUG
void Vshiftreg___024root___eval_debug_assertions(Vshiftreg___024root* vlSelf);
#endif  // VL_DEBUG
void Vshiftreg___024root___final(Vshiftreg___024root* vlSelf);

static void _eval_initial_loop(Vshiftreg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vshiftreg___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vshiftreg___024root___eval_settle(&(vlSymsp->TOP));
        Vshiftreg___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vshiftreg___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("shiftreg.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vshiftreg___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vshiftreg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshiftreg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshiftreg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vshiftreg___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vshiftreg___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("shiftreg.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vshiftreg___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vshiftreg::final() {
    Vshiftreg___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vshiftreg::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vshiftreg::name() const {
    return vlSymsp->name();
}
