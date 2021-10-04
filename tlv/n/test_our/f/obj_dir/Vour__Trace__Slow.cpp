// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vour__Syms.h"


void Vour___024root__traceInitSub0(Vour___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vour___024root__traceInitTop(Vour___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vour___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vour___024root__traceInitSub0(Vour___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
}

void Vour___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vour___024root__traceRegister(Vour___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addCleanupCb(&Vour___024root__traceCleanup, vlSelf);
    }
}
