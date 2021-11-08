// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjboothmultiplier.h"
#include "Vjboothmultiplier__Syms.h"

//============================================================
// Constructors

Vjboothmultiplier::Vjboothmultiplier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjboothmultiplier__Syms(_vcontextp__, _vcname__, this)}
    , PRODUCT{vlSymsp->TOP.PRODUCT}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , rootp{&(vlSymsp->TOP)}
{
}

Vjboothmultiplier::Vjboothmultiplier(const char* _vcname__)
    : Vjboothmultiplier(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjboothmultiplier::~Vjboothmultiplier() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjboothmultiplier___024root___eval_initial(Vjboothmultiplier___024root* vlSelf);
void Vjboothmultiplier___024root___eval_settle(Vjboothmultiplier___024root* vlSelf);
void Vjboothmultiplier___024root___eval(Vjboothmultiplier___024root* vlSelf);
QData Vjboothmultiplier___024root___change_request(Vjboothmultiplier___024root* vlSelf);
#ifdef VL_DEBUG
void Vjboothmultiplier___024root___eval_debug_assertions(Vjboothmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
void Vjboothmultiplier___024root___final(Vjboothmultiplier___024root* vlSelf);

static void _eval_initial_loop(Vjboothmultiplier__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjboothmultiplier___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjboothmultiplier___024root___eval_settle(&(vlSymsp->TOP));
        Vjboothmultiplier___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjboothmultiplier___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jboothmultiplier.v", 5, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjboothmultiplier___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjboothmultiplier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjboothmultiplier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjboothmultiplier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjboothmultiplier___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjboothmultiplier___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jboothmultiplier.v", 5, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjboothmultiplier___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjboothmultiplier::final() {
    Vjboothmultiplier___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjboothmultiplier::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjboothmultiplier::name() const {
    return vlSymsp->name();
}
