// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vm12.h"
#include "Vm12__Syms.h"

//============================================================
// Constructors

Vm12::Vm12(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vm12__Syms(_vcontextp__, _vcname__, this)}
    , Y{vlSymsp->TOP.Y}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , rootp{&(vlSymsp->TOP)}
{
}

Vm12::Vm12(const char* _vcname__)
    : Vm12(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vm12::~Vm12() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vm12___024root___eval_initial(Vm12___024root* vlSelf);
void Vm12___024root___eval_settle(Vm12___024root* vlSelf);
void Vm12___024root___eval(Vm12___024root* vlSelf);
QData Vm12___024root___change_request(Vm12___024root* vlSelf);
#ifdef VL_DEBUG
void Vm12___024root___eval_debug_assertions(Vm12___024root* vlSelf);
#endif  // VL_DEBUG
void Vm12___024root___final(Vm12___024root* vlSelf);

static void _eval_initial_loop(Vm12__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vm12___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vm12___024root___eval_settle(&(vlSymsp->TOP));
        Vm12___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vm12___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("m12.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vm12___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vm12::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vm12::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vm12___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vm12___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vm12___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("m12.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vm12___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vm12::final() {
    Vm12___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vm12::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vm12::name() const {
    return vlSymsp->name();
}
