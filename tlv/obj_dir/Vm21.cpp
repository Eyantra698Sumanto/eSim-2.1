// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vm21.h"
#include "Vm21__Syms.h"

//============================================================
// Constructors

Vm21::Vm21(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vm21__Syms(_vcontextp__, _vcname__, this)}
    , Y{vlSymsp->TOP.Y}
    , D0{vlSymsp->TOP.D0}
    , D1{vlSymsp->TOP.D1}
    , S{vlSymsp->TOP.S}
    , rootp{&(vlSymsp->TOP)}
{
}

Vm21::Vm21(const char* _vcname__)
    : Vm21(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vm21::~Vm21() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vm21___024root___eval_initial(Vm21___024root* vlSelf);
void Vm21___024root___eval_settle(Vm21___024root* vlSelf);
void Vm21___024root___eval(Vm21___024root* vlSelf);
QData Vm21___024root___change_request(Vm21___024root* vlSelf);
#ifdef VL_DEBUG
void Vm21___024root___eval_debug_assertions(Vm21___024root* vlSelf);
#endif  // VL_DEBUG
void Vm21___024root___final(Vm21___024root* vlSelf);

static void _eval_initial_loop(Vm21__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vm21___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vm21___024root___eval_settle(&(vlSymsp->TOP));
        Vm21___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vm21___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("m21.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vm21___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vm21::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vm21::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vm21___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vm21___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vm21___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("m21.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vm21___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vm21::final() {
    Vm21___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vm21::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vm21::name() const {
    return vlSymsp->name();
}
