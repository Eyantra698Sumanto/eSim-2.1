// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vand2__Syms.h"


void Vand2___024root__traceInitSub0(Vand2___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vand2___024root__traceInitTop(Vand2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vand2___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vand2___024root__traceInitSub0(Vand2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"Y", false,-1);
        tracep->declBit(c+2,"A", false,-1);
        tracep->declBit(c+3,"B", false,-1);
        tracep->declBit(c+1,"and2 Y", false,-1);
        tracep->declBit(c+2,"and2 A", false,-1);
        tracep->declBit(c+3,"and2 B", false,-1);
    }
}

void Vand2___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vand2___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vand2___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vand2___024root__traceRegister(Vand2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vand2___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vand2___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vand2___024root__traceCleanup, vlSelf);
    }
}

void Vand2___024root__traceFullSub0(Vand2___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vand2___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vand2___024root* const __restrict vlSelf = static_cast<Vand2___024root*>(voidSelf);
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vand2___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vand2___024root__traceFullSub0(Vand2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vand2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->Y));
        tracep->fullBit(oldp+2,(vlSelf->A));
        tracep->fullBit(oldp+3,(vlSelf->B));
    }
}
