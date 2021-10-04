// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->failed = 0U;
}

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*0:0*/ top__DOT__CPU_is_i_instr_a1;
    CData/*0:0*/ top__DOT__CPU_is_r_instr_a1;
    // Body
    vlSelf->top__DOT__instrs[0U] = 0x533U;
    vlSelf->top__DOT__instrs[1U] = 0x50733U;
    vlSelf->top__DOT__instrs[2U] = 0xa50613U;
    vlSelf->top__DOT__instrs[3U] = 0x506b3U;
    vlSelf->top__DOT__instrs[4U] = 0xe68733U;
    vlSelf->top__DOT__instrs[5U] = 0x168693U;
    vlSelf->top__DOT__instrs[6U] = 0xfec6cce3U;
    vlSelf->top__DOT__instrs[7U] = 0x70533U;
    vlSelf->top__DOT__instrs[8U] = 0xa02823U;
    vlSelf->top__DOT__instrs[9U] = 0x1002883U;
    vlSelf->top__DOT__clkP_CPU_rs1_valid_a3 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a3__DOT__latched_clk_en) 
                                               & (IData)(vlSelf->clk));
    vlSelf->top__DOT__clkP_CPU_rs1_valid_a4 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a4__DOT__latched_clk_en) 
                                               & (IData)(vlSelf->clk));
    vlSelf->top__DOT__clkP_CPU_rs2_valid_a3 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a3__DOT__latched_clk_en) 
                                               & (IData)(vlSelf->clk));
    vlSelf->top__DOT__clkP_CPU_rs2_valid_a4 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a4__DOT__latched_clk_en) 
                                               & (IData)(vlSelf->clk));
    vlSelf->top__DOT__clkP_CPU_rd_valid_a2 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a2__DOT__latched_clk_en) 
                                              & (IData)(vlSelf->clk));
    vlSelf->top__DOT__clkP_CPU_rs2_valid_a2 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a2__DOT__latched_clk_en) 
                                               & (IData)(vlSelf->clk));
    vlSelf->top__DOT__clkP_CPU_rs1_valid_a2 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a2__DOT__latched_clk_en) 
                                               & (IData)(vlSelf->clk));
    vlSelf->top__DOT__clkP_CPU_dmem_rd_en_a5 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_dmem_rd_en_a5__DOT__latched_clk_en) 
                                                & (IData)(vlSelf->clk));
    vlSelf->top__DOT__clkP_CPU_rd_valid_a3 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a3__DOT__latched_clk_en) 
                                              & (IData)(vlSelf->clk));
    vlSelf->top__DOT__clkP_CPU_rd_valid_a4 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a4__DOT__latched_clk_en) 
                                              & (IData)(vlSelf->clk));
    vlSelf->top__DOT__clkP_CPU_rd_valid_a5 = ((IData)(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a5__DOT__latched_clk_en) 
                                              & (IData)(vlSelf->clk));
    vlSelf->passed = (0x2dU == vlSelf->top__DOT__CPU_Xreg_value_a5
                      [0x11U]);
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a5__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rd_valid_a4;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a4__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rs1_valid_a3;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a4__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rs2_valid_a3;
    }
    vlSelf->top__DOT__CPU_dmem_wr_en_a4 = ((IData)(vlSelf->top__DOT__CPU_valid_a4) 
                                           & (IData)(vlSelf->top__DOT__CPU_is_s_instr_a4));
    vlSelf->top__DOT__CPU_sltiu_result_a3 = (vlSelf->top__DOT__CPU_src1_value_a3 
                                             < vlSelf->top__DOT__CPU_imm_a3);
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_dmem_rd_en_a5__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_valid_load_a4;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a4__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rd_valid_a3;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a3__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rs1_valid_a2;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a3__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rs2_valid_a2;
    }
    vlSelf->top__DOT__CPU_sltu_result_a3 = (vlSelf->top__DOT__CPU_src1_value_a3 
                                            < vlSelf->top__DOT__CPU_src2_value_a3);
    vlSelf->top__DOT__CPU_valid_a3 = (1U & (~ ((((((IData)(vlSelf->top__DOT__CPU_valid_taken_br_a4) 
                                                   | (IData)(vlSelf->top__DOT__CPU_valid_taken_br_a5)) 
                                                  | (IData)(vlSelf->top__DOT__CPU_valid_load_a4)) 
                                                 | (IData)(vlSelf->top__DOT__CPU_valid_load_a5)) 
                                                | (IData)(vlSelf->top__DOT__CPU_valid_jump_a4)) 
                                               | (IData)(vlSelf->top__DOT__CPU_valid_jump_a5))));
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a3__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rd_valid_a2;
    }
    vlSelf->top__DOT__CPU_Imem_instr_a1[0U] = vlSelf->top__DOT__instrs
        [0U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[1U] = vlSelf->top__DOT__instrs
        [1U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[2U] = vlSelf->top__DOT__instrs
        [2U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[3U] = vlSelf->top__DOT__instrs
        [3U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[4U] = vlSelf->top__DOT__instrs
        [4U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[5U] = vlSelf->top__DOT__instrs
        [5U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[6U] = vlSelf->top__DOT__instrs
        [6U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[7U] = vlSelf->top__DOT__instrs
        [7U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[8U] = vlSelf->top__DOT__instrs
        [8U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[9U] = vlSelf->top__DOT__instrs
        [9U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[0U] = vlSelf->top__DOT__instrs
        [0U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[1U] = vlSelf->top__DOT__instrs
        [1U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[2U] = vlSelf->top__DOT__instrs
        [2U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[3U] = vlSelf->top__DOT__instrs
        [3U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[4U] = vlSelf->top__DOT__instrs
        [4U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[5U] = vlSelf->top__DOT__instrs
        [5U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[6U] = vlSelf->top__DOT__instrs
        [6U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[7U] = vlSelf->top__DOT__instrs
        [7U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[8U] = vlSelf->top__DOT__instrs
        [8U];
    vlSelf->top__DOT__CPU_Imem_instr_a1[9U] = vlSelf->top__DOT__instrs
        [9U];
    if (vlSelf->top__DOT__CPU_reset_a4) {
        vlSelf->top__DOT__CPU_Dmem_value_a4[0U] = 0U;
        vlSelf->top__DOT__CPU_Dmem_value_a4[1U] = 1U;
        vlSelf->top__DOT__CPU_Dmem_value_a4[2U] = 2U;
        vlSelf->top__DOT__CPU_Dmem_value_a4[3U] = 3U;
        vlSelf->top__DOT__CPU_Dmem_value_a4[4U] = 4U;
        vlSelf->top__DOT__CPU_Dmem_value_a4[5U] = 5U;
        vlSelf->top__DOT__CPU_Dmem_value_a4[6U] = 6U;
        vlSelf->top__DOT__CPU_Dmem_value_a4[7U] = 7U;
        vlSelf->top__DOT__CPU_Dmem_value_a4[8U] = 8U;
        vlSelf->top__DOT__CPU_Dmem_value_a4[9U] = 9U;
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xaU] = 0xaU;
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xbU] = 0xbU;
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xcU] = 0xcU;
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xdU] = 0xdU;
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xeU] = 0xeU;
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xfU] = 0xfU;
    } else {
        vlSelf->top__DOT__CPU_Dmem_value_a4[0U] = (
                                                   ((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                                    & (0U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__CPU_result_a4 
                                                           >> 2U))))
                                                    ? vlSelf->top__DOT__CPU_src2_value_a4
                                                    : 
                                                   vlSelf->top__DOT__CPU_Dmem_value_a5
                                                   [0U]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[1U] = (
                                                   ((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                                    & (1U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__CPU_result_a4 
                                                           >> 2U))))
                                                    ? vlSelf->top__DOT__CPU_src2_value_a4
                                                    : 
                                                   vlSelf->top__DOT__CPU_Dmem_value_a5
                                                   [1U]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[2U] = (
                                                   ((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                                    & (2U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__CPU_result_a4 
                                                           >> 2U))))
                                                    ? vlSelf->top__DOT__CPU_src2_value_a4
                                                    : 
                                                   vlSelf->top__DOT__CPU_Dmem_value_a5
                                                   [2U]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[3U] = (
                                                   ((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                                    & (3U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__CPU_result_a4 
                                                           >> 2U))))
                                                    ? vlSelf->top__DOT__CPU_src2_value_a4
                                                    : 
                                                   vlSelf->top__DOT__CPU_Dmem_value_a5
                                                   [3U]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[4U] = (
                                                   ((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                                    & (4U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__CPU_result_a4 
                                                           >> 2U))))
                                                    ? vlSelf->top__DOT__CPU_src2_value_a4
                                                    : 
                                                   vlSelf->top__DOT__CPU_Dmem_value_a5
                                                   [4U]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[5U] = (
                                                   ((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                                    & (5U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__CPU_result_a4 
                                                           >> 2U))))
                                                    ? vlSelf->top__DOT__CPU_src2_value_a4
                                                    : 
                                                   vlSelf->top__DOT__CPU_Dmem_value_a5
                                                   [5U]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[6U] = (
                                                   ((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                                    & (6U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__CPU_result_a4 
                                                           >> 2U))))
                                                    ? vlSelf->top__DOT__CPU_src2_value_a4
                                                    : 
                                                   vlSelf->top__DOT__CPU_Dmem_value_a5
                                                   [6U]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[7U] = (
                                                   ((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                                    & (7U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__CPU_result_a4 
                                                           >> 2U))))
                                                    ? vlSelf->top__DOT__CPU_src2_value_a4
                                                    : 
                                                   vlSelf->top__DOT__CPU_Dmem_value_a5
                                                   [7U]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[8U] = (
                                                   ((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                                    & (8U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__CPU_result_a4 
                                                           >> 2U))))
                                                    ? vlSelf->top__DOT__CPU_src2_value_a4
                                                    : 
                                                   vlSelf->top__DOT__CPU_Dmem_value_a5
                                                   [8U]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[9U] = (
                                                   ((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                                    & (9U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__CPU_result_a4 
                                                           >> 2U))))
                                                    ? vlSelf->top__DOT__CPU_src2_value_a4
                                                    : 
                                                   vlSelf->top__DOT__CPU_Dmem_value_a5
                                                   [9U]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xaU] = 
            (((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
              & (0xaU == (0xfU & (vlSelf->top__DOT__CPU_result_a4 
                                  >> 2U)))) ? vlSelf->top__DOT__CPU_src2_value_a4
              : vlSelf->top__DOT__CPU_Dmem_value_a5
             [0xaU]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xbU] = 
            (((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
              & (0xbU == (0xfU & (vlSelf->top__DOT__CPU_result_a4 
                                  >> 2U)))) ? vlSelf->top__DOT__CPU_src2_value_a4
              : vlSelf->top__DOT__CPU_Dmem_value_a5
             [0xbU]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xcU] = 
            (((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
              & (0xcU == (0xfU & (vlSelf->top__DOT__CPU_result_a4 
                                  >> 2U)))) ? vlSelf->top__DOT__CPU_src2_value_a4
              : vlSelf->top__DOT__CPU_Dmem_value_a5
             [0xcU]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xdU] = 
            (((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
              & (0xdU == (0xfU & (vlSelf->top__DOT__CPU_result_a4 
                                  >> 2U)))) ? vlSelf->top__DOT__CPU_src2_value_a4
              : vlSelf->top__DOT__CPU_Dmem_value_a5
             [0xdU]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xeU] = 
            (((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
              & (0xeU == (0xfU & (vlSelf->top__DOT__CPU_result_a4 
                                  >> 2U)))) ? vlSelf->top__DOT__CPU_src2_value_a4
              : vlSelf->top__DOT__CPU_Dmem_value_a5
             [0xeU]);
        vlSelf->top__DOT__CPU_Dmem_value_a4[0xfU] = 
            (((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
              & (0xfU == (0xfU & (vlSelf->top__DOT__CPU_result_a4 
                                  >> 2U)))) ? vlSelf->top__DOT__CPU_src2_value_a4
              : vlSelf->top__DOT__CPU_Dmem_value_a5
             [0xfU]);
    }
    vlSelf->top__DOT__CPU_result_a3 = (IData)(((IData)(vlSelf->top__DOT__CPU_is_addi_a3)
                                                ? ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                   + (QData)((IData)(vlSelf->top__DOT__CPU_imm_a3)))
                                                : ((IData)(vlSelf->top__DOT__CPU_is_add_a3)
                                                    ? 
                                                   ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                    + (QData)((IData)(vlSelf->top__DOT__CPU_src2_value_a3)))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__CPU_is_or_a3)
                                                     ? 
                                                    ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                     | (QData)((IData)(vlSelf->top__DOT__CPU_src2_value_a3)))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__CPU_is_ori_a3)
                                                      ? 
                                                     ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                      | (QData)((IData)(vlSelf->top__DOT__CPU_imm_a3)))
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__CPU_is_xor_a3)
                                                       ? 
                                                      ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                       ^ (QData)((IData)(vlSelf->top__DOT__CPU_src2_value_a3)))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__CPU_is_xori_a3)
                                                        ? 
                                                       ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                        ^ (QData)((IData)(vlSelf->top__DOT__CPU_imm_a3)))
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__CPU_is_and_a3)
                                                         ? 
                                                        ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                         & (QData)((IData)(vlSelf->top__DOT__CPU_src2_value_a3)))
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__CPU_is_andi_a3)
                                                          ? 
                                                         ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                          & (QData)((IData)(vlSelf->top__DOT__CPU_imm_a3)))
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__CPU_is_sub_a3)
                                                           ? 
                                                          ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                           - (QData)((IData)(vlSelf->top__DOT__CPU_src2_value_a3)))
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__CPU_is_slti_a3)
                                                            ? 
                                                           (((vlSelf->top__DOT__CPU_src1_value_a3 
                                                              >> 0x1fU) 
                                                             == 
                                                             (vlSelf->top__DOT__CPU_imm_a3 
                                                              >> 0x1fU))
                                                             ? (QData)((IData)(vlSelf->top__DOT__CPU_sltiu_result_a3))
                                                             : (QData)((IData)(
                                                                               (vlSelf->top__DOT__CPU_src1_value_a3 
                                                                                >> 0x1fU))))
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__CPU_is_sltiu_a3)
                                                             ? (QData)((IData)(vlSelf->top__DOT__CPU_sltiu_result_a3))
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__CPU_is_slli_a3)
                                                              ? 
                                                             ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                              << 
                                                              (0x3fU 
                                                               & vlSelf->top__DOT__CPU_imm_a3))
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__CPU_is_srli_a3)
                                                               ? 
                                                              ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                               >> 
                                                               (0x3fU 
                                                                & vlSelf->top__DOT__CPU_imm_a3))
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__CPU_is_srai_a3)
                                                                ? 
                                                               ((((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->top__DOT__CPU_src1_value_a3 
                                                                                >> 0x1fU))))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3))) 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlSelf->top__DOT__CPU_imm_a3))
                                                                : 
                                                               ((IData)(vlSelf->top__DOT__CPU_is_sll_a3)
                                                                 ? 
                                                                ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                                 << 
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__CPU_src2_value_a3))
                                                                 : 
                                                                ((IData)(vlSelf->top__DOT__CPU_is_slt_a3)
                                                                  ? 
                                                                 (((vlSelf->top__DOT__CPU_src1_value_a3 
                                                                    >> 0x1fU) 
                                                                   == 
                                                                   (vlSelf->top__DOT__CPU_src2_value_a3 
                                                                    >> 0x1fU))
                                                                   ? (QData)((IData)(vlSelf->top__DOT__CPU_sltu_result_a3))
                                                                   : (QData)((IData)(
                                                                                (vlSelf->top__DOT__CPU_src1_value_a3 
                                                                                >> 0x1fU))))
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__CPU_is_sltu_a3)
                                                                   ? (QData)((IData)(vlSelf->top__DOT__CPU_sltu_result_a3))
                                                                   : 
                                                                  ((IData)(vlSelf->top__DOT__CPU_is_srl_a3)
                                                                    ? 
                                                                   ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & vlSelf->top__DOT__CPU_src2_value_a3))
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__CPU_is_sra_a3)
                                                                     ? 
                                                                    ((((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->top__DOT__CPU_src1_value_a3 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3))) 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & vlSelf->top__DOT__CPU_src2_value_a3))
                                                                     : 
                                                                    ((IData)(vlSelf->top__DOT__CPU_is_lui_a3)
                                                                      ? (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & vlSelf->top__DOT__CPU_imm_a3)))
                                                                      : 
                                                                     ((IData)(vlSelf->top__DOT__CPU_is_auipc_a3)
                                                                       ? 
                                                                      ((QData)((IData)(vlSelf->top__DOT__CPU_pc_a3)) 
                                                                       + (QData)((IData)(vlSelf->top__DOT__CPU_imm_a3)))
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__CPU_is_jal_a3)
                                                                        ? 
                                                                       ((QData)((IData)(vlSelf->top__DOT__CPU_pc_a3)) 
                                                                        + (QData)((IData)(vlSelf->top__DOT__CPU_imm_a3)))
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__CPU_is_jalr_a3)
                                                                         ? 
                                                                        ((QData)((IData)(vlSelf->top__DOT__CPU_pc_a3)) 
                                                                         + (QData)((IData)(vlSelf->top__DOT__CPU_imm_a3)))
                                                                         : 
                                                                        (((IData)(vlSelf->top__DOT__CPU_is_load_a3) 
                                                                          | (IData)(vlSelf->top__DOT__CPU_is_s_instr_a3))
                                                                          ? 
                                                                         ((QData)((IData)(vlSelf->top__DOT__CPU_src1_value_a3)) 
                                                                          + (QData)((IData)(vlSelf->top__DOT__CPU_imm_a3)))
                                                                          : 0ULL)))))))))))))))))))))))));
    vlSelf->top__DOT__CPU_valid_load_a3 = ((IData)(vlSelf->top__DOT__CPU_valid_a3) 
                                           & (IData)(vlSelf->top__DOT__CPU_is_load_a3));
    vlSelf->top__DOT__CPU_valid_jump_a3 = ((IData)(vlSelf->top__DOT__CPU_valid_a3) 
                                           & (IData)(vlSelf->top__DOT__CPU_is_jump_a3));
    vlSelf->top__DOT__CPU_valid_taken_br_a3 = ((IData)(vlSelf->top__DOT__CPU_valid_a3) 
                                               & ((IData)(vlSelf->top__DOT__CPU_is_beq_a3)
                                                   ? 
                                                  (vlSelf->top__DOT__CPU_src1_value_a3 
                                                   == vlSelf->top__DOT__CPU_src2_value_a3)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__CPU_is_bne_a3)
                                                    ? 
                                                   (vlSelf->top__DOT__CPU_src1_value_a3 
                                                    != vlSelf->top__DOT__CPU_src2_value_a3)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__CPU_is_blt_a3)
                                                     ? 
                                                    ((vlSelf->top__DOT__CPU_src1_value_a3 
                                                      < vlSelf->top__DOT__CPU_src2_value_a3) 
                                                     ^ 
                                                     ((vlSelf->top__DOT__CPU_src1_value_a3 
                                                       >> 0x1fU) 
                                                      != 
                                                      (vlSelf->top__DOT__CPU_src2_value_a3 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__CPU_is_bge_a3)
                                                      ? 
                                                     ((vlSelf->top__DOT__CPU_src1_value_a3 
                                                       >= vlSelf->top__DOT__CPU_src2_value_a3) 
                                                      ^ 
                                                      ((vlSelf->top__DOT__CPU_src1_value_a3 
                                                        >> 0x1fU) 
                                                       != 
                                                       (vlSelf->top__DOT__CPU_src2_value_a3 
                                                        >> 0x1fU)))
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__CPU_is_bltu_a3)
                                                       ? 
                                                      (vlSelf->top__DOT__CPU_src1_value_a3 
                                                       < vlSelf->top__DOT__CPU_src2_value_a3)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__CPU_is_bgeu_a3) 
                                                       & (vlSelf->top__DOT__CPU_src1_value_a3 
                                                          >= vlSelf->top__DOT__CPU_src2_value_a3))))))));
    vlSelf->top__DOT__CPU_rf_wr_index_a3 = ((IData)(vlSelf->top__DOT__CPU_valid_a3)
                                             ? (IData)(vlSelf->top__DOT__CPU_rd_a3)
                                             : (IData)(vlSelf->top__DOT__CPU_rd_a5));
    vlSelf->top__DOT__CPU_rf_wr_en_a3 = ((((IData)(vlSelf->top__DOT__CPU_rd_valid_a3) 
                                           & (IData)(vlSelf->top__DOT__CPU_valid_a3)) 
                                          & (0U != (IData)(vlSelf->top__DOT__CPU_rd_a3))) 
                                         | (IData)(vlSelf->top__DOT__CPU_valid_load_a5));
    vlSelf->top__DOT__CPU_imem_rd_data_a1 = ((9U >= 
                                              (0xfU 
                                               & vlSelf->top__DOT__CPU_imem_rd_addr_a1))
                                              ? vlSelf->top__DOT__CPU_Imem_instr_a1
                                             [(0xfU 
                                               & vlSelf->top__DOT__CPU_imem_rd_addr_a1)]
                                              : 0U);
    vlSelf->top__DOT__CPU_rf_wr_data_a3 = ((IData)(vlSelf->top__DOT__CPU_valid_a3)
                                            ? vlSelf->top__DOT__CPU_result_a3
                                            : vlSelf->top__DOT__CPU_dmem_rd_data_a5);
    vlSelf->top__DOT__CPU_pc_a0 = ((IData)(vlSelf->top__DOT__CPU_reset_a1)
                                    ? 0U : ((IData)(vlSelf->top__DOT__CPU_valid_taken_br_a3)
                                             ? vlSelf->top__DOT__CPU_br_tgt_pc_a3
                                             : ((IData)(vlSelf->top__DOT__CPU_valid_load_a3)
                                                 ? vlSelf->top__DOT__CPU_inc_pc_a3
                                                 : 
                                                (((IData)(vlSelf->top__DOT__CPU_valid_jump_a3) 
                                                  & (IData)(vlSelf->top__DOT__CPU_is_jal_a3))
                                                  ? vlSelf->top__DOT__CPU_br_tgt_pc_a3
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__CPU_valid_jump_a3) 
                                                   & (IData)(vlSelf->top__DOT__CPU_is_jalr_a3))
                                                   ? vlSelf->top__DOT__CPU_jalr_tgt_pc_a3
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__CPU_pc_a1))))));
    vlSelf->top__DOT__CPU_src1_value_a2 = ((((IData)(vlSelf->top__DOT__CPU_rd_a3) 
                                             == (IData)(vlSelf->top__DOT__CPU_rs1_a2)) 
                                            & (IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3))
                                            ? vlSelf->top__DOT__CPU_result_a3
                                            : vlSelf->top__DOT__CPU_Xreg_value_a4
                                           [vlSelf->top__DOT__CPU_rs1_a2]);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__0__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__1__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (1U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__2__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (2U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__3__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (3U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__4__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (4U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__5__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (5U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__6__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (6U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__7__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (7U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__8__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (8U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__9__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (9U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__10__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0xaU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__11__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0xbU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__12__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0xcU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__13__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0xdU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__14__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0xeU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__15__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0xfU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__16__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x10U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__17__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x11U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__18__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x12U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__19__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x13U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__20__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x14U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__21__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x15U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__22__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x16U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__23__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x17U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__24__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x18U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__25__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x19U == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__26__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x1aU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__27__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x1bU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__28__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x1cU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__29__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x1dU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__30__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x1eU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__31__KET____DOT__L1_wr_a3 
        = (((IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3) 
            & (0U != (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3))) 
           & (0x1fU == (IData)(vlSelf->top__DOT__CPU_rf_wr_index_a3)));
    vlSelf->top__DOT__CPU_dec_bits_a1 = ((0x400U & 
                                          (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                           >> 0x14U)) 
                                         | ((0x380U 
                                             & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->top__DOT__CPU_imem_rd_data_a1)));
    top__DOT__CPU_is_i_instr_a1 = (((0U == (0x1eU & 
                                            (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                             >> 2U))) 
                                    | (4U == (0x1dU 
                                              & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                 >> 2U)))) 
                                   | (0x19U == (0x1fU 
                                                & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                   >> 2U))));
    top__DOT__CPU_is_r_instr_a1 = (((0xbU == (0x1fU 
                                              & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                 >> 2U))) 
                                    | (0x14U == (0x1fU 
                                                 & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                    >> 2U)))) 
                                   | (0xcU == (0x1eU 
                                               & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                  >> 2U))));
    if (vlSelf->top__DOT__CPU_reset_a3) {
        vlSelf->top__DOT__CPU_Xreg_value_a3[0U] = 0U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[1U] = 1U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[2U] = 2U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[3U] = 3U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[4U] = 4U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[5U] = 5U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[6U] = 6U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[7U] = 7U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[8U] = 8U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[9U] = 9U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xaU] = 0xaU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xbU] = 0xbU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xcU] = 0xcU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xdU] = 0xdU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xeU] = 0xeU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xfU] = 0xfU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x10U] = 0x10U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x11U] = 0x11U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x12U] = 0x12U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x13U] = 0x13U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x14U] = 0x14U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x15U] = 0x15U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x16U] = 0x16U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x17U] = 0x17U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x18U] = 0x18U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x19U] = 0x19U;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1aU] = 0x1aU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1bU] = 0x1bU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1cU] = 0x1cU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1dU] = 0x1dU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1eU] = 0x1eU;
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1fU] = 0x1fU;
    } else {
        vlSelf->top__DOT__CPU_Xreg_value_a3[0U] = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__0__KET____DOT__L1_wr_a3)
                                                    ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                                                    : 
                                                   vlSelf->top__DOT__CPU_Xreg_value_a4
                                                   [0U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[1U] = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__1__KET____DOT__L1_wr_a3)
                                                    ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                                                    : 
                                                   vlSelf->top__DOT__CPU_Xreg_value_a4
                                                   [1U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[2U] = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__2__KET____DOT__L1_wr_a3)
                                                    ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                                                    : 
                                                   vlSelf->top__DOT__CPU_Xreg_value_a4
                                                   [2U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[3U] = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__3__KET____DOT__L1_wr_a3)
                                                    ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                                                    : 
                                                   vlSelf->top__DOT__CPU_Xreg_value_a4
                                                   [3U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[4U] = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__4__KET____DOT__L1_wr_a3)
                                                    ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                                                    : 
                                                   vlSelf->top__DOT__CPU_Xreg_value_a4
                                                   [4U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[5U] = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__5__KET____DOT__L1_wr_a3)
                                                    ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                                                    : 
                                                   vlSelf->top__DOT__CPU_Xreg_value_a4
                                                   [5U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[6U] = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__6__KET____DOT__L1_wr_a3)
                                                    ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                                                    : 
                                                   vlSelf->top__DOT__CPU_Xreg_value_a4
                                                   [6U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[7U] = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__7__KET____DOT__L1_wr_a3)
                                                    ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                                                    : 
                                                   vlSelf->top__DOT__CPU_Xreg_value_a4
                                                   [7U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[8U] = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__8__KET____DOT__L1_wr_a3)
                                                    ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                                                    : 
                                                   vlSelf->top__DOT__CPU_Xreg_value_a4
                                                   [8U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[9U] = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__9__KET____DOT__L1_wr_a3)
                                                    ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                                                    : 
                                                   vlSelf->top__DOT__CPU_Xreg_value_a4
                                                   [9U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xaU] = 
            ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__10__KET____DOT__L1_wr_a3)
              ? vlSelf->top__DOT__CPU_rf_wr_data_a3
              : vlSelf->top__DOT__CPU_Xreg_value_a4
             [0xaU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xbU] = 
            ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__11__KET____DOT__L1_wr_a3)
              ? vlSelf->top__DOT__CPU_rf_wr_data_a3
              : vlSelf->top__DOT__CPU_Xreg_value_a4
             [0xbU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xcU] = 
            ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__12__KET____DOT__L1_wr_a3)
              ? vlSelf->top__DOT__CPU_rf_wr_data_a3
              : vlSelf->top__DOT__CPU_Xreg_value_a4
             [0xcU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xdU] = 
            ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__13__KET____DOT__L1_wr_a3)
              ? vlSelf->top__DOT__CPU_rf_wr_data_a3
              : vlSelf->top__DOT__CPU_Xreg_value_a4
             [0xdU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xeU] = 
            ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__14__KET____DOT__L1_wr_a3)
              ? vlSelf->top__DOT__CPU_rf_wr_data_a3
              : vlSelf->top__DOT__CPU_Xreg_value_a4
             [0xeU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xfU] = 
            ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__15__KET____DOT__L1_wr_a3)
              ? vlSelf->top__DOT__CPU_rf_wr_data_a3
              : vlSelf->top__DOT__CPU_Xreg_value_a4
             [0xfU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x10U] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__16__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x10U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x11U] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__17__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x11U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x12U] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__18__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x12U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x13U] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__19__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x13U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x14U] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__20__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x14U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x15U] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__21__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x15U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x16U] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__22__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x16U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x17U] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__23__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x17U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x18U] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__24__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x18U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x19U] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__25__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x19U]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1aU] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__26__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x1aU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1bU] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__27__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x1bU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1cU] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__28__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x1cU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1dU] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__29__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x1dU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1eU] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__30__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x1eU]);
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1fU] 
            = ((IData)(vlSelf->top__DOT__L1_CPU_Xreg__BRA__31__KET____DOT__L1_wr_a3)
                ? vlSelf->top__DOT__CPU_rf_wr_data_a3
                : vlSelf->top__DOT__CPU_Xreg_value_a4
               [0x1fU]);
    }
    vlSelf->top__DOT__CPU_imm_a1 = ((IData)(top__DOT__CPU_is_i_instr_a1)
                                     ? (((- (IData)(
                                                    (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                     >> 0x1fU))) 
                                         << 0xbU) | 
                                        (0x7ffU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                   >> 0x14U)))
                                     : ((8U == (0x1fU 
                                                & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                   >> 2U)))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                         >> 0x1fU))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                     >> 7U))))
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                    >> 2U)))
                                             ? (((- (IData)(
                                                            (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                            >> 7U)))))
                                             : ((5U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                     >> 2U)))
                                                 ? 
                                                (0xfffff000U 
                                                 & vlSelf->top__DOT__CPU_imem_rd_data_a1)
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                      >> 2U)))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & vlSelf->top__DOT__CPU_imem_rd_data_a1) 
                                                     | ((0x800U 
                                                         & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                              >> 0x14U)))))
                                                  : 0U)))));
    vlSelf->top__DOT__CPU_rs2_valid_a1 = (((IData)(top__DOT__CPU_is_r_instr_a1) 
                                           | (8U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                  >> 2U)))) 
                                          | (0x18U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                    >> 2U))));
    vlSelf->top__DOT__CPU_rs1_valid_a1 = ((((IData)(top__DOT__CPU_is_r_instr_a1) 
                                            | (8U == 
                                               (0x1fU 
                                                & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                   >> 2U)))) 
                                           | (0x18U 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                     >> 2U)))) 
                                          | (IData)(top__DOT__CPU_is_i_instr_a1));
    vlSelf->top__DOT__CPU_rd_valid_a1 = ((((IData)(top__DOT__CPU_is_r_instr_a1) 
                                           | (IData)(top__DOT__CPU_is_i_instr_a1)) 
                                          | (5U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                 >> 2U)))) 
                                         | (0x1bU == 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                >> 2U))));
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a2__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rs2_valid_a1;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a2__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rs1_valid_a1;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a2__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rd_valid_a1;
    }
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rs1_valid_a3 
        = vlSelf->top__DOT__clkP_CPU_rs1_valid_a3;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rs1_valid_a4 
        = vlSelf->top__DOT__clkP_CPU_rs1_valid_a4;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rs2_valid_a3 
        = vlSelf->top__DOT__clkP_CPU_rs2_valid_a3;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rs2_valid_a4 
        = vlSelf->top__DOT__clkP_CPU_rs2_valid_a4;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a2 
        = vlSelf->top__DOT__clkP_CPU_rd_valid_a2;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rs2_valid_a2 
        = vlSelf->top__DOT__clkP_CPU_rs2_valid_a2;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rs1_valid_a2 
        = vlSelf->top__DOT__clkP_CPU_rs1_valid_a2;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_dmem_rd_en_a5 
        = vlSelf->top__DOT__clkP_CPU_dmem_rd_en_a5;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a3 
        = vlSelf->top__DOT__clkP_CPU_rd_valid_a3;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a4 
        = vlSelf->top__DOT__clkP_CPU_rd_valid_a4;
    vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a5 
        = vlSelf->top__DOT__clkP_CPU_rd_valid_a5;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->passed = VL_RAND_RESET_I(1);
    vlSelf->failed = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_br_tgt_pc_a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_dec_bits_a1 = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__CPU_dmem_rd_data_a5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_dmem_wr_en_a4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_imem_rd_addr_a1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_imem_rd_data_a1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_imm_a1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_imm_a2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_imm_a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_inc_pc_a2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_inc_pc_a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_is_add_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_add_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_addi_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_addi_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_and_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_and_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_andi_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_andi_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_auipc_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_auipc_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_beq_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_beq_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_bge_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_bge_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_bgeu_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_bgeu_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_blt_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_blt_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_bltu_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_bltu_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_bne_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_bne_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_jal_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_jal_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_jalr_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_jalr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_jump_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_jump_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_load_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_load_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_lui_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_lui_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_or_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_or_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_ori_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_ori_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_s_instr_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_s_instr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_s_instr_a4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_sll_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_sll_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_slli_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_slli_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_slt_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_slt_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_slti_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_slti_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_sltiu_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_sltiu_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_sltu_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_sltu_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_sra_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_sra_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_srai_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_srai_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_srl_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_srl_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_srli_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_srli_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_sub_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_sub_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_xor_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_xor_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_xori_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_is_xori_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_jalr_tgt_pc_a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_pc_a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_pc_a1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_pc_a2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_pc_a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_rd_a2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CPU_rd_a3 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CPU_rd_a4 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CPU_rd_a5 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CPU_rd_valid_a1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_rd_valid_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_rd_valid_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_rd_valid_a4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_reset_a1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_reset_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_reset_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_reset_a4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_result_a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_result_a4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_rf_wr_data_a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_rf_wr_en_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_rf_wr_index_a3 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CPU_rs1_a2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CPU_rs1_valid_a1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_rs1_valid_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_rs1_valid_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_rs2_a2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__CPU_rs2_valid_a1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_rs2_valid_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_rs2_valid_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_sltiu_result_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_sltu_result_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_src1_value_a2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_src1_value_a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_src2_value_a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_src2_value_a4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CPU_valid_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_valid_a4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_valid_jump_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_valid_jump_a4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_valid_jump_a5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_valid_load_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_valid_load_a4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_valid_load_a5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_valid_taken_br_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_valid_taken_br_a4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__CPU_valid_taken_br_a5 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__CPU_Dmem_value_a4[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__CPU_Imem_instr_a1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__CPU_Xreg_value_a3[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__CPU_Xreg_value_a4[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__CPU_Xreg_value_a5[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__clkP_CPU_dmem_rd_en_a5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkP_CPU_rd_valid_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkP_CPU_rd_valid_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkP_CPU_rd_valid_a4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkP_CPU_rd_valid_a5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkP_CPU_rs1_valid_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkP_CPU_rs1_valid_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkP_CPU_rs1_valid_a4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkP_CPU_rs2_valid_a2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkP_CPU_rs2_valid_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkP_CPU_rs2_valid_a4 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__instrs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__0__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__1__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__2__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__3__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__4__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__5__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__6__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__7__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__8__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__9__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__10__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__11__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__12__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__13__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__14__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__15__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__16__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__17__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__18__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__19__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__20__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__21__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__22__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__23__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__24__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__25__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__26__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__27__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__28__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__29__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__30__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__L1_CPU_Xreg__BRA__31__KET____DOT__L1_wr_a3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_dmem_rd_en_a5__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a2__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a3__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a4__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a5__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a2__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a3__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a4__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a2__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a3__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a4__DOT__latched_clk_en = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v1 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v2 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v3 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v3 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v4 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v4 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v5 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v5 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v6 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v6 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v7 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v7 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v8 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v8 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v9 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v9 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v15 = 0;
}
