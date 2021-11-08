// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshift_reg.h"
#include "Vshift_reg__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vshift_reg::Vshift_reg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vshift_reg__Syms(_vcontextp__, _vcname__, this)}
    , d{vlSymsp->TOP.d}
    , rstn{vlSymsp->TOP.rstn}
    , clk{vlSymsp->TOP.clk}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
}

Vshift_reg::Vshift_reg(const char* _vcname__)
    : Vshift_reg(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vshift_reg::~Vshift_reg() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vshift_reg___024root___eval_initial(Vshift_reg___024root* vlSelf);
void Vshift_reg___024root___eval_settle(Vshift_reg___024root* vlSelf);
void Vshift_reg___024root___eval(Vshift_reg___024root* vlSelf);
QData Vshift_reg___024root___change_request(Vshift_reg___024root* vlSelf);
#ifdef VL_DEBUG
void Vshift_reg___024root___eval_debug_assertions(Vshift_reg___024root* vlSelf);
#endif  // VL_DEBUG
void Vshift_reg___024root___final(Vshift_reg___024root* vlSelf);

static void _eval_initial_loop(Vshift_reg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vshift_reg___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vshift_reg___024root___eval_settle(&(vlSymsp->TOP));
        Vshift_reg___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vshift_reg___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("shift_reg.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vshift_reg___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vshift_reg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshift_reg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshift_reg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vshift_reg___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vshift_reg___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("shift_reg.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vshift_reg___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vshift_reg::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vshift_reg::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Invoke final blocks

void Vshift_reg::final() {
    Vshift_reg___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vshift_reg::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vshift_reg::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vshift_reg___024root__traceInitTop(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vshift_reg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_reg___024root*>(voidSelf);
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vshift_reg___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vshift_reg___024root__traceRegister(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep);

void Vshift_reg::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vshift_reg___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
