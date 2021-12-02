// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcompressor.h"
#include "Vcompressor__Syms.h"

//============================================================
// Constructors

Vcompressor::Vcompressor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcompressor__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , UnCompressedCache{vlSymsp->TOP.UnCompressedCache}
    , CompressedCache{vlSymsp->TOP.CompressedCache}
    , DeCompressedCache{vlSymsp->TOP.DeCompressedCache}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcompressor::Vcompressor(const char* _vcname__)
    : Vcompressor(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcompressor::~Vcompressor() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcompressor___024root___eval_initial(Vcompressor___024root* vlSelf);
void Vcompressor___024root___eval_settle(Vcompressor___024root* vlSelf);
void Vcompressor___024root___eval(Vcompressor___024root* vlSelf);
QData Vcompressor___024root___change_request(Vcompressor___024root* vlSelf);
#ifdef VL_DEBUG
void Vcompressor___024root___eval_debug_assertions(Vcompressor___024root* vlSelf);
#endif  // VL_DEBUG
void Vcompressor___024root___final(Vcompressor___024root* vlSelf);

static void _eval_initial_loop(Vcompressor__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcompressor___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcompressor___024root___eval_settle(&(vlSymsp->TOP));
        Vcompressor___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcompressor___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("compressor.v", 8, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcompressor___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcompressor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcompressor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcompressor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcompressor___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcompressor___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("compressor.v", 8, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcompressor___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vcompressor::final() {
    Vcompressor___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vcompressor::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcompressor::name() const {
    return vlSymsp->name();
}
