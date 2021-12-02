// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclk_div_45.h"
#include "Vclk_div_45__Syms.h"

//============================================================
// Constructors

Vclk_div_45::Vclk_div_45(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vclk_div_45__Syms(_vcontextp__, _vcname__, this)}
    , clk_in{vlSymsp->TOP.clk_in}
    , enable{vlSymsp->TOP.enable}
    , clk_out{vlSymsp->TOP.clk_out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vclk_div_45::Vclk_div_45(const char* _vcname__)
    : Vclk_div_45(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vclk_div_45::~Vclk_div_45() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vclk_div_45___024root___eval_initial(Vclk_div_45___024root* vlSelf);
void Vclk_div_45___024root___eval_settle(Vclk_div_45___024root* vlSelf);
void Vclk_div_45___024root___eval(Vclk_div_45___024root* vlSelf);
QData Vclk_div_45___024root___change_request(Vclk_div_45___024root* vlSelf);
#ifdef VL_DEBUG
void Vclk_div_45___024root___eval_debug_assertions(Vclk_div_45___024root* vlSelf);
#endif  // VL_DEBUG
void Vclk_div_45___024root___final(Vclk_div_45___024root* vlSelf);

static void _eval_initial_loop(Vclk_div_45__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vclk_div_45___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vclk_div_45___024root___eval_settle(&(vlSymsp->TOP));
        Vclk_div_45___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vclk_div_45___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("clk_div_45.v", 13, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vclk_div_45___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vclk_div_45::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclk_div_45::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclk_div_45___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vclk_div_45___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vclk_div_45___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("clk_div_45.v", 13, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vclk_div_45___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vclk_div_45::final() {
    Vclk_div_45___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vclk_div_45::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vclk_div_45::name() const {
    return vlSymsp->name();
}
