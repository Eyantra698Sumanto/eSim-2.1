// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vspi.h"
#include "Vspi__Syms.h"

//============================================================
// Constructors

Vspi::Vspi(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vspi__Syms(_vcontextp__, _vcname__, this)}
    , in_data{vlSymsp->TOP.in_data}
    , clk{vlSymsp->TOP.clk}
    , addr{vlSymsp->TOP.addr}
    , wr{vlSymsp->TOP.wr}
    , rd{vlSymsp->TOP.rd}
    , cs{vlSymsp->TOP.cs}
    , out_data{vlSymsp->TOP.out_data}
    , mosi{vlSymsp->TOP.mosi}
    , miso{vlSymsp->TOP.miso}
    , sclk{vlSymsp->TOP.sclk}
    , rootp{&(vlSymsp->TOP)}
{
}

Vspi::Vspi(const char* _vcname__)
    : Vspi(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vspi::~Vspi() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vspi___024root___eval_initial(Vspi___024root* vlSelf);
void Vspi___024root___eval_settle(Vspi___024root* vlSelf);
void Vspi___024root___eval(Vspi___024root* vlSelf);
QData Vspi___024root___change_request(Vspi___024root* vlSelf);
#ifdef VL_DEBUG
void Vspi___024root___eval_debug_assertions(Vspi___024root* vlSelf);
#endif  // VL_DEBUG
void Vspi___024root___final(Vspi___024root* vlSelf);

static void _eval_initial_loop(Vspi__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vspi___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vspi___024root___eval_settle(&(vlSymsp->TOP));
        Vspi___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vspi___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("spi.v", 36, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vspi___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vspi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vspi___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vspi___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vspi___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("spi.v", 36, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vspi___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vspi::final() {
    Vspi___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vspi::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vspi::name() const {
    return vlSymsp->name();
}
