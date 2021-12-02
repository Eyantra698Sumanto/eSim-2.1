// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vparallel_crc.h"
#include "Vparallel_crc__Syms.h"

//============================================================
// Constructors

Vparallel_crc::Vparallel_crc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vparallel_crc__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , enable{vlSymsp->TOP.enable}
    , init{vlSymsp->TOP.init}
    , data_in{vlSymsp->TOP.data_in}
    , crc_out{vlSymsp->TOP.crc_out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vparallel_crc::Vparallel_crc(const char* _vcname__)
    : Vparallel_crc(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vparallel_crc::~Vparallel_crc() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vparallel_crc___024root___eval_initial(Vparallel_crc___024root* vlSelf);
void Vparallel_crc___024root___eval_settle(Vparallel_crc___024root* vlSelf);
void Vparallel_crc___024root___eval(Vparallel_crc___024root* vlSelf);
QData Vparallel_crc___024root___change_request(Vparallel_crc___024root* vlSelf);
#ifdef VL_DEBUG
void Vparallel_crc___024root___eval_debug_assertions(Vparallel_crc___024root* vlSelf);
#endif  // VL_DEBUG
void Vparallel_crc___024root___final(Vparallel_crc___024root* vlSelf);

static void _eval_initial_loop(Vparallel_crc__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vparallel_crc___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vparallel_crc___024root___eval_settle(&(vlSymsp->TOP));
        Vparallel_crc___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vparallel_crc___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("parallel_crc.v", 8, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vparallel_crc___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vparallel_crc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vparallel_crc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vparallel_crc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vparallel_crc___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vparallel_crc___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("parallel_crc.v", 8, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vparallel_crc___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vparallel_crc::final() {
    Vparallel_crc___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vparallel_crc::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vparallel_crc::name() const {
    return vlSymsp->name();
}
