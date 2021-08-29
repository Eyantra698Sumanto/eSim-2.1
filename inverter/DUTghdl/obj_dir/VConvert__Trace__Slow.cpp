// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VConvert__Syms.h"


void VConvert___024root__traceInitSub0(VConvert___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VConvert___024root__traceInitTop(VConvert___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VConvert___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VConvert___024root__traceInitSub0(VConvert___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"o", false,-1);
        tracep->declBit(c+2,"i", false,-1);
        tracep->declBit(c+1,"Convert o", false,-1);
        tracep->declBit(c+2,"Convert i", false,-1);
    }
}

void VConvert___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VConvert___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VConvert___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VConvert___024root__traceRegister(VConvert___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VConvert___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VConvert___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VConvert___024root__traceCleanup, vlSelf);
    }
}

void VConvert___024root__traceFullSub0(VConvert___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VConvert___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VConvert___024root* const __restrict vlSelf = static_cast<VConvert___024root*>(voidSelf);
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VConvert___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VConvert___024root__traceFullSub0(VConvert___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VConvert__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->o));
        tracep->fullBit(oldp+2,(vlSelf->i));
    }
}
