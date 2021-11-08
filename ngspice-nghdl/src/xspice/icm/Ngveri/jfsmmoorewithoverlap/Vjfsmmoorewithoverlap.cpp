// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjfsmmoorewithoverlap.h"
#include "Vjfsmmoorewithoverlap__Syms.h"

//============================================================
// Constructors

Vjfsmmoorewithoverlap::Vjfsmmoorewithoverlap(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjfsmmoorewithoverlap__Syms(_vcontextp__, _vcname__, this)}
    , dataout{vlSymsp->TOP.dataout}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , datain{vlSymsp->TOP.datain}
    , rootp{&(vlSymsp->TOP)}
{
}

Vjfsmmoorewithoverlap::Vjfsmmoorewithoverlap(const char* _vcname__)
    : Vjfsmmoorewithoverlap(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjfsmmoorewithoverlap::~Vjfsmmoorewithoverlap() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjfsmmoorewithoverlap___024root___eval_initial(Vjfsmmoorewithoverlap___024root* vlSelf);
void Vjfsmmoorewithoverlap___024root___eval_settle(Vjfsmmoorewithoverlap___024root* vlSelf);
void Vjfsmmoorewithoverlap___024root___eval(Vjfsmmoorewithoverlap___024root* vlSelf);
QData Vjfsmmoorewithoverlap___024root___change_request(Vjfsmmoorewithoverlap___024root* vlSelf);
#ifdef VL_DEBUG
void Vjfsmmoorewithoverlap___024root___eval_debug_assertions(Vjfsmmoorewithoverlap___024root* vlSelf);
#endif  // VL_DEBUG
void Vjfsmmoorewithoverlap___024root___final(Vjfsmmoorewithoverlap___024root* vlSelf);

static void _eval_initial_loop(Vjfsmmoorewithoverlap__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjfsmmoorewithoverlap___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjfsmmoorewithoverlap___024root___eval_settle(&(vlSymsp->TOP));
        Vjfsmmoorewithoverlap___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjfsmmoorewithoverlap___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jfsmmoorewithoverlap.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjfsmmoorewithoverlap___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjfsmmoorewithoverlap::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjfsmmoorewithoverlap::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjfsmmoorewithoverlap___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjfsmmoorewithoverlap___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjfsmmoorewithoverlap___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jfsmmoorewithoverlap.v", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjfsmmoorewithoverlap___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjfsmmoorewithoverlap::final() {
    Vjfsmmoorewithoverlap___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjfsmmoorewithoverlap::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjfsmmoorewithoverlap::name() const {
    return vlSymsp->name();
}
