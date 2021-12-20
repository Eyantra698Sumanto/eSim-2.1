// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vram1.h"
#include "Vram1__Syms.h"

//============================================================
// Constructors

Vram1::Vram1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vram1__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , cs{vlSymsp->TOP.cs}
    , read{vlSymsp->TOP.read}
    , write{vlSymsp->TOP.write}
    , dataread{vlSymsp->TOP.dataread}
    , datawrite{vlSymsp->TOP.datawrite}
    , address{vlSymsp->TOP.address}
    , rootp{&(vlSymsp->TOP)}
{
}

Vram1::Vram1(const char* _vcname__)
    : Vram1(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vram1::~Vram1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vram1___024root___eval_initial(Vram1___024root* vlSelf);
void Vram1___024root___eval_settle(Vram1___024root* vlSelf);
void Vram1___024root___eval(Vram1___024root* vlSelf);
QData Vram1___024root___change_request(Vram1___024root* vlSelf);
#ifdef VL_DEBUG
void Vram1___024root___eval_debug_assertions(Vram1___024root* vlSelf);
#endif  // VL_DEBUG
void Vram1___024root___final(Vram1___024root* vlSelf);

static void _eval_initial_loop(Vram1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vram1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vram1___024root___eval_settle(&(vlSymsp->TOP));
        Vram1___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vram1___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ram1.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vram1___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vram1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vram1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vram1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vram1___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vram1___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ram1.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vram1___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vram1::final() {
    Vram1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vram1::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vram1::name() const {
    return vlSymsp->name();
}
