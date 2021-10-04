// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vm12.h for the primary calling header

#ifndef VERILATED_VM12___024ROOT_H_
#define VERILATED_VM12___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vm12__Syms;

//----------

VL_MODULE(Vm12___024root) {
  public:

    // PORTS
    VL_OUT8(Y,0,0);
    VL_IN8(A,0,0);
    VL_IN8(B,0,0);

    // INTERNAL VARIABLES
    Vm12__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vm12___024root);  ///< Copying not allowed
  public:
    Vm12___024root(const char* name);
    ~Vm12___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vm12__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
