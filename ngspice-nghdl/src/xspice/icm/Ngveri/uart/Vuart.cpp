// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuart.h"
#include "Vuart__Syms.h"

//============================================================
// Constructors

Vuart::Vuart(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vuart__Syms(_vcontextp__, _vcname__, this)}
    , reset{vlSymsp->TOP.reset}
    , txclk{vlSymsp->TOP.txclk}
    , ld_tx_data{vlSymsp->TOP.ld_tx_data}
    , tx_data{vlSymsp->TOP.tx_data}
    , tx_enable{vlSymsp->TOP.tx_enable}
    , tx_out{vlSymsp->TOP.tx_out}
    , tx_empty{vlSymsp->TOP.tx_empty}
    , rxclk{vlSymsp->TOP.rxclk}
    , uld_rx_data{vlSymsp->TOP.uld_rx_data}
    , rx_data{vlSymsp->TOP.rx_data}
    , rx_enable{vlSymsp->TOP.rx_enable}
    , rx_in{vlSymsp->TOP.rx_in}
    , rx_empty{vlSymsp->TOP.rx_empty}
    , rootp{&(vlSymsp->TOP)}
{
}

Vuart::Vuart(const char* _vcname__)
    : Vuart(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vuart::~Vuart() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vuart___024root___eval_initial(Vuart___024root* vlSelf);
void Vuart___024root___eval_settle(Vuart___024root* vlSelf);
void Vuart___024root___eval(Vuart___024root* vlSelf);
QData Vuart___024root___change_request(Vuart___024root* vlSelf);
#ifdef VL_DEBUG
void Vuart___024root___eval_debug_assertions(Vuart___024root* vlSelf);
#endif  // VL_DEBUG
void Vuart___024root___final(Vuart___024root* vlSelf);

static void _eval_initial_loop(Vuart__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vuart___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vuart___024root___eval_settle(&(vlSymsp->TOP));
        Vuart___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vuart___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("uart.v", 8, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vuart___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vuart::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuart::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuart___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vuart___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vuart___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("uart.v", 8, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vuart___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vuart::final() {
    Vuart___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vuart::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vuart::name() const {
    return vlSymsp->name();
}
