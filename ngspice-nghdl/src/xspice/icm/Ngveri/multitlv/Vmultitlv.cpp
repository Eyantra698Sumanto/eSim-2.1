// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmultitlv.h"
#include "Vmultitlv__Syms.h"

//============================================================
// Constructors

Vmultitlv::Vmultitlv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmultitlv__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , cyc_cnt{vlSymsp->TOP.cyc_cnt}
    , passed{vlSymsp->TOP.passed}
    , failed{vlSymsp->TOP.failed}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmultitlv::Vmultitlv(const char* _vcname__)
    : Vmultitlv(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmultitlv::~Vmultitlv() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmultitlv___024root___eval_initial(Vmultitlv___024root* vlSelf);
void Vmultitlv___024root___eval_settle(Vmultitlv___024root* vlSelf);
void Vmultitlv___024root___eval(Vmultitlv___024root* vlSelf);
QData Vmultitlv___024root___change_request(Vmultitlv___024root* vlSelf);
#ifdef VL_DEBUG
void Vmultitlv___024root___eval_debug_assertions(Vmultitlv___024root* vlSelf);
#endif  // VL_DEBUG
void Vmultitlv___024root___final(Vmultitlv___024root* vlSelf);

static void _eval_initial_loop(Vmultitlv__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmultitlv___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmultitlv___024root___eval_settle(&(vlSymsp->TOP));
        Vmultitlv___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmultitlv___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("multitlv.tlv", 9, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmultitlv___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmultitlv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmultitlv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmultitlv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmultitlv___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmultitlv___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("multitlv.tlv", 9, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmultitlv___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vmultitlv::final() {
    Vmultitlv___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vmultitlv::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmultitlv::name() const {
    return vlSymsp->name();
}
