// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__3\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v2;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v2;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v3;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v3;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v4;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v4;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v8;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v8;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v9;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v9;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v18;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v18;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v20;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v20;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v21;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v21;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v22;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v22;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v23;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v23;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v24;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v24;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v25;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v25;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v26;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v26;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v27;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v27;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v28;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v28;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v29;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v29;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v30;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v30;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v31;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v31;
    // Body
    vlSelf->top__DOT__CPU_rs2_valid_a3 = vlSelf->top__DOT__CPU_rs2_valid_a2;
    vlSelf->top__DOT__CPU_rs1_valid_a3 = vlSelf->top__DOT__CPU_rs1_valid_a2;
    vlSelf->top__DOT__CPU_jalr_tgt_pc_a3 = (vlSelf->top__DOT__CPU_src1_value_a2 
                                            + vlSelf->top__DOT__CPU_imm_a2);
    vlSelf->top__DOT__CPU_inc_pc_a3 = vlSelf->top__DOT__CPU_inc_pc_a2;
    vlSelf->top__DOT__CPU_br_tgt_pc_a3 = (vlSelf->top__DOT__CPU_pc_a2 
                                          + vlSelf->top__DOT__CPU_imm_a2);
    vlSelf->top__DOT__CPU_is_jump_a3 = vlSelf->top__DOT__CPU_is_jump_a2;
    vlSelf->top__DOT__CPU_is_bne_a3 = vlSelf->top__DOT__CPU_is_bne_a2;
    vlSelf->top__DOT__CPU_is_bltu_a3 = vlSelf->top__DOT__CPU_is_bltu_a2;
    vlSelf->top__DOT__CPU_is_blt_a3 = vlSelf->top__DOT__CPU_is_blt_a2;
    vlSelf->top__DOT__CPU_is_bgeu_a3 = vlSelf->top__DOT__CPU_is_bgeu_a2;
    vlSelf->top__DOT__CPU_is_bge_a3 = vlSelf->top__DOT__CPU_is_bge_a2;
    vlSelf->top__DOT__CPU_is_beq_a3 = vlSelf->top__DOT__CPU_is_beq_a2;
    vlSelf->top__DOT__CPU_imem_rd_addr_a1 = (0xfU & 
                                             (vlSelf->top__DOT__CPU_pc_a0 
                                              >> 2U));
    vlSelf->top__DOT__CPU_reset_a4 = vlSelf->top__DOT__CPU_reset_a3;
    vlSelf->top__DOT__CPU_is_xori_a3 = vlSelf->top__DOT__CPU_is_xori_a2;
    vlSelf->top__DOT__CPU_is_xor_a3 = vlSelf->top__DOT__CPU_is_xor_a2;
    vlSelf->top__DOT__CPU_is_sub_a3 = vlSelf->top__DOT__CPU_is_sub_a2;
    vlSelf->top__DOT__CPU_is_srli_a3 = vlSelf->top__DOT__CPU_is_srli_a2;
    vlSelf->top__DOT__CPU_is_srl_a3 = vlSelf->top__DOT__CPU_is_srl_a2;
    vlSelf->top__DOT__CPU_is_srai_a3 = vlSelf->top__DOT__CPU_is_srai_a2;
    vlSelf->top__DOT__CPU_is_sra_a3 = vlSelf->top__DOT__CPU_is_sra_a2;
    vlSelf->top__DOT__CPU_is_sltu_a3 = vlSelf->top__DOT__CPU_is_sltu_a2;
    vlSelf->top__DOT__CPU_is_sltiu_a3 = vlSelf->top__DOT__CPU_is_sltiu_a2;
    vlSelf->top__DOT__CPU_is_slti_a3 = vlSelf->top__DOT__CPU_is_slti_a2;
    vlSelf->top__DOT__CPU_is_slt_a3 = vlSelf->top__DOT__CPU_is_slt_a2;
    vlSelf->top__DOT__CPU_is_slli_a3 = vlSelf->top__DOT__CPU_is_slli_a2;
    vlSelf->top__DOT__CPU_is_sll_a3 = vlSelf->top__DOT__CPU_is_sll_a2;
    vlSelf->top__DOT__CPU_is_ori_a3 = vlSelf->top__DOT__CPU_is_ori_a2;
    vlSelf->top__DOT__CPU_is_or_a3 = vlSelf->top__DOT__CPU_is_or_a2;
    vlSelf->top__DOT__CPU_is_lui_a3 = vlSelf->top__DOT__CPU_is_lui_a2;
    vlSelf->top__DOT__CPU_is_auipc_a3 = vlSelf->top__DOT__CPU_is_auipc_a2;
    vlSelf->top__DOT__CPU_is_andi_a3 = vlSelf->top__DOT__CPU_is_andi_a2;
    vlSelf->top__DOT__CPU_is_and_a3 = vlSelf->top__DOT__CPU_is_and_a2;
    vlSelf->top__DOT__CPU_is_addi_a3 = vlSelf->top__DOT__CPU_is_addi_a2;
    vlSelf->top__DOT__CPU_is_add_a3 = vlSelf->top__DOT__CPU_is_add_a2;
    vlSelf->top__DOT__CPU_pc_a3 = vlSelf->top__DOT__CPU_pc_a2;
    vlSelf->top__DOT__CPU_is_jalr_a3 = vlSelf->top__DOT__CPU_is_jalr_a2;
    vlSelf->top__DOT__CPU_is_jal_a3 = vlSelf->top__DOT__CPU_is_jal_a2;
    vlSelf->top__DOT__CPU_is_load_a3 = vlSelf->top__DOT__CPU_is_load_a2;
    vlSelf->top__DOT__CPU_rd_valid_a4 = vlSelf->top__DOT__CPU_rd_valid_a3;
    vlSelf->top__DOT__CPU_is_s_instr_a4 = vlSelf->top__DOT__CPU_is_s_instr_a3;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v0 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[0U];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v0 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v1 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[1U];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v1 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v2 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[2U];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v2 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v3 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[3U];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v3 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v4 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[4U];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v4 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v5 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[5U];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v5 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v6 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[6U];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v6 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v7 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[7U];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v7 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v8 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[8U];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v8 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v9 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[9U];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v9 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v10 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[0xaU];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v10 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v11 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[0xbU];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v11 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v12 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[0xcU];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v12 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v13 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[0xdU];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v13 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v14 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[0xeU];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v14 = 1U;
    vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v15 
        = vlSelf->top__DOT__CPU_Dmem_value_a4[0xfU];
    vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v15 = 1U;
    vlSelf->top__DOT__CPU_valid_a4 = vlSelf->top__DOT__CPU_valid_a3;
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v0 = vlSelf->top__DOT__CPU_Xreg_value_a4
        [0U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v1 = vlSelf->top__DOT__CPU_Xreg_value_a4
        [1U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v2 = vlSelf->top__DOT__CPU_Xreg_value_a4
        [2U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v3 = vlSelf->top__DOT__CPU_Xreg_value_a4
        [3U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v4 = vlSelf->top__DOT__CPU_Xreg_value_a4
        [4U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v5 = vlSelf->top__DOT__CPU_Xreg_value_a4
        [5U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v6 = vlSelf->top__DOT__CPU_Xreg_value_a4
        [6U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v7 = vlSelf->top__DOT__CPU_Xreg_value_a4
        [7U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v8 = vlSelf->top__DOT__CPU_Xreg_value_a4
        [8U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v9 = vlSelf->top__DOT__CPU_Xreg_value_a4
        [9U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v10 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0xaU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v11 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0xbU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v12 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0xcU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v13 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0xdU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v14 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0xeU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v15 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0xfU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v16 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x10U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v17 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x11U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v18 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x12U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v19 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x13U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v20 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x14U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v21 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x15U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v22 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x16U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v23 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x17U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v24 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x18U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v25 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x19U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v26 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x1aU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v27 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x1bU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v28 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x1cU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v29 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x1dU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v30 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x1eU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v31 = 
        vlSelf->top__DOT__CPU_Xreg_value_a4[0x1fU];
    vlSelf->top__DOT__CPU_imm_a3 = vlSelf->top__DOT__CPU_imm_a2;
    vlSelf->top__DOT__CPU_src1_value_a3 = vlSelf->top__DOT__CPU_src1_value_a2;
    vlSelf->top__DOT__CPU_src2_value_a4 = vlSelf->top__DOT__CPU_src2_value_a3;
    vlSelf->top__DOT__CPU_valid_jump_a5 = vlSelf->top__DOT__CPU_valid_jump_a4;
    vlSelf->top__DOT__CPU_valid_taken_br_a5 = vlSelf->top__DOT__CPU_valid_taken_br_a4;
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v0 = vlSelf->top__DOT__CPU_Xreg_value_a3
        [0U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v1 = vlSelf->top__DOT__CPU_Xreg_value_a3
        [1U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v2 = vlSelf->top__DOT__CPU_Xreg_value_a3
        [2U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v3 = vlSelf->top__DOT__CPU_Xreg_value_a3
        [3U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v4 = vlSelf->top__DOT__CPU_Xreg_value_a3
        [4U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v5 = vlSelf->top__DOT__CPU_Xreg_value_a3
        [5U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v6 = vlSelf->top__DOT__CPU_Xreg_value_a3
        [6U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v7 = vlSelf->top__DOT__CPU_Xreg_value_a3
        [7U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v8 = vlSelf->top__DOT__CPU_Xreg_value_a3
        [8U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v9 = vlSelf->top__DOT__CPU_Xreg_value_a3
        [9U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v10 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xaU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v11 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xbU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v12 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xcU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v13 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xdU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v14 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xeU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v15 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0xfU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v16 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x10U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v17 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x11U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v18 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x12U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v19 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x13U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v20 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x14U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v21 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x15U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v22 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x16U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v23 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x17U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v24 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x18U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v25 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x19U];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v26 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1aU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v27 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1bU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v28 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1cU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v29 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1dU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v30 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1eU];
    __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v31 = 
        vlSelf->top__DOT__CPU_Xreg_value_a3[0x1fU];
    vlSelf->top__DOT__CPU_valid_load_a5 = vlSelf->top__DOT__CPU_valid_load_a4;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v0;
    vlSelf->top__DOT__CPU_Xreg_value_a5[1U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v1;
    vlSelf->top__DOT__CPU_Xreg_value_a5[2U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v2;
    vlSelf->top__DOT__CPU_Xreg_value_a5[3U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v3;
    vlSelf->top__DOT__CPU_Xreg_value_a5[4U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v4;
    vlSelf->top__DOT__CPU_Xreg_value_a5[5U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v5;
    vlSelf->top__DOT__CPU_Xreg_value_a5[6U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v6;
    vlSelf->top__DOT__CPU_Xreg_value_a5[7U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v7;
    vlSelf->top__DOT__CPU_Xreg_value_a5[8U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v8;
    vlSelf->top__DOT__CPU_Xreg_value_a5[9U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v9;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0xaU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v10;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0xbU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v11;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0xcU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v12;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0xdU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v13;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0xeU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v14;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0xfU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v15;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x10U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v16;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x11U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v17;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x12U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v18;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x13U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v19;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x14U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v20;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x15U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v21;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x16U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v22;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x17U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v23;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x18U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v24;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x19U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v25;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x1aU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v26;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x1bU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v27;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x1cU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v28;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x1dU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v29;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x1eU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v30;
    vlSelf->top__DOT__CPU_Xreg_value_a5[0x1fU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a5__v31;
    vlSelf->top__DOT__CPU_rs2_valid_a2 = vlSelf->top__DOT__CPU_rs2_valid_a1;
    vlSelf->top__DOT__CPU_rs1_valid_a2 = vlSelf->top__DOT__CPU_rs1_valid_a1;
    vlSelf->top__DOT__CPU_inc_pc_a2 = ((IData)(4U) 
                                       + vlSelf->top__DOT__CPU_pc_a1);
    vlSelf->top__DOT__CPU_is_jump_a2 = ((0x6fU == (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))) 
                                        | (0x67U == 
                                           (0x3ffU 
                                            & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
    vlSelf->top__DOT__CPU_is_bne_a2 = (0xe3U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_bltu_a2 = (0x363U == (0x3ffU 
                                                   & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_blt_a2 = (0x263U == (0x3ffU 
                                                  & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_bgeu_a2 = (0x3e3U == (0x3ffU 
                                                   & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_bge_a2 = (0x2e3U == (0x3ffU 
                                                  & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_beq_a2 = (0x63U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_reset_a3 = vlSelf->top__DOT__CPU_reset_a2;
    vlSelf->top__DOT__CPU_is_xori_a2 = (0x213U == (0x3ffU 
                                                   & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_xor_a2 = (0x233U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_sub_a2 = (0x433U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_srli_a2 = (0x293U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_srl_a2 = (0x2b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_srai_a2 = (0x693U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_sra_a2 = (0x6b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_sltu_a2 = (0x1b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_sltiu_a2 = (0x193U == 
                                         (0x3ffU & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_slti_a2 = (0x113U == (0x3ffU 
                                                   & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_slt_a2 = (0x133U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_slli_a2 = (0x93U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_sll_a2 = (0xb3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_ori_a2 = (0x313U == (0x3ffU 
                                                  & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_or_a2 = (0x333U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_lui_a2 = (0x37U == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_auipc_a2 = (0x17U == (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_andi_a2 = (0x393U == (0x3ffU 
                                                   & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_and_a2 = (0x3b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_is_addi_a2 = (0x13U == (0x3ffU 
                                                  & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_add_a2 = (0x33U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1));
    vlSelf->top__DOT__CPU_pc_a2 = vlSelf->top__DOT__CPU_pc_a1;
    vlSelf->top__DOT__CPU_is_jalr_a2 = (0x67U == (0x3ffU 
                                                  & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_jal_a2 = (0x6fU == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_is_load_a2 = (3U == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)));
    vlSelf->top__DOT__CPU_rd_valid_a3 = vlSelf->top__DOT__CPU_rd_valid_a2;
    vlSelf->top__DOT__CPU_is_s_instr_a3 = vlSelf->top__DOT__CPU_is_s_instr_a2;
    vlSelf->top__DOT__CPU_dmem_wr_en_a4 = ((IData)(vlSelf->top__DOT__CPU_valid_a4) 
                                           & (IData)(vlSelf->top__DOT__CPU_is_s_instr_a4));
    vlSelf->passed = (0x2dU == vlSelf->top__DOT__CPU_Xreg_value_a5
                      [0x11U]);
    vlSelf->top__DOT__CPU_imm_a2 = vlSelf->top__DOT__CPU_imm_a1;
    vlSelf->top__DOT__CPU_sltiu_result_a3 = (vlSelf->top__DOT__CPU_src1_value_a3 
                                             < vlSelf->top__DOT__CPU_imm_a3);
    vlSelf->top__DOT__CPU_src2_value_a3 = ((((IData)(vlSelf->top__DOT__CPU_rd_a3) 
                                             == (IData)(vlSelf->top__DOT__CPU_rs2_a2)) 
                                            & (IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3))
                                            ? vlSelf->top__DOT__CPU_result_a3
                                            : vlSelf->top__DOT__CPU_Xreg_value_a4
                                           [vlSelf->top__DOT__CPU_rs2_a2]);
    vlSelf->top__DOT__CPU_valid_jump_a4 = vlSelf->top__DOT__CPU_valid_jump_a3;
    vlSelf->top__DOT__CPU_valid_taken_br_a4 = vlSelf->top__DOT__CPU_valid_taken_br_a3;
    vlSelf->top__DOT__CPU_valid_load_a4 = vlSelf->top__DOT__CPU_valid_load_a3;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v0;
    vlSelf->top__DOT__CPU_Xreg_value_a4[1U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v1;
    vlSelf->top__DOT__CPU_Xreg_value_a4[2U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v2;
    vlSelf->top__DOT__CPU_Xreg_value_a4[3U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v3;
    vlSelf->top__DOT__CPU_Xreg_value_a4[4U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v4;
    vlSelf->top__DOT__CPU_Xreg_value_a4[5U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v5;
    vlSelf->top__DOT__CPU_Xreg_value_a4[6U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v6;
    vlSelf->top__DOT__CPU_Xreg_value_a4[7U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v7;
    vlSelf->top__DOT__CPU_Xreg_value_a4[8U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v8;
    vlSelf->top__DOT__CPU_Xreg_value_a4[9U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v9;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0xaU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v10;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0xbU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v11;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0xcU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v12;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0xdU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v13;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0xeU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v14;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0xfU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v15;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x10U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v16;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x11U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v17;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x12U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v18;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x13U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v19;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x14U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v20;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x15U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v21;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x16U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v22;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x17U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v23;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x18U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v24;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x19U] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v25;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x1aU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v26;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x1bU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v27;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x1cU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v28;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x1dU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v29;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x1eU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v30;
    vlSelf->top__DOT__CPU_Xreg_value_a4[0x1fU] = __Vdlyvval__top__DOT__CPU_Xreg_value_a4__v31;
    vlSelf->top__DOT__CPU_reset_a2 = vlSelf->top__DOT__CPU_reset_a1;
    vlSelf->top__DOT__CPU_pc_a1 = vlSelf->top__DOT__CPU_pc_a0;
    vlSelf->top__DOT__CPU_rd_valid_a2 = vlSelf->top__DOT__CPU_rd_valid_a1;
    vlSelf->top__DOT__CPU_is_s_instr_a2 = (8U == (0x1fU 
                                                  & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                     >> 2U)));
    vlSelf->top__DOT__CPU_sltu_result_a3 = (vlSelf->top__DOT__CPU_src1_value_a3 
                                            < vlSelf->top__DOT__CPU_src2_value_a3);
    vlSelf->top__DOT__CPU_valid_a3 = (1U & (~ ((((((IData)(vlSelf->top__DOT__CPU_valid_taken_br_a4) 
                                                   | (IData)(vlSelf->top__DOT__CPU_valid_taken_br_a5)) 
                                                  | (IData)(vlSelf->top__DOT__CPU_valid_load_a4)) 
                                                 | (IData)(vlSelf->top__DOT__CPU_valid_load_a5)) 
                                                | (IData)(vlSelf->top__DOT__CPU_valid_jump_a4)) 
                                               | (IData)(vlSelf->top__DOT__CPU_valid_jump_a5))));
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
    vlSelf->top__DOT__CPU_reset_a1 = vlSelf->reset;
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__10\n"); );
    // Body
    vlSelf->top__DOT__CPU_rs2_a2 = (0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                             >> 0x14U));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->top__DOT__CPU_rs1_a2 = (0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                             >> 0xfU));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__12\n"); );
    // Body
    vlSelf->top__DOT__CPU_dmem_rd_data_a5 = vlSelf->top__DOT__CPU_Dmem_value_a5
        [(0xfU & (vlSelf->top__DOT__CPU_result_a4 >> 2U))];
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__15(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__15\n"); );
    // Body
    vlSelf->top__DOT__CPU_rd_a5 = vlSelf->top__DOT__CPU_rd_a4;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__16(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__16\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a4__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rs2_valid_a3;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a4__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rs1_valid_a3;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a5__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rd_valid_a4;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a3__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rs2_valid_a2;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a3__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rs1_valid_a2;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a4__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rd_valid_a3;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_dmem_rd_en_a5__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_valid_load_a4;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a3__DOT__latched_clk_en 
            = vlSelf->top__DOT__CPU_rd_valid_a2;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__17(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__17\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v0) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[0U] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v0;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v1) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[1U] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v1;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v2) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[2U] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v2;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v3) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[3U] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v3;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v4) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[4U] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v4;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v5) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[5U] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v5;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v6) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[6U] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v6;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v7) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[7U] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v7;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v8) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[8U] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v8;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v9) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[9U] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v9;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v10) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[0xaU] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v11) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[0xbU] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v12) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[0xcU] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v13) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[0xdU] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v14) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[0xeU] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__CPU_Dmem_value_a5__v15) {
        vlSelf->top__DOT__CPU_Dmem_value_a5[0xfU] = vlSelf->__Vdlyvval__top__DOT__CPU_Dmem_value_a5__v15;
    }
    vlSelf->top__DOT__CPU_result_a4 = vlSelf->top__DOT__CPU_result_a3;
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__18(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__18\n"); );
    // Body
    vlSelf->top__DOT__CPU_rd_a4 = vlSelf->top__DOT__CPU_rd_a3;
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__19(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__19\n"); );
    // Body
    vlSelf->top__DOT__CPU_rf_wr_data_a3 = ((IData)(vlSelf->top__DOT__CPU_valid_a3)
                                            ? vlSelf->top__DOT__CPU_result_a3
                                            : vlSelf->top__DOT__CPU_dmem_rd_data_a5);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__20(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__20\n"); );
    // Body
    vlSelf->top__DOT__CPU_rd_a3 = vlSelf->top__DOT__CPU_rd_a2;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__21(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__21\n"); );
    // Body
    vlSelf->top__DOT__CPU_rd_a2 = (0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                            >> 7U));
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__22\n"); );
    // Body
    vlSelf->top__DOT__CPU_rf_wr_index_a3 = ((IData)(vlSelf->top__DOT__CPU_valid_a3)
                                             ? (IData)(vlSelf->top__DOT__CPU_rd_a3)
                                             : (IData)(vlSelf->top__DOT__CPU_rd_a5));
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__23(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__23\n"); );
    // Body
    vlSelf->top__DOT__CPU_rf_wr_en_a3 = ((((IData)(vlSelf->top__DOT__CPU_rd_valid_a3) 
                                           & (IData)(vlSelf->top__DOT__CPU_valid_a3)) 
                                          & (0U != (IData)(vlSelf->top__DOT__CPU_rd_a3))) 
                                         | (IData)(vlSelf->top__DOT__CPU_valid_load_a5));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__24\n"); );
    // Variables
    CData/*0:0*/ top__DOT__CPU_is_i_instr_a1;
    CData/*0:0*/ top__DOT__CPU_is_r_instr_a1;
    // Body
    vlSelf->top__DOT__CPU_imem_rd_data_a1 = ((9U >= 
                                              (0xfU 
                                               & vlSelf->top__DOT__CPU_imem_rd_addr_a1))
                                              ? vlSelf->top__DOT__CPU_Imem_instr_a1
                                             [(0xfU 
                                               & vlSelf->top__DOT__CPU_imem_rd_addr_a1)]
                                              : 0U);
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
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__25(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__25\n"); );
    // Body
    vlSelf->top__DOT__CPU_src1_value_a2 = ((((IData)(vlSelf->top__DOT__CPU_rd_a3) 
                                             == (IData)(vlSelf->top__DOT__CPU_rs1_a2)) 
                                            & (IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3))
                                            ? vlSelf->top__DOT__CPU_result_a3
                                            : vlSelf->top__DOT__CPU_Xreg_value_a4
                                           [vlSelf->top__DOT__CPU_rs1_a2]);
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__26(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__26\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__27(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__27\n"); );
    // Body
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

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__28(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__28\n"); );
    // Body
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
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__3(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    if (((IData)(vlSelf->top__DOT__clkP_CPU_rs2_valid_a2) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rs2_valid_a2)))) {
        Vtop___024root___sequent__TOP__10(vlSelf);
    }
    if (((IData)(vlSelf->top__DOT__clkP_CPU_rs1_valid_a2) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rs1_valid_a2)))) {
        Vtop___024root___sequent__TOP__11(vlSelf);
    }
    if (((IData)(vlSelf->top__DOT__clkP_CPU_dmem_rd_en_a5) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_dmem_rd_en_a5)))) {
        Vtop___024root___sequent__TOP__12(vlSelf);
    }
    if (((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a5) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a5)))) {
        Vtop___024root___sequent__TOP__15(vlSelf);
    }
    Vtop___024root___combo__TOP__16(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__17(vlSelf);
    }
    if (((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a4) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a4)))) {
        Vtop___024root___sequent__TOP__18(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->top__DOT__clkP_CPU_dmem_rd_en_a5) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_dmem_rd_en_a5))))) {
        Vtop___024root___multiclk__TOP__19(vlSelf);
    }
    if (((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a3) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a3)))) {
        Vtop___024root___sequent__TOP__20(vlSelf);
    }
    if (((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a2) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a2)))) {
        Vtop___024root___sequent__TOP__21(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a3) 
             & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a3)))) 
         | ((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a5) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a5))))) {
        Vtop___024root___multiclk__TOP__22(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a3) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a3))))) {
        Vtop___024root___multiclk__TOP__23(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__24(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a3) 
             & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a3)))) 
         | ((IData)(vlSelf->top__DOT__clkP_CPU_rs1_valid_a2) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rs1_valid_a2))))) {
        Vtop___024root___multiclk__TOP__25(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a3) 
             & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a3)))) 
         | ((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a5) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a5))))) {
        Vtop___024root___multiclk__TOP__26(vlSelf);
    }
    Vtop___024root___combo__TOP__27(vlSelf);
    if ((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
           | ((IData)(vlSelf->top__DOT__clkP_CPU_dmem_rd_en_a5) 
              & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_dmem_rd_en_a5)))) 
          | ((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a3) 
             & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a3)))) 
         | ((IData)(vlSelf->top__DOT__clkP_CPU_rd_valid_a5) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a5))))) {
        Vtop___024root___multiclk__TOP__28(vlSelf);
    }
    // Final
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

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
