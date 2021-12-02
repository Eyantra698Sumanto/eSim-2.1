// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdesign.h"
#include "Vdesign__Syms.h"

//============================================================
// Constructors

Vdesign::Vdesign(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdesign__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , cyc_cnt{vlSymsp->TOP.cyc_cnt}
    , passed{vlSymsp->TOP.passed}
    , failed{vlSymsp->TOP.failed}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdesign::Vdesign(const char* _vcname__)
    : Vdesign(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdesign::~Vdesign() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdesign___024root___eval_initial(Vdesign___024root* vlSelf);
void Vdesign___024root___eval_settle(Vdesign___024root* vlSelf);
void Vdesign___024root___eval(Vdesign___024root* vlSelf);
QData Vdesign___024root___change_request(Vdesign___024root* vlSelf);
#ifdef VL_DEBUG
void Vdesign___024root___eval_debug_assertions(Vdesign___024root* vlSelf);
#endif  // VL_DEBUG
void Vdesign___024root___final(Vdesign___024root* vlSelf);

static void _eval_initial_loop(Vdesign__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdesign___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdesign___024root___eval_settle(&(vlSymsp->TOP));
        Vdesign___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdesign___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("design.tlv", 9, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdesign___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdesign::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdesign::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdesign___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdesign___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdesign___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("design.tlv", 9, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdesign___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdesign::final() {
    Vdesign___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdesign::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdesign::name() const {
    return vlSymsp->name();
}
