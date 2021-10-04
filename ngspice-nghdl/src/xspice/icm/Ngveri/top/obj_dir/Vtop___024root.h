// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(passed,0,0);
    VL_OUT8(failed,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__clkP_CPU_dmem_rd_en_a5;
        CData/*0:0*/ top__DOT__clkP_CPU_rd_valid_a2;
        CData/*0:0*/ top__DOT__clkP_CPU_rd_valid_a3;
        CData/*0:0*/ top__DOT__clkP_CPU_rd_valid_a4;
        CData/*0:0*/ top__DOT__clkP_CPU_rd_valid_a5;
        CData/*0:0*/ top__DOT__clkP_CPU_rs1_valid_a2;
        CData/*0:0*/ top__DOT__clkP_CPU_rs1_valid_a3;
        CData/*0:0*/ top__DOT__clkP_CPU_rs1_valid_a4;
        CData/*0:0*/ top__DOT__clkP_CPU_rs2_valid_a2;
        CData/*0:0*/ top__DOT__clkP_CPU_rs2_valid_a3;
        CData/*0:0*/ top__DOT__clkP_CPU_rs2_valid_a4;
        CData/*0:0*/ top__DOT__CPU_dmem_wr_en_a4;
        CData/*0:0*/ top__DOT__CPU_is_add_a2;
        CData/*0:0*/ top__DOT__CPU_is_add_a3;
        CData/*0:0*/ top__DOT__CPU_is_addi_a2;
        CData/*0:0*/ top__DOT__CPU_is_addi_a3;
        CData/*0:0*/ top__DOT__CPU_is_and_a2;
        CData/*0:0*/ top__DOT__CPU_is_and_a3;
        CData/*0:0*/ top__DOT__CPU_is_andi_a2;
        CData/*0:0*/ top__DOT__CPU_is_andi_a3;
        CData/*0:0*/ top__DOT__CPU_is_auipc_a2;
        CData/*0:0*/ top__DOT__CPU_is_auipc_a3;
        CData/*0:0*/ top__DOT__CPU_is_beq_a2;
        CData/*0:0*/ top__DOT__CPU_is_beq_a3;
        CData/*0:0*/ top__DOT__CPU_is_bge_a2;
        CData/*0:0*/ top__DOT__CPU_is_bge_a3;
        CData/*0:0*/ top__DOT__CPU_is_bgeu_a2;
        CData/*0:0*/ top__DOT__CPU_is_bgeu_a3;
        CData/*0:0*/ top__DOT__CPU_is_blt_a2;
        CData/*0:0*/ top__DOT__CPU_is_blt_a3;
        CData/*0:0*/ top__DOT__CPU_is_bltu_a2;
        CData/*0:0*/ top__DOT__CPU_is_bltu_a3;
        CData/*0:0*/ top__DOT__CPU_is_bne_a2;
        CData/*0:0*/ top__DOT__CPU_is_bne_a3;
        CData/*0:0*/ top__DOT__CPU_is_jal_a2;
        CData/*0:0*/ top__DOT__CPU_is_jal_a3;
        CData/*0:0*/ top__DOT__CPU_is_jalr_a2;
        CData/*0:0*/ top__DOT__CPU_is_jalr_a3;
        CData/*0:0*/ top__DOT__CPU_is_jump_a2;
        CData/*0:0*/ top__DOT__CPU_is_jump_a3;
        CData/*0:0*/ top__DOT__CPU_is_load_a2;
        CData/*0:0*/ top__DOT__CPU_is_load_a3;
        CData/*0:0*/ top__DOT__CPU_is_lui_a2;
        CData/*0:0*/ top__DOT__CPU_is_lui_a3;
        CData/*0:0*/ top__DOT__CPU_is_or_a2;
        CData/*0:0*/ top__DOT__CPU_is_or_a3;
        CData/*0:0*/ top__DOT__CPU_is_ori_a2;
        CData/*0:0*/ top__DOT__CPU_is_ori_a3;
        CData/*0:0*/ top__DOT__CPU_is_s_instr_a2;
        CData/*0:0*/ top__DOT__CPU_is_s_instr_a3;
        CData/*0:0*/ top__DOT__CPU_is_s_instr_a4;
        CData/*0:0*/ top__DOT__CPU_is_sll_a2;
        CData/*0:0*/ top__DOT__CPU_is_sll_a3;
        CData/*0:0*/ top__DOT__CPU_is_slli_a2;
        CData/*0:0*/ top__DOT__CPU_is_slli_a3;
        CData/*0:0*/ top__DOT__CPU_is_slt_a2;
        CData/*0:0*/ top__DOT__CPU_is_slt_a3;
        CData/*0:0*/ top__DOT__CPU_is_slti_a2;
        CData/*0:0*/ top__DOT__CPU_is_slti_a3;
        CData/*0:0*/ top__DOT__CPU_is_sltiu_a2;
        CData/*0:0*/ top__DOT__CPU_is_sltiu_a3;
        CData/*0:0*/ top__DOT__CPU_is_sltu_a2;
        CData/*0:0*/ top__DOT__CPU_is_sltu_a3;
        CData/*0:0*/ top__DOT__CPU_is_sra_a2;
    };
    struct {
        CData/*0:0*/ top__DOT__CPU_is_sra_a3;
        CData/*0:0*/ top__DOT__CPU_is_srai_a2;
        CData/*0:0*/ top__DOT__CPU_is_srai_a3;
        CData/*0:0*/ top__DOT__CPU_is_srl_a2;
        CData/*0:0*/ top__DOT__CPU_is_srl_a3;
        CData/*0:0*/ top__DOT__CPU_is_srli_a2;
        CData/*0:0*/ top__DOT__CPU_is_srli_a3;
        CData/*0:0*/ top__DOT__CPU_is_sub_a2;
        CData/*0:0*/ top__DOT__CPU_is_sub_a3;
        CData/*0:0*/ top__DOT__CPU_is_xor_a2;
        CData/*0:0*/ top__DOT__CPU_is_xor_a3;
        CData/*0:0*/ top__DOT__CPU_is_xori_a2;
        CData/*0:0*/ top__DOT__CPU_is_xori_a3;
        CData/*4:0*/ top__DOT__CPU_rd_a2;
        CData/*4:0*/ top__DOT__CPU_rd_a3;
        CData/*4:0*/ top__DOT__CPU_rd_a4;
        CData/*4:0*/ top__DOT__CPU_rd_a5;
        CData/*0:0*/ top__DOT__CPU_rd_valid_a1;
        CData/*0:0*/ top__DOT__CPU_rd_valid_a2;
        CData/*0:0*/ top__DOT__CPU_rd_valid_a3;
        CData/*0:0*/ top__DOT__CPU_rd_valid_a4;
        CData/*0:0*/ top__DOT__CPU_reset_a1;
        CData/*0:0*/ top__DOT__CPU_reset_a2;
        CData/*0:0*/ top__DOT__CPU_reset_a3;
        CData/*0:0*/ top__DOT__CPU_reset_a4;
        CData/*0:0*/ top__DOT__CPU_rf_wr_en_a3;
        CData/*4:0*/ top__DOT__CPU_rf_wr_index_a3;
        CData/*4:0*/ top__DOT__CPU_rs1_a2;
        CData/*0:0*/ top__DOT__CPU_rs1_valid_a1;
        CData/*0:0*/ top__DOT__CPU_rs1_valid_a2;
        CData/*0:0*/ top__DOT__CPU_rs1_valid_a3;
        CData/*4:0*/ top__DOT__CPU_rs2_a2;
        CData/*0:0*/ top__DOT__CPU_rs2_valid_a1;
        CData/*0:0*/ top__DOT__CPU_rs2_valid_a2;
        CData/*0:0*/ top__DOT__CPU_rs2_valid_a3;
        CData/*0:0*/ top__DOT__CPU_sltiu_result_a3;
        CData/*0:0*/ top__DOT__CPU_sltu_result_a3;
        CData/*0:0*/ top__DOT__CPU_valid_a3;
        CData/*0:0*/ top__DOT__CPU_valid_a4;
        CData/*0:0*/ top__DOT__CPU_valid_jump_a3;
        CData/*0:0*/ top__DOT__CPU_valid_jump_a4;
        CData/*0:0*/ top__DOT__CPU_valid_jump_a5;
        CData/*0:0*/ top__DOT__CPU_valid_load_a3;
        CData/*0:0*/ top__DOT__CPU_valid_load_a4;
        CData/*0:0*/ top__DOT__CPU_valid_load_a5;
        CData/*0:0*/ top__DOT__CPU_valid_taken_br_a3;
        CData/*0:0*/ top__DOT__CPU_valid_taken_br_a4;
        CData/*0:0*/ top__DOT__CPU_valid_taken_br_a5;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__0__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__1__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__2__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__3__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__4__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__5__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__6__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__7__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__8__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__9__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__10__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__11__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__12__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__13__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__14__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__15__KET____DOT__L1_wr_a3;
    };
    struct {
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__16__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__17__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__18__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__19__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__20__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__21__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__22__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__23__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__24__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__25__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__26__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__27__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__28__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__29__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__30__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__L1_CPU_Xreg__BRA__31__KET____DOT__L1_wr_a3;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_dmem_rd_en_a5__DOT__latched_clk_en;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_rd_valid_a2__DOT__latched_clk_en;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_rd_valid_a3__DOT__latched_clk_en;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_rd_valid_a4__DOT__latched_clk_en;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_rd_valid_a5__DOT__latched_clk_en;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_rs1_valid_a2__DOT__latched_clk_en;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_rs1_valid_a3__DOT__latched_clk_en;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_rs1_valid_a4__DOT__latched_clk_en;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_rs2_valid_a2__DOT__latched_clk_en;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_rs2_valid_a3__DOT__latched_clk_en;
        CData/*0:0*/ top__DOT__gen_clkP_CPU_rs2_valid_a4__DOT__latched_clk_en;
        SData/*10:0*/ top__DOT__CPU_dec_bits_a1;
        IData/*31:0*/ top__DOT__CPU_br_tgt_pc_a3;
        IData/*31:0*/ top__DOT__CPU_dmem_rd_data_a5;
        IData/*31:0*/ top__DOT__CPU_imem_rd_addr_a1;
        IData/*31:0*/ top__DOT__CPU_imem_rd_data_a1;
        IData/*31:0*/ top__DOT__CPU_imm_a1;
        IData/*31:0*/ top__DOT__CPU_imm_a2;
        IData/*31:0*/ top__DOT__CPU_imm_a3;
        IData/*31:0*/ top__DOT__CPU_inc_pc_a2;
        IData/*31:0*/ top__DOT__CPU_inc_pc_a3;
        IData/*31:0*/ top__DOT__CPU_jalr_tgt_pc_a3;
        IData/*31:0*/ top__DOT__CPU_pc_a0;
        IData/*31:0*/ top__DOT__CPU_pc_a1;
        IData/*31:0*/ top__DOT__CPU_pc_a2;
        IData/*31:0*/ top__DOT__CPU_pc_a3;
        IData/*31:0*/ top__DOT__CPU_result_a3;
        IData/*31:0*/ top__DOT__CPU_result_a4;
        IData/*31:0*/ top__DOT__CPU_rf_wr_data_a3;
        IData/*31:0*/ top__DOT__CPU_src1_value_a2;
        IData/*31:0*/ top__DOT__CPU_src1_value_a3;
        IData/*31:0*/ top__DOT__CPU_src2_value_a3;
        IData/*31:0*/ top__DOT__CPU_src2_value_a4;
        VlUnpacked<IData/*31:0*/, 16> top__DOT__CPU_Dmem_value_a4;
        VlUnpacked<IData/*31:0*/, 16> top__DOT__CPU_Dmem_value_a5;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__CPU_Imem_instr_a1;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__CPU_Xreg_value_a3;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__CPU_Xreg_value_a4;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__CPU_Xreg_value_a5;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__instrs;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__CPU_Dmem_value_a5__v15;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_rs1_valid_a3;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_rs1_valid_a4;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_rs2_valid_a3;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_rs2_valid_a4;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a2;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_rs2_valid_a2;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_rs1_valid_a2;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_dmem_rd_en_a5;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a3;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a4;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clkP_CPU_rd_valid_a5;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v2;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v3;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v4;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v8;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v9;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__CPU_Dmem_value_a5__v15;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
