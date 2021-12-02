// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vledmaker.h"
#include "Vledmaker__Syms.h"

//============================================================
// Constructors

Vledmaker::Vledmaker(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vledmaker__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , cyc_cnt{vlSymsp->TOP.cyc_cnt}
    , passed{vlSymsp->TOP.passed}
    , failed{vlSymsp->TOP.failed}
    , rootp{&(vlSymsp->TOP)}
{
}

Vledmaker::Vledmaker(const char* _vcname__)
    : Vledmaker(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vledmaker::~Vledmaker() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vledmaker___024root___eval_initial(Vledmaker___024root* vlSelf);
void Vledmaker___024root___eval_settle(Vledmaker___024root* vlSelf);
void Vledmaker___024root___eval(Vledmaker___024root* vlSelf);
QData Vledmaker___024root___change_request(Vledmaker___024root* vlSelf);
#ifdef VL_DEBUG
void Vledmaker___024root___eval_debug_assertions(Vledmaker___024root* vlSelf);
#endif  // VL_DEBUG
void Vledmaker___024root___final(Vledmaker___024root* vlSelf);

static void _eval_initial_loop(Vledmaker__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vledmaker___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vledmaker___024root___eval_settle(&(vlSymsp->TOP));
        Vledmaker___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vledmaker___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ledmaker.tlv", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vledmaker___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vledmaker::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vledmaker::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vledmaker___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vledmaker___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vledmaker___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ledmaker.tlv", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vledmaker___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vledmaker::final() {
    Vledmaker___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vledmaker::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vledmaker::name() const {
    return vlSymsp->name();
}
