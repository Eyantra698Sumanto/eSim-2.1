// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vintr_cntrl.h"
#include "Vintr_cntrl__Syms.h"

//============================================================
// Constructors

Vintr_cntrl::Vintr_cntrl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vintr_cntrl__Syms(_vcontextp__, _vcname__, this)}
    , clk_in{vlSymsp->TOP.clk_in}
    , rst_in{vlSymsp->TOP.rst_in}
    , intr_rq{vlSymsp->TOP.intr_rq}
    , intr_bus{vlSymsp->TOP.intr_bus}
    , intr_in{vlSymsp->TOP.intr_in}
    , intr_out{vlSymsp->TOP.intr_out}
    , bus_oe{vlSymsp->TOP.bus_oe}
    , rootp{&(vlSymsp->TOP)}
{
}

Vintr_cntrl::Vintr_cntrl(const char* _vcname__)
    : Vintr_cntrl(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vintr_cntrl::~Vintr_cntrl() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vintr_cntrl___024root___eval_initial(Vintr_cntrl___024root* vlSelf);
void Vintr_cntrl___024root___eval_settle(Vintr_cntrl___024root* vlSelf);
void Vintr_cntrl___024root___eval(Vintr_cntrl___024root* vlSelf);
QData Vintr_cntrl___024root___change_request(Vintr_cntrl___024root* vlSelf);
#ifdef VL_DEBUG
void Vintr_cntrl___024root___eval_debug_assertions(Vintr_cntrl___024root* vlSelf);
#endif  // VL_DEBUG
void Vintr_cntrl___024root___final(Vintr_cntrl___024root* vlSelf);

static void _eval_initial_loop(Vintr_cntrl__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vintr_cntrl___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vintr_cntrl___024root___eval_settle(&(vlSymsp->TOP));
        Vintr_cntrl___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vintr_cntrl___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("intr_cntrl.v", 46, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vintr_cntrl___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vintr_cntrl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vintr_cntrl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vintr_cntrl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vintr_cntrl___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vintr_cntrl___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("intr_cntrl.v", 46, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vintr_cntrl___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vintr_cntrl::final() {
    Vintr_cntrl___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vintr_cntrl::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vintr_cntrl::name() const {
    return vlSymsp->name();
}
