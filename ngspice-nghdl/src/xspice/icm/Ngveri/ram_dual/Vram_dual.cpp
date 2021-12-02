// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vram_dual.h"
#include "Vram_dual__Syms.h"

//============================================================
// Constructors

Vram_dual::Vram_dual(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vram_dual__Syms(_vcontextp__, _vcname__, this)}
    , data{vlSymsp->TOP.data}
    , read_addr{vlSymsp->TOP.read_addr}
    , write_addr{vlSymsp->TOP.write_addr}
    , we{vlSymsp->TOP.we}
    , read_clock{vlSymsp->TOP.read_clock}
    , write_clock{vlSymsp->TOP.write_clock}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
}

Vram_dual::Vram_dual(const char* _vcname__)
    : Vram_dual(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vram_dual::~Vram_dual() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vram_dual___024root___eval_initial(Vram_dual___024root* vlSelf);
void Vram_dual___024root___eval_settle(Vram_dual___024root* vlSelf);
void Vram_dual___024root___eval(Vram_dual___024root* vlSelf);
QData Vram_dual___024root___change_request(Vram_dual___024root* vlSelf);
#ifdef VL_DEBUG
void Vram_dual___024root___eval_debug_assertions(Vram_dual___024root* vlSelf);
#endif  // VL_DEBUG
void Vram_dual___024root___final(Vram_dual___024root* vlSelf);

static void _eval_initial_loop(Vram_dual__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vram_dual___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vram_dual___024root___eval_settle(&(vlSymsp->TOP));
        Vram_dual___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vram_dual___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ram_dual.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vram_dual___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vram_dual::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vram_dual::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vram_dual___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vram_dual___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vram_dual___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ram_dual.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vram_dual___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vram_dual::final() {
    Vram_dual___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vram_dual::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vram_dual::name() const {
    return vlSymsp->name();
}
