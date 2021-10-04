// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vdesign_H_
#define _Vdesign_H_

#include "verilated.h"

class Vdesign__Syms;

//----------

VL_MODULE(Vdesign) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_OUT8(Y,0,0);
    VL_IN8(D0,0,0);
    VL_IN8(D1,0,0);
    VL_IN8(S,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vdesign__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vdesign& operator= (const Vdesign&);  ///< Copying not allowed
    Vdesign(const Vdesign&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vdesign(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vdesign();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vdesign__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vdesign__Syms* symsp, bool first);
  private:
    static QData _change_request(Vdesign__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vdesign__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vdesign__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vdesign__Syms* __restrict vlSymsp);
    static void _eval_settle(Vdesign__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
