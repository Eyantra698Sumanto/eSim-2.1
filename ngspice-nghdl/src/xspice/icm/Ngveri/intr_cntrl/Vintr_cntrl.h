// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VINTR_CNTRL_H_
#define VERILATED_VINTR_CNTRL_H_  // guard

#include "verilated_heavy.h"

class Vintr_cntrl__Syms;
class Vintr_cntrl___024root;

// This class is the main interface to the Verilated model
class Vintr_cntrl VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vintr_cntrl__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_in,0,0);
    VL_IN8(&rst_in,0,0);
    VL_IN8(&intr_rq,7,0);
    VL_INOUT8(&intr_bus,7,0);
    VL_IN8(&intr_in,0,0);
    VL_OUT8(&intr_out,0,0);
    VL_OUT8(&bus_oe,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vintr_cntrl___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vintr_cntrl(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vintr_cntrl(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vintr_cntrl();
  private:
    VL_UNCOPYABLE(Vintr_cntrl);  ///< Copying not allowed

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
