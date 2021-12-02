// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcam.h"
#include "Vcam__Syms.h"

//============================================================
// Constructors

Vcam::Vcam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcam__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , cam_enable{vlSymsp->TOP.cam_enable}
    , cam_data_in{vlSymsp->TOP.cam_data_in}
    , cam_hit_out{vlSymsp->TOP.cam_hit_out}
    , cam_addr_out{vlSymsp->TOP.cam_addr_out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcam::Vcam(const char* _vcname__)
    : Vcam(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcam::~Vcam() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcam___024root___eval_initial(Vcam___024root* vlSelf);
void Vcam___024root___eval_settle(Vcam___024root* vlSelf);
void Vcam___024root___eval(Vcam___024root* vlSelf);
QData Vcam___024root___change_request(Vcam___024root* vlSelf);
#ifdef VL_DEBUG
void Vcam___024root___eval_debug_assertions(Vcam___024root* vlSelf);
#endif  // VL_DEBUG
void Vcam___024root___final(Vcam___024root* vlSelf);

static void _eval_initial_loop(Vcam__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcam___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcam___024root___eval_settle(&(vlSymsp->TOP));
        Vcam___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcam___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("cam.v", 9, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcam___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcam___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcam___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("cam.v", 9, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcam___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vcam::final() {
    Vcam___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vcam::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcam::name() const {
    return vlSymsp->name();
}
