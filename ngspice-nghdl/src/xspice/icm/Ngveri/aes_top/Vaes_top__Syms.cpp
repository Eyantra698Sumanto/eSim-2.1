// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vaes_top__Syms.h"
#include "Vaes_top.h"
#include "Vaes_top___024root.h"
#include "Vaes_top_aes_sbox.h"

// FUNCTIONS
Vaes_top__Syms::~Vaes_top__Syms()
{
}

Vaes_top__Syms::Vaes_top__Syms(VerilatedContext* contextp, const char* namep,Vaes_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__AES_top__DOT__cr0__DOT__k0__DOT__a0(Verilated::catName(namep, "AES_top.cr0.k0.a0"))
    , TOP__AES_top__DOT__cr0__DOT__k0__DOT__a1(Verilated::catName(namep, "AES_top.cr0.k0.a1"))
    , TOP__AES_top__DOT__cr0__DOT__k0__DOT__a2(Verilated::catName(namep, "AES_top.cr0.k0.a2"))
    , TOP__AES_top__DOT__cr0__DOT__k0__DOT__a3(Verilated::catName(namep, "AES_top.cr0.k0.a3"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q0(Verilated::catName(namep, "AES_top.cr0.sB0.q0"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q1(Verilated::catName(namep, "AES_top.cr0.sB0.q1"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q10(Verilated::catName(namep, "AES_top.cr0.sB0.q10"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q11(Verilated::catName(namep, "AES_top.cr0.sB0.q11"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q12(Verilated::catName(namep, "AES_top.cr0.sB0.q12"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q13(Verilated::catName(namep, "AES_top.cr0.sB0.q13"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q14(Verilated::catName(namep, "AES_top.cr0.sB0.q14"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q15(Verilated::catName(namep, "AES_top.cr0.sB0.q15"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q2(Verilated::catName(namep, "AES_top.cr0.sB0.q2"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q3(Verilated::catName(namep, "AES_top.cr0.sB0.q3"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q4(Verilated::catName(namep, "AES_top.cr0.sB0.q4"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q5(Verilated::catName(namep, "AES_top.cr0.sB0.q5"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q6(Verilated::catName(namep, "AES_top.cr0.sB0.q6"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q7(Verilated::catName(namep, "AES_top.cr0.sB0.q7"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q8(Verilated::catName(namep, "AES_top.cr0.sB0.q8"))
    , TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q9(Verilated::catName(namep, "AES_top.cr0.sB0.q9"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__AES_top__DOT__cr0__DOT__k0__DOT__a0 = &TOP__AES_top__DOT__cr0__DOT__k0__DOT__a0;
    TOP.__PVT__AES_top__DOT__cr0__DOT__k0__DOT__a1 = &TOP__AES_top__DOT__cr0__DOT__k0__DOT__a1;
    TOP.__PVT__AES_top__DOT__cr0__DOT__k0__DOT__a2 = &TOP__AES_top__DOT__cr0__DOT__k0__DOT__a2;
    TOP.__PVT__AES_top__DOT__cr0__DOT__k0__DOT__a3 = &TOP__AES_top__DOT__cr0__DOT__k0__DOT__a3;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q0 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q0;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q1 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q1;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q10 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q10;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q11 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q11;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q12 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q12;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q13 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q13;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q14 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q14;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q15 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q15;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q2 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q2;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q3 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q3;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q4 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q4;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q5 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q5;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q6 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q6;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q7 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q7;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q8 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q8;
    TOP.__PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q9 = &TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q9;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__AES_top__DOT__cr0__DOT__k0__DOT__a0.__Vconfigure(this, true);
    TOP__AES_top__DOT__cr0__DOT__k0__DOT__a1.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__k0__DOT__a2.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__k0__DOT__a3.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q0.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q1.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q10.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q11.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q12.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q13.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q14.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q15.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q2.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q3.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q4.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q5.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q6.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q7.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q8.__Vconfigure(this, false);
    TOP__AES_top__DOT__cr0__DOT__sB0__DOT__q9.__Vconfigure(this, false);
}
