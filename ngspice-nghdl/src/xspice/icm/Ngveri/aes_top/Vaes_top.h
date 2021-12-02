// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VAES_TOP_H_
#define VERILATED_VAES_TOP_H_  // guard

#include "verilated_heavy.h"

class Vaes_top__Syms;
class Vaes_top___024root;
class Vaes_top_aes_sbox;


// This class is the main interface to the Verilated model
class Vaes_top VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vaes_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&start,0,0);
    VL_IN8(&rstn,0,0);
    VL_INW((&plain_text),127,0,4);
    VL_INW((&cipher_key),127,0,4);
    VL_OUT8(&done,0,0);
    VL_OUT16(&completed_round,9,0);
    VL_OUTW((&cipher_text),127,0,4);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a0;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a1;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a2;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__k0__DOT__a3;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q0;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q1;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q2;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q3;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q4;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q5;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q6;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q7;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q8;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q9;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q10;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q11;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q12;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q13;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q14;
    Vaes_top_aes_sbox* const __PVT__AES_top__DOT__cr0__DOT__sB0__DOT__q15;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vaes_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vaes_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vaes_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vaes_top();
  private:
    VL_UNCOPYABLE(Vaes_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
