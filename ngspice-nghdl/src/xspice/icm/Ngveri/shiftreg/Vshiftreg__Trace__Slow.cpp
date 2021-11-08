// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshiftreg__Syms.h"


void Vshiftreg___024root__traceInitSub0(Vshiftreg___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vshiftreg___024root__traceInitTop(Vshiftreg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vshiftreg___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vshiftreg___024root__traceInitSub0(Vshiftreg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+8,"d", false,-1);
        tracep->declBit(c+9,"rstn", false,-1);
        tracep->declBit(c+10,"clk", false,-1);
        tracep->declBit(c+11,"q", false,-1);
        tracep->declBit(c+8,"shiftreg d", false,-1);
        tracep->declBit(c+9,"shiftreg rstn", false,-1);
        tracep->declBit(c+10,"shiftreg clk", false,-1);
        tracep->declBit(c+11,"shiftreg q", false,-1);
        tracep->declBus(c+1,"shiftreg q_net", false,-1, 2,0);
        tracep->declBit(c+8,"shiftreg u0 d", false,-1);
        tracep->declBit(c+9,"shiftreg u0 rstn", false,-1);
        tracep->declBit(c+10,"shiftreg u0 clk", false,-1);
        tracep->declBit(c+2,"shiftreg u0 q", false,-1);
        tracep->declBit(c+3,"shiftreg u1 d", false,-1);
        tracep->declBit(c+9,"shiftreg u1 rstn", false,-1);
        tracep->declBit(c+10,"shiftreg u1 clk", false,-1);
        tracep->declBit(c+4,"shiftreg u1 q", false,-1);
        tracep->declBit(c+5,"shiftreg u2 d", false,-1);
        tracep->declBit(c+9,"shiftreg u2 rstn", false,-1);
        tracep->declBit(c+10,"shiftreg u2 clk", false,-1);
        tracep->declBit(c+6,"shiftreg u2 q", false,-1);
        tracep->declBit(c+7,"shiftreg u3 d", false,-1);
        tracep->declBit(c+9,"shiftreg u3 rstn", false,-1);
        tracep->declBit(c+10,"shiftreg u3 clk", false,-1);
        tracep->declBit(c+11,"shiftreg u3 q", false,-1);
    }
}

void Vshiftreg___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vshiftreg___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vshiftreg___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vshiftreg___024root__traceRegister(Vshiftreg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vshiftreg___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vshiftreg___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vshiftreg___024root__traceCleanup, vlSelf);
    }
}

void Vshiftreg___024root__traceFullSub0(Vshiftreg___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vshiftreg___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vshiftreg___024root* const __restrict vlSelf = static_cast<Vshiftreg___024root*>(voidSelf);
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vshiftreg___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vshiftreg___024root__traceFullSub0(Vshiftreg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->shiftreg__DOT__q_net),3);
        tracep->fullBit(oldp+2,(vlSelf->shiftreg__DOT____Vcellout__u0__q));
        tracep->fullBit(oldp+3,((1U & (IData)(vlSelf->shiftreg__DOT__q_net))));
        tracep->fullBit(oldp+4,(vlSelf->shiftreg__DOT____Vcellout__u1__q));
        tracep->fullBit(oldp+5,((1U & ((IData)(vlSelf->shiftreg__DOT__q_net) 
                                       >> 1U))));
        tracep->fullBit(oldp+6,(vlSelf->shiftreg__DOT____Vcellout__u2__q));
        tracep->fullBit(oldp+7,((1U & ((IData)(vlSelf->shiftreg__DOT__q_net) 
                                       >> 2U))));
        tracep->fullBit(oldp+8,(vlSelf->d));
        tracep->fullBit(oldp+9,(vlSelf->rstn));
        tracep->fullBit(oldp+10,(vlSelf->clk));
        tracep->fullBit(oldp+11,(vlSelf->q));
    }
}
