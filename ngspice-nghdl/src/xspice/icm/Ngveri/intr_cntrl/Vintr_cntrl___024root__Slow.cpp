// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintr_cntrl.h for the primary calling header

#include "Vintr_cntrl___024root.h"
#include "Vintr_cntrl__Syms.h"

//==========


void Vintr_cntrl___024root___ctor_var_reset(Vintr_cntrl___024root* vlSelf);

Vintr_cntrl___024root::Vintr_cntrl___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vintr_cntrl___024root___ctor_var_reset(this);
}

void Vintr_cntrl___024root::__Vconfigure(Vintr_cntrl__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vintr_cntrl___024root::~Vintr_cntrl___024root() {
}

void Vintr_cntrl___024root___settle__TOP__2(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->intr_out = vlSelf->INTR_CNTRL__DOT__intrOut_reg;
    vlSelf->bus_oe = vlSelf->INTR_CNTRL__DOT__oe_reg;
    vlSelf->INTR_CNTRL__DOT__oe_next = vlSelf->INTR_CNTRL__DOT__oe_reg;
    if ((8U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
        if ((4U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            vlSelf->INTR_CNTRL__DOT__oe_next = 0U;
        } else if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
                vlSelf->INTR_CNTRL__DOT__oe_next = 0U;
            }
        } else if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelf->intr_in)))) {
                vlSelf->INTR_CNTRL__DOT__oe_next = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->intr_in)))) {
            vlSelf->INTR_CNTRL__DOT__oe_next = 1U;
        }
    } else if ((4U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
        if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
                vlSelf->INTR_CNTRL__DOT__oe_next = 0U;
            }
        } else if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelf->intr_in)))) {
                vlSelf->INTR_CNTRL__DOT__oe_next = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->intr_in)))) {
            vlSelf->INTR_CNTRL__DOT__oe_next = 1U;
        }
    } else {
        vlSelf->INTR_CNTRL__DOT__oe_next = 0U;
    }
    vlSelf->INTR_CNTRL__DOT__intrIndex_next = vlSelf->INTR_CNTRL__DOT__intrIndex_reg;
    if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
                    if ((1U & (~ ((IData)(vlSelf->intr_rq) 
                                  >> (IData)(vlSelf->INTR_CNTRL__DOT__intrIndex_reg))))) {
                        vlSelf->INTR_CNTRL__DOT__intrIndex_next 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->INTR_CNTRL__DOT__intrIndex_reg)));
                    }
                } else {
                    vlSelf->INTR_CNTRL__DOT__intrIndex_next = 0U;
                }
            } else if ((1U & (~ (IData)(vlSelf->INTR_CNTRL__DOT__state_reg)))) {
                vlSelf->INTR_CNTRL__DOT__intrIndex_next = 0U;
            }
        }
    }
    vlSelf->INTR_CNTRL__DOT__intrPtr_next = vlSelf->INTR_CNTRL__DOT__intrPtr_reg;
    if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
                    if ((1U & ((IData)(vlSelf->intr_rq) 
                               >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                               [0U]))) {
                        vlSelf->INTR_CNTRL__DOT__intrPtr_next 
                            = vlSelf->INTR_CNTRL__DOT__prior_table_reg
                            [0U];
                    } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                      >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                      [1U]))) {
                        vlSelf->INTR_CNTRL__DOT__intrPtr_next 
                            = vlSelf->INTR_CNTRL__DOT__prior_table_reg
                            [1U];
                    } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                      >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                      [2U]))) {
                        vlSelf->INTR_CNTRL__DOT__intrPtr_next 
                            = vlSelf->INTR_CNTRL__DOT__prior_table_reg
                            [2U];
                    } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                      >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                      [3U]))) {
                        vlSelf->INTR_CNTRL__DOT__intrPtr_next 
                            = vlSelf->INTR_CNTRL__DOT__prior_table_reg
                            [3U];
                    } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                      >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                      [4U]))) {
                        vlSelf->INTR_CNTRL__DOT__intrPtr_next 
                            = vlSelf->INTR_CNTRL__DOT__prior_table_reg
                            [4U];
                    } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                      >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                      [5U]))) {
                        vlSelf->INTR_CNTRL__DOT__intrPtr_next 
                            = vlSelf->INTR_CNTRL__DOT__prior_table_reg
                            [5U];
                    } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                      >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                      [6U]))) {
                        vlSelf->INTR_CNTRL__DOT__intrPtr_next 
                            = vlSelf->INTR_CNTRL__DOT__prior_table_reg
                            [6U];
                    } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                      >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                      [7U]))) {
                        vlSelf->INTR_CNTRL__DOT__intrPtr_next 
                            = vlSelf->INTR_CNTRL__DOT__prior_table_reg
                            [7U];
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelf->INTR_CNTRL__DOT__state_reg)))) {
                vlSelf->INTR_CNTRL__DOT__intrPtr_next = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->INTR_CNTRL__DOT__state_reg)))) {
            vlSelf->INTR_CNTRL__DOT__intrPtr_next = 0U;
        }
    }
    vlSelf->INTR_CNTRL__DOT__intrBus_next = vlSelf->INTR_CNTRL__DOT__intrBus_reg;
    if ((8U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
        if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->INTR_CNTRL__DOT__state_reg)))) {
                    if ((1U & (~ (IData)(vlSelf->intr_in)))) {
                        vlSelf->INTR_CNTRL__DOT__intrBus_next 
                            = (0x98U | (IData)(vlSelf->INTR_CNTRL__DOT__intrPtr_reg));
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
        if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->INTR_CNTRL__DOT__state_reg)))) {
                if ((1U & (~ (IData)(vlSelf->intr_in)))) {
                    vlSelf->INTR_CNTRL__DOT__intrBus_next 
                        = (0x58U | (IData)(vlSelf->INTR_CNTRL__DOT__intrIndex_reg));
                }
            }
        }
    }
    vlSelf->INTR_CNTRL__DOT__intrOut_next = vlSelf->INTR_CNTRL__DOT__intrOut_reg;
    if ((8U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
        if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->INTR_CNTRL__DOT__state_reg)))) {
                    if ((1U & (~ (IData)(vlSelf->intr_in)))) {
                        vlSelf->INTR_CNTRL__DOT__intrOut_next = 0U;
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
        if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
                if ((1U & ((IData)(vlSelf->intr_rq) 
                           >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                           [0U]))) {
                    vlSelf->INTR_CNTRL__DOT__intrOut_next = 1U;
                } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                  >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                  [1U]))) {
                    vlSelf->INTR_CNTRL__DOT__intrOut_next = 1U;
                } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                  >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                  [2U]))) {
                    vlSelf->INTR_CNTRL__DOT__intrOut_next = 1U;
                } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                  >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                  [3U]))) {
                    vlSelf->INTR_CNTRL__DOT__intrOut_next = 1U;
                } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                  >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                  [4U]))) {
                    vlSelf->INTR_CNTRL__DOT__intrOut_next = 1U;
                } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                  >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                  [5U]))) {
                    vlSelf->INTR_CNTRL__DOT__intrOut_next = 1U;
                } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                  >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                  [6U]))) {
                    vlSelf->INTR_CNTRL__DOT__intrOut_next = 1U;
                } else if ((1U & ((IData)(vlSelf->intr_rq) 
                                  >> vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                  [7U]))) {
                    vlSelf->INTR_CNTRL__DOT__intrOut_next = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->INTR_CNTRL__DOT__state_reg)))) {
            if ((1U & (~ (IData)(vlSelf->intr_in)))) {
                vlSelf->INTR_CNTRL__DOT__intrOut_next = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
        if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            vlSelf->INTR_CNTRL__DOT__intrOut_next = 
                (1U & ((IData)(vlSelf->intr_rq) >> (IData)(vlSelf->INTR_CNTRL__DOT__intrIndex_reg)));
        }
    }
    vlSelf->intr_bus = ((((IData)(vlSelf->INTR_CNTRL__DOT__oe_reg)
                           ? (IData)(vlSelf->INTR_CNTRL__DOT__intrBus_reg)
                           : 0U) & ((IData)(vlSelf->INTR_CNTRL__DOT__oe_reg)
                                     ? 0xffU : 0U)) 
                        & ((IData)(vlSelf->INTR_CNTRL__DOT__oe_reg)
                            ? 0xffU : 0U));
    vlSelf->INTR_CNTRL__DOT__cmdCycle_next = vlSelf->INTR_CNTRL__DOT__cmdCycle_reg;
    if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
                    if ((1U != (3U & (IData)(vlSelf->intr_bus)))) {
                        if ((2U == (3U & (IData)(vlSelf->intr_bus)))) {
                            vlSelf->INTR_CNTRL__DOT__cmdCycle_next 
                                = (3U & ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))
                                          ? ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))
                                              ? ((IData)(1U) 
                                                 + (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg)))
                                          : ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))
                                              ? ((IData)(1U) 
                                                 + (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg)))));
                        }
                    }
                } else {
                    vlSelf->INTR_CNTRL__DOT__cmdCycle_next = 0U;
                }
            }
        }
    }
    vlSelf->INTR_CNTRL__DOT__cmdMode_next = vlSelf->INTR_CNTRL__DOT__cmdMode_reg;
    if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
                    if ((1U == (3U & (IData)(vlSelf->intr_bus)))) {
                        vlSelf->INTR_CNTRL__DOT__cmdMode_next = 1U;
                    } else if ((2U == (3U & (IData)(vlSelf->intr_bus)))) {
                        if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))) {
                            if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))) {
                                vlSelf->INTR_CNTRL__DOT__cmdMode_next = 2U;
                            }
                        }
                    }
                } else {
                    vlSelf->INTR_CNTRL__DOT__cmdMode_next = 0U;
                }
            }
        }
    }
    vlSelf->INTR_CNTRL__DOT__prior_table_next[0U] = 
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[0U];
    vlSelf->INTR_CNTRL__DOT__prior_table_next[1U] = 
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[1U];
    vlSelf->INTR_CNTRL__DOT__prior_table_next[2U] = 
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[2U];
    vlSelf->INTR_CNTRL__DOT__prior_table_next[3U] = 
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[3U];
    vlSelf->INTR_CNTRL__DOT__prior_table_next[4U] = 
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[4U];
    vlSelf->INTR_CNTRL__DOT__prior_table_next[5U] = 
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[5U];
    vlSelf->INTR_CNTRL__DOT__prior_table_next[6U] = 
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[6U];
    vlSelf->INTR_CNTRL__DOT__prior_table_next[7U] = 
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[7U];
    if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->INTR_CNTRL__DOT__state_reg) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
                    if ((1U != (3U & (IData)(vlSelf->intr_bus)))) {
                        if ((2U == (3U & (IData)(vlSelf->intr_bus)))) {
                            if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))) {
                                if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))) {
                                    vlSelf->INTR_CNTRL__DOT__prior_table_next[6U] 
                                        = (7U & ((IData)(vlSelf->intr_bus) 
                                                 >> 5U));
                                    vlSelf->INTR_CNTRL__DOT__prior_table_next[7U] 
                                        = (7U & ((IData)(vlSelf->intr_bus) 
                                                 >> 2U));
                                } else {
                                    vlSelf->INTR_CNTRL__DOT__prior_table_next[4U] 
                                        = (7U & ((IData)(vlSelf->intr_bus) 
                                                 >> 5U));
                                    vlSelf->INTR_CNTRL__DOT__prior_table_next[5U] 
                                        = (7U & ((IData)(vlSelf->intr_bus) 
                                                 >> 2U));
                                }
                            } else if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))) {
                                vlSelf->INTR_CNTRL__DOT__prior_table_next[2U] 
                                    = (7U & ((IData)(vlSelf->intr_bus) 
                                             >> 5U));
                                vlSelf->INTR_CNTRL__DOT__prior_table_next[3U] 
                                    = (7U & ((IData)(vlSelf->intr_bus) 
                                             >> 2U));
                            } else {
                                vlSelf->INTR_CNTRL__DOT__prior_table_next[0U] 
                                    = (7U & ((IData)(vlSelf->intr_bus) 
                                             >> 5U));
                                vlSelf->INTR_CNTRL__DOT__prior_table_next[1U] 
                                    = (7U & ((IData)(vlSelf->intr_bus) 
                                             >> 2U));
                            }
                        }
                    }
                } else {
                    vlSelf->INTR_CNTRL__DOT__prior_table_next[0U] = 0U;
                    vlSelf->INTR_CNTRL__DOT__prior_table_next[1U] = 0U;
                    vlSelf->INTR_CNTRL__DOT__prior_table_next[2U] = 0U;
                    vlSelf->INTR_CNTRL__DOT__prior_table_next[3U] = 0U;
                    vlSelf->INTR_CNTRL__DOT__prior_table_next[4U] = 0U;
                    vlSelf->INTR_CNTRL__DOT__prior_table_next[5U] = 0U;
                    vlSelf->INTR_CNTRL__DOT__prior_table_next[6U] = 0U;
                    vlSelf->INTR_CNTRL__DOT__prior_table_next[7U] = 0U;
                }
            }
        }
    }
    vlSelf->INTR_CNTRL__DOT__state_next = vlSelf->INTR_CNTRL__DOT__state_reg;
    if ((8U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
        if ((4U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            vlSelf->INTR_CNTRL__DOT__state_next = 0U;
        } else if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            vlSelf->INTR_CNTRL__DOT__state_next = (
                                                   (1U 
                                                    & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))
                                                    ? 0U
                                                    : 
                                                   ((((~ (IData)(vlSelf->intr_in)) 
                                                      & (0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->intr_bus) 
                                                             >> 3U)))) 
                                                     & ((7U 
                                                         & (IData)(vlSelf->intr_bus)) 
                                                        == (IData)(vlSelf->INTR_CNTRL__DOT__intrPtr_reg)))
                                                     ? 7U
                                                     : 
                                                    ((((~ (IData)(vlSelf->intr_in)) 
                                                       & (0xcU 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->intr_bus) 
                                                              >> 3U)))) 
                                                      & ((7U 
                                                          & (IData)(vlSelf->intr_bus)) 
                                                         != (IData)(vlSelf->INTR_CNTRL__DOT__intrPtr_reg)))
                                                      ? 0U
                                                      : 0xaU)));
        } else if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelf->intr_in)))) {
                vlSelf->INTR_CNTRL__DOT__state_next = 0xaU;
            }
        } else if ((1U & (~ (IData)(vlSelf->intr_in)))) {
            vlSelf->INTR_CNTRL__DOT__state_next = 9U;
        }
    } else if ((4U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
        if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            vlSelf->INTR_CNTRL__DOT__state_next = (
                                                   (1U 
                                                    & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSelf->intr_rq) 
                                                        >> 
                                                        vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                                        [0U]))
                                                     ? 8U
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlSelf->intr_rq) 
                                                         >> 
                                                         vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                                         [1U]))
                                                      ? 8U
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlSelf->intr_rq) 
                                                          >> 
                                                          vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                                          [2U]))
                                                       ? 8U
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelf->intr_rq) 
                                                           >> 
                                                           vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                                           [3U]))
                                                        ? 8U
                                                        : 
                                                       ((1U 
                                                         & ((IData)(vlSelf->intr_rq) 
                                                            >> 
                                                            vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                                            [4U]))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->intr_rq) 
                                                             >> 
                                                             vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                                             [5U]))
                                                          ? 8U
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->intr_rq) 
                                                              >> 
                                                              vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                                              [6U]))
                                                           ? 8U
                                                           : 
                                                          ((1U 
                                                            & ((IData)(vlSelf->intr_rq) 
                                                               >> 
                                                               vlSelf->INTR_CNTRL__DOT__prior_table_reg
                                                               [7U]))
                                                            ? 8U
                                                            : 7U))))))))
                                                    : 
                                                   ((((~ (IData)(vlSelf->intr_in)) 
                                                      & (0x14U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->intr_bus) 
                                                             >> 3U)))) 
                                                     & ((7U 
                                                         & (IData)(vlSelf->intr_bus)) 
                                                        == (IData)(vlSelf->INTR_CNTRL__DOT__intrIndex_reg)))
                                                     ? 3U
                                                     : 
                                                    ((((~ (IData)(vlSelf->intr_in)) 
                                                       & (0x14U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->intr_bus) 
                                                              >> 3U)))) 
                                                      & ((7U 
                                                          & (IData)(vlSelf->intr_bus)) 
                                                         != (IData)(vlSelf->INTR_CNTRL__DOT__intrIndex_reg)))
                                                      ? 0U
                                                      : 6U)));
        } else if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelf->intr_in)))) {
                vlSelf->INTR_CNTRL__DOT__state_next = 6U;
            }
        } else {
            vlSelf->INTR_CNTRL__DOT__state_next = ((IData)(vlSelf->intr_in)
                                                    ? 4U
                                                    : 5U);
        }
    } else if ((2U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
        if ((1U & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))) {
            if ((1U & ((IData)(vlSelf->intr_rq) >> (IData)(vlSelf->INTR_CNTRL__DOT__intrIndex_reg)))) {
                vlSelf->INTR_CNTRL__DOT__state_next = 4U;
            }
        } else {
            vlSelf->INTR_CNTRL__DOT__state_next = (
                                                   (1U 
                                                    == (IData)(vlSelf->INTR_CNTRL__DOT__cmdMode_reg))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->INTR_CNTRL__DOT__cmdMode_reg))
                                                     ? 7U
                                                     : 0U));
        }
    } else {
        vlSelf->INTR_CNTRL__DOT__state_next = ((1U 
                                                & (IData)(vlSelf->INTR_CNTRL__DOT__state_reg))
                                                ? (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->intr_bus)))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->intr_bus)))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->INTR_CNTRL__DOT__cmdCycle_reg))
                                                       ? 2U
                                                       : 1U)
                                                      : 1U)
                                                     : 1U))
                                                : 1U);
    }
}

void Vintr_cntrl___024root___eval_initial(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_in = vlSelf->clk_in;
    vlSelf->__Vclklast__TOP__rst_in = vlSelf->rst_in;
}

void Vintr_cntrl___024root___eval_settle(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___eval_settle\n"); );
    // Body
    Vintr_cntrl___024root___settle__TOP__2(vlSelf);
}

void Vintr_cntrl___024root___final(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___final\n"); );
}

void Vintr_cntrl___024root___ctor_var_reset(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_in = VL_RAND_RESET_I(1);
    vlSelf->rst_in = VL_RAND_RESET_I(1);
    vlSelf->intr_rq = VL_RAND_RESET_I(8);
    vlSelf->intr_bus = VL_RAND_RESET_I(8);
    vlSelf->intr_in = VL_RAND_RESET_I(1);
    vlSelf->intr_out = VL_RAND_RESET_I(1);
    vlSelf->bus_oe = VL_RAND_RESET_I(1);
    vlSelf->INTR_CNTRL__DOT__state_reg = VL_RAND_RESET_I(4);
    vlSelf->INTR_CNTRL__DOT__state_next = VL_RAND_RESET_I(4);
    vlSelf->INTR_CNTRL__DOT__cmdMode_reg = VL_RAND_RESET_I(2);
    vlSelf->INTR_CNTRL__DOT__cmdMode_next = VL_RAND_RESET_I(2);
    vlSelf->INTR_CNTRL__DOT__cmdCycle_reg = VL_RAND_RESET_I(2);
    vlSelf->INTR_CNTRL__DOT__cmdCycle_next = VL_RAND_RESET_I(2);
    vlSelf->INTR_CNTRL__DOT__intrIndex_reg = VL_RAND_RESET_I(3);
    vlSelf->INTR_CNTRL__DOT__intrIndex_next = VL_RAND_RESET_I(3);
    vlSelf->INTR_CNTRL__DOT__intrPtr_reg = VL_RAND_RESET_I(3);
    vlSelf->INTR_CNTRL__DOT__intrPtr_next = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->INTR_CNTRL__DOT__prior_table_next[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->INTR_CNTRL__DOT__oe_reg = VL_RAND_RESET_I(1);
    vlSelf->INTR_CNTRL__DOT__oe_next = VL_RAND_RESET_I(1);
    vlSelf->INTR_CNTRL__DOT__intrBus_reg = VL_RAND_RESET_I(8);
    vlSelf->INTR_CNTRL__DOT__intrBus_next = VL_RAND_RESET_I(8);
    vlSelf->INTR_CNTRL__DOT__intrOut_reg = VL_RAND_RESET_I(1);
    vlSelf->INTR_CNTRL__DOT__intrOut_next = VL_RAND_RESET_I(1);
}
