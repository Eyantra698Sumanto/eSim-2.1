// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vddr2_controller.h"
#include "Vddr2_controller__Syms.h"

//============================================================
// Constructors

Vddr2_controller::Vddr2_controller(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vddr2_controller__Syms(_vcontextp__, _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , RESET{vlSymsp->TOP.RESET}
    , CMD{vlSymsp->TOP.CMD}
    , SZ{vlSymsp->TOP.SZ}
    , OP{vlSymsp->TOP.OP}
    , FETCHING{vlSymsp->TOP.FETCHING}
    , DIN{vlSymsp->TOP.DIN}
    , ADDR{vlSymsp->TOP.ADDR}
    , INITDDR{vlSymsp->TOP.INITDDR}
    , DOUT{vlSymsp->TOP.DOUT}
    , RADDR{vlSymsp->TOP.RADDR}
    , FILLCOUNT{vlSymsp->TOP.FILLCOUNT}
    , VALIDOUT{vlSymsp->TOP.VALIDOUT}
    , NOTFULL{vlSymsp->TOP.NOTFULL}
    , READY{vlSymsp->TOP.READY}
    , C0_DM_PAD{vlSymsp->TOP.C0_DM_PAD}
    , C0_ODT_PAD{vlSymsp->TOP.C0_ODT_PAD}
    , C0_CK_PAD{vlSymsp->TOP.C0_CK_PAD}
    , C0_CKBAR_PAD{vlSymsp->TOP.C0_CKBAR_PAD}
    , C0_CKE_PAD{vlSymsp->TOP.C0_CKE_PAD}
    , C0_CSBAR_PAD{vlSymsp->TOP.C0_CSBAR_PAD}
    , C0_RASBAR_PAD{vlSymsp->TOP.C0_RASBAR_PAD}
    , C0_CASBAR_PAD{vlSymsp->TOP.C0_CASBAR_PAD}
    , C0_WEBAR_PAD{vlSymsp->TOP.C0_WEBAR_PAD}
    , C0_BA_PAD{vlSymsp->TOP.C0_BA_PAD}
    , C0_A_PAD{vlSymsp->TOP.C0_A_PAD}
    , C0_DQ_PAD{vlSymsp->TOP.C0_DQ_PAD}
    , C0_DQS_PAD{vlSymsp->TOP.C0_DQS_PAD}
    , C0_DQSBAR_PAD{vlSymsp->TOP.C0_DQSBAR_PAD}
    , rootp{&(vlSymsp->TOP)}
{
}

Vddr2_controller::Vddr2_controller(const char* _vcname__)
    : Vddr2_controller(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vddr2_controller::~Vddr2_controller() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vddr2_controller___024root___eval_initial(Vddr2_controller___024root* vlSelf);
void Vddr2_controller___024root___eval_settle(Vddr2_controller___024root* vlSelf);
void Vddr2_controller___024root___eval(Vddr2_controller___024root* vlSelf);
QData Vddr2_controller___024root___change_request(Vddr2_controller___024root* vlSelf);
#ifdef VL_DEBUG
void Vddr2_controller___024root___eval_debug_assertions(Vddr2_controller___024root* vlSelf);
#endif  // VL_DEBUG
void Vddr2_controller___024root___final(Vddr2_controller___024root* vlSelf);

static void _eval_initial_loop(Vddr2_controller__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vddr2_controller___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vddr2_controller___024root___eval_settle(&(vlSymsp->TOP));
        Vddr2_controller___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vddr2_controller___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ddr2_controller.v", 25, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vddr2_controller___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vddr2_controller::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vddr2_controller::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vddr2_controller___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vddr2_controller___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vddr2_controller___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ddr2_controller.v", 25, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vddr2_controller___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vddr2_controller::final() {
    Vddr2_controller___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vddr2_controller::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vddr2_controller::name() const {
    return vlSymsp->name();
}
