// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vapb.h"
#include "Vapb__Syms.h"

//============================================================
// Constructors

Vapb::Vapb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vapb__Syms(_vcontextp__, _vcname__, this)}
    , pclk{vlSymsp->TOP.pclk}
    , pwrite{vlSymsp->TOP.pwrite}
    , preset{vlSymsp->TOP.preset}
    , penable{vlSymsp->TOP.penable}
    , psel{vlSymsp->TOP.psel}
    , paddress{vlSymsp->TOP.paddress}
    , pwdata{vlSymsp->TOP.pwdata}
    , prdata{vlSymsp->TOP.prdata}
    , pready{vlSymsp->TOP.pready}
    , rootp{&(vlSymsp->TOP)}
{
}

Vapb::Vapb(const char* _vcname__)
    : Vapb(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vapb::~Vapb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vapb___024root___eval_initial(Vapb___024root* vlSelf);
void Vapb___024root___eval_settle(Vapb___024root* vlSelf);
void Vapb___024root___eval(Vapb___024root* vlSelf);
QData Vapb___024root___change_request(Vapb___024root* vlSelf);
#ifdef VL_DEBUG
void Vapb___024root___eval_debug_assertions(Vapb___024root* vlSelf);
#endif  // VL_DEBUG
void Vapb___024root___final(Vapb___024root* vlSelf);

static void _eval_initial_loop(Vapb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vapb___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vapb___024root___eval_settle(&(vlSymsp->TOP));
        Vapb___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vapb___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("apb.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vapb___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vapb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vapb___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vapb___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("apb.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vapb___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vapb::final() {
    Vapb___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vapb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vapb::name() const {
    return vlSymsp->name();
}
