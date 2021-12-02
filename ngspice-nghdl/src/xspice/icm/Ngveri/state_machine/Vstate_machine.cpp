// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstate_machine.h"
#include "Vstate_machine__Syms.h"

//============================================================
// Constructors

Vstate_machine::Vstate_machine(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vstate_machine__Syms(_vcontextp__, _vcname__, this)}
    , data_out{vlSymsp->TOP.data_out}
    , clk{vlSymsp->TOP.clk}
    , data_in{vlSymsp->TOP.data_in}
    , reset{vlSymsp->TOP.reset}
    , __pinNumber5{vlSymsp->TOP.__pinNumber5}
    , rootp{&(vlSymsp->TOP)}
{
}

Vstate_machine::Vstate_machine(const char* _vcname__)
    : Vstate_machine(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vstate_machine::~Vstate_machine() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vstate_machine___024root___eval_initial(Vstate_machine___024root* vlSelf);
void Vstate_machine___024root___eval_settle(Vstate_machine___024root* vlSelf);
void Vstate_machine___024root___eval(Vstate_machine___024root* vlSelf);
QData Vstate_machine___024root___change_request(Vstate_machine___024root* vlSelf);
#ifdef VL_DEBUG
void Vstate_machine___024root___eval_debug_assertions(Vstate_machine___024root* vlSelf);
#endif  // VL_DEBUG
void Vstate_machine___024root___final(Vstate_machine___024root* vlSelf);

static void _eval_initial_loop(Vstate_machine__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vstate_machine___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vstate_machine___024root___eval_settle(&(vlSymsp->TOP));
        Vstate_machine___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vstate_machine___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("state_machine.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vstate_machine___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vstate_machine::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstate_machine::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstate_machine___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vstate_machine___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vstate_machine___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("state_machine.v", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vstate_machine___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vstate_machine::final() {
    Vstate_machine___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vstate_machine::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vstate_machine::name() const {
    return vlSymsp->name();
}
