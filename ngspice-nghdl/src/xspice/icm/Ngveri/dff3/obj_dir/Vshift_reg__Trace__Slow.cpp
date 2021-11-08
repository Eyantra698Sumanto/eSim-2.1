// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshift_reg__Syms.h"


void Vshift_reg___024root__traceInitSub0(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vshift_reg___024root__traceInitTop(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vshift_reg___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vshift_reg___024root__traceInitSub0(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+8,"d", false,-1);
        tracep->declBit(c+9,"rstn", false,-1);
        tracep->declBit(c+10,"clk", false,-1);
        tracep->declBit(c+11,"q", false,-1);
        tracep->declBit(c+8,"shift_reg d", false,-1);
        tracep->declBit(c+9,"shift_reg rstn", false,-1);
        tracep->declBit(c+10,"shift_reg clk", false,-1);
        tracep->declBit(c+11,"shift_reg q", false,-1);
        tracep->declBus(c+1,"shift_reg q_net", false,-1, 2,0);
        tracep->declBit(c+8,"shift_reg u0 d", false,-1);
        tracep->declBit(c+9,"shift_reg u0 rstn", false,-1);
        tracep->declBit(c+10,"shift_reg u0 clk", false,-1);
        tracep->declBit(c+2,"shift_reg u0 q", false,-1);
        tracep->declBit(c+3,"shift_reg u1 d", false,-1);
        tracep->declBit(c+9,"shift_reg u1 rstn", false,-1);
        tracep->declBit(c+10,"shift_reg u1 clk", false,-1);
        tracep->declBit(c+4,"shift_reg u1 q", false,-1);
        tracep->declBit(c+5,"shift_reg u2 d", false,-1);
        tracep->declBit(c+9,"shift_reg u2 rstn", false,-1);
        tracep->declBit(c+10,"shift_reg u2 clk", false,-1);
        tracep->declBit(c+6,"shift_reg u2 q", false,-1);
        tracep->declBit(c+7,"shift_reg u3 d", false,-1);
        tracep->declBit(c+9,"shift_reg u3 rstn", false,-1);
        tracep->declBit(c+10,"shift_reg u3 clk", false,-1);
        tracep->declBit(c+11,"shift_reg u3 q", false,-1);
    }
}

void Vshift_reg___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vshift_reg___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vshift_reg___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vshift_reg___024root__traceRegister(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vshift_reg___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vshift_reg___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vshift_reg___024root__traceCleanup, vlSelf);
    }
}

void Vshift_reg___024root__traceFullSub0(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vshift_reg___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vshift_reg___024root* const __restrict vlSelf = static_cast<Vshift_reg___024root*>(voidSelf);
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vshift_reg___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vshift_reg___024root__traceFullSub0(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->shift_reg__DOT__q_net),3);
        tracep->fullBit(oldp+2,(vlSelf->shift_reg__DOT____Vcellout__u0__q));
        tracep->fullBit(oldp+3,((1U & (IData)(vlSelf->shift_reg__DOT__q_net))));
        tracep->fullBit(oldp+4,(vlSelf->shift_reg__DOT____Vcellout__u1__q));
        tracep->fullBit(oldp+5,((1U & ((IData)(vlSelf->shift_reg__DOT__q_net) 
                                       >> 1U))));
        tracep->fullBit(oldp+6,(vlSelf->shift_reg__DOT____Vcellout__u2__q));
        tracep->fullBit(oldp+7,((1U & ((IData)(vlSelf->shift_reg__DOT__q_net) 
                                       >> 2U))));
        tracep->fullBit(oldp+8,(vlSelf->d));
        tracep->fullBit(oldp+9,(vlSelf->rstn));
        tracep->fullBit(oldp+10,(vlSelf->clk));
        tracep->fullBit(oldp+11,(vlSelf->q));
    }
}
