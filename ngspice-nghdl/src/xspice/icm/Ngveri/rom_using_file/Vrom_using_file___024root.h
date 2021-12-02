// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrom_using_file.h for the primary calling header

#ifndef VERILATED_VROM_USING_FILE___024ROOT_H_
#define VERILATED_VROM_USING_FILE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vrom_using_file__Syms;

//----------

VL_MODULE(Vrom_using_file___024root) {
  public:

    // PORTS
    VL_IN8(address,7,0);
    VL_OUT8(data,7,0);
    VL_IN8(read_en,0,0);
    VL_IN8(ce,0,0);

    // LOCAL SIGNALS
    VlUnpacked<CData/*7:0*/, 256> rom_using_file__DOT__mem;

    // INTERNAL VARIABLES
    Vrom_using_file__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrom_using_file___024root);  ///< Copying not allowed
  public:
    Vrom_using_file___024root(const char* name);
    ~Vrom_using_file___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vrom_using_file__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
