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
        tracep->declBit(c+8,"d", false,-1);
        tracep->declBit(c+9,"rstn", false,-1);
        tracep->declBit(c+10,"clk", false,-1);
        tracep->declBit(c+11,"q", false,-1);
        tracep->declBit(c+8,"dff d", false,-1);
        tracep->declBit(c+9,"dff rstn", false,-1);
        tracep->declBit(c+10,"dff clk", false,-1);
        tracep->declBit(c+11,"dff q", false,-1);
        tracep->declBus(c+1,"dff q_net", false,-1, 2,0);
        tracep->declBit(c+8,"dff u0 d", false,-1);
        tracep->declBit(c+9,"dff u0 rstn", false,-1);
        tracep->declBit(c+10,"dff u0 clk", false,-1);
        tracep->declBit(c+2,"dff u0 q", false,-1);
        tracep->declBit(c+3,"dff u1 d", false,-1);
        tracep->declBit(c+9,"dff u1 rstn", false,-1);
        tracep->declBit(c+10,"dff u1 clk", false,-1);
        tracep->declBit(c+4,"dff u1 q", false,-1);
        tracep->declBit(c+5,"dff u2 d", false,-1);
        tracep->declBit(c+9,"dff u2 rstn", false,-1);
        tracep->declBit(c+10,"dff u2 clk", false,-1);
        tracep->declBit(c+6,"dff u2 q", false,-1);
        tracep->declBit(c+7,"dff u3 d", false,-1);
        tracep->declBit(c+9,"dff u3 rstn", false,-1);
        tracep->declBit(c+10,"dff u3 clk", false,-1);
        tracep->declBit(c+11,"dff u3 q", false,-1);
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
        tracep->fullCData(oldp+1,(vlSelf->dff__DOT__q_net),3);
        tracep->fullBit(oldp+2,(vlSelf->dff__DOT____Vcellout__u0__q));
        tracep->fullBit(oldp+3,((1U & (IData)(vlSelf->dff__DOT__q_net))));
        tracep->fullBit(oldp+4,(vlSelf->dff__DOT____Vcellout__u1__q));
        tracep->fullBit(oldp+5,((1U & ((IData)(vlSelf->dff__DOT__q_net) 
                                       >> 1U))));
        tracep->fullBit(oldp+6,(vlSelf->dff__DOT____Vcellout__u2__q));
        tracep->fullBit(oldp+7,((1U & ((IData)(vlSelf->dff__DOT__q_net) 
                                       >> 2U))));
        tracep->fullBit(oldp+8,(vlSelf->d));
        tracep->fullBit(oldp+9,(vlSelf->rstn));
        tracep->fullBit(oldp+10,(vlSelf->clk));
        tracep->fullBit(oldp+11,(vlSelf->q));
    }
}
