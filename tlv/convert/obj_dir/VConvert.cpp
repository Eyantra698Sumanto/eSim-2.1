// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VConvert.h"
#include "VConvert__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VConvert::VConvert(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VConvert__Syms(_vcontextp__, _vcname__, this)}
    , d{vlSymsp->TOP.d}
    , rstn{vlSymsp->TOP.rstn}
    , clk{vlSymsp->TOP.clk}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
}

VConvert::VConvert(const char* _vcname__)
    : VConvert(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VConvert::~VConvert() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VConvert___024root___eval_initial(VConvert___024root* vlSelf);
void VConvert___024root___eval_settle(VConvert___024root* vlSelf);
void VConvert___024root___eval(VConvert___024root* vlSelf);
QData VConvert___024root___change_request(VConvert___024root* vlSelf);
#ifdef VL_DEBUG
void VConvert___024root___eval_debug_assertions(VConvert___024root* vlSelf);
#endif  // VL_DEBUG
void VConvert___024root___final(VConvert___024root* vlSelf);

static void _eval_initial_loop(VConvert__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VConvert___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VConvert___024root___eval_settle(&(vlSymsp->TOP));
        VConvert___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VConvert___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Convert.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VConvert___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VConvert::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VConvert::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VConvert___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VConvert___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VConvert___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Convert.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VConvert___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VConvert::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VConvert::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Invoke final blocks

void VConvert::final() {
    VConvert___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VConvert::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VConvert::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VConvert___024root__traceInitTop(VConvert___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VConvert___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VConvert___024root*>(voidSelf);
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VConvert___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VConvert___024root__traceRegister(VConvert___024root* vlSelf, VerilatedVcd* tracep);

void VConvert::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VConvert___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
