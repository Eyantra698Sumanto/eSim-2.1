// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vand2.h"
#include "Vand2__Syms.h"

//============================================================
// Constructors

Vand2::Vand2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vand2__Syms(_vcontextp__, _vcname__, this)}
    , Y{vlSymsp->TOP.Y}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , rootp{&(vlSymsp->TOP)}
{
}

Vand2::Vand2(const char* _vcname__)
    : Vand2(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vand2::~Vand2() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vand2___024root___eval_initial(Vand2___024root* vlSelf);
void Vand2___024root___eval_settle(Vand2___024root* vlSelf);
void Vand2___024root___eval(Vand2___024root* vlSelf);
QData Vand2___024root___change_request(Vand2___024root* vlSelf);
#ifdef VL_DEBUG
void Vand2___024root___eval_debug_assertions(Vand2___024root* vlSelf);
#endif  // VL_DEBUG
void Vand2___024root___final(Vand2___024root* vlSelf);

static void _eval_initial_loop(Vand2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vand2___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vand2___024root___eval_settle(&(vlSymsp->TOP));
        Vand2___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vand2___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("and2.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vand2___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vand2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vand2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vand2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vand2___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vand2___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("and2.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vand2___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vand2::final() {
    Vand2___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vand2::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vand2::name() const {
    return vlSymsp->name();
}
