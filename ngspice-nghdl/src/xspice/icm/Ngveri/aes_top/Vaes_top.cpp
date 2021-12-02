// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaes_top.h"
#include "Vaes_top__Syms.h"

//============================================================
// Constructors

Vaes_top::Vaes_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vaes_top__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , start{vlSymsp->TOP.start}
    , rstn{vlSymsp->TOP.rstn}
    , plain_text{vlSymsp->TOP.plain_text}
    , cipher_key{vlSymsp->TOP.cipher_key}
    , done{vlSymsp->TOP.done}
    , completed_round{vlSymsp->TOP.completed_round}
    , cipher_text{vlSymsp->TOP.cipher_text}
    , __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a0{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__k0__DOT__a0}
    , __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a1{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__k0__DOT__a1}
    , __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a2{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__k0__DOT__a2}
    , __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a3{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__k0__DOT__a3}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q0{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q0}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q1{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q1}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q2{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q2}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q3{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q3}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q4{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q4}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q5{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q5}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q6{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q6}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q7{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q7}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q8{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q8}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q9{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q9}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q10{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q10}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q11{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q11}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q12{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q12}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q13{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q13}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q14{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q14}
    , __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q15{vlSymsp->TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q15}
    , rootp{&(vlSymsp->TOP)}
{
}

Vaes_top::Vaes_top(const char* _vcname__)
    : Vaes_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vaes_top::~Vaes_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vaes_top___024root___eval_initial(Vaes_top___024root* vlSelf);
void Vaes_top___024root___eval_settle(Vaes_top___024root* vlSelf);
void Vaes_top___024root___eval(Vaes_top___024root* vlSelf);
QData Vaes_top___024root___change_request(Vaes_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vaes_top___024root___eval_debug_assertions(Vaes_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vaes_top___024root___final(Vaes_top___024root* vlSelf);

static void _eval_initial_loop(Vaes_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vaes_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vaes_top___024root___eval_settle(&(vlSymsp->TOP));
        Vaes_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vaes_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("aes_top.v", 19, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vaes_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vaes_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaes_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaes_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vaes_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vaes_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("aes_top.v", 19, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vaes_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vaes_top::final() {
    Vaes_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vaes_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vaes_top::name() const {
    return vlSymsp->name();
}
