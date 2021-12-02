// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vi2c_master_top.h"
#include "Vi2c_master_top__Syms.h"

//============================================================
// Constructors

Vi2c_master_top::Vi2c_master_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vi2c_master_top__Syms(_vcontextp__, _vcname__, this)}
    , wb_clk_i{vlSymsp->TOP.wb_clk_i}
    , wb_rst_i{vlSymsp->TOP.wb_rst_i}
    , arst_i{vlSymsp->TOP.arst_i}
    , wb_adr_i{vlSymsp->TOP.wb_adr_i}
    , wb_dat_i{vlSymsp->TOP.wb_dat_i}
    , wb_dat_o{vlSymsp->TOP.wb_dat_o}
    , wb_we_i{vlSymsp->TOP.wb_we_i}
    , wb_stb_i{vlSymsp->TOP.wb_stb_i}
    , wb_cyc_i{vlSymsp->TOP.wb_cyc_i}
    , wb_ack_o{vlSymsp->TOP.wb_ack_o}
    , wb_inta_o{vlSymsp->TOP.wb_inta_o}
    , scl_pad_i{vlSymsp->TOP.scl_pad_i}
    , scl_pad_o{vlSymsp->TOP.scl_pad_o}
    , scl_padoen_o{vlSymsp->TOP.scl_padoen_o}
    , sda_pad_i{vlSymsp->TOP.sda_pad_i}
    , sda_pad_o{vlSymsp->TOP.sda_pad_o}
    , sda_padoen_o{vlSymsp->TOP.sda_padoen_o}
    , rootp{&(vlSymsp->TOP)}
{
}

Vi2c_master_top::Vi2c_master_top(const char* _vcname__)
    : Vi2c_master_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vi2c_master_top::~Vi2c_master_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vi2c_master_top___024root___eval_initial(Vi2c_master_top___024root* vlSelf);
void Vi2c_master_top___024root___eval_settle(Vi2c_master_top___024root* vlSelf);
void Vi2c_master_top___024root___eval(Vi2c_master_top___024root* vlSelf);
QData Vi2c_master_top___024root___change_request(Vi2c_master_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vi2c_master_top___024root___eval_debug_assertions(Vi2c_master_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vi2c_master_top___024root___final(Vi2c_master_top___024root* vlSelf);

static void _eval_initial_loop(Vi2c_master_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vi2c_master_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vi2c_master_top___024root___eval_settle(&(vlSymsp->TOP));
        Vi2c_master_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vi2c_master_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("i2c_master_top.v", 77, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vi2c_master_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vi2c_master_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vi2c_master_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vi2c_master_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vi2c_master_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vi2c_master_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("i2c_master_top.v", 77, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vi2c_master_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vi2c_master_top::final() {
    Vi2c_master_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vi2c_master_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vi2c_master_top::name() const {
    return vlSymsp->name();
}
