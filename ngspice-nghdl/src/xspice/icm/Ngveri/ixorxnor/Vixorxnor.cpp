// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vixorxnor.h"
#include "Vixorxnor__Syms.h"

//============================================================
// Constructors

Vixorxnor::Vixorxnor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vixorxnor__Syms(_vcontextp__, _vcname__, this)}
    , yOR{vlSymsp->TOP.yOR}
    , yAND{vlSymsp->TOP.yAND}
    , yXOR{vlSymsp->TOP.yXOR}
    , yNOR{vlSymsp->TOP.yNOR}
    , yNAND{vlSymsp->TOP.yNAND}
    , yXNOR{vlSymsp->TOP.yXNOR}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , rootp{&(vlSymsp->TOP)}
{
}

Vixorxnor::Vixorxnor(const char* _vcname__)
    : Vixorxnor(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vixorxnor::~Vixorxnor() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vixorxnor___024root___eval_initial(Vixorxnor___024root* vlSelf);
void Vixorxnor___024root___eval_settle(Vixorxnor___024root* vlSelf);
void Vixorxnor___024root___eval(Vixorxnor___024root* vlSelf);
QData Vixorxnor___024root___change_request(Vixorxnor___024root* vlSelf);
#ifdef VL_DEBUG
void Vixorxnor___024root___eval_debug_assertions(Vixorxnor___024root* vlSelf);
#endif  // VL_DEBUG
void Vixorxnor___024root___final(Vixorxnor___024root* vlSelf);

static void _eval_initial_loop(Vixorxnor__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vixorxnor___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vixorxnor___024root___eval_settle(&(vlSymsp->TOP));
        Vixorxnor___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vixorxnor___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ixorxnor.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vixorxnor___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vixorxnor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vixorxnor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vixorxnor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vixorxnor___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vixorxnor___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ixorxnor.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vixorxnor___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vixorxnor::final() {
    Vixorxnor___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vixorxnor::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vixorxnor::name() const {
    return vlSymsp->name();
}
