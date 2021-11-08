// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjfsmmealywithoverlap.h"
#include "Vjfsmmealywithoverlap__Syms.h"

//============================================================
// Constructors

Vjfsmmealywithoverlap::Vjfsmmealywithoverlap(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjfsmmealywithoverlap__Syms(_vcontextp__, _vcname__, this)}
    , dataout{vlSymsp->TOP.dataout}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , datain{vlSymsp->TOP.datain}
    , rootp{&(vlSymsp->TOP)}
{
}

Vjfsmmealywithoverlap::Vjfsmmealywithoverlap(const char* _vcname__)
    : Vjfsmmealywithoverlap(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjfsmmealywithoverlap::~Vjfsmmealywithoverlap() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjfsmmealywithoverlap___024root___eval_initial(Vjfsmmealywithoverlap___024root* vlSelf);
void Vjfsmmealywithoverlap___024root___eval_settle(Vjfsmmealywithoverlap___024root* vlSelf);
void Vjfsmmealywithoverlap___024root___eval(Vjfsmmealywithoverlap___024root* vlSelf);
QData Vjfsmmealywithoverlap___024root___change_request(Vjfsmmealywithoverlap___024root* vlSelf);
#ifdef VL_DEBUG
void Vjfsmmealywithoverlap___024root___eval_debug_assertions(Vjfsmmealywithoverlap___024root* vlSelf);
#endif  // VL_DEBUG
void Vjfsmmealywithoverlap___024root___final(Vjfsmmealywithoverlap___024root* vlSelf);

static void _eval_initial_loop(Vjfsmmealywithoverlap__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjfsmmealywithoverlap___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjfsmmealywithoverlap___024root___eval_settle(&(vlSymsp->TOP));
        Vjfsmmealywithoverlap___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjfsmmealywithoverlap___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jfsmmealywithoverlap.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjfsmmealywithoverlap___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjfsmmealywithoverlap::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjfsmmealywithoverlap::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjfsmmealywithoverlap___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjfsmmealywithoverlap___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjfsmmealywithoverlap___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jfsmmealywithoverlap.v", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjfsmmealywithoverlap___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjfsmmealywithoverlap::final() {
    Vjfsmmealywithoverlap___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjfsmmealywithoverlap::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjfsmmealywithoverlap::name() const {
    return vlSymsp->name();
}
