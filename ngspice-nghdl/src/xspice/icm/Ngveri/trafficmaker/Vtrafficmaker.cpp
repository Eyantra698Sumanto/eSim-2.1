// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtrafficmaker.h"
#include "Vtrafficmaker__Syms.h"

//============================================================
// Constructors

Vtrafficmaker::Vtrafficmaker(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtrafficmaker__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , cyc_cnt{vlSymsp->TOP.cyc_cnt}
    , passed{vlSymsp->TOP.passed}
    , failed{vlSymsp->TOP.failed}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtrafficmaker::Vtrafficmaker(const char* _vcname__)
    : Vtrafficmaker(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtrafficmaker::~Vtrafficmaker() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtrafficmaker___024root___eval_initial(Vtrafficmaker___024root* vlSelf);
void Vtrafficmaker___024root___eval_settle(Vtrafficmaker___024root* vlSelf);
void Vtrafficmaker___024root___eval(Vtrafficmaker___024root* vlSelf);
QData Vtrafficmaker___024root___change_request(Vtrafficmaker___024root* vlSelf);
#ifdef VL_DEBUG
void Vtrafficmaker___024root___eval_debug_assertions(Vtrafficmaker___024root* vlSelf);
#endif  // VL_DEBUG
void Vtrafficmaker___024root___final(Vtrafficmaker___024root* vlSelf);

static void _eval_initial_loop(Vtrafficmaker__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtrafficmaker___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtrafficmaker___024root___eval_settle(&(vlSymsp->TOP));
        Vtrafficmaker___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtrafficmaker___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("trafficmaker.tlv", 5, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtrafficmaker___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtrafficmaker::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtrafficmaker::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtrafficmaker___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtrafficmaker___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtrafficmaker___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("trafficmaker.tlv", 5, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtrafficmaker___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtrafficmaker::final() {
    Vtrafficmaker___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtrafficmaker::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtrafficmaker::name() const {
    return vlSymsp->name();
}
