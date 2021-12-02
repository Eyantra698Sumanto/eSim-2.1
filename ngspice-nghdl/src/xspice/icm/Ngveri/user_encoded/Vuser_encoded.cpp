// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuser_encoded.h"
#include "Vuser_encoded__Syms.h"

//============================================================
// Constructors

Vuser_encoded::Vuser_encoded(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vuser_encoded__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , data_in{vlSymsp->TOP.data_in}
    , reset{vlSymsp->TOP.reset}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vuser_encoded::Vuser_encoded(const char* _vcname__)
    : Vuser_encoded(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vuser_encoded::~Vuser_encoded() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vuser_encoded___024root___eval_initial(Vuser_encoded___024root* vlSelf);
void Vuser_encoded___024root___eval_settle(Vuser_encoded___024root* vlSelf);
void Vuser_encoded___024root___eval(Vuser_encoded___024root* vlSelf);
QData Vuser_encoded___024root___change_request(Vuser_encoded___024root* vlSelf);
#ifdef VL_DEBUG
void Vuser_encoded___024root___eval_debug_assertions(Vuser_encoded___024root* vlSelf);
#endif  // VL_DEBUG
void Vuser_encoded___024root___final(Vuser_encoded___024root* vlSelf);

static void _eval_initial_loop(Vuser_encoded__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vuser_encoded___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vuser_encoded___024root___eval_settle(&(vlSymsp->TOP));
        Vuser_encoded___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vuser_encoded___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("user_encoded.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vuser_encoded___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vuser_encoded::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuser_encoded::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuser_encoded___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vuser_encoded___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vuser_encoded___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("user_encoded.v", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vuser_encoded___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vuser_encoded::final() {
    Vuser_encoded___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vuser_encoded::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vuser_encoded::name() const {
    return vlSymsp->name();
}
