// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vand2__Syms.h"


void Vand2___024root__traceChgSub0(Vand2___024root* vlSelf, VerilatedVcd* tracep);

void Vand2___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vand2___024root* const __restrict vlSelf = static_cast<Vand2___024root*>(voidSelf);
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vand2___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vand2___024root__traceChgSub0(Vand2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->Y));
        tracep->chgBit(oldp+1,(vlSelf->A));
        tracep->chgBit(oldp+2,(vlSelf->B));
    }
}

void Vand2___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vand2___024root* const __restrict vlSelf = static_cast<Vand2___024root*>(voidSelf);
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
