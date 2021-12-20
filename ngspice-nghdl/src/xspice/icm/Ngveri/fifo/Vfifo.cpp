// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfifo.h"
#include "Vfifo__Syms.h"

//============================================================
// Constructors

Vfifo::Vfifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vfifo__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rd_en{vlSymsp->TOP.rd_en}
    , wr_en{vlSymsp->TOP.wr_en}
    , datain{vlSymsp->TOP.datain}
    , dataout{vlSymsp->TOP.dataout}
    , fifo_full{vlSymsp->TOP.fifo_full}
    , fifo_empty{vlSymsp->TOP.fifo_empty}
    , fifo_threshold{vlSymsp->TOP.fifo_threshold}
    , fifo_overflow{vlSymsp->TOP.fifo_overflow}
    , fifo_underflow{vlSymsp->TOP.fifo_underflow}
    , rootp{&(vlSymsp->TOP)}
{
}

Vfifo::Vfifo(const char* _vcname__)
    : Vfifo(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vfifo::~Vfifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfifo___024root___eval_initial(Vfifo___024root* vlSelf);
void Vfifo___024root___eval_settle(Vfifo___024root* vlSelf);
void Vfifo___024root___eval(Vfifo___024root* vlSelf);
QData Vfifo___024root___change_request(Vfifo___024root* vlSelf);
#ifdef VL_DEBUG
void Vfifo___024root___eval_debug_assertions(Vfifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vfifo___024root___final(Vfifo___024root* vlSelf);

static void _eval_initial_loop(Vfifo__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfifo___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfifo___024root___eval_settle(&(vlSymsp->TOP));
        Vfifo___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfifo___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("fifo.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfifo___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfifo___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfifo___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("fifo.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfifo___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vfifo::final() {
    Vfifo___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vfifo::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vfifo::name() const {
    return vlSymsp->name();
}
