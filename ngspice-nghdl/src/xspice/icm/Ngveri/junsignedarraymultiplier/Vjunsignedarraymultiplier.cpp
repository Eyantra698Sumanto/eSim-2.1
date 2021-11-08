// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjunsignedarraymultiplier.h"
#include "Vjunsignedarraymultiplier__Syms.h"

//============================================================
// Constructors

Vjunsignedarraymultiplier::Vjunsignedarraymultiplier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjunsignedarraymultiplier__Syms(_vcontextp__, _vcname__, this)}
    , PRODUCT{vlSymsp->TOP.PRODUCT}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , rootp{&(vlSymsp->TOP)}
{
}

Vjunsignedarraymultiplier::Vjunsignedarraymultiplier(const char* _vcname__)
    : Vjunsignedarraymultiplier(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjunsignedarraymultiplier::~Vjunsignedarraymultiplier() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjunsignedarraymultiplier___024root___eval_initial(Vjunsignedarraymultiplier___024root* vlSelf);
void Vjunsignedarraymultiplier___024root___eval_settle(Vjunsignedarraymultiplier___024root* vlSelf);
void Vjunsignedarraymultiplier___024root___eval(Vjunsignedarraymultiplier___024root* vlSelf);
QData Vjunsignedarraymultiplier___024root___change_request(Vjunsignedarraymultiplier___024root* vlSelf);
#ifdef VL_DEBUG
void Vjunsignedarraymultiplier___024root___eval_debug_assertions(Vjunsignedarraymultiplier___024root* vlSelf);
#endif  // VL_DEBUG
void Vjunsignedarraymultiplier___024root___final(Vjunsignedarraymultiplier___024root* vlSelf);

static void _eval_initial_loop(Vjunsignedarraymultiplier__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjunsignedarraymultiplier___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjunsignedarraymultiplier___024root___eval_settle(&(vlSymsp->TOP));
        Vjunsignedarraymultiplier___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjunsignedarraymultiplier___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("junsignedarraymultiplier.v", 23, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjunsignedarraymultiplier___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjunsignedarraymultiplier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjunsignedarraymultiplier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjunsignedarraymultiplier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjunsignedarraymultiplier___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjunsignedarraymultiplier___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("junsignedarraymultiplier.v", 23, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjunsignedarraymultiplier___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjunsignedarraymultiplier::final() {
    Vjunsignedarraymultiplier___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjunsignedarraymultiplier::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjunsignedarraymultiplier::name() const {
    return vlSymsp->name();
}
