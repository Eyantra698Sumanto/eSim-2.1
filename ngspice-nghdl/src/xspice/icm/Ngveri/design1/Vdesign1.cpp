// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdesign1.h"
#include "Vdesign1__Syms.h"

//============================================================
// Constructors

Vdesign1::Vdesign1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdesign1__Syms(_vcontextp__, _vcname__, this)}
    , Y{vlSymsp->TOP.Y}
    , D0{vlSymsp->TOP.D0}
    , D1{vlSymsp->TOP.D1}
    , S{vlSymsp->TOP.S}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdesign1::Vdesign1(const char* _vcname__)
    : Vdesign1(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdesign1::~Vdesign1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdesign1___024root___eval_initial(Vdesign1___024root* vlSelf);
void Vdesign1___024root___eval_settle(Vdesign1___024root* vlSelf);
void Vdesign1___024root___eval(Vdesign1___024root* vlSelf);
QData Vdesign1___024root___change_request(Vdesign1___024root* vlSelf);
#ifdef VL_DEBUG
void Vdesign1___024root___eval_debug_assertions(Vdesign1___024root* vlSelf);
#endif  // VL_DEBUG
void Vdesign1___024root___final(Vdesign1___024root* vlSelf);

static void _eval_initial_loop(Vdesign1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdesign1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdesign1___024root___eval_settle(&(vlSymsp->TOP));
        Vdesign1___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdesign1___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("design1.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdesign1___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdesign1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdesign1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdesign1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdesign1___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdesign1___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("design1.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdesign1___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdesign1::final() {
    Vdesign1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdesign1::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdesign1::name() const {
    return vlSymsp->name();
}
