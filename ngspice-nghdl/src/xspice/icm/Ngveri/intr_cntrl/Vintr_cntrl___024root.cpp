// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintr_cntrl.h for the primary calling header

#include "Vintr_cntrl___024root.h"
#include "Vintr_cntrl__Syms.h"

//==========

VL_INLINE_OPT void Vintr_cntrl___024root___sequent__TOP__1(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__INTR_CNTRL__DOT__prior_table_reg__v0;
    CData/*2:0*/ __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v8;
    CData/*0:0*/ __Vdlyvset__INTR_CNTRL__DOT__prior_table_reg__v8;
    CData/*2:0*/ __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v9;
    CData/*2:0*/ __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v10;
    CData/*2:0*/ __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v11;
    CData/*2:0*/ __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v12;
    CData/*2:0*/ __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v13;
    CData/*2:0*/ __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v14;
    CData/*2:0*/ __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v15;
    // Body
    __Vdlyvset__INTR_CNTRL__DOT__prior_table_reg__v0 = 0U;
    __Vdlyvset__INTR_CNTRL__DOT__prior_table_reg__v8 = 0U;
    vlSelf->INTR_CNTRL__DOT__intrOut_reg = ((~ (IData)(vlSelf->rst_in)) 
                                            & (IData)(vlSelf->INTR_CNTRL__DOT__intrOut_next));
    if (vlSelf->rst_in) {
        vlSelf->INTR_CNTRL__DOT__cmdMode_reg = 0U;
        vlSelf->INTR_CNTRL__DOT__intrPtr_reg = 0U;
        vlSelf->INTR_CNTRL__DOT__cmdCycle_reg = 0U;
        vlSelf->INTR_CNTRL__DOT__intrIndex_reg = 0U;
        vlSelf->INTR_CNTRL__DOT__state_reg = 0U;
        vlSelf->INTR_CNTRL__DOT__intrBus_reg = 0U;
    } else {
        vlSelf->INTR_CNTRL__DOT__cmdMode_reg = vlSelf->INTR_CNTRL__DOT__cmdMode_next;
        vlSelf->INTR_CNTRL__DOT__intrPtr_reg = vlSelf->INTR_CNTRL__DOT__intrPtr_next;
        vlSelf->INTR_CNTRL__DOT__cmdCycle_reg = vlSelf->INTR_CNTRL__DOT__cmdCycle_next;
        vlSelf->INTR_CNTRL__DOT__intrIndex_reg = vlSelf->INTR_CNTRL__DOT__intrIndex_next;
        vlSelf->INTR_CNTRL__DOT__state_reg = vlSelf->INTR_CNTRL__DOT__state_next;
        vlSelf->INTR_CNTRL__DOT__intrBus_reg = vlSelf->INTR_CNTRL__DOT__intrBus_next;
    }
    vlSelf->INTR_CNTRL__DOT__oe_reg = ((~ (IData)(vlSelf->rst_in)) 
                                       & (IData)(vlSelf->INTR_CNTRL__DOT__oe_next));
    if (vlSelf->rst_in) {
        __Vdlyvset__INTR_CNTRL__DOT__prior_table_reg__v0 = 1U;
    } else {
        __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v8 
            = vlSelf->INTR_CNTRL__DOT__prior_table_next
            [0U];
        __Vdlyvset__INTR_CNTRL__DOT__prior_table_reg__v8 = 1U;
        __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v9 
            = vlSelf->INTR_CNTRL__DOT__prior_table_next
            [1U];
        __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v10 
            = vlSelf->INTR_CNTRL__DOT__prior_table_next
            [2U];
        __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v11 
            = vlSelf->INTR_CNTRL__DOT__prior_table_next
            [3U];
        __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v12 
            = vlSelf->INTR_CNTRL__DOT__prior_table_next
            [4U];
        __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v13 
            = vlSelf->INTR_CNTRL__DOT__prior_table_next
            [5U];
        __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v14 
            = vlSelf->INTR_CNTRL__DOT__prior_table_next
            [6U];
        __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v15 
            = vlSelf->INTR_CNTRL__DOT__prior_table_next
            [7U];
    }
    if (__Vdlyvset__INTR_CNTRL__DOT__prior_table_reg__v0) {
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[0U] = 0U;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[1U] = 0U;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[2U] = 0U;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[3U] = 0U;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[4U] = 0U;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[5U] = 0U;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[6U] = 0U;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[7U] = 0U;
    }
    if (__Vdlyvset__INTR_CNTRL__DOT__prior_table_reg__v8) {
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[0U] 
            = __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v8;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[1U] 
            = __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v9;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[2U] 
            = __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v10;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[3U] 
            = __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v11;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[4U] 
            = __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v12;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[5U] 
            = __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v13;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[6U] 
            = __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v14;
        vlSelf->INTR_CNTRL__DOT__prior_table_reg[7U] 
            = __Vdlyvval__INTR_CNTRL__DOT__prior_table_reg__v15;
    }
    vlSelf->intr_out = vlSelf->INTR_CNTRL__DOT__intrOut_reg;
    vlSelf->bus_oe = vlSelf->INTR_CNTRL__DOT__oe_reg;
    vlSelf->intr_bus = ((((IData)(vlSelf->INTR_CNTRL__DOT__oe_reg)
                           ? (IData)(vlSelf->INTR_CNTRL__DOT__intrBus_reg)
                           : 0U) & ((IData)(vlSelf->INTR_CNTRL__DOT__oe_reg)
                                     ? 0xffU : 0U)) 
                        & ((IData)(vlSelf->INTR_CNTRL__DOT__oe_reg)
                            ? 0xffU : 0U));
}

VL_INLINE_OPT void Vintr_cntrl___024root___combo__TOP__3(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___combo__TOP__3\n"); );
    // Body
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

void Vintr_cntrl___024root___eval(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_in) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_in))) 
         | ((IData)(vlSelf->rst_in) & (~ (IData)(vlSelf->__Vclklast__TOP__rst_in))))) {
        Vintr_cntrl___024root___sequent__TOP__1(vlSelf);
    }
    Vintr_cntrl___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_in = vlSelf->clk_in;
    vlSelf->__Vclklast__TOP__rst_in = vlSelf->rst_in;
}

QData Vintr_cntrl___024root___change_request_1(Vintr_cntrl___024root* vlSelf);

VL_INLINE_OPT QData Vintr_cntrl___024root___change_request(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___change_request\n"); );
    // Body
    return (Vintr_cntrl___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vintr_cntrl___024root___change_request_1(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vintr_cntrl___024root___eval_debug_assertions(Vintr_cntrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintr_cntrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintr_cntrl___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_in & 0xfeU))) {
        Verilated::overWidthError("clk_in");}
    if (VL_UNLIKELY((vlSelf->rst_in & 0xfeU))) {
        Verilated::overWidthError("rst_in");}
    if (VL_UNLIKELY((vlSelf->intr_in & 0xfeU))) {
        Verilated::overWidthError("intr_in");}
}
#endif  // VL_DEBUG
