// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vus_sensor.h"
#include "Vus_sensor__Syms.h"

//============================================================
// Constructors

Vus_sensor::Vus_sensor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vus_sensor__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , echo{vlSymsp->TOP.echo}
    , atrigger{vlSymsp->TOP.atrigger}
    , ss{vlSymsp->TOP.ss}
    , en{vlSymsp->TOP.en}
    , rootp{&(vlSymsp->TOP)}
{
}

Vus_sensor::Vus_sensor(const char* _vcname__)
    : Vus_sensor(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vus_sensor::~Vus_sensor() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vus_sensor___024root___eval_initial(Vus_sensor___024root* vlSelf);
void Vus_sensor___024root___eval_settle(Vus_sensor___024root* vlSelf);
void Vus_sensor___024root___eval(Vus_sensor___024root* vlSelf);
QData Vus_sensor___024root___change_request(Vus_sensor___024root* vlSelf);
#ifdef VL_DEBUG
void Vus_sensor___024root___eval_debug_assertions(Vus_sensor___024root* vlSelf);
#endif  // VL_DEBUG
void Vus_sensor___024root___final(Vus_sensor___024root* vlSelf);

static void _eval_initial_loop(Vus_sensor__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vus_sensor___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vus_sensor___024root___eval_settle(&(vlSymsp->TOP));
        Vus_sensor___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vus_sensor___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("us_sensor.v", 26, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vus_sensor___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vus_sensor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vus_sensor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vus_sensor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vus_sensor___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vus_sensor___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("us_sensor.v", 26, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vus_sensor___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vus_sensor::final() {
    Vus_sensor___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vus_sensor::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vus_sensor::name() const {
    return vlSymsp->name();
}
