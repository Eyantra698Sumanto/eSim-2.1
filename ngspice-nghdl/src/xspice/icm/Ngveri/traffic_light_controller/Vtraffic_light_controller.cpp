// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtraffic_light_controller.h"
#include "Vtraffic_light_controller__Syms.h"

//============================================================
// Constructors

Vtraffic_light_controller::Vtraffic_light_controller(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtraffic_light_controller__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , light_M1{vlSymsp->TOP.light_M1}
    , light_S{vlSymsp->TOP.light_S}
    , light_MT{vlSymsp->TOP.light_MT}
    , light_M2{vlSymsp->TOP.light_M2}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtraffic_light_controller::Vtraffic_light_controller(const char* _vcname__)
    : Vtraffic_light_controller(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtraffic_light_controller::~Vtraffic_light_controller() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtraffic_light_controller___024root___eval_initial(Vtraffic_light_controller___024root* vlSelf);
void Vtraffic_light_controller___024root___eval_settle(Vtraffic_light_controller___024root* vlSelf);
void Vtraffic_light_controller___024root___eval(Vtraffic_light_controller___024root* vlSelf);
QData Vtraffic_light_controller___024root___change_request(Vtraffic_light_controller___024root* vlSelf);
#ifdef VL_DEBUG
void Vtraffic_light_controller___024root___eval_debug_assertions(Vtraffic_light_controller___024root* vlSelf);
#endif  // VL_DEBUG
void Vtraffic_light_controller___024root___final(Vtraffic_light_controller___024root* vlSelf);

static void _eval_initial_loop(Vtraffic_light_controller__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtraffic_light_controller___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtraffic_light_controller___024root___eval_settle(&(vlSymsp->TOP));
        Vtraffic_light_controller___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtraffic_light_controller___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("traffic_light_controller.v", 38, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtraffic_light_controller___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtraffic_light_controller::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtraffic_light_controller::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtraffic_light_controller___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtraffic_light_controller___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtraffic_light_controller___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("traffic_light_controller.v", 38, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtraffic_light_controller___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtraffic_light_controller::final() {
    Vtraffic_light_controller___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtraffic_light_controller::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtraffic_light_controller::name() const {
    return vlSymsp->name();
}
