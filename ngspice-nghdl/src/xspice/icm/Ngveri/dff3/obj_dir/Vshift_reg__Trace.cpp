// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshift_reg__Syms.h"


void Vshift_reg___024root__traceChgSub0(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep);

void Vshift_reg___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vshift_reg___024root* const __restrict vlSelf = static_cast<Vshift_reg___024root*>(voidSelf);
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vshift_reg___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vshift_reg___024root__traceChgSub0(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->shift_reg__DOT__q_net),3);
            tracep->chgBit(oldp+1,(vlSelf->shift_reg__DOT____Vcellout__u0__q));
            tracep->chgBit(oldp+2,((1U & (IData)(vlSelf->shift_reg__DOT__q_net))));
            tracep->chgBit(oldp+3,(vlSelf->shift_reg__DOT____Vcellout__u1__q));
            tracep->chgBit(oldp+4,((1U & ((IData)(vlSelf->shift_reg__DOT__q_net) 
                                          >> 1U))));
            tracep->chgBit(oldp+5,(vlSelf->shift_reg__DOT____Vcellout__u2__q));
            tracep->chgBit(oldp+6,((1U & ((IData)(vlSelf->shift_reg__DOT__q_net) 
                                          >> 2U))));
        }
        tracep->chgBit(oldp+7,(vlSelf->d));
        tracep->chgBit(oldp+8,(vlSelf->rstn));
        tracep->chgBit(oldp+9,(vlSelf->clk));
        tracep->chgBit(oldp+10,(vlSelf->q));
    }
}

void Vshift_reg___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vshift_reg___024root* const __restrict vlSelf = static_cast<Vshift_reg___024root*>(voidSelf);
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
