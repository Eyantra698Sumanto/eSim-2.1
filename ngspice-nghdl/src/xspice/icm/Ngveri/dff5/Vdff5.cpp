// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdff5.h"
#include "Vdff5__Syms.h"

//============================================================
// Constructors

Vdff5::Vdff5(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdff5__Syms(_vcontextp__, _vcname__, this)}
    , d{vlSymsp->TOP.d}
    , rstn{vlSymsp->TOP.rstn}
    , clk{vlSymsp->TOP.clk}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdff5::Vdff5(const char* _vcname__)
    : Vdff5(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdff5::~Vdff5() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdff5___024root___eval_initial(Vdff5___024root* vlSelf);
void Vdff5___024root___eval_settle(Vdff5___024root* vlSelf);
void Vdff5___024root___eval(Vdff5___024root* vlSelf);
QData Vdff5___024root___change_request(Vdff5___024root* vlSelf);
#ifdef VL_DEBUG
void Vdff5___024root___eval_debug_assertions(Vdff5___024root* vlSelf);
#endif  // VL_DEBUG
void Vdff5___024root___final(Vdff5___024root* vlSelf);

static void _eval_initial_loop(Vdff5__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdff5___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdff5___024root___eval_settle(&(vlSymsp->TOP));
        Vdff5___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdff5___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("dff5.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdff5___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdff5::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdff5::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdff5___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdff5___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdff5___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("dff5.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdff5___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdff5::final() {
    Vdff5___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdff5::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdff5::name() const {
    return vlSymsp->name();
}
