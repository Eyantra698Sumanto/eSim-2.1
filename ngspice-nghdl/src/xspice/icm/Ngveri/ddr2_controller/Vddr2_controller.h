// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VDDR2_CONTROLLER_H_
#define VERILATED_VDDR2_CONTROLLER_H_  // guard

#include "verilated_heavy.h"

class Vddr2_controller__Syms;
class Vddr2_controller___024root;

// This class is the main interface to the Verilated model
class Vddr2_controller VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vddr2_controller__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&CLK,0,0);
    VL_IN8(&RESET,0,0);
    VL_IN8(&CMD,2,0);
    VL_IN8(&SZ,1,0);
    VL_IN8(&OP,2,0);
    VL_IN8(&FETCHING,0,0);
    VL_IN16(&DIN,15,0);
    VL_IN(&ADDR,24,0);
    VL_IN8(&INITDDR,0,0);
    VL_OUT16(&DOUT,15,0);
    VL_OUT(&RADDR,24,0);
    VL_OUT8(&FILLCOUNT,6,0);
    VL_OUT8(&VALIDOUT,0,0);
    VL_OUT8(&NOTFULL,0,0);
    VL_OUT8(&READY,0,0);
    VL_OUT8(&C0_DM_PAD,1,0);
    VL_OUT8(&C0_ODT_PAD,0,0);
    VL_OUT8(&C0_CK_PAD,0,0);
    VL_OUT8(&C0_CKBAR_PAD,0,0);
    VL_OUT8(&C0_CKE_PAD,0,0);
    VL_OUT8(&C0_CSBAR_PAD,0,0);
    VL_OUT8(&C0_RASBAR_PAD,0,0);
    VL_OUT8(&C0_CASBAR_PAD,0,0);
    VL_OUT8(&C0_WEBAR_PAD,0,0);
    VL_OUT8(&C0_BA_PAD,1,0);
    VL_OUT16(&C0_A_PAD,12,0);
    VL_INOUT16(&C0_DQ_PAD,15,0);
    VL_INOUT8(&C0_DQS_PAD,1,0);
    VL_INOUT8(&C0_DQSBAR_PAD,1,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vddr2_controller___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vddr2_controller(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vddr2_controller(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vddr2_controller();
  private:
    VL_UNCOPYABLE(Vddr2_controller);  ///< Copying not allowed

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
