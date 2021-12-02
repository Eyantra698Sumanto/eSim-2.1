// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrom_using_file.h"
#include "Vrom_using_file__Syms.h"

//============================================================
// Constructors

Vrom_using_file::Vrom_using_file(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vrom_using_file__Syms(_vcontextp__, _vcname__, this)}
    , address{vlSymsp->TOP.address}
    , data{vlSymsp->TOP.data}
    , read_en{vlSymsp->TOP.read_en}
    , ce{vlSymsp->TOP.ce}
    , rootp{&(vlSymsp->TOP)}
{
}

Vrom_using_file::Vrom_using_file(const char* _vcname__)
    : Vrom_using_file(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vrom_using_file::~Vrom_using_file() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vrom_using_file___024root___eval_initial(Vrom_using_file___024root* vlSelf);
void Vrom_using_file___024root___eval_settle(Vrom_using_file___024root* vlSelf);
void Vrom_using_file___024root___eval(Vrom_using_file___024root* vlSelf);
QData Vrom_using_file___024root___change_request(Vrom_using_file___024root* vlSelf);
#ifdef VL_DEBUG
void Vrom_using_file___024root___eval_debug_assertions(Vrom_using_file___024root* vlSelf);
#endif  // VL_DEBUG
void Vrom_using_file___024root___final(Vrom_using_file___024root* vlSelf);

static void _eval_initial_loop(Vrom_using_file__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vrom_using_file___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vrom_using_file___024root___eval_settle(&(vlSymsp->TOP));
        Vrom_using_file___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrom_using_file___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rom_using_file.v", 8, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrom_using_file___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vrom_using_file::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrom_using_file::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrom_using_file___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vrom_using_file___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrom_using_file___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rom_using_file.v", 8, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrom_using_file___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vrom_using_file::final() {
    Vrom_using_file___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vrom_using_file::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vrom_using_file::name() const {
    return vlSymsp->name();
}
