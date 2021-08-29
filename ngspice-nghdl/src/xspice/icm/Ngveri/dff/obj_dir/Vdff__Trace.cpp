// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdff__Syms.h"


void Vdff___024root__traceChgSub0(Vdff___024root* vlSelf, VerilatedVcd* tracep);

void Vdff___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdff___024root* const __restrict vlSelf = static_cast<Vdff___024root*>(voidSelf);
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vdff___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdff___024root__traceChgSub0(Vdff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->d));
        tracep->chgBit(oldp+1,(vlSelf->rstn));
        tracep->chgBit(oldp+2,(vlSelf->clk));
        tracep->chgBit(oldp+3,(vlSelf->q));
    }
}

void Vdff___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vdff___024root* const __restrict vlSelf = static_cast<Vdff___024root*>(voidSelf);
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
