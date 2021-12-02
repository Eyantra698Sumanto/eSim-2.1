// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjbuffer.h"
#include "Vjbuffer__Syms.h"

//============================================================
// Constructors

Vjbuffer::Vjbuffer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjbuffer__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
}

Vjbuffer::Vjbuffer(const char* _vcname__)
    : Vjbuffer(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjbuffer::~Vjbuffer() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjbuffer___024root___eval_initial(Vjbuffer___024root* vlSelf);
void Vjbuffer___024root___eval_settle(Vjbuffer___024root* vlSelf);
void Vjbuffer___024root___eval(Vjbuffer___024root* vlSelf);
QData Vjbuffer___024root___change_request(Vjbuffer___024root* vlSelf);
#ifdef VL_DEBUG
void Vjbuffer___024root___eval_debug_assertions(Vjbuffer___024root* vlSelf);
#endif  // VL_DEBUG
void Vjbuffer___024root___final(Vjbuffer___024root* vlSelf);

static void _eval_initial_loop(Vjbuffer__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjbuffer___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjbuffer___024root___eval_settle(&(vlSymsp->TOP));
        Vjbuffer___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjbuffer___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jbuffer.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjbuffer___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjbuffer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjbuffer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjbuffer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjbuffer___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjbuffer___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jbuffer.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjbuffer___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjbuffer::final() {
    Vjbuffer___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjbuffer::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjbuffer::name() const {
    return vlSymsp->name();
}
