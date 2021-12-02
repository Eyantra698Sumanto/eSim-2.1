// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vone_hot_cnt.h"
#include "Vone_hot_cnt__Syms.h"

//============================================================
// Constructors

Vone_hot_cnt::Vone_hot_cnt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vone_hot_cnt__Syms(_vcontextp__, _vcname__, this)}
    , out{vlSymsp->TOP.out}
    , enable{vlSymsp->TOP.enable}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

Vone_hot_cnt::Vone_hot_cnt(const char* _vcname__)
    : Vone_hot_cnt(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vone_hot_cnt::~Vone_hot_cnt() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vone_hot_cnt___024root___eval_initial(Vone_hot_cnt___024root* vlSelf);
void Vone_hot_cnt___024root___eval_settle(Vone_hot_cnt___024root* vlSelf);
void Vone_hot_cnt___024root___eval(Vone_hot_cnt___024root* vlSelf);
QData Vone_hot_cnt___024root___change_request(Vone_hot_cnt___024root* vlSelf);
#ifdef VL_DEBUG
void Vone_hot_cnt___024root___eval_debug_assertions(Vone_hot_cnt___024root* vlSelf);
#endif  // VL_DEBUG
void Vone_hot_cnt___024root___final(Vone_hot_cnt___024root* vlSelf);

static void _eval_initial_loop(Vone_hot_cnt__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vone_hot_cnt___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vone_hot_cnt___024root___eval_settle(&(vlSymsp->TOP));
        Vone_hot_cnt___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vone_hot_cnt___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("one_hot_cnt.v", 11, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vone_hot_cnt___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vone_hot_cnt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vone_hot_cnt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vone_hot_cnt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vone_hot_cnt___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vone_hot_cnt___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("one_hot_cnt.v", 11, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vone_hot_cnt___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vone_hot_cnt::final() {
    Vone_hot_cnt___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vone_hot_cnt::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vone_hot_cnt::name() const {
    return vlSymsp->name();
}
