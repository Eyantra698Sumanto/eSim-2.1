// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdff__Syms.h"


void Vdff___024root__traceInitSub0(Vdff___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdff___024root__traceInitTop(Vdff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdff___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vdff___024root__traceInitSub0(Vdff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"d", false,-1);
        tracep->declBit(c+2,"rstn", false,-1);
        tracep->declBit(c+3,"clk", false,-1);
        tracep->declBit(c+4,"q", false,-1);
        tracep->declBit(c+1,"dff d", false,-1);
        tracep->declBit(c+2,"dff rstn", false,-1);
        tracep->declBit(c+3,"dff clk", false,-1);
        tracep->declBit(c+4,"dff q", false,-1);
    }
}

void Vdff___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vdff___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vdff___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vdff___024root__traceRegister(Vdff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vdff___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vdff___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vdff___024root__traceCleanup, vlSelf);
    }
}

void Vdff___024root__traceFullSub0(Vdff___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdff___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdff___024root* const __restrict vlSelf = static_cast<Vdff___024root*>(voidSelf);
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdff___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdff___024root__traceFullSub0(Vdff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->d));
        tracep->fullBit(oldp+2,(vlSelf->rstn));
        tracep->fullBit(oldp+3,(vlSelf->clk));
        tracep->fullBit(oldp+4,(vlSelf->q));
    }
}
