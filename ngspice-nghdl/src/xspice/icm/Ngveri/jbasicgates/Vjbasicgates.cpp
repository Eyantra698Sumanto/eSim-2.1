// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjbasicgates.h"
#include "Vjbasicgates__Syms.h"

//============================================================
// Constructors

Vjbasicgates::Vjbasicgates(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjbasicgates__Syms(_vcontextp__, _vcname__, this)}
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

Vjbasicgates::Vjbasicgates(const char* _vcname__)
    : Vjbasicgates(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjbasicgates::~Vjbasicgates() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjbasicgates___024root___eval_initial(Vjbasicgates___024root* vlSelf);
void Vjbasicgates___024root___eval_settle(Vjbasicgates___024root* vlSelf);
void Vjbasicgates___024root___eval(Vjbasicgates___024root* vlSelf);
QData Vjbasicgates___024root___change_request(Vjbasicgates___024root* vlSelf);
#ifdef VL_DEBUG
void Vjbasicgates___024root___eval_debug_assertions(Vjbasicgates___024root* vlSelf);
#endif  // VL_DEBUG
void Vjbasicgates___024root___final(Vjbasicgates___024root* vlSelf);

static void _eval_initial_loop(Vjbasicgates__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjbasicgates___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjbasicgates___024root___eval_settle(&(vlSymsp->TOP));
        Vjbasicgates___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjbasicgates___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jbasicgates.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjbasicgates___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjbasicgates::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjbasicgates::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjbasicgates___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjbasicgates___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjbasicgates___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jbasicgates.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjbasicgates___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjbasicgates::final() {
    Vjbasicgates___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjbasicgates::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjbasicgates::name() const {
    return vlSymsp->name();
}
