// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Varbiter.h"
#include "Varbiter__Syms.h"

//============================================================
// Constructors

Varbiter::Varbiter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Varbiter__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , req3{vlSymsp->TOP.req3}
    , req2{vlSymsp->TOP.req2}
    , req1{vlSymsp->TOP.req1}
    , req0{vlSymsp->TOP.req0}
    , gnt3{vlSymsp->TOP.gnt3}
    , gnt2{vlSymsp->TOP.gnt2}
    , gnt1{vlSymsp->TOP.gnt1}
    , gnt0{vlSymsp->TOP.gnt0}
    , rootp{&(vlSymsp->TOP)}
{
}

Varbiter::Varbiter(const char* _vcname__)
    : Varbiter(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Varbiter::~Varbiter() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Varbiter___024root___eval_initial(Varbiter___024root* vlSelf);
void Varbiter___024root___eval_settle(Varbiter___024root* vlSelf);
void Varbiter___024root___eval(Varbiter___024root* vlSelf);
QData Varbiter___024root___change_request(Varbiter___024root* vlSelf);
#ifdef VL_DEBUG
void Varbiter___024root___eval_debug_assertions(Varbiter___024root* vlSelf);
#endif  // VL_DEBUG
void Varbiter___024root___final(Varbiter___024root* vlSelf);

static void _eval_initial_loop(Varbiter__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Varbiter___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Varbiter___024root___eval_settle(&(vlSymsp->TOP));
        Varbiter___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Varbiter___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("arbiter.v", 6, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Varbiter___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Varbiter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Varbiter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Varbiter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Varbiter___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Varbiter___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("arbiter.v", 6, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Varbiter___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Varbiter::final() {
    Varbiter___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Varbiter::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Varbiter::name() const {
    return vlSymsp->name();
}
