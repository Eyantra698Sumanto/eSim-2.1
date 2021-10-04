// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1055,"clk", false,-1);
        tracep->declBit(c+1056,"reset", false,-1);
        tracep->declBit(c+1057,"passed", false,-1);
        tracep->declBit(c+1058,"failed", false,-1);
        tracep->declBit(c+1055,"top clk", false,-1);
        tracep->declBit(c+1056,"top reset", false,-1);
        tracep->declBit(c+1057,"top passed", false,-1);
        tracep->declBit(c+1058,"top failed", false,-1);
        tracep->declArray(c+241,"top RW_rand_raw", false,-1, 256,0);
        tracep->declArray(c+250,"top RW_rand_vect", false,-1, 319,0);
        tracep->declBus(c+260,"top CPU_br_tgt_pc_a2", false,-1, 31,0);
        tracep->declBus(c+261,"top CPU_br_tgt_pc_a3", false,-1, 31,0);
        tracep->declBus(c+938,"top CPU_dec_bits_a1", false,-1, 10,0);
        tracep->declBus(c+886,"top CPU_dmem_addr_a4", false,-1, 3,0);
        tracep->declBus(c+887,"top CPU_dmem_rd_data_a4", false,-1, 31,0);
        tracep->declBus(c+1059,"top CPU_dmem_rd_data_a5", false,-1, 31,0);
        tracep->declBit(c+262,"top CPU_dmem_rd_en_a4", false,-1);
        tracep->declBus(c+263,"top CPU_dmem_wr_data_a4", false,-1, 31,0);
        tracep->declBit(c+264,"top CPU_dmem_wr_en_a4", false,-1);
        tracep->declBus(c+1079,"top CPU_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+939,"top CPU_funct3_a1", false,-1, 2,0);
        tracep->declBit(c+940,"top CPU_funct3_valid_a1", false,-1);
        tracep->declBus(c+941,"top CPU_funct7_a1", false,-1, 6,0);
        tracep->declBit(c+942,"top CPU_funct7_valid_a1", false,-1);
        tracep->declBus(c+265,"top CPU_imem_rd_addr_a0", false,-1, 31,0);
        tracep->declBus(c+266,"top CPU_imem_rd_addr_a1", false,-1, 31,0);
        tracep->declBus(c+943,"top CPU_imem_rd_data_a1", false,-1, 31,0);
        tracep->declBit(c+1060,"top CPU_imem_rd_en_a0", false,-1);
        tracep->declBit(c+267,"top CPU_imem_rd_en_a1", false,-1);
        tracep->declBus(c+944,"top CPU_imm_a1", false,-1, 31,0);
        tracep->declBus(c+268,"top CPU_imm_a2", false,-1, 31,0);
        tracep->declBus(c+269,"top CPU_imm_a3", false,-1, 31,0);
        tracep->declBus(c+270,"top CPU_imm_a4", false,-1, 31,0);
        tracep->declBus(c+271,"top CPU_inc_pc_a1", false,-1, 31,0);
        tracep->declBus(c+272,"top CPU_inc_pc_a2", false,-1, 31,0);
        tracep->declBus(c+273,"top CPU_inc_pc_a3", false,-1, 31,0);
        tracep->declBus(c+943,"top CPU_instr_a1", false,-1, 31,0);
        tracep->declBit(c+945,"top CPU_is_add_a1", false,-1);
        tracep->declBit(c+274,"top CPU_is_add_a2", false,-1);
        tracep->declBit(c+275,"top CPU_is_add_a3", false,-1);
        tracep->declBit(c+276,"top CPU_is_add_a4", false,-1);
        tracep->declBit(c+946,"top CPU_is_addi_a1", false,-1);
        tracep->declBit(c+277,"top CPU_is_addi_a2", false,-1);
        tracep->declBit(c+278,"top CPU_is_addi_a3", false,-1);
        tracep->declBit(c+279,"top CPU_is_addi_a4", false,-1);
        tracep->declBit(c+947,"top CPU_is_and_a1", false,-1);
        tracep->declBit(c+280,"top CPU_is_and_a2", false,-1);
        tracep->declBit(c+281,"top CPU_is_and_a3", false,-1);
        tracep->declBit(c+282,"top CPU_is_and_a4", false,-1);
        tracep->declBit(c+948,"top CPU_is_andi_a1", false,-1);
        tracep->declBit(c+283,"top CPU_is_andi_a2", false,-1);
        tracep->declBit(c+284,"top CPU_is_andi_a3", false,-1);
        tracep->declBit(c+285,"top CPU_is_andi_a4", false,-1);
        tracep->declBit(c+949,"top CPU_is_auipc_a1", false,-1);
        tracep->declBit(c+286,"top CPU_is_auipc_a2", false,-1);
        tracep->declBit(c+287,"top CPU_is_auipc_a3", false,-1);
        tracep->declBit(c+288,"top CPU_is_auipc_a4", false,-1);
        tracep->declBit(c+950,"top CPU_is_b_instr_a1", false,-1);
        tracep->declBit(c+951,"top CPU_is_beq_a1", false,-1);
        tracep->declBit(c+289,"top CPU_is_beq_a2", false,-1);
        tracep->declBit(c+290,"top CPU_is_beq_a3", false,-1);
        tracep->declBit(c+291,"top CPU_is_beq_a4", false,-1);
        tracep->declBit(c+292,"top CPU_is_beq_a5", false,-1);
        tracep->declBit(c+952,"top CPU_is_bge_a1", false,-1);
        tracep->declBit(c+293,"top CPU_is_bge_a2", false,-1);
        tracep->declBit(c+294,"top CPU_is_bge_a3", false,-1);
        tracep->declBit(c+295,"top CPU_is_bge_a4", false,-1);
        tracep->declBit(c+296,"top CPU_is_bge_a5", false,-1);
        tracep->declBit(c+953,"top CPU_is_bgeu_a1", false,-1);
        tracep->declBit(c+297,"top CPU_is_bgeu_a2", false,-1);
        tracep->declBit(c+298,"top CPU_is_bgeu_a3", false,-1);
        tracep->declBit(c+299,"top CPU_is_bgeu_a4", false,-1);
        tracep->declBit(c+300,"top CPU_is_bgeu_a5", false,-1);
        tracep->declBit(c+954,"top CPU_is_blt_a1", false,-1);
        tracep->declBit(c+301,"top CPU_is_blt_a2", false,-1);
        tracep->declBit(c+302,"top CPU_is_blt_a3", false,-1);
        tracep->declBit(c+303,"top CPU_is_blt_a4", false,-1);
        tracep->declBit(c+304,"top CPU_is_blt_a5", false,-1);
        tracep->declBit(c+955,"top CPU_is_bltu_a1", false,-1);
        tracep->declBit(c+305,"top CPU_is_bltu_a2", false,-1);
        tracep->declBit(c+306,"top CPU_is_bltu_a3", false,-1);
        tracep->declBit(c+307,"top CPU_is_bltu_a4", false,-1);
        tracep->declBit(c+308,"top CPU_is_bltu_a5", false,-1);
        tracep->declBit(c+956,"top CPU_is_bne_a1", false,-1);
        tracep->declBit(c+309,"top CPU_is_bne_a2", false,-1);
        tracep->declBit(c+310,"top CPU_is_bne_a3", false,-1);
        tracep->declBit(c+311,"top CPU_is_bne_a4", false,-1);
        tracep->declBit(c+312,"top CPU_is_bne_a5", false,-1);
        tracep->declBit(c+1079,"top CPU_is_csrrc_a0", false,-1);
        tracep->declBit(c+313,"top CPU_is_csrrc_a1", false,-1);
        tracep->declBit(c+314,"top CPU_is_csrrc_a2", false,-1);
        tracep->declBit(c+315,"top CPU_is_csrrc_a3", false,-1);
        tracep->declBit(c+316,"top CPU_is_csrrc_a4", false,-1);
        tracep->declBit(c+1079,"top CPU_is_csrrci_a0", false,-1);
        tracep->declBit(c+317,"top CPU_is_csrrci_a1", false,-1);
        tracep->declBit(c+318,"top CPU_is_csrrci_a2", false,-1);
        tracep->declBit(c+319,"top CPU_is_csrrci_a3", false,-1);
        tracep->declBit(c+320,"top CPU_is_csrrci_a4", false,-1);
        tracep->declBit(c+1079,"top CPU_is_csrrs_a0", false,-1);
        tracep->declBit(c+321,"top CPU_is_csrrs_a1", false,-1);
        tracep->declBit(c+322,"top CPU_is_csrrs_a2", false,-1);
        tracep->declBit(c+323,"top CPU_is_csrrs_a3", false,-1);
        tracep->declBit(c+324,"top CPU_is_csrrs_a4", false,-1);
        tracep->declBit(c+1079,"top CPU_is_csrrsi_a0", false,-1);
        tracep->declBit(c+325,"top CPU_is_csrrsi_a1", false,-1);
        tracep->declBit(c+326,"top CPU_is_csrrsi_a2", false,-1);
        tracep->declBit(c+327,"top CPU_is_csrrsi_a3", false,-1);
        tracep->declBit(c+328,"top CPU_is_csrrsi_a4", false,-1);
        tracep->declBit(c+1079,"top CPU_is_csrrw_a0", false,-1);
        tracep->declBit(c+329,"top CPU_is_csrrw_a1", false,-1);
        tracep->declBit(c+330,"top CPU_is_csrrw_a2", false,-1);
        tracep->declBit(c+331,"top CPU_is_csrrw_a3", false,-1);
        tracep->declBit(c+332,"top CPU_is_csrrw_a4", false,-1);
        tracep->declBit(c+1079,"top CPU_is_csrrwi_a0", false,-1);
        tracep->declBit(c+333,"top CPU_is_csrrwi_a1", false,-1);
        tracep->declBit(c+334,"top CPU_is_csrrwi_a2", false,-1);
        tracep->declBit(c+335,"top CPU_is_csrrwi_a3", false,-1);
        tracep->declBit(c+336,"top CPU_is_csrrwi_a4", false,-1);
        tracep->declBit(c+957,"top CPU_is_i_instr_a1", false,-1);
        tracep->declBit(c+958,"top CPU_is_j_instr_a1", false,-1);
        tracep->declBit(c+959,"top CPU_is_jal_a1", false,-1);
        tracep->declBit(c+337,"top CPU_is_jal_a2", false,-1);
        tracep->declBit(c+338,"top CPU_is_jal_a3", false,-1);
        tracep->declBit(c+339,"top CPU_is_jal_a4", false,-1);
        tracep->declBit(c+960,"top CPU_is_jalr_a1", false,-1);
        tracep->declBit(c+340,"top CPU_is_jalr_a2", false,-1);
        tracep->declBit(c+341,"top CPU_is_jalr_a3", false,-1);
        tracep->declBit(c+342,"top CPU_is_jalr_a4", false,-1);
        tracep->declBit(c+961,"top CPU_is_jump_a1", false,-1);
        tracep->declBit(c+343,"top CPU_is_jump_a2", false,-1);
        tracep->declBit(c+344,"top CPU_is_jump_a3", false,-1);
        tracep->declBit(c+1079,"top CPU_is_lb_a0", false,-1);
        tracep->declBit(c+345,"top CPU_is_lb_a1", false,-1);
        tracep->declBit(c+346,"top CPU_is_lb_a2", false,-1);
        tracep->declBit(c+347,"top CPU_is_lb_a3", false,-1);
        tracep->declBit(c+348,"top CPU_is_lb_a4", false,-1);
        tracep->declBit(c+1079,"top CPU_is_lbu_a0", false,-1);
        tracep->declBit(c+349,"top CPU_is_lbu_a1", false,-1);
        tracep->declBit(c+350,"top CPU_is_lbu_a2", false,-1);
        tracep->declBit(c+351,"top CPU_is_lbu_a3", false,-1);
        tracep->declBit(c+352,"top CPU_is_lbu_a4", false,-1);
        tracep->declBit(c+1079,"top CPU_is_lh_a0", false,-1);
        tracep->declBit(c+353,"top CPU_is_lh_a1", false,-1);
        tracep->declBit(c+354,"top CPU_is_lh_a2", false,-1);
        tracep->declBit(c+355,"top CPU_is_lh_a3", false,-1);
        tracep->declBit(c+356,"top CPU_is_lh_a4", false,-1);
        tracep->declBit(c+1079,"top CPU_is_lhu_a0", false,-1);
        tracep->declBit(c+357,"top CPU_is_lhu_a1", false,-1);
        tracep->declBit(c+358,"top CPU_is_lhu_a2", false,-1);
        tracep->declBit(c+359,"top CPU_is_lhu_a3", false,-1);
        tracep->declBit(c+360,"top CPU_is_lhu_a4", false,-1);
        tracep->declBit(c+962,"top CPU_is_load_a1", false,-1);
        tracep->declBit(c+361,"top CPU_is_load_a2", false,-1);
        tracep->declBit(c+362,"top CPU_is_load_a3", false,-1);
        tracep->declBit(c+363,"top CPU_is_load_a4", false,-1);
        tracep->declBit(c+963,"top CPU_is_lui_a1", false,-1);
        tracep->declBit(c+364,"top CPU_is_lui_a2", false,-1);
        tracep->declBit(c+365,"top CPU_is_lui_a3", false,-1);
        tracep->declBit(c+366,"top CPU_is_lui_a4", false,-1);
        tracep->declBit(c+1079,"top CPU_is_lw_a0", false,-1);
        tracep->declBit(c+367,"top CPU_is_lw_a1", false,-1);
        tracep->declBit(c+368,"top CPU_is_lw_a2", false,-1);
        tracep->declBit(c+369,"top CPU_is_lw_a3", false,-1);
        tracep->declBit(c+370,"top CPU_is_lw_a4", false,-1);
        tracep->declBit(c+964,"top CPU_is_or_a1", false,-1);
        tracep->declBit(c+371,"top CPU_is_or_a2", false,-1);
        tracep->declBit(c+372,"top CPU_is_or_a3", false,-1);
        tracep->declBit(c+373,"top CPU_is_or_a4", false,-1);
        tracep->declBit(c+965,"top CPU_is_ori_a1", false,-1);
        tracep->declBit(c+374,"top CPU_is_ori_a2", false,-1);
        tracep->declBit(c+375,"top CPU_is_ori_a3", false,-1);
        tracep->declBit(c+376,"top CPU_is_ori_a4", false,-1);
        tracep->declBit(c+942,"top CPU_is_r_instr_a1", false,-1);
        tracep->declBit(c+966,"top CPU_is_s_instr_a1", false,-1);
        tracep->declBit(c+377,"top CPU_is_s_instr_a2", false,-1);
        tracep->declBit(c+378,"top CPU_is_s_instr_a3", false,-1);
        tracep->declBit(c+379,"top CPU_is_s_instr_a4", false,-1);
        tracep->declBit(c+967,"top CPU_is_sb_a1", false,-1);
        tracep->declBit(c+380,"top CPU_is_sb_a2", false,-1);
        tracep->declBit(c+381,"top CPU_is_sb_a3", false,-1);
        tracep->declBit(c+382,"top CPU_is_sb_a4", false,-1);
        tracep->declBit(c+968,"top CPU_is_sh_a1", false,-1);
        tracep->declBit(c+383,"top CPU_is_sh_a2", false,-1);
        tracep->declBit(c+384,"top CPU_is_sh_a3", false,-1);
        tracep->declBit(c+385,"top CPU_is_sh_a4", false,-1);
        tracep->declBit(c+969,"top CPU_is_sll_a1", false,-1);
        tracep->declBit(c+386,"top CPU_is_sll_a2", false,-1);
        tracep->declBit(c+387,"top CPU_is_sll_a3", false,-1);
        tracep->declBit(c+388,"top CPU_is_sll_a4", false,-1);
        tracep->declBit(c+970,"top CPU_is_slli_a1", false,-1);
        tracep->declBit(c+389,"top CPU_is_slli_a2", false,-1);
        tracep->declBit(c+390,"top CPU_is_slli_a3", false,-1);
        tracep->declBit(c+391,"top CPU_is_slli_a4", false,-1);
        tracep->declBit(c+971,"top CPU_is_slt_a1", false,-1);
        tracep->declBit(c+392,"top CPU_is_slt_a2", false,-1);
        tracep->declBit(c+393,"top CPU_is_slt_a3", false,-1);
        tracep->declBit(c+394,"top CPU_is_slt_a4", false,-1);
        tracep->declBit(c+972,"top CPU_is_slti_a1", false,-1);
        tracep->declBit(c+395,"top CPU_is_slti_a2", false,-1);
        tracep->declBit(c+396,"top CPU_is_slti_a3", false,-1);
        tracep->declBit(c+397,"top CPU_is_slti_a4", false,-1);
        tracep->declBit(c+973,"top CPU_is_sltiu_a1", false,-1);
        tracep->declBit(c+398,"top CPU_is_sltiu_a2", false,-1);
        tracep->declBit(c+399,"top CPU_is_sltiu_a3", false,-1);
        tracep->declBit(c+400,"top CPU_is_sltiu_a4", false,-1);
        tracep->declBit(c+974,"top CPU_is_sltu_a1", false,-1);
        tracep->declBit(c+401,"top CPU_is_sltu_a2", false,-1);
        tracep->declBit(c+402,"top CPU_is_sltu_a3", false,-1);
        tracep->declBit(c+403,"top CPU_is_sltu_a4", false,-1);
        tracep->declBit(c+975,"top CPU_is_sra_a1", false,-1);
        tracep->declBit(c+404,"top CPU_is_sra_a2", false,-1);
        tracep->declBit(c+405,"top CPU_is_sra_a3", false,-1);
        tracep->declBit(c+406,"top CPU_is_sra_a4", false,-1);
        tracep->declBit(c+976,"top CPU_is_srai_a1", false,-1);
        tracep->declBit(c+407,"top CPU_is_srai_a2", false,-1);
        tracep->declBit(c+408,"top CPU_is_srai_a3", false,-1);
        tracep->declBit(c+409,"top CPU_is_srai_a4", false,-1);
        tracep->declBit(c+977,"top CPU_is_srl_a1", false,-1);
        tracep->declBit(c+410,"top CPU_is_srl_a2", false,-1);
        tracep->declBit(c+411,"top CPU_is_srl_a3", false,-1);
        tracep->declBit(c+412,"top CPU_is_srl_a4", false,-1);
        tracep->declBit(c+978,"top CPU_is_srli_a1", false,-1);
        tracep->declBit(c+413,"top CPU_is_srli_a2", false,-1);
        tracep->declBit(c+414,"top CPU_is_srli_a3", false,-1);
        tracep->declBit(c+415,"top CPU_is_srli_a4", false,-1);
        tracep->declBit(c+1079,"top CPU_is_store_a0", false,-1);
        tracep->declBit(c+416,"top CPU_is_store_a1", false,-1);
        tracep->declBit(c+417,"top CPU_is_store_a2", false,-1);
        tracep->declBit(c+418,"top CPU_is_store_a3", false,-1);
        tracep->declBit(c+419,"top CPU_is_store_a4", false,-1);
        tracep->declBit(c+979,"top CPU_is_sub_a1", false,-1);
        tracep->declBit(c+420,"top CPU_is_sub_a2", false,-1);
        tracep->declBit(c+421,"top CPU_is_sub_a3", false,-1);
        tracep->declBit(c+422,"top CPU_is_sub_a4", false,-1);
        tracep->declBit(c+980,"top CPU_is_sw_a1", false,-1);
        tracep->declBit(c+423,"top CPU_is_sw_a2", false,-1);
        tracep->declBit(c+424,"top CPU_is_sw_a3", false,-1);
        tracep->declBit(c+425,"top CPU_is_sw_a4", false,-1);
        tracep->declBit(c+981,"top CPU_is_u_instr_a1", false,-1);
        tracep->declBit(c+982,"top CPU_is_xor_a1", false,-1);
        tracep->declBit(c+426,"top CPU_is_xor_a2", false,-1);
        tracep->declBit(c+427,"top CPU_is_xor_a3", false,-1);
        tracep->declBit(c+428,"top CPU_is_xor_a4", false,-1);
        tracep->declBit(c+983,"top CPU_is_xori_a1", false,-1);
        tracep->declBit(c+429,"top CPU_is_xori_a2", false,-1);
        tracep->declBit(c+430,"top CPU_is_xori_a3", false,-1);
        tracep->declBit(c+431,"top CPU_is_xori_a4", false,-1);
        tracep->declBus(c+1061,"top CPU_jalr_tgt_pc_a2", false,-1, 31,0);
        tracep->declBus(c+432,"top CPU_jalr_tgt_pc_a3", false,-1, 31,0);
        tracep->declBus(c+1059,"top CPU_ld_data_a5", false,-1, 31,0);
        tracep->declBus(c+984,"top CPU_opcode_a1", false,-1, 6,0);
        tracep->declBus(c+433,"top CPU_pc_a0", false,-1, 31,0);
        tracep->declBus(c+434,"top CPU_pc_a1", false,-1, 31,0);
        tracep->declBus(c+435,"top CPU_pc_a2", false,-1, 31,0);
        tracep->declBus(c+436,"top CPU_pc_a3", false,-1, 31,0);
        tracep->declBus(c+437,"top CPU_pc_a4", false,-1, 31,0);
        tracep->declBus(c+985,"top CPU_rd_a1", false,-1, 4,0);
        tracep->declBus(c+1062,"top CPU_rd_a2", false,-1, 4,0);
        tracep->declBus(c+1063,"top CPU_rd_a3", false,-1, 4,0);
        tracep->declBus(c+1064,"top CPU_rd_a4", false,-1, 4,0);
        tracep->declBus(c+1065,"top CPU_rd_a5", false,-1, 4,0);
        tracep->declBit(c+986,"top CPU_rd_valid_a1", false,-1);
        tracep->declBit(c+438,"top CPU_rd_valid_a2", false,-1);
        tracep->declBit(c+439,"top CPU_rd_valid_a3", false,-1);
        tracep->declBit(c+440,"top CPU_rd_valid_a4", false,-1);
        tracep->declBit(c+1056,"top CPU_reset_a0", false,-1);
        tracep->declBit(c+441,"top CPU_reset_a1", false,-1);
        tracep->declBit(c+442,"top CPU_reset_a2", false,-1);
        tracep->declBit(c+443,"top CPU_reset_a3", false,-1);
        tracep->declBit(c+444,"top CPU_reset_a4", false,-1);
        tracep->declBus(c+888,"top CPU_result_a3", false,-1, 31,0);
        tracep->declBus(c+889,"top CPU_result_a4", false,-1, 31,0);
        tracep->declBus(c+1066,"top CPU_rf_rd_data1_a2", false,-1, 31,0);
        tracep->declBus(c+1067,"top CPU_rf_rd_data2_a2", false,-1, 31,0);
        tracep->declBit(c+445,"top CPU_rf_rd_en1_a2", false,-1);
        tracep->declBit(c+446,"top CPU_rf_rd_en2_a2", false,-1);
        tracep->declBus(c+1068,"top CPU_rf_rd_index1_a2", false,-1, 4,0);
        tracep->declBus(c+1069,"top CPU_rf_rd_index2_a2", false,-1, 4,0);
        tracep->declBus(c+1070,"top CPU_rf_wr_data_a3", false,-1, 31,0);
        tracep->declBit(c+1071,"top CPU_rf_wr_en_a3", false,-1);
        tracep->declBus(c+1072,"top CPU_rf_wr_index_a3", false,-1, 4,0);
        tracep->declBus(c+987,"top CPU_rs1_a1", false,-1, 4,0);
        tracep->declBus(c+1068,"top CPU_rs1_a2", false,-1, 4,0);
        tracep->declBus(c+1073,"top CPU_rs1_a3", false,-1, 4,0);
        tracep->declBus(c+1074,"top CPU_rs1_a4", false,-1, 4,0);
        tracep->declBit(c+988,"top CPU_rs1_valid_a1", false,-1);
        tracep->declBit(c+445,"top CPU_rs1_valid_a2", false,-1);
        tracep->declBit(c+447,"top CPU_rs1_valid_a3", false,-1);
        tracep->declBit(c+448,"top CPU_rs1_valid_a4", false,-1);
        tracep->declBus(c+989,"top CPU_rs2_a1", false,-1, 4,0);
        tracep->declBus(c+1069,"top CPU_rs2_a2", false,-1, 4,0);
        tracep->declBus(c+1075,"top CPU_rs2_a3", false,-1, 4,0);
        tracep->declBus(c+1076,"top CPU_rs2_a4", false,-1, 4,0);
        tracep->declBit(c+990,"top CPU_rs2_valid_a1", false,-1);
        tracep->declBit(c+446,"top CPU_rs2_valid_a2", false,-1);
        tracep->declBit(c+449,"top CPU_rs2_valid_a3", false,-1);
        tracep->declBit(c+450,"top CPU_rs2_valid_a4", false,-1);
        tracep->declBit(c+451,"top CPU_sltiu_result_a3", false,-1);
        tracep->declBit(c+452,"top CPU_sltu_result_a3", false,-1);
        tracep->declBus(c+1077,"top CPU_src1_value_a2", false,-1, 31,0);
        tracep->declBus(c+453,"top CPU_src1_value_a3", false,-1, 31,0);
        tracep->declBus(c+454,"top CPU_src1_value_a4", false,-1, 31,0);
        tracep->declBus(c+1078,"top CPU_src2_value_a2", false,-1, 31,0);
        tracep->declBus(c+455,"top CPU_src2_value_a3", false,-1, 31,0);
        tracep->declBus(c+263,"top CPU_src2_value_a4", false,-1, 31,0);
        tracep->declBit(c+456,"top CPU_taken_br_a3", false,-1);
        tracep->declBit(c+457,"top CPU_valid_a3", false,-1);
        tracep->declBit(c+458,"top CPU_valid_a4", false,-1);
        tracep->declBit(c+459,"top CPU_valid_jump_a3", false,-1);
        tracep->declBit(c+460,"top CPU_valid_jump_a4", false,-1);
        tracep->declBit(c+461,"top CPU_valid_jump_a5", false,-1);
        tracep->declBit(c+462,"top CPU_valid_load_a3", false,-1);
        tracep->declBit(c+262,"top CPU_valid_load_a4", false,-1);
        tracep->declBit(c+463,"top CPU_valid_load_a5", false,-1);
        tracep->declBit(c+464,"top CPU_valid_taken_br_a3", false,-1);
        tracep->declBit(c+465,"top CPU_valid_taken_br_a4", false,-1);
        tracep->declBit(c+466,"top CPU_valid_taken_br_a5", false,-1);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+890+i*1,"top CPU_Dmem_value_a4", true,(i+0), 31,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+906+i*1,"top CPU_Dmem_value_a5", true,(i+0), 31,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+1+i*1,"top CPU_Imem_instr_a1", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1023+i*1,"top CPU_Xreg_value_a3", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+467+i*1,"top CPU_Xreg_value_a4", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+499+i*1,"top CPU_Xreg_value_a5", true,(i+0), 31,0);}}
        tracep->declBus(c+270,"top CPUVIZ_imm_a4", false,-1, 31,0);
        tracep->declBit(c+276,"top CPUVIZ_is_add_a4", false,-1);
        tracep->declBit(c+279,"top CPUVIZ_is_addi_a4", false,-1);
        tracep->declBit(c+282,"top CPUVIZ_is_and_a4", false,-1);
        tracep->declBit(c+285,"top CPUVIZ_is_andi_a4", false,-1);
        tracep->declBit(c+288,"top CPUVIZ_is_auipc_a4", false,-1);
        tracep->declBit(c+291,"top CPUVIZ_is_beq_a4", false,-1);
        tracep->declBit(c+295,"top CPUVIZ_is_bge_a4", false,-1);
        tracep->declBit(c+299,"top CPUVIZ_is_bgeu_a4", false,-1);
        tracep->declBit(c+303,"top CPUVIZ_is_blt_a4", false,-1);
        tracep->declBit(c+307,"top CPUVIZ_is_bltu_a4", false,-1);
        tracep->declBit(c+311,"top CPUVIZ_is_bne_a4", false,-1);
        tracep->declBit(c+316,"top CPUVIZ_is_csrrc_a4", false,-1);
        tracep->declBit(c+320,"top CPUVIZ_is_csrrci_a4", false,-1);
        tracep->declBit(c+324,"top CPUVIZ_is_csrrs_a4", false,-1);
        tracep->declBit(c+328,"top CPUVIZ_is_csrrsi_a4", false,-1);
        tracep->declBit(c+332,"top CPUVIZ_is_csrrw_a4", false,-1);
        tracep->declBit(c+336,"top CPUVIZ_is_csrrwi_a4", false,-1);
        tracep->declBit(c+339,"top CPUVIZ_is_jal_a4", false,-1);
        tracep->declBit(c+342,"top CPUVIZ_is_jalr_a4", false,-1);
        tracep->declBit(c+348,"top CPUVIZ_is_lb_a4", false,-1);
        tracep->declBit(c+352,"top CPUVIZ_is_lbu_a4", false,-1);
        tracep->declBit(c+356,"top CPUVIZ_is_lh_a4", false,-1);
        tracep->declBit(c+360,"top CPUVIZ_is_lhu_a4", false,-1);
        tracep->declBit(c+363,"top CPUVIZ_is_load_a4", false,-1);
        tracep->declBit(c+366,"top CPUVIZ_is_lui_a4", false,-1);
        tracep->declBit(c+370,"top CPUVIZ_is_lw_a4", false,-1);
        tracep->declBit(c+373,"top CPUVIZ_is_or_a4", false,-1);
        tracep->declBit(c+376,"top CPUVIZ_is_ori_a4", false,-1);
        tracep->declBit(c+382,"top CPUVIZ_is_sb_a4", false,-1);
        tracep->declBit(c+385,"top CPUVIZ_is_sh_a4", false,-1);
        tracep->declBit(c+388,"top CPUVIZ_is_sll_a4", false,-1);
        tracep->declBit(c+391,"top CPUVIZ_is_slli_a4", false,-1);
        tracep->declBit(c+394,"top CPUVIZ_is_slt_a4", false,-1);
        tracep->declBit(c+397,"top CPUVIZ_is_slti_a4", false,-1);
        tracep->declBit(c+400,"top CPUVIZ_is_sltiu_a4", false,-1);
        tracep->declBit(c+403,"top CPUVIZ_is_sltu_a4", false,-1);
        tracep->declBit(c+406,"top CPUVIZ_is_sra_a4", false,-1);
        tracep->declBit(c+409,"top CPUVIZ_is_srai_a4", false,-1);
        tracep->declBit(c+412,"top CPUVIZ_is_srl_a4", false,-1);
        tracep->declBit(c+415,"top CPUVIZ_is_srli_a4", false,-1);
        tracep->declBit(c+419,"top CPUVIZ_is_store_a4", false,-1);
        tracep->declBit(c+422,"top CPUVIZ_is_sub_a4", false,-1);
        tracep->declBit(c+425,"top CPUVIZ_is_sw_a4", false,-1);
        tracep->declBit(c+428,"top CPUVIZ_is_xor_a4", false,-1);
        tracep->declBit(c+431,"top CPUVIZ_is_xori_a4", false,-1);
        tracep->declArray(c+531,"top CPUVIZ_mnemonic_a4", false,-1, 79,0);
        tracep->declBus(c+437,"top CPUVIZ_pc_a4", false,-1, 31,0);
        tracep->declBus(c+1064,"top CPUVIZ_rd_a4", false,-1, 4,0);
        tracep->declBit(c+440,"top CPUVIZ_rd_valid_a4", false,-1);
        tracep->declBus(c+889,"top CPUVIZ_result_a4", false,-1, 31,0);
        tracep->declBus(c+1074,"top CPUVIZ_rs1_a4", false,-1, 4,0);
        tracep->declBit(c+448,"top CPUVIZ_rs1_valid_a4", false,-1);
        tracep->declBus(c+1076,"top CPUVIZ_rs2_a4", false,-1, 4,0);
        tracep->declBit(c+450,"top CPUVIZ_rs2_valid_a4", false,-1);
        tracep->declBus(c+454,"top CPUVIZ_src1_value_a4", false,-1, 31,0);
        tracep->declBus(c+263,"top CPUVIZ_src2_value_a4", false,-1, 31,0);
        tracep->declBit(c+458,"top CPUVIZ_valid_a4", false,-1);
        tracep->declBus(c+1079,"top CPUVIZ_Defaults_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1080,"top CPUVIZ_Defaults_imem_rd_addr_a0", false,-1, 3,0);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_imem_rd_en_a0", false,-1);
        tracep->declBus(c+1081,"top CPUVIZ_Defaults_imm_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_add_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_addi_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_and_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_andi_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_auipc_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_beq_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_bge_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_bgeu_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_blt_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_bltu_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_bne_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_csrrc_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_csrrci_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_csrrs_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_csrrsi_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_csrrw_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_csrrwi_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_jal_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_jalr_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_lb_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_lbu_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_lh_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_lhu_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_load_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_lui_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_lw_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_or_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_ori_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_s_instr_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_sb_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_sh_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_sll_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_slli_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_slt_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_slti_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_sltiu_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_sltu_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_sra_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_srai_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_srl_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_srli_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_store_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_sub_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_sw_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_xor_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_is_xori_a0", false,-1);
        tracep->declBus(c+1081,"top CPUVIZ_Defaults_ld_data_a0", false,-1, 31,0);
        tracep->declBus(c+1081,"top CPUVIZ_Defaults_pc_a0", false,-1, 31,0);
        tracep->declBus(c+1082,"top CPUVIZ_Defaults_rd_a0", false,-1, 4,0);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_rd_valid_a0", false,-1);
        tracep->declBus(c+1081,"top CPUVIZ_Defaults_result_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_rf_rd_en1_a0", false,-1);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_rf_rd_en2_a0", false,-1);
        tracep->declBus(c+1082,"top CPUVIZ_Defaults_rf_rd_index1_a0", false,-1, 4,0);
        tracep->declBus(c+1082,"top CPUVIZ_Defaults_rf_rd_index2_a0", false,-1, 4,0);
        tracep->declBus(c+1081,"top CPUVIZ_Defaults_rf_wr_data_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_rf_wr_en_a0", false,-1);
        tracep->declBus(c+1082,"top CPUVIZ_Defaults_rf_wr_index_a0", false,-1, 4,0);
        tracep->declBus(c+1082,"top CPUVIZ_Defaults_rs1_a0", false,-1, 4,0);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_rs1_valid_a0", false,-1);
        tracep->declBus(c+1082,"top CPUVIZ_Defaults_rs2_a0", false,-1, 4,0);
        tracep->declBit(c+1079,"top CPUVIZ_Defaults_rs2_valid_a0", false,-1);
        tracep->declBus(c+1081,"top CPUVIZ_Defaults_src1_value_a0", false,-1, 31,0);
        tracep->declBus(c+1081,"top CPUVIZ_Defaults_src2_value_a0", false,-1, 31,0);
        tracep->declBit(c+1083,"top CPUVIZ_Defaults_valid_a0", false,-1);
        tracep->declBit(c+864,"top clkP_CPU_dmem_rd_en_a5", false,-1);
        tracep->declBit(c+865,"top clkP_CPU_rd_valid_a2", false,-1);
        tracep->declBit(c+866,"top clkP_CPU_rd_valid_a3", false,-1);
        tracep->declBit(c+867,"top clkP_CPU_rd_valid_a4", false,-1);
        tracep->declBit(c+868,"top clkP_CPU_rd_valid_a5", false,-1);
        tracep->declBit(c+869,"top clkP_CPU_rs1_valid_a2", false,-1);
        tracep->declBit(c+870,"top clkP_CPU_rs1_valid_a3", false,-1);
        tracep->declBit(c+871,"top clkP_CPU_rs1_valid_a4", false,-1);
        tracep->declBit(c+872,"top clkP_CPU_rs2_valid_a2", false,-1);
        tracep->declBit(c+873,"top clkP_CPU_rs2_valid_a3", false,-1);
        tracep->declBit(c+874,"top clkP_CPU_rs2_valid_a4", false,-1);
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+11+i*1,"top instrs", true,(i+0), 31,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declArray(c+21+i*10,"top instr_strs", true,(i+0), 319,0);}}
        tracep->declBit(c+991,"top L1_CPU_Xreg[0] L1_wr_a3", false,-1);
        tracep->declBit(c+534,"top L1_CPU_Xreg[0] L1_wr_a4", false,-1);
        tracep->declBit(c+992,"top L1_CPU_Xreg[1] L1_wr_a3", false,-1);
        tracep->declBit(c+535,"top L1_CPU_Xreg[1] L1_wr_a4", false,-1);
        tracep->declBit(c+993,"top L1_CPU_Xreg[2] L1_wr_a3", false,-1);
        tracep->declBit(c+536,"top L1_CPU_Xreg[2] L1_wr_a4", false,-1);
        tracep->declBit(c+994,"top L1_CPU_Xreg[3] L1_wr_a3", false,-1);
        tracep->declBit(c+537,"top L1_CPU_Xreg[3] L1_wr_a4", false,-1);
        tracep->declBit(c+995,"top L1_CPU_Xreg[4] L1_wr_a3", false,-1);
        tracep->declBit(c+538,"top L1_CPU_Xreg[4] L1_wr_a4", false,-1);
        tracep->declBit(c+996,"top L1_CPU_Xreg[5] L1_wr_a3", false,-1);
        tracep->declBit(c+539,"top L1_CPU_Xreg[5] L1_wr_a4", false,-1);
        tracep->declBit(c+997,"top L1_CPU_Xreg[6] L1_wr_a3", false,-1);
        tracep->declBit(c+540,"top L1_CPU_Xreg[6] L1_wr_a4", false,-1);
        tracep->declBit(c+998,"top L1_CPU_Xreg[7] L1_wr_a3", false,-1);
        tracep->declBit(c+541,"top L1_CPU_Xreg[7] L1_wr_a4", false,-1);
        tracep->declBit(c+999,"top L1_CPU_Xreg[8] L1_wr_a3", false,-1);
        tracep->declBit(c+542,"top L1_CPU_Xreg[8] L1_wr_a4", false,-1);
        tracep->declBit(c+1000,"top L1_CPU_Xreg[9] L1_wr_a3", false,-1);
        tracep->declBit(c+543,"top L1_CPU_Xreg[9] L1_wr_a4", false,-1);
        tracep->declBit(c+1001,"top L1_CPU_Xreg[10] L1_wr_a3", false,-1);
        tracep->declBit(c+544,"top L1_CPU_Xreg[10] L1_wr_a4", false,-1);
        tracep->declBit(c+1002,"top L1_CPU_Xreg[11] L1_wr_a3", false,-1);
        tracep->declBit(c+545,"top L1_CPU_Xreg[11] L1_wr_a4", false,-1);
        tracep->declBit(c+1003,"top L1_CPU_Xreg[12] L1_wr_a3", false,-1);
        tracep->declBit(c+546,"top L1_CPU_Xreg[12] L1_wr_a4", false,-1);
        tracep->declBit(c+1004,"top L1_CPU_Xreg[13] L1_wr_a3", false,-1);
        tracep->declBit(c+547,"top L1_CPU_Xreg[13] L1_wr_a4", false,-1);
        tracep->declBit(c+1005,"top L1_CPU_Xreg[14] L1_wr_a3", false,-1);
        tracep->declBit(c+548,"top L1_CPU_Xreg[14] L1_wr_a4", false,-1);
        tracep->declBit(c+1006,"top L1_CPU_Xreg[15] L1_wr_a3", false,-1);
        tracep->declBit(c+549,"top L1_CPU_Xreg[15] L1_wr_a4", false,-1);
        tracep->declBit(c+1007,"top L1_CPU_Xreg[16] L1_wr_a3", false,-1);
        tracep->declBit(c+550,"top L1_CPU_Xreg[16] L1_wr_a4", false,-1);
        tracep->declBit(c+1008,"top L1_CPU_Xreg[17] L1_wr_a3", false,-1);
        tracep->declBit(c+551,"top L1_CPU_Xreg[17] L1_wr_a4", false,-1);
        tracep->declBit(c+1009,"top L1_CPU_Xreg[18] L1_wr_a3", false,-1);
        tracep->declBit(c+552,"top L1_CPU_Xreg[18] L1_wr_a4", false,-1);
        tracep->declBit(c+1010,"top L1_CPU_Xreg[19] L1_wr_a3", false,-1);
        tracep->declBit(c+553,"top L1_CPU_Xreg[19] L1_wr_a4", false,-1);
        tracep->declBit(c+1011,"top L1_CPU_Xreg[20] L1_wr_a3", false,-1);
        tracep->declBit(c+554,"top L1_CPU_Xreg[20] L1_wr_a4", false,-1);
        tracep->declBit(c+1012,"top L1_CPU_Xreg[21] L1_wr_a3", false,-1);
        tracep->declBit(c+555,"top L1_CPU_Xreg[21] L1_wr_a4", false,-1);
        tracep->declBit(c+1013,"top L1_CPU_Xreg[22] L1_wr_a3", false,-1);
        tracep->declBit(c+556,"top L1_CPU_Xreg[22] L1_wr_a4", false,-1);
        tracep->declBit(c+1014,"top L1_CPU_Xreg[23] L1_wr_a3", false,-1);
        tracep->declBit(c+557,"top L1_CPU_Xreg[23] L1_wr_a4", false,-1);
        tracep->declBit(c+1015,"top L1_CPU_Xreg[24] L1_wr_a3", false,-1);
        tracep->declBit(c+558,"top L1_CPU_Xreg[24] L1_wr_a4", false,-1);
        tracep->declBit(c+1016,"top L1_CPU_Xreg[25] L1_wr_a3", false,-1);
        tracep->declBit(c+559,"top L1_CPU_Xreg[25] L1_wr_a4", false,-1);
        tracep->declBit(c+1017,"top L1_CPU_Xreg[26] L1_wr_a3", false,-1);
        tracep->declBit(c+560,"top L1_CPU_Xreg[26] L1_wr_a4", false,-1);
        tracep->declBit(c+1018,"top L1_CPU_Xreg[27] L1_wr_a3", false,-1);
        tracep->declBit(c+561,"top L1_CPU_Xreg[27] L1_wr_a4", false,-1);
        tracep->declBit(c+1019,"top L1_CPU_Xreg[28] L1_wr_a3", false,-1);
        tracep->declBit(c+562,"top L1_CPU_Xreg[28] L1_wr_a4", false,-1);
        tracep->declBit(c+1020,"top L1_CPU_Xreg[29] L1_wr_a3", false,-1);
        tracep->declBit(c+563,"top L1_CPU_Xreg[29] L1_wr_a4", false,-1);
        tracep->declBit(c+1021,"top L1_CPU_Xreg[30] L1_wr_a3", false,-1);
        tracep->declBit(c+564,"top L1_CPU_Xreg[30] L1_wr_a4", false,-1);
        tracep->declBit(c+1022,"top L1_CPU_Xreg[31] L1_wr_a3", false,-1);
        tracep->declBit(c+565,"top L1_CPU_Xreg[31] L1_wr_a4", false,-1);
        tracep->declBit(c+848,"top L1_CPU_Dmem[0] L1_wr_a4", false,-1);
        tracep->declBit(c+849,"top L1_CPU_Dmem[1] L1_wr_a4", false,-1);
        tracep->declBit(c+850,"top L1_CPU_Dmem[2] L1_wr_a4", false,-1);
        tracep->declBit(c+851,"top L1_CPU_Dmem[3] L1_wr_a4", false,-1);
        tracep->declBit(c+852,"top L1_CPU_Dmem[4] L1_wr_a4", false,-1);
        tracep->declBit(c+853,"top L1_CPU_Dmem[5] L1_wr_a4", false,-1);
        tracep->declBit(c+854,"top L1_CPU_Dmem[6] L1_wr_a4", false,-1);
        tracep->declBit(c+855,"top L1_CPU_Dmem[7] L1_wr_a4", false,-1);
        tracep->declBit(c+856,"top L1_CPU_Dmem[8] L1_wr_a4", false,-1);
        tracep->declBit(c+857,"top L1_CPU_Dmem[9] L1_wr_a4", false,-1);
        tracep->declBit(c+858,"top L1_CPU_Dmem[10] L1_wr_a4", false,-1);
        tracep->declBit(c+859,"top L1_CPU_Dmem[11] L1_wr_a4", false,-1);
        tracep->declBit(c+860,"top L1_CPU_Dmem[12] L1_wr_a4", false,-1);
        tracep->declBit(c+861,"top L1_CPU_Dmem[13] L1_wr_a4", false,-1);
        tracep->declBit(c+862,"top L1_CPU_Dmem[14] L1_wr_a4", false,-1);
        tracep->declBit(c+863,"top L1_CPU_Dmem[15] L1_wr_a4", false,-1);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[0] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+566,"top L1b_CPU_Xreg[0] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+567,"top L1b_CPU_Xreg[0] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+568,"top L1b_CPU_Xreg[0] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+569,"top L1b_CPU_Xreg[0] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[1] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+570,"top L1b_CPU_Xreg[1] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+571,"top L1b_CPU_Xreg[1] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+572,"top L1b_CPU_Xreg[1] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+573,"top L1b_CPU_Xreg[1] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[2] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+574,"top L1b_CPU_Xreg[2] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+575,"top L1b_CPU_Xreg[2] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+576,"top L1b_CPU_Xreg[2] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+577,"top L1b_CPU_Xreg[2] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[3] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+578,"top L1b_CPU_Xreg[3] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+579,"top L1b_CPU_Xreg[3] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+580,"top L1b_CPU_Xreg[3] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+581,"top L1b_CPU_Xreg[3] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[4] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+582,"top L1b_CPU_Xreg[4] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+583,"top L1b_CPU_Xreg[4] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+584,"top L1b_CPU_Xreg[4] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+585,"top L1b_CPU_Xreg[4] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[5] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+586,"top L1b_CPU_Xreg[5] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+587,"top L1b_CPU_Xreg[5] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+588,"top L1b_CPU_Xreg[5] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+589,"top L1b_CPU_Xreg[5] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[6] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+590,"top L1b_CPU_Xreg[6] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+591,"top L1b_CPU_Xreg[6] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+592,"top L1b_CPU_Xreg[6] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+593,"top L1b_CPU_Xreg[6] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[7] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+594,"top L1b_CPU_Xreg[7] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+595,"top L1b_CPU_Xreg[7] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+596,"top L1b_CPU_Xreg[7] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+597,"top L1b_CPU_Xreg[7] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[8] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+598,"top L1b_CPU_Xreg[8] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+599,"top L1b_CPU_Xreg[8] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+600,"top L1b_CPU_Xreg[8] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+601,"top L1b_CPU_Xreg[8] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[9] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+602,"top L1b_CPU_Xreg[9] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+603,"top L1b_CPU_Xreg[9] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+604,"top L1b_CPU_Xreg[9] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+605,"top L1b_CPU_Xreg[9] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[10] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+606,"top L1b_CPU_Xreg[10] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+607,"top L1b_CPU_Xreg[10] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+608,"top L1b_CPU_Xreg[10] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+609,"top L1b_CPU_Xreg[10] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[11] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+610,"top L1b_CPU_Xreg[11] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+611,"top L1b_CPU_Xreg[11] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+612,"top L1b_CPU_Xreg[11] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+613,"top L1b_CPU_Xreg[11] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[12] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+614,"top L1b_CPU_Xreg[12] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+615,"top L1b_CPU_Xreg[12] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+616,"top L1b_CPU_Xreg[12] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+617,"top L1b_CPU_Xreg[12] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[13] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+618,"top L1b_CPU_Xreg[13] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+619,"top L1b_CPU_Xreg[13] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+620,"top L1b_CPU_Xreg[13] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+621,"top L1b_CPU_Xreg[13] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[14] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+622,"top L1b_CPU_Xreg[14] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+623,"top L1b_CPU_Xreg[14] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+624,"top L1b_CPU_Xreg[14] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+625,"top L1b_CPU_Xreg[14] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[15] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+626,"top L1b_CPU_Xreg[15] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+627,"top L1b_CPU_Xreg[15] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+628,"top L1b_CPU_Xreg[15] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+629,"top L1b_CPU_Xreg[15] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[16] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+630,"top L1b_CPU_Xreg[16] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+631,"top L1b_CPU_Xreg[16] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+632,"top L1b_CPU_Xreg[16] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+633,"top L1b_CPU_Xreg[16] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[17] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+634,"top L1b_CPU_Xreg[17] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+635,"top L1b_CPU_Xreg[17] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+636,"top L1b_CPU_Xreg[17] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+637,"top L1b_CPU_Xreg[17] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[18] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+638,"top L1b_CPU_Xreg[18] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+639,"top L1b_CPU_Xreg[18] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+640,"top L1b_CPU_Xreg[18] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+641,"top L1b_CPU_Xreg[18] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[19] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+642,"top L1b_CPU_Xreg[19] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+643,"top L1b_CPU_Xreg[19] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+644,"top L1b_CPU_Xreg[19] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+645,"top L1b_CPU_Xreg[19] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[20] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+646,"top L1b_CPU_Xreg[20] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+647,"top L1b_CPU_Xreg[20] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+648,"top L1b_CPU_Xreg[20] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+649,"top L1b_CPU_Xreg[20] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[21] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+650,"top L1b_CPU_Xreg[21] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+651,"top L1b_CPU_Xreg[21] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+652,"top L1b_CPU_Xreg[21] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+653,"top L1b_CPU_Xreg[21] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[22] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+654,"top L1b_CPU_Xreg[22] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+655,"top L1b_CPU_Xreg[22] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+656,"top L1b_CPU_Xreg[22] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+657,"top L1b_CPU_Xreg[22] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[23] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+658,"top L1b_CPU_Xreg[23] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+659,"top L1b_CPU_Xreg[23] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+660,"top L1b_CPU_Xreg[23] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+661,"top L1b_CPU_Xreg[23] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[24] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+662,"top L1b_CPU_Xreg[24] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+663,"top L1b_CPU_Xreg[24] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+664,"top L1b_CPU_Xreg[24] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+665,"top L1b_CPU_Xreg[24] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[25] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+666,"top L1b_CPU_Xreg[25] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+667,"top L1b_CPU_Xreg[25] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+668,"top L1b_CPU_Xreg[25] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+669,"top L1b_CPU_Xreg[25] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[26] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+670,"top L1b_CPU_Xreg[26] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+671,"top L1b_CPU_Xreg[26] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+672,"top L1b_CPU_Xreg[26] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+673,"top L1b_CPU_Xreg[26] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[27] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+674,"top L1b_CPU_Xreg[27] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+675,"top L1b_CPU_Xreg[27] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+676,"top L1b_CPU_Xreg[27] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+677,"top L1b_CPU_Xreg[27] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[28] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+678,"top L1b_CPU_Xreg[28] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+679,"top L1b_CPU_Xreg[28] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+680,"top L1b_CPU_Xreg[28] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+681,"top L1b_CPU_Xreg[28] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[29] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+682,"top L1b_CPU_Xreg[29] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+683,"top L1b_CPU_Xreg[29] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+684,"top L1b_CPU_Xreg[29] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+685,"top L1b_CPU_Xreg[29] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[30] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+686,"top L1b_CPU_Xreg[30] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+687,"top L1b_CPU_Xreg[30] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+688,"top L1b_CPU_Xreg[30] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+689,"top L1b_CPU_Xreg[30] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Xreg[31] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+690,"top L1b_CPU_Xreg[31] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+691,"top L1b_CPU_Xreg[31] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+692,"top L1b_CPU_Xreg[31] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+693,"top L1b_CPU_Xreg[31] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[0] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+694,"top L1b_CPU_Dmem[0] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+695,"top L1b_CPU_Dmem[0] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+696,"top L1b_CPU_Dmem[0] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+697,"top L1b_CPU_Dmem[0] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[1] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+698,"top L1b_CPU_Dmem[1] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+699,"top L1b_CPU_Dmem[1] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+700,"top L1b_CPU_Dmem[1] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+701,"top L1b_CPU_Dmem[1] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[2] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+702,"top L1b_CPU_Dmem[2] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+703,"top L1b_CPU_Dmem[2] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+704,"top L1b_CPU_Dmem[2] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+705,"top L1b_CPU_Dmem[2] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[3] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+706,"top L1b_CPU_Dmem[3] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+707,"top L1b_CPU_Dmem[3] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+708,"top L1b_CPU_Dmem[3] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+709,"top L1b_CPU_Dmem[3] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[4] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+710,"top L1b_CPU_Dmem[4] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+711,"top L1b_CPU_Dmem[4] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+712,"top L1b_CPU_Dmem[4] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+713,"top L1b_CPU_Dmem[4] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[5] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+714,"top L1b_CPU_Dmem[5] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+715,"top L1b_CPU_Dmem[5] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+716,"top L1b_CPU_Dmem[5] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+717,"top L1b_CPU_Dmem[5] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[6] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+718,"top L1b_CPU_Dmem[6] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+719,"top L1b_CPU_Dmem[6] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+720,"top L1b_CPU_Dmem[6] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+721,"top L1b_CPU_Dmem[6] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[7] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+722,"top L1b_CPU_Dmem[7] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+723,"top L1b_CPU_Dmem[7] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+724,"top L1b_CPU_Dmem[7] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+725,"top L1b_CPU_Dmem[7] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[8] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+726,"top L1b_CPU_Dmem[8] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+727,"top L1b_CPU_Dmem[8] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+728,"top L1b_CPU_Dmem[8] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+729,"top L1b_CPU_Dmem[8] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[9] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+730,"top L1b_CPU_Dmem[9] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+731,"top L1b_CPU_Dmem[9] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+732,"top L1b_CPU_Dmem[9] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+733,"top L1b_CPU_Dmem[9] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[10] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+734,"top L1b_CPU_Dmem[10] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+735,"top L1b_CPU_Dmem[10] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+736,"top L1b_CPU_Dmem[10] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+737,"top L1b_CPU_Dmem[10] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[11] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+738,"top L1b_CPU_Dmem[11] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+739,"top L1b_CPU_Dmem[11] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+740,"top L1b_CPU_Dmem[11] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+741,"top L1b_CPU_Dmem[11] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[12] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+742,"top L1b_CPU_Dmem[12] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+743,"top L1b_CPU_Dmem[12] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+744,"top L1b_CPU_Dmem[12] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+745,"top L1b_CPU_Dmem[12] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[13] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+746,"top L1b_CPU_Dmem[13] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+747,"top L1b_CPU_Dmem[13] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+748,"top L1b_CPU_Dmem[13] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+749,"top L1b_CPU_Dmem[13] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[14] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+750,"top L1b_CPU_Dmem[14] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+751,"top L1b_CPU_Dmem[14] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+752,"top L1b_CPU_Dmem[14] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+753,"top L1b_CPU_Dmem[14] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+1084,"top L1b_CPU_Dmem[15] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+754,"top L1b_CPU_Dmem[15] L1_dummy_a1", false,-1, 0,0);
        tracep->declBus(c+755,"top L1b_CPU_Dmem[15] L1_dummy_a2", false,-1, 0,0);
        tracep->declBus(c+756,"top L1b_CPU_Dmem[15] L1_dummy_a3", false,-1, 0,0);
        tracep->declBus(c+757,"top L1b_CPU_Dmem[15] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+131,"top L1_CPUVIZ_Imem[0] L1_instr_a1", false,-1, 31,0);
        tracep->declArray(c+132,"top L1_CPUVIZ_Imem[0] L1_instr_str_a1", false,-1, 319,0);
        tracep->declBus(c+142,"top L1_CPUVIZ_Imem[1] L1_instr_a1", false,-1, 31,0);
        tracep->declArray(c+143,"top L1_CPUVIZ_Imem[1] L1_instr_str_a1", false,-1, 319,0);
        tracep->declBus(c+153,"top L1_CPUVIZ_Imem[2] L1_instr_a1", false,-1, 31,0);
        tracep->declArray(c+154,"top L1_CPUVIZ_Imem[2] L1_instr_str_a1", false,-1, 319,0);
        tracep->declBus(c+164,"top L1_CPUVIZ_Imem[3] L1_instr_a1", false,-1, 31,0);
        tracep->declArray(c+165,"top L1_CPUVIZ_Imem[3] L1_instr_str_a1", false,-1, 319,0);
        tracep->declBus(c+175,"top L1_CPUVIZ_Imem[4] L1_instr_a1", false,-1, 31,0);
        tracep->declArray(c+176,"top L1_CPUVIZ_Imem[4] L1_instr_str_a1", false,-1, 319,0);
        tracep->declBus(c+186,"top L1_CPUVIZ_Imem[5] L1_instr_a1", false,-1, 31,0);
        tracep->declArray(c+187,"top L1_CPUVIZ_Imem[5] L1_instr_str_a1", false,-1, 319,0);
        tracep->declBus(c+197,"top L1_CPUVIZ_Imem[6] L1_instr_a1", false,-1, 31,0);
        tracep->declArray(c+198,"top L1_CPUVIZ_Imem[6] L1_instr_str_a1", false,-1, 319,0);
        tracep->declBus(c+208,"top L1_CPUVIZ_Imem[7] L1_instr_a1", false,-1, 31,0);
        tracep->declArray(c+209,"top L1_CPUVIZ_Imem[7] L1_instr_str_a1", false,-1, 319,0);
        tracep->declBus(c+219,"top L1_CPUVIZ_Imem[8] L1_instr_a1", false,-1, 31,0);
        tracep->declArray(c+220,"top L1_CPUVIZ_Imem[8] L1_instr_str_a1", false,-1, 319,0);
        tracep->declBus(c+230,"top L1_CPUVIZ_Imem[9] L1_instr_a1", false,-1, 31,0);
        tracep->declArray(c+231,"top L1_CPUVIZ_Imem[9] L1_instr_str_a1", false,-1, 319,0);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[0] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[0] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[0] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[1] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[1] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[1] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[2] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[2] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[2] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[3] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[3] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[3] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[4] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[4] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[4] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[5] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[5] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[5] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[6] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[6] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[6] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[7] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[7] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[7] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[8] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[8] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[8] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[9] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[9] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[9] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[10] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[10] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[10] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[11] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[11] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[11] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[12] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[12] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[12] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[13] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[13] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[13] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[14] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[14] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[14] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[15] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[15] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[15] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[16] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[16] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[16] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[17] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[17] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[17] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[18] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[18] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[18] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[19] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[19] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[19] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[20] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[20] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[20] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[21] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[21] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[21] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[22] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[22] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[22] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[23] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[23] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[23] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[24] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[24] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[24] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[25] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[25] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[25] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[26] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[26] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[26] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[27] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[27] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[27] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[28] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[28] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[28] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[29] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[29] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[29] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[30] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[30] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[30] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Xreg[31] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Xreg[31] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Xreg[31] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[0] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[0] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[0] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[1] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[1] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[1] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[2] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[2] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[2] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[3] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[3] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[3] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[4] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[4] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[4] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[5] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[5] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[5] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[6] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[6] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[6] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[7] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[7] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[7] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[8] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[8] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[8] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[9] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[9] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[9] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[10] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[10] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[10] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[11] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[11] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[11] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[12] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[12] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[12] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[13] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[13] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[13] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[14] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[14] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[14] L1_wr_a0", false,-1);
        tracep->declBus(c+1079,"top L1_CPUVIZ_Defaults_Dmem[15] L1_dummy_a0", false,-1, 0,0);
        tracep->declBus(c+1081,"top L1_CPUVIZ_Defaults_Dmem[15] L1_value_a0", false,-1, 31,0);
        tracep->declBit(c+1079,"top L1_CPUVIZ_Defaults_Dmem[15] L1_wr_a0", false,-1);
        tracep->declBus(c+569,"top L1_CPUVIZ_Xreg[0] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+758,"top L1_CPUVIZ_Xreg[0] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+759,"top L1_CPUVIZ_Xreg[0] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+534,"top L1_CPUVIZ_Xreg[0] L1_wr_a4", false,-1);
        tracep->declBus(c+573,"top L1_CPUVIZ_Xreg[1] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+760,"top L1_CPUVIZ_Xreg[1] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+761,"top L1_CPUVIZ_Xreg[1] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+535,"top L1_CPUVIZ_Xreg[1] L1_wr_a4", false,-1);
        tracep->declBus(c+577,"top L1_CPUVIZ_Xreg[2] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+762,"top L1_CPUVIZ_Xreg[2] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+763,"top L1_CPUVIZ_Xreg[2] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+536,"top L1_CPUVIZ_Xreg[2] L1_wr_a4", false,-1);
        tracep->declBus(c+581,"top L1_CPUVIZ_Xreg[3] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+764,"top L1_CPUVIZ_Xreg[3] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+765,"top L1_CPUVIZ_Xreg[3] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+537,"top L1_CPUVIZ_Xreg[3] L1_wr_a4", false,-1);
        tracep->declBus(c+585,"top L1_CPUVIZ_Xreg[4] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+766,"top L1_CPUVIZ_Xreg[4] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+767,"top L1_CPUVIZ_Xreg[4] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+538,"top L1_CPUVIZ_Xreg[4] L1_wr_a4", false,-1);
        tracep->declBus(c+589,"top L1_CPUVIZ_Xreg[5] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+768,"top L1_CPUVIZ_Xreg[5] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+769,"top L1_CPUVIZ_Xreg[5] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+539,"top L1_CPUVIZ_Xreg[5] L1_wr_a4", false,-1);
        tracep->declBus(c+593,"top L1_CPUVIZ_Xreg[6] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+770,"top L1_CPUVIZ_Xreg[6] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+771,"top L1_CPUVIZ_Xreg[6] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+540,"top L1_CPUVIZ_Xreg[6] L1_wr_a4", false,-1);
        tracep->declBus(c+597,"top L1_CPUVIZ_Xreg[7] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+772,"top L1_CPUVIZ_Xreg[7] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+773,"top L1_CPUVIZ_Xreg[7] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+541,"top L1_CPUVIZ_Xreg[7] L1_wr_a4", false,-1);
        tracep->declBus(c+601,"top L1_CPUVIZ_Xreg[8] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+774,"top L1_CPUVIZ_Xreg[8] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+775,"top L1_CPUVIZ_Xreg[8] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+542,"top L1_CPUVIZ_Xreg[8] L1_wr_a4", false,-1);
        tracep->declBus(c+605,"top L1_CPUVIZ_Xreg[9] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+776,"top L1_CPUVIZ_Xreg[9] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+777,"top L1_CPUVIZ_Xreg[9] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+543,"top L1_CPUVIZ_Xreg[9] L1_wr_a4", false,-1);
        tracep->declBus(c+609,"top L1_CPUVIZ_Xreg[10] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+778,"top L1_CPUVIZ_Xreg[10] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+779,"top L1_CPUVIZ_Xreg[10] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+544,"top L1_CPUVIZ_Xreg[10] L1_wr_a4", false,-1);
        tracep->declBus(c+613,"top L1_CPUVIZ_Xreg[11] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+780,"top L1_CPUVIZ_Xreg[11] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+781,"top L1_CPUVIZ_Xreg[11] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+545,"top L1_CPUVIZ_Xreg[11] L1_wr_a4", false,-1);
        tracep->declBus(c+617,"top L1_CPUVIZ_Xreg[12] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+782,"top L1_CPUVIZ_Xreg[12] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+783,"top L1_CPUVIZ_Xreg[12] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+546,"top L1_CPUVIZ_Xreg[12] L1_wr_a4", false,-1);
        tracep->declBus(c+621,"top L1_CPUVIZ_Xreg[13] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+784,"top L1_CPUVIZ_Xreg[13] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+785,"top L1_CPUVIZ_Xreg[13] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+547,"top L1_CPUVIZ_Xreg[13] L1_wr_a4", false,-1);
        tracep->declBus(c+625,"top L1_CPUVIZ_Xreg[14] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+786,"top L1_CPUVIZ_Xreg[14] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+787,"top L1_CPUVIZ_Xreg[14] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+548,"top L1_CPUVIZ_Xreg[14] L1_wr_a4", false,-1);
        tracep->declBus(c+629,"top L1_CPUVIZ_Xreg[15] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+788,"top L1_CPUVIZ_Xreg[15] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+789,"top L1_CPUVIZ_Xreg[15] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+549,"top L1_CPUVIZ_Xreg[15] L1_wr_a4", false,-1);
        tracep->declBus(c+633,"top L1_CPUVIZ_Xreg[16] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+790,"top L1_CPUVIZ_Xreg[16] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+791,"top L1_CPUVIZ_Xreg[16] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+550,"top L1_CPUVIZ_Xreg[16] L1_wr_a4", false,-1);
        tracep->declBus(c+637,"top L1_CPUVIZ_Xreg[17] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+792,"top L1_CPUVIZ_Xreg[17] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+793,"top L1_CPUVIZ_Xreg[17] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+551,"top L1_CPUVIZ_Xreg[17] L1_wr_a4", false,-1);
        tracep->declBus(c+641,"top L1_CPUVIZ_Xreg[18] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+794,"top L1_CPUVIZ_Xreg[18] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+795,"top L1_CPUVIZ_Xreg[18] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+552,"top L1_CPUVIZ_Xreg[18] L1_wr_a4", false,-1);
        tracep->declBus(c+645,"top L1_CPUVIZ_Xreg[19] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+796,"top L1_CPUVIZ_Xreg[19] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+797,"top L1_CPUVIZ_Xreg[19] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+553,"top L1_CPUVIZ_Xreg[19] L1_wr_a4", false,-1);
        tracep->declBus(c+649,"top L1_CPUVIZ_Xreg[20] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+798,"top L1_CPUVIZ_Xreg[20] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+799,"top L1_CPUVIZ_Xreg[20] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+554,"top L1_CPUVIZ_Xreg[20] L1_wr_a4", false,-1);
        tracep->declBus(c+653,"top L1_CPUVIZ_Xreg[21] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+800,"top L1_CPUVIZ_Xreg[21] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+801,"top L1_CPUVIZ_Xreg[21] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+555,"top L1_CPUVIZ_Xreg[21] L1_wr_a4", false,-1);
        tracep->declBus(c+657,"top L1_CPUVIZ_Xreg[22] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+802,"top L1_CPUVIZ_Xreg[22] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+803,"top L1_CPUVIZ_Xreg[22] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+556,"top L1_CPUVIZ_Xreg[22] L1_wr_a4", false,-1);
        tracep->declBus(c+661,"top L1_CPUVIZ_Xreg[23] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+804,"top L1_CPUVIZ_Xreg[23] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+805,"top L1_CPUVIZ_Xreg[23] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+557,"top L1_CPUVIZ_Xreg[23] L1_wr_a4", false,-1);
        tracep->declBus(c+665,"top L1_CPUVIZ_Xreg[24] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+806,"top L1_CPUVIZ_Xreg[24] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+807,"top L1_CPUVIZ_Xreg[24] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+558,"top L1_CPUVIZ_Xreg[24] L1_wr_a4", false,-1);
        tracep->declBus(c+669,"top L1_CPUVIZ_Xreg[25] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+808,"top L1_CPUVIZ_Xreg[25] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+809,"top L1_CPUVIZ_Xreg[25] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+559,"top L1_CPUVIZ_Xreg[25] L1_wr_a4", false,-1);
        tracep->declBus(c+673,"top L1_CPUVIZ_Xreg[26] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+810,"top L1_CPUVIZ_Xreg[26] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+811,"top L1_CPUVIZ_Xreg[26] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+560,"top L1_CPUVIZ_Xreg[26] L1_wr_a4", false,-1);
        tracep->declBus(c+677,"top L1_CPUVIZ_Xreg[27] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+812,"top L1_CPUVIZ_Xreg[27] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+813,"top L1_CPUVIZ_Xreg[27] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+561,"top L1_CPUVIZ_Xreg[27] L1_wr_a4", false,-1);
        tracep->declBus(c+681,"top L1_CPUVIZ_Xreg[28] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+814,"top L1_CPUVIZ_Xreg[28] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+815,"top L1_CPUVIZ_Xreg[28] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+562,"top L1_CPUVIZ_Xreg[28] L1_wr_a4", false,-1);
        tracep->declBus(c+685,"top L1_CPUVIZ_Xreg[29] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+816,"top L1_CPUVIZ_Xreg[29] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+817,"top L1_CPUVIZ_Xreg[29] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+563,"top L1_CPUVIZ_Xreg[29] L1_wr_a4", false,-1);
        tracep->declBus(c+689,"top L1_CPUVIZ_Xreg[30] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+818,"top L1_CPUVIZ_Xreg[30] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+819,"top L1_CPUVIZ_Xreg[30] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+564,"top L1_CPUVIZ_Xreg[30] L1_wr_a4", false,-1);
        tracep->declBus(c+693,"top L1_CPUVIZ_Xreg[31] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+820,"top L1_CPUVIZ_Xreg[31] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+821,"top L1_CPUVIZ_Xreg[31] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+565,"top L1_CPUVIZ_Xreg[31] L1_wr_a4", false,-1);
        tracep->declBus(c+697,"top L1_CPUVIZ_Dmem[0] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+922,"top L1_CPUVIZ_Dmem[0] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+822,"top L1_CPUVIZ_Dmem[0] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+848,"top L1_CPUVIZ_Dmem[0] L1_wr_a4", false,-1);
        tracep->declBus(c+701,"top L1_CPUVIZ_Dmem[1] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+923,"top L1_CPUVIZ_Dmem[1] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+823,"top L1_CPUVIZ_Dmem[1] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+849,"top L1_CPUVIZ_Dmem[1] L1_wr_a4", false,-1);
        tracep->declBus(c+705,"top L1_CPUVIZ_Dmem[2] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+924,"top L1_CPUVIZ_Dmem[2] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+824,"top L1_CPUVIZ_Dmem[2] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+850,"top L1_CPUVIZ_Dmem[2] L1_wr_a4", false,-1);
        tracep->declBus(c+709,"top L1_CPUVIZ_Dmem[3] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+925,"top L1_CPUVIZ_Dmem[3] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+825,"top L1_CPUVIZ_Dmem[3] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+851,"top L1_CPUVIZ_Dmem[3] L1_wr_a4", false,-1);
        tracep->declBus(c+713,"top L1_CPUVIZ_Dmem[4] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+926,"top L1_CPUVIZ_Dmem[4] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+826,"top L1_CPUVIZ_Dmem[4] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+852,"top L1_CPUVIZ_Dmem[4] L1_wr_a4", false,-1);
        tracep->declBus(c+717,"top L1_CPUVIZ_Dmem[5] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+927,"top L1_CPUVIZ_Dmem[5] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+827,"top L1_CPUVIZ_Dmem[5] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+853,"top L1_CPUVIZ_Dmem[5] L1_wr_a4", false,-1);
        tracep->declBus(c+721,"top L1_CPUVIZ_Dmem[6] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+928,"top L1_CPUVIZ_Dmem[6] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+828,"top L1_CPUVIZ_Dmem[6] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+854,"top L1_CPUVIZ_Dmem[6] L1_wr_a4", false,-1);
        tracep->declBus(c+725,"top L1_CPUVIZ_Dmem[7] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+929,"top L1_CPUVIZ_Dmem[7] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+829,"top L1_CPUVIZ_Dmem[7] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+855,"top L1_CPUVIZ_Dmem[7] L1_wr_a4", false,-1);
        tracep->declBus(c+729,"top L1_CPUVIZ_Dmem[8] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+930,"top L1_CPUVIZ_Dmem[8] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+830,"top L1_CPUVIZ_Dmem[8] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+856,"top L1_CPUVIZ_Dmem[8] L1_wr_a4", false,-1);
        tracep->declBus(c+733,"top L1_CPUVIZ_Dmem[9] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+931,"top L1_CPUVIZ_Dmem[9] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+831,"top L1_CPUVIZ_Dmem[9] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+857,"top L1_CPUVIZ_Dmem[9] L1_wr_a4", false,-1);
        tracep->declBus(c+737,"top L1_CPUVIZ_Dmem[10] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+932,"top L1_CPUVIZ_Dmem[10] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+832,"top L1_CPUVIZ_Dmem[10] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+858,"top L1_CPUVIZ_Dmem[10] L1_wr_a4", false,-1);
        tracep->declBus(c+741,"top L1_CPUVIZ_Dmem[11] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+933,"top L1_CPUVIZ_Dmem[11] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+833,"top L1_CPUVIZ_Dmem[11] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+859,"top L1_CPUVIZ_Dmem[11] L1_wr_a4", false,-1);
        tracep->declBus(c+745,"top L1_CPUVIZ_Dmem[12] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+934,"top L1_CPUVIZ_Dmem[12] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+834,"top L1_CPUVIZ_Dmem[12] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+860,"top L1_CPUVIZ_Dmem[12] L1_wr_a4", false,-1);
        tracep->declBus(c+749,"top L1_CPUVIZ_Dmem[13] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+935,"top L1_CPUVIZ_Dmem[13] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+835,"top L1_CPUVIZ_Dmem[13] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+861,"top L1_CPUVIZ_Dmem[13] L1_wr_a4", false,-1);
        tracep->declBus(c+753,"top L1_CPUVIZ_Dmem[14] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+936,"top L1_CPUVIZ_Dmem[14] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+836,"top L1_CPUVIZ_Dmem[14] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+862,"top L1_CPUVIZ_Dmem[14] L1_wr_a4", false,-1);
        tracep->declBus(c+757,"top L1_CPUVIZ_Dmem[15] L1_dummy_a4", false,-1, 0,0);
        tracep->declBus(c+937,"top L1_CPUVIZ_Dmem[15] L1_value_a4", false,-1, 31,0);
        tracep->declBus(c+837,"top L1_CPUVIZ_Dmem[15] L1_value_a5", false,-1, 31,0);
        tracep->declBit(c+863,"top L1_CPUVIZ_Dmem[15] L1_wr_a4", false,-1);
        tracep->declBus(c+1085,"top pseudo_rand WIDTH", false,-1, 31,0);
        tracep->declBit(c+1055,"top pseudo_rand clk", false,-1);
        tracep->declBit(c+1056,"top pseudo_rand reset", false,-1);
        tracep->declArray(c+241,"top pseudo_rand rand_vect", false,-1, 256,0);
        tracep->declBus(c+1085,"top pseudo_rand LFSR_WIDTH", false,-1, 31,0);
        tracep->declArray(c+1086,"top pseudo_rand LFSR_POLY", false,-1, 256,0);
        tracep->declArray(c+1095,"top pseudo_rand SEED", false,-1, 256,0);
        tracep->declArray(c+838,"top pseudo_rand DEFAULT_lfsr_a1", false,-1, 256,0);
        tracep->declArray(c+241,"top pseudo_rand DEFAULT_lfsr_a2", false,-1, 256,0);
        tracep->declBit(c+1056,"top pseudo_rand DEFAULT_reset_a0", false,-1);
        tracep->declBit(c+847,"top pseudo_rand DEFAULT_reset_a1", false,-1);
        tracep->declBit(c+864,"top gen_clkP_CPU_dmem_rd_en_a5 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_dmem_rd_en_a5 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_dmem_rd_en_a5 func_en", false,-1);
        tracep->declBit(c+262,"top gen_clkP_CPU_dmem_rd_en_a5 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_dmem_rd_en_a5 gating_override", false,-1);
        tracep->declBit(c+262,"top gen_clkP_CPU_dmem_rd_en_a5 clk_en", false,-1);
        tracep->declBit(c+875,"top gen_clkP_CPU_dmem_rd_en_a5 latched_clk_en", false,-1);
        tracep->declBit(c+865,"top gen_clkP_CPU_rd_valid_a2 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_rd_valid_a2 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_rd_valid_a2 func_en", false,-1);
        tracep->declBit(c+986,"top gen_clkP_CPU_rd_valid_a2 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_rd_valid_a2 gating_override", false,-1);
        tracep->declBit(c+986,"top gen_clkP_CPU_rd_valid_a2 clk_en", false,-1);
        tracep->declBit(c+876,"top gen_clkP_CPU_rd_valid_a2 latched_clk_en", false,-1);
        tracep->declBit(c+866,"top gen_clkP_CPU_rd_valid_a3 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_rd_valid_a3 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_rd_valid_a3 func_en", false,-1);
        tracep->declBit(c+438,"top gen_clkP_CPU_rd_valid_a3 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_rd_valid_a3 gating_override", false,-1);
        tracep->declBit(c+438,"top gen_clkP_CPU_rd_valid_a3 clk_en", false,-1);
        tracep->declBit(c+877,"top gen_clkP_CPU_rd_valid_a3 latched_clk_en", false,-1);
        tracep->declBit(c+867,"top gen_clkP_CPU_rd_valid_a4 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_rd_valid_a4 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_rd_valid_a4 func_en", false,-1);
        tracep->declBit(c+439,"top gen_clkP_CPU_rd_valid_a4 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_rd_valid_a4 gating_override", false,-1);
        tracep->declBit(c+439,"top gen_clkP_CPU_rd_valid_a4 clk_en", false,-1);
        tracep->declBit(c+878,"top gen_clkP_CPU_rd_valid_a4 latched_clk_en", false,-1);
        tracep->declBit(c+868,"top gen_clkP_CPU_rd_valid_a5 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_rd_valid_a5 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_rd_valid_a5 func_en", false,-1);
        tracep->declBit(c+440,"top gen_clkP_CPU_rd_valid_a5 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_rd_valid_a5 gating_override", false,-1);
        tracep->declBit(c+440,"top gen_clkP_CPU_rd_valid_a5 clk_en", false,-1);
        tracep->declBit(c+879,"top gen_clkP_CPU_rd_valid_a5 latched_clk_en", false,-1);
        tracep->declBit(c+869,"top gen_clkP_CPU_rs1_valid_a2 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_rs1_valid_a2 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_rs1_valid_a2 func_en", false,-1);
        tracep->declBit(c+988,"top gen_clkP_CPU_rs1_valid_a2 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_rs1_valid_a2 gating_override", false,-1);
        tracep->declBit(c+988,"top gen_clkP_CPU_rs1_valid_a2 clk_en", false,-1);
        tracep->declBit(c+880,"top gen_clkP_CPU_rs1_valid_a2 latched_clk_en", false,-1);
        tracep->declBit(c+870,"top gen_clkP_CPU_rs1_valid_a3 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_rs1_valid_a3 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_rs1_valid_a3 func_en", false,-1);
        tracep->declBit(c+445,"top gen_clkP_CPU_rs1_valid_a3 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_rs1_valid_a3 gating_override", false,-1);
        tracep->declBit(c+445,"top gen_clkP_CPU_rs1_valid_a3 clk_en", false,-1);
        tracep->declBit(c+881,"top gen_clkP_CPU_rs1_valid_a3 latched_clk_en", false,-1);
        tracep->declBit(c+871,"top gen_clkP_CPU_rs1_valid_a4 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_rs1_valid_a4 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_rs1_valid_a4 func_en", false,-1);
        tracep->declBit(c+447,"top gen_clkP_CPU_rs1_valid_a4 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_rs1_valid_a4 gating_override", false,-1);
        tracep->declBit(c+447,"top gen_clkP_CPU_rs1_valid_a4 clk_en", false,-1);
        tracep->declBit(c+882,"top gen_clkP_CPU_rs1_valid_a4 latched_clk_en", false,-1);
        tracep->declBit(c+872,"top gen_clkP_CPU_rs2_valid_a2 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_rs2_valid_a2 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_rs2_valid_a2 func_en", false,-1);
        tracep->declBit(c+990,"top gen_clkP_CPU_rs2_valid_a2 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_rs2_valid_a2 gating_override", false,-1);
        tracep->declBit(c+990,"top gen_clkP_CPU_rs2_valid_a2 clk_en", false,-1);
        tracep->declBit(c+883,"top gen_clkP_CPU_rs2_valid_a2 latched_clk_en", false,-1);
        tracep->declBit(c+873,"top gen_clkP_CPU_rs2_valid_a3 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_rs2_valid_a3 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_rs2_valid_a3 func_en", false,-1);
        tracep->declBit(c+446,"top gen_clkP_CPU_rs2_valid_a3 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_rs2_valid_a3 gating_override", false,-1);
        tracep->declBit(c+446,"top gen_clkP_CPU_rs2_valid_a3 clk_en", false,-1);
        tracep->declBit(c+884,"top gen_clkP_CPU_rs2_valid_a3 latched_clk_en", false,-1);
        tracep->declBit(c+874,"top gen_clkP_CPU_rs2_valid_a4 gated_clk", false,-1);
        tracep->declBit(c+1055,"top gen_clkP_CPU_rs2_valid_a4 free_clk", false,-1);
        tracep->declBit(c+1083,"top gen_clkP_CPU_rs2_valid_a4 func_en", false,-1);
        tracep->declBit(c+449,"top gen_clkP_CPU_rs2_valid_a4 pwr_en", false,-1);
        tracep->declBit(c+1079,"top gen_clkP_CPU_rs2_valid_a4 gating_override", false,-1);
        tracep->declBit(c+449,"top gen_clkP_CPU_rs2_valid_a4 clk_en", false,-1);
        tracep->declBit(c+885,"top gen_clkP_CPU_rs2_valid_a4 latched_clk_en", false,-1);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_8aaa57a3_0;
extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_81cf83eb_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<10>/*319:0*/ __Vtemp195;
    VlWide<10>/*319:0*/ __Vtemp196;
    VlWide<10>/*319:0*/ __Vtemp197;
    VlWide<10>/*319:0*/ __Vtemp198;
    VlWide<10>/*319:0*/ __Vtemp199;
    VlWide<10>/*319:0*/ __Vtemp200;
    VlWide<10>/*319:0*/ __Vtemp201;
    VlWide<10>/*319:0*/ __Vtemp202;
    VlWide<10>/*319:0*/ __Vtemp203;
    VlWide<10>/*319:0*/ __Vtemp204;
    VlWide<10>/*319:0*/ __Vtemp205;
    VlWide<9>/*287:0*/ __Vtemp211;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__CPU_Imem_instr_a1[0]),32);
        tracep->fullIData(oldp+2,(vlSelf->top__DOT__CPU_Imem_instr_a1[1]),32);
        tracep->fullIData(oldp+3,(vlSelf->top__DOT__CPU_Imem_instr_a1[2]),32);
        tracep->fullIData(oldp+4,(vlSelf->top__DOT__CPU_Imem_instr_a1[3]),32);
        tracep->fullIData(oldp+5,(vlSelf->top__DOT__CPU_Imem_instr_a1[4]),32);
        tracep->fullIData(oldp+6,(vlSelf->top__DOT__CPU_Imem_instr_a1[5]),32);
        tracep->fullIData(oldp+7,(vlSelf->top__DOT__CPU_Imem_instr_a1[6]),32);
        tracep->fullIData(oldp+8,(vlSelf->top__DOT__CPU_Imem_instr_a1[7]),32);
        tracep->fullIData(oldp+9,(vlSelf->top__DOT__CPU_Imem_instr_a1[8]),32);
        tracep->fullIData(oldp+10,(vlSelf->top__DOT__CPU_Imem_instr_a1[9]),32);
        tracep->fullIData(oldp+11,(vlSelf->top__DOT__instrs[0]),32);
        tracep->fullIData(oldp+12,(vlSelf->top__DOT__instrs[1]),32);
        tracep->fullIData(oldp+13,(vlSelf->top__DOT__instrs[2]),32);
        tracep->fullIData(oldp+14,(vlSelf->top__DOT__instrs[3]),32);
        tracep->fullIData(oldp+15,(vlSelf->top__DOT__instrs[4]),32);
        tracep->fullIData(oldp+16,(vlSelf->top__DOT__instrs[5]),32);
        tracep->fullIData(oldp+17,(vlSelf->top__DOT__instrs[6]),32);
        tracep->fullIData(oldp+18,(vlSelf->top__DOT__instrs[7]),32);
        tracep->fullIData(oldp+19,(vlSelf->top__DOT__instrs[8]),32);
        tracep->fullIData(oldp+20,(vlSelf->top__DOT__instrs[9]),32);
        tracep->fullWData(oldp+21,(vlSelf->top__DOT__instr_strs[0]),320);
        tracep->fullWData(oldp+31,(vlSelf->top__DOT__instr_strs[1]),320);
        tracep->fullWData(oldp+41,(vlSelf->top__DOT__instr_strs[2]),320);
        tracep->fullWData(oldp+51,(vlSelf->top__DOT__instr_strs[3]),320);
        tracep->fullWData(oldp+61,(vlSelf->top__DOT__instr_strs[4]),320);
        tracep->fullWData(oldp+71,(vlSelf->top__DOT__instr_strs[5]),320);
        tracep->fullWData(oldp+81,(vlSelf->top__DOT__instr_strs[6]),320);
        tracep->fullWData(oldp+91,(vlSelf->top__DOT__instr_strs[7]),320);
        tracep->fullWData(oldp+101,(vlSelf->top__DOT__instr_strs[8]),320);
        tracep->fullWData(oldp+111,(vlSelf->top__DOT__instr_strs[9]),320);
        tracep->fullWData(oldp+121,(vlSelf->top__DOT__instr_strs[10]),320);
        tracep->fullIData(oldp+131,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                    [0U]),32);
        __Vtemp195[0U] = vlSelf->top__DOT__instr_strs
            [0U][0U];
        __Vtemp195[1U] = vlSelf->top__DOT__instr_strs
            [0U][1U];
        __Vtemp195[2U] = vlSelf->top__DOT__instr_strs
            [0U][2U];
        __Vtemp195[3U] = vlSelf->top__DOT__instr_strs
            [0U][3U];
        __Vtemp195[4U] = vlSelf->top__DOT__instr_strs
            [0U][4U];
        __Vtemp195[5U] = vlSelf->top__DOT__instr_strs
            [0U][5U];
        __Vtemp195[6U] = vlSelf->top__DOT__instr_strs
            [0U][6U];
        __Vtemp195[7U] = vlSelf->top__DOT__instr_strs
            [0U][7U];
        __Vtemp195[8U] = vlSelf->top__DOT__instr_strs
            [0U][8U];
        __Vtemp195[9U] = vlSelf->top__DOT__instr_strs
            [0U][9U];
        tracep->fullWData(oldp+132,(__Vtemp195),320);
        tracep->fullIData(oldp+142,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                    [1U]),32);
        __Vtemp196[0U] = vlSelf->top__DOT__instr_strs
            [1U][0U];
        __Vtemp196[1U] = vlSelf->top__DOT__instr_strs
            [1U][1U];
        __Vtemp196[2U] = vlSelf->top__DOT__instr_strs
            [1U][2U];
        __Vtemp196[3U] = vlSelf->top__DOT__instr_strs
            [1U][3U];
        __Vtemp196[4U] = vlSelf->top__DOT__instr_strs
            [1U][4U];
        __Vtemp196[5U] = vlSelf->top__DOT__instr_strs
            [1U][5U];
        __Vtemp196[6U] = vlSelf->top__DOT__instr_strs
            [1U][6U];
        __Vtemp196[7U] = vlSelf->top__DOT__instr_strs
            [1U][7U];
        __Vtemp196[8U] = vlSelf->top__DOT__instr_strs
            [1U][8U];
        __Vtemp196[9U] = vlSelf->top__DOT__instr_strs
            [1U][9U];
        tracep->fullWData(oldp+143,(__Vtemp196),320);
        tracep->fullIData(oldp+153,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                    [2U]),32);
        __Vtemp197[0U] = vlSelf->top__DOT__instr_strs
            [2U][0U];
        __Vtemp197[1U] = vlSelf->top__DOT__instr_strs
            [2U][1U];
        __Vtemp197[2U] = vlSelf->top__DOT__instr_strs
            [2U][2U];
        __Vtemp197[3U] = vlSelf->top__DOT__instr_strs
            [2U][3U];
        __Vtemp197[4U] = vlSelf->top__DOT__instr_strs
            [2U][4U];
        __Vtemp197[5U] = vlSelf->top__DOT__instr_strs
            [2U][5U];
        __Vtemp197[6U] = vlSelf->top__DOT__instr_strs
            [2U][6U];
        __Vtemp197[7U] = vlSelf->top__DOT__instr_strs
            [2U][7U];
        __Vtemp197[8U] = vlSelf->top__DOT__instr_strs
            [2U][8U];
        __Vtemp197[9U] = vlSelf->top__DOT__instr_strs
            [2U][9U];
        tracep->fullWData(oldp+154,(__Vtemp197),320);
        tracep->fullIData(oldp+164,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                    [3U]),32);
        __Vtemp198[0U] = vlSelf->top__DOT__instr_strs
            [3U][0U];
        __Vtemp198[1U] = vlSelf->top__DOT__instr_strs
            [3U][1U];
        __Vtemp198[2U] = vlSelf->top__DOT__instr_strs
            [3U][2U];
        __Vtemp198[3U] = vlSelf->top__DOT__instr_strs
            [3U][3U];
        __Vtemp198[4U] = vlSelf->top__DOT__instr_strs
            [3U][4U];
        __Vtemp198[5U] = vlSelf->top__DOT__instr_strs
            [3U][5U];
        __Vtemp198[6U] = vlSelf->top__DOT__instr_strs
            [3U][6U];
        __Vtemp198[7U] = vlSelf->top__DOT__instr_strs
            [3U][7U];
        __Vtemp198[8U] = vlSelf->top__DOT__instr_strs
            [3U][8U];
        __Vtemp198[9U] = vlSelf->top__DOT__instr_strs
            [3U][9U];
        tracep->fullWData(oldp+165,(__Vtemp198),320);
        tracep->fullIData(oldp+175,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                    [4U]),32);
        __Vtemp199[0U] = vlSelf->top__DOT__instr_strs
            [4U][0U];
        __Vtemp199[1U] = vlSelf->top__DOT__instr_strs
            [4U][1U];
        __Vtemp199[2U] = vlSelf->top__DOT__instr_strs
            [4U][2U];
        __Vtemp199[3U] = vlSelf->top__DOT__instr_strs
            [4U][3U];
        __Vtemp199[4U] = vlSelf->top__DOT__instr_strs
            [4U][4U];
        __Vtemp199[5U] = vlSelf->top__DOT__instr_strs
            [4U][5U];
        __Vtemp199[6U] = vlSelf->top__DOT__instr_strs
            [4U][6U];
        __Vtemp199[7U] = vlSelf->top__DOT__instr_strs
            [4U][7U];
        __Vtemp199[8U] = vlSelf->top__DOT__instr_strs
            [4U][8U];
        __Vtemp199[9U] = vlSelf->top__DOT__instr_strs
            [4U][9U];
        tracep->fullWData(oldp+176,(__Vtemp199),320);
        tracep->fullIData(oldp+186,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                    [5U]),32);
        __Vtemp200[0U] = vlSelf->top__DOT__instr_strs
            [5U][0U];
        __Vtemp200[1U] = vlSelf->top__DOT__instr_strs
            [5U][1U];
        __Vtemp200[2U] = vlSelf->top__DOT__instr_strs
            [5U][2U];
        __Vtemp200[3U] = vlSelf->top__DOT__instr_strs
            [5U][3U];
        __Vtemp200[4U] = vlSelf->top__DOT__instr_strs
            [5U][4U];
        __Vtemp200[5U] = vlSelf->top__DOT__instr_strs
            [5U][5U];
        __Vtemp200[6U] = vlSelf->top__DOT__instr_strs
            [5U][6U];
        __Vtemp200[7U] = vlSelf->top__DOT__instr_strs
            [5U][7U];
        __Vtemp200[8U] = vlSelf->top__DOT__instr_strs
            [5U][8U];
        __Vtemp200[9U] = vlSelf->top__DOT__instr_strs
            [5U][9U];
        tracep->fullWData(oldp+187,(__Vtemp200),320);
        tracep->fullIData(oldp+197,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                    [6U]),32);
        __Vtemp201[0U] = vlSelf->top__DOT__instr_strs
            [6U][0U];
        __Vtemp201[1U] = vlSelf->top__DOT__instr_strs
            [6U][1U];
        __Vtemp201[2U] = vlSelf->top__DOT__instr_strs
            [6U][2U];
        __Vtemp201[3U] = vlSelf->top__DOT__instr_strs
            [6U][3U];
        __Vtemp201[4U] = vlSelf->top__DOT__instr_strs
            [6U][4U];
        __Vtemp201[5U] = vlSelf->top__DOT__instr_strs
            [6U][5U];
        __Vtemp201[6U] = vlSelf->top__DOT__instr_strs
            [6U][6U];
        __Vtemp201[7U] = vlSelf->top__DOT__instr_strs
            [6U][7U];
        __Vtemp201[8U] = vlSelf->top__DOT__instr_strs
            [6U][8U];
        __Vtemp201[9U] = vlSelf->top__DOT__instr_strs
            [6U][9U];
        tracep->fullWData(oldp+198,(__Vtemp201),320);
        tracep->fullIData(oldp+208,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                    [7U]),32);
        __Vtemp202[0U] = vlSelf->top__DOT__instr_strs
            [7U][0U];
        __Vtemp202[1U] = vlSelf->top__DOT__instr_strs
            [7U][1U];
        __Vtemp202[2U] = vlSelf->top__DOT__instr_strs
            [7U][2U];
        __Vtemp202[3U] = vlSelf->top__DOT__instr_strs
            [7U][3U];
        __Vtemp202[4U] = vlSelf->top__DOT__instr_strs
            [7U][4U];
        __Vtemp202[5U] = vlSelf->top__DOT__instr_strs
            [7U][5U];
        __Vtemp202[6U] = vlSelf->top__DOT__instr_strs
            [7U][6U];
        __Vtemp202[7U] = vlSelf->top__DOT__instr_strs
            [7U][7U];
        __Vtemp202[8U] = vlSelf->top__DOT__instr_strs
            [7U][8U];
        __Vtemp202[9U] = vlSelf->top__DOT__instr_strs
            [7U][9U];
        tracep->fullWData(oldp+209,(__Vtemp202),320);
        tracep->fullIData(oldp+219,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                    [8U]),32);
        __Vtemp203[0U] = vlSelf->top__DOT__instr_strs
            [8U][0U];
        __Vtemp203[1U] = vlSelf->top__DOT__instr_strs
            [8U][1U];
        __Vtemp203[2U] = vlSelf->top__DOT__instr_strs
            [8U][2U];
        __Vtemp203[3U] = vlSelf->top__DOT__instr_strs
            [8U][3U];
        __Vtemp203[4U] = vlSelf->top__DOT__instr_strs
            [8U][4U];
        __Vtemp203[5U] = vlSelf->top__DOT__instr_strs
            [8U][5U];
        __Vtemp203[6U] = vlSelf->top__DOT__instr_strs
            [8U][6U];
        __Vtemp203[7U] = vlSelf->top__DOT__instr_strs
            [8U][7U];
        __Vtemp203[8U] = vlSelf->top__DOT__instr_strs
            [8U][8U];
        __Vtemp203[9U] = vlSelf->top__DOT__instr_strs
            [8U][9U];
        tracep->fullWData(oldp+220,(__Vtemp203),320);
        tracep->fullIData(oldp+230,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                    [9U]),32);
        __Vtemp204[0U] = vlSelf->top__DOT__instr_strs
            [9U][0U];
        __Vtemp204[1U] = vlSelf->top__DOT__instr_strs
            [9U][1U];
        __Vtemp204[2U] = vlSelf->top__DOT__instr_strs
            [9U][2U];
        __Vtemp204[3U] = vlSelf->top__DOT__instr_strs
            [9U][3U];
        __Vtemp204[4U] = vlSelf->top__DOT__instr_strs
            [9U][4U];
        __Vtemp204[5U] = vlSelf->top__DOT__instr_strs
            [9U][5U];
        __Vtemp204[6U] = vlSelf->top__DOT__instr_strs
            [9U][6U];
        __Vtemp204[7U] = vlSelf->top__DOT__instr_strs
            [9U][7U];
        __Vtemp204[8U] = vlSelf->top__DOT__instr_strs
            [9U][8U];
        __Vtemp204[9U] = vlSelf->top__DOT__instr_strs
            [9U][9U];
        tracep->fullWData(oldp+231,(__Vtemp204),320);
        tracep->fullWData(oldp+241,(vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2),257);
        __Vtemp205[0U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U];
        __Vtemp205[1U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U];
        __Vtemp205[2U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U];
        __Vtemp205[3U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U];
        __Vtemp205[4U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U];
        __Vtemp205[5U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U];
        __Vtemp205[6U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U];
        __Vtemp205[7U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U];
        __Vtemp205[8U] = (((IData)((0x7fffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U]))))) 
                           << 1U) | vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U]);
        __Vtemp205[9U] = (((IData)((0x7fffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U]))))) 
                           >> 0x1fU) | ((IData)(((0x7fffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U])))) 
                                                 >> 0x20U)) 
                                        << 1U));
        tracep->fullWData(oldp+250,(__Vtemp205),320);
        tracep->fullIData(oldp+260,((vlSelf->top__DOT__CPU_pc_a2 
                                     + vlSelf->top__DOT__CPU_imm_a2)),32);
        tracep->fullIData(oldp+261,(vlSelf->top__DOT__CPU_br_tgt_pc_a3),32);
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__CPU_valid_load_a4));
        tracep->fullIData(oldp+263,(vlSelf->top__DOT__CPU_src2_value_a4),32);
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__CPU_dmem_wr_en_a4));
        tracep->fullIData(oldp+265,((0xfU & (vlSelf->top__DOT__CPU_pc_a0 
                                             >> 2U))),32);
        tracep->fullIData(oldp+266,(vlSelf->top__DOT__CPU_imem_rd_addr_a1),32);
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__CPU_imem_rd_en_a1));
        tracep->fullIData(oldp+268,(vlSelf->top__DOT__CPU_imm_a2),32);
        tracep->fullIData(oldp+269,(vlSelf->top__DOT__CPU_imm_a3),32);
        tracep->fullIData(oldp+270,(vlSelf->top__DOT__CPU_imm_a4),32);
        tracep->fullIData(oldp+271,(((IData)(4U) + vlSelf->top__DOT__CPU_pc_a1)),32);
        tracep->fullIData(oldp+272,(vlSelf->top__DOT__CPU_inc_pc_a2),32);
        tracep->fullIData(oldp+273,(vlSelf->top__DOT__CPU_inc_pc_a3),32);
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__CPU_is_add_a2));
        tracep->fullBit(oldp+275,(vlSelf->top__DOT__CPU_is_add_a3));
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__CPU_is_add_a4));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__CPU_is_addi_a2));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__CPU_is_addi_a3));
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__CPU_is_addi_a4));
        tracep->fullBit(oldp+280,(vlSelf->top__DOT__CPU_is_and_a2));
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__CPU_is_and_a3));
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__CPU_is_and_a4));
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__CPU_is_andi_a2));
        tracep->fullBit(oldp+284,(vlSelf->top__DOT__CPU_is_andi_a3));
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__CPU_is_andi_a4));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__CPU_is_auipc_a2));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__CPU_is_auipc_a3));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__CPU_is_auipc_a4));
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__CPU_is_beq_a2));
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__CPU_is_beq_a3));
        tracep->fullBit(oldp+291,(vlSelf->top__DOT__CPU_is_beq_a4));
        tracep->fullBit(oldp+292,(vlSelf->top__DOT__CPU_is_beq_a5));
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__CPU_is_bge_a2));
        tracep->fullBit(oldp+294,(vlSelf->top__DOT__CPU_is_bge_a3));
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__CPU_is_bge_a4));
        tracep->fullBit(oldp+296,(vlSelf->top__DOT__CPU_is_bge_a5));
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__CPU_is_bgeu_a2));
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__CPU_is_bgeu_a3));
        tracep->fullBit(oldp+299,(vlSelf->top__DOT__CPU_is_bgeu_a4));
        tracep->fullBit(oldp+300,(vlSelf->top__DOT__CPU_is_bgeu_a5));
        tracep->fullBit(oldp+301,(vlSelf->top__DOT__CPU_is_blt_a2));
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__CPU_is_blt_a3));
        tracep->fullBit(oldp+303,(vlSelf->top__DOT__CPU_is_blt_a4));
        tracep->fullBit(oldp+304,(vlSelf->top__DOT__CPU_is_blt_a5));
        tracep->fullBit(oldp+305,(vlSelf->top__DOT__CPU_is_bltu_a2));
        tracep->fullBit(oldp+306,(vlSelf->top__DOT__CPU_is_bltu_a3));
        tracep->fullBit(oldp+307,(vlSelf->top__DOT__CPU_is_bltu_a4));
        tracep->fullBit(oldp+308,(vlSelf->top__DOT__CPU_is_bltu_a5));
        tracep->fullBit(oldp+309,(vlSelf->top__DOT__CPU_is_bne_a2));
        tracep->fullBit(oldp+310,(vlSelf->top__DOT__CPU_is_bne_a3));
        tracep->fullBit(oldp+311,(vlSelf->top__DOT__CPU_is_bne_a4));
        tracep->fullBit(oldp+312,(vlSelf->top__DOT__CPU_is_bne_a5));
        tracep->fullBit(oldp+313,(vlSelf->top__DOT__CPU_is_csrrc_a1));
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__CPU_is_csrrc_a2));
        tracep->fullBit(oldp+315,(vlSelf->top__DOT__CPU_is_csrrc_a3));
        tracep->fullBit(oldp+316,(vlSelf->top__DOT__CPU_is_csrrc_a4));
        tracep->fullBit(oldp+317,(vlSelf->top__DOT__CPU_is_csrrci_a1));
        tracep->fullBit(oldp+318,(vlSelf->top__DOT__CPU_is_csrrci_a2));
        tracep->fullBit(oldp+319,(vlSelf->top__DOT__CPU_is_csrrci_a3));
        tracep->fullBit(oldp+320,(vlSelf->top__DOT__CPU_is_csrrci_a4));
        tracep->fullBit(oldp+321,(vlSelf->top__DOT__CPU_is_csrrs_a1));
        tracep->fullBit(oldp+322,(vlSelf->top__DOT__CPU_is_csrrs_a2));
        tracep->fullBit(oldp+323,(vlSelf->top__DOT__CPU_is_csrrs_a3));
        tracep->fullBit(oldp+324,(vlSelf->top__DOT__CPU_is_csrrs_a4));
        tracep->fullBit(oldp+325,(vlSelf->top__DOT__CPU_is_csrrsi_a1));
        tracep->fullBit(oldp+326,(vlSelf->top__DOT__CPU_is_csrrsi_a2));
        tracep->fullBit(oldp+327,(vlSelf->top__DOT__CPU_is_csrrsi_a3));
        tracep->fullBit(oldp+328,(vlSelf->top__DOT__CPU_is_csrrsi_a4));
        tracep->fullBit(oldp+329,(vlSelf->top__DOT__CPU_is_csrrw_a1));
        tracep->fullBit(oldp+330,(vlSelf->top__DOT__CPU_is_csrrw_a2));
        tracep->fullBit(oldp+331,(vlSelf->top__DOT__CPU_is_csrrw_a3));
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__CPU_is_csrrw_a4));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__CPU_is_csrrwi_a1));
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__CPU_is_csrrwi_a2));
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__CPU_is_csrrwi_a3));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__CPU_is_csrrwi_a4));
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__CPU_is_jal_a2));
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__CPU_is_jal_a3));
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__CPU_is_jal_a4));
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__CPU_is_jalr_a2));
        tracep->fullBit(oldp+341,(vlSelf->top__DOT__CPU_is_jalr_a3));
        tracep->fullBit(oldp+342,(vlSelf->top__DOT__CPU_is_jalr_a4));
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__CPU_is_jump_a2));
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__CPU_is_jump_a3));
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__CPU_is_lb_a1));
        tracep->fullBit(oldp+346,(vlSelf->top__DOT__CPU_is_lb_a2));
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__CPU_is_lb_a3));
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__CPU_is_lb_a4));
        tracep->fullBit(oldp+349,(vlSelf->top__DOT__CPU_is_lbu_a1));
        tracep->fullBit(oldp+350,(vlSelf->top__DOT__CPU_is_lbu_a2));
        tracep->fullBit(oldp+351,(vlSelf->top__DOT__CPU_is_lbu_a3));
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__CPU_is_lbu_a4));
        tracep->fullBit(oldp+353,(vlSelf->top__DOT__CPU_is_lh_a1));
        tracep->fullBit(oldp+354,(vlSelf->top__DOT__CPU_is_lh_a2));
        tracep->fullBit(oldp+355,(vlSelf->top__DOT__CPU_is_lh_a3));
        tracep->fullBit(oldp+356,(vlSelf->top__DOT__CPU_is_lh_a4));
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__CPU_is_lhu_a1));
        tracep->fullBit(oldp+358,(vlSelf->top__DOT__CPU_is_lhu_a2));
        tracep->fullBit(oldp+359,(vlSelf->top__DOT__CPU_is_lhu_a3));
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__CPU_is_lhu_a4));
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__CPU_is_load_a2));
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__CPU_is_load_a3));
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__CPU_is_load_a4));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__CPU_is_lui_a2));
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__CPU_is_lui_a3));
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__CPU_is_lui_a4));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__CPU_is_lw_a1));
        tracep->fullBit(oldp+368,(vlSelf->top__DOT__CPU_is_lw_a2));
        tracep->fullBit(oldp+369,(vlSelf->top__DOT__CPU_is_lw_a3));
        tracep->fullBit(oldp+370,(vlSelf->top__DOT__CPU_is_lw_a4));
        tracep->fullBit(oldp+371,(vlSelf->top__DOT__CPU_is_or_a2));
        tracep->fullBit(oldp+372,(vlSelf->top__DOT__CPU_is_or_a3));
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__CPU_is_or_a4));
        tracep->fullBit(oldp+374,(vlSelf->top__DOT__CPU_is_ori_a2));
        tracep->fullBit(oldp+375,(vlSelf->top__DOT__CPU_is_ori_a3));
        tracep->fullBit(oldp+376,(vlSelf->top__DOT__CPU_is_ori_a4));
        tracep->fullBit(oldp+377,(vlSelf->top__DOT__CPU_is_s_instr_a2));
        tracep->fullBit(oldp+378,(vlSelf->top__DOT__CPU_is_s_instr_a3));
        tracep->fullBit(oldp+379,(vlSelf->top__DOT__CPU_is_s_instr_a4));
        tracep->fullBit(oldp+380,(vlSelf->top__DOT__CPU_is_sb_a2));
        tracep->fullBit(oldp+381,(vlSelf->top__DOT__CPU_is_sb_a3));
        tracep->fullBit(oldp+382,(vlSelf->top__DOT__CPU_is_sb_a4));
        tracep->fullBit(oldp+383,(vlSelf->top__DOT__CPU_is_sh_a2));
        tracep->fullBit(oldp+384,(vlSelf->top__DOT__CPU_is_sh_a3));
        tracep->fullBit(oldp+385,(vlSelf->top__DOT__CPU_is_sh_a4));
        tracep->fullBit(oldp+386,(vlSelf->top__DOT__CPU_is_sll_a2));
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__CPU_is_sll_a3));
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__CPU_is_sll_a4));
        tracep->fullBit(oldp+389,(vlSelf->top__DOT__CPU_is_slli_a2));
        tracep->fullBit(oldp+390,(vlSelf->top__DOT__CPU_is_slli_a3));
        tracep->fullBit(oldp+391,(vlSelf->top__DOT__CPU_is_slli_a4));
        tracep->fullBit(oldp+392,(vlSelf->top__DOT__CPU_is_slt_a2));
        tracep->fullBit(oldp+393,(vlSelf->top__DOT__CPU_is_slt_a3));
        tracep->fullBit(oldp+394,(vlSelf->top__DOT__CPU_is_slt_a4));
        tracep->fullBit(oldp+395,(vlSelf->top__DOT__CPU_is_slti_a2));
        tracep->fullBit(oldp+396,(vlSelf->top__DOT__CPU_is_slti_a3));
        tracep->fullBit(oldp+397,(vlSelf->top__DOT__CPU_is_slti_a4));
        tracep->fullBit(oldp+398,(vlSelf->top__DOT__CPU_is_sltiu_a2));
        tracep->fullBit(oldp+399,(vlSelf->top__DOT__CPU_is_sltiu_a3));
        tracep->fullBit(oldp+400,(vlSelf->top__DOT__CPU_is_sltiu_a4));
        tracep->fullBit(oldp+401,(vlSelf->top__DOT__CPU_is_sltu_a2));
        tracep->fullBit(oldp+402,(vlSelf->top__DOT__CPU_is_sltu_a3));
        tracep->fullBit(oldp+403,(vlSelf->top__DOT__CPU_is_sltu_a4));
        tracep->fullBit(oldp+404,(vlSelf->top__DOT__CPU_is_sra_a2));
        tracep->fullBit(oldp+405,(vlSelf->top__DOT__CPU_is_sra_a3));
        tracep->fullBit(oldp+406,(vlSelf->top__DOT__CPU_is_sra_a4));
        tracep->fullBit(oldp+407,(vlSelf->top__DOT__CPU_is_srai_a2));
        tracep->fullBit(oldp+408,(vlSelf->top__DOT__CPU_is_srai_a3));
        tracep->fullBit(oldp+409,(vlSelf->top__DOT__CPU_is_srai_a4));
        tracep->fullBit(oldp+410,(vlSelf->top__DOT__CPU_is_srl_a2));
        tracep->fullBit(oldp+411,(vlSelf->top__DOT__CPU_is_srl_a3));
        tracep->fullBit(oldp+412,(vlSelf->top__DOT__CPU_is_srl_a4));
        tracep->fullBit(oldp+413,(vlSelf->top__DOT__CPU_is_srli_a2));
        tracep->fullBit(oldp+414,(vlSelf->top__DOT__CPU_is_srli_a3));
        tracep->fullBit(oldp+415,(vlSelf->top__DOT__CPU_is_srli_a4));
        tracep->fullBit(oldp+416,(vlSelf->top__DOT__CPU_is_store_a1));
        tracep->fullBit(oldp+417,(vlSelf->top__DOT__CPU_is_store_a2));
        tracep->fullBit(oldp+418,(vlSelf->top__DOT__CPU_is_store_a3));
        tracep->fullBit(oldp+419,(vlSelf->top__DOT__CPU_is_store_a4));
        tracep->fullBit(oldp+420,(vlSelf->top__DOT__CPU_is_sub_a2));
        tracep->fullBit(oldp+421,(vlSelf->top__DOT__CPU_is_sub_a3));
        tracep->fullBit(oldp+422,(vlSelf->top__DOT__CPU_is_sub_a4));
        tracep->fullBit(oldp+423,(vlSelf->top__DOT__CPU_is_sw_a2));
        tracep->fullBit(oldp+424,(vlSelf->top__DOT__CPU_is_sw_a3));
        tracep->fullBit(oldp+425,(vlSelf->top__DOT__CPU_is_sw_a4));
        tracep->fullBit(oldp+426,(vlSelf->top__DOT__CPU_is_xor_a2));
        tracep->fullBit(oldp+427,(vlSelf->top__DOT__CPU_is_xor_a3));
        tracep->fullBit(oldp+428,(vlSelf->top__DOT__CPU_is_xor_a4));
        tracep->fullBit(oldp+429,(vlSelf->top__DOT__CPU_is_xori_a2));
        tracep->fullBit(oldp+430,(vlSelf->top__DOT__CPU_is_xori_a3));
        tracep->fullBit(oldp+431,(vlSelf->top__DOT__CPU_is_xori_a4));
        tracep->fullIData(oldp+432,(vlSelf->top__DOT__CPU_jalr_tgt_pc_a3),32);
        tracep->fullIData(oldp+433,(vlSelf->top__DOT__CPU_pc_a0),32);
        tracep->fullIData(oldp+434,(vlSelf->top__DOT__CPU_pc_a1),32);
        tracep->fullIData(oldp+435,(vlSelf->top__DOT__CPU_pc_a2),32);
        tracep->fullIData(oldp+436,(vlSelf->top__DOT__CPU_pc_a3),32);
        tracep->fullIData(oldp+437,(vlSelf->top__DOT__CPU_pc_a4),32);
        tracep->fullBit(oldp+438,(vlSelf->top__DOT__CPU_rd_valid_a2));
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__CPU_rd_valid_a3));
        tracep->fullBit(oldp+440,(vlSelf->top__DOT__CPU_rd_valid_a4));
        tracep->fullBit(oldp+441,(vlSelf->top__DOT__CPU_reset_a1));
        tracep->fullBit(oldp+442,(vlSelf->top__DOT__CPU_reset_a2));
        tracep->fullBit(oldp+443,(vlSelf->top__DOT__CPU_reset_a3));
        tracep->fullBit(oldp+444,(vlSelf->top__DOT__CPU_reset_a4));
        tracep->fullBit(oldp+445,(vlSelf->top__DOT__CPU_rs1_valid_a2));
        tracep->fullBit(oldp+446,(vlSelf->top__DOT__CPU_rs2_valid_a2));
        tracep->fullBit(oldp+447,(vlSelf->top__DOT__CPU_rs1_valid_a3));
        tracep->fullBit(oldp+448,(vlSelf->top__DOT__CPU_rs1_valid_a4));
        tracep->fullBit(oldp+449,(vlSelf->top__DOT__CPU_rs2_valid_a3));
        tracep->fullBit(oldp+450,(vlSelf->top__DOT__CPU_rs2_valid_a4));
        tracep->fullBit(oldp+451,(vlSelf->top__DOT__CPU_sltiu_result_a3));
        tracep->fullBit(oldp+452,(vlSelf->top__DOT__CPU_sltu_result_a3));
        tracep->fullIData(oldp+453,(vlSelf->top__DOT__CPU_src1_value_a3),32);
        tracep->fullIData(oldp+454,(vlSelf->top__DOT__CPU_src1_value_a4),32);
        tracep->fullIData(oldp+455,(vlSelf->top__DOT__CPU_src2_value_a3),32);
        tracep->fullBit(oldp+456,(((IData)(vlSelf->top__DOT__CPU_is_beq_a3)
                                    ? (vlSelf->top__DOT__CPU_src1_value_a3 
                                       == vlSelf->top__DOT__CPU_src2_value_a3)
                                    : ((IData)(vlSelf->top__DOT__CPU_is_bne_a3)
                                        ? (vlSelf->top__DOT__CPU_src1_value_a3 
                                           != vlSelf->top__DOT__CPU_src2_value_a3)
                                        : ((IData)(vlSelf->top__DOT__CPU_is_blt_a3)
                                            ? ((vlSelf->top__DOT__CPU_src1_value_a3 
                                                < vlSelf->top__DOT__CPU_src2_value_a3) 
                                               ^ ((vlSelf->top__DOT__CPU_src1_value_a3 
                                                   >> 0x1fU) 
                                                  != 
                                                  (vlSelf->top__DOT__CPU_src2_value_a3 
                                                   >> 0x1fU)))
                                            : ((IData)(vlSelf->top__DOT__CPU_is_bge_a3)
                                                ? (
                                                   (vlSelf->top__DOT__CPU_src1_value_a3 
                                                    >= vlSelf->top__DOT__CPU_src2_value_a3) 
                                                   ^ 
                                                   ((vlSelf->top__DOT__CPU_src1_value_a3 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->top__DOT__CPU_src2_value_a3 
                                                     >> 0x1fU)))
                                                : ((IData)(vlSelf->top__DOT__CPU_is_bltu_a3)
                                                    ? 
                                                   (vlSelf->top__DOT__CPU_src1_value_a3 
                                                    < vlSelf->top__DOT__CPU_src2_value_a3)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__CPU_is_bgeu_a3) 
                                                    & (vlSelf->top__DOT__CPU_src1_value_a3 
                                                       >= vlSelf->top__DOT__CPU_src2_value_a3)))))))));
        tracep->fullBit(oldp+457,(vlSelf->top__DOT__CPU_valid_a3));
        tracep->fullBit(oldp+458,(vlSelf->top__DOT__CPU_valid_a4));
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__CPU_valid_jump_a3));
        tracep->fullBit(oldp+460,(vlSelf->top__DOT__CPU_valid_jump_a4));
        tracep->fullBit(oldp+461,(vlSelf->top__DOT__CPU_valid_jump_a5));
        tracep->fullBit(oldp+462,(vlSelf->top__DOT__CPU_valid_load_a3));
        tracep->fullBit(oldp+463,(vlSelf->top__DOT__CPU_valid_load_a5));
        tracep->fullBit(oldp+464,(vlSelf->top__DOT__CPU_valid_taken_br_a3));
        tracep->fullBit(oldp+465,(vlSelf->top__DOT__CPU_valid_taken_br_a4));
        tracep->fullBit(oldp+466,(vlSelf->top__DOT__CPU_valid_taken_br_a5));
        tracep->fullIData(oldp+467,(vlSelf->top__DOT__CPU_Xreg_value_a4[0]),32);
        tracep->fullIData(oldp+468,(vlSelf->top__DOT__CPU_Xreg_value_a4[1]),32);
        tracep->fullIData(oldp+469,(vlSelf->top__DOT__CPU_Xreg_value_a4[2]),32);
        tracep->fullIData(oldp+470,(vlSelf->top__DOT__CPU_Xreg_value_a4[3]),32);
        tracep->fullIData(oldp+471,(vlSelf->top__DOT__CPU_Xreg_value_a4[4]),32);
        tracep->fullIData(oldp+472,(vlSelf->top__DOT__CPU_Xreg_value_a4[5]),32);
        tracep->fullIData(oldp+473,(vlSelf->top__DOT__CPU_Xreg_value_a4[6]),32);
        tracep->fullIData(oldp+474,(vlSelf->top__DOT__CPU_Xreg_value_a4[7]),32);
        tracep->fullIData(oldp+475,(vlSelf->top__DOT__CPU_Xreg_value_a4[8]),32);
        tracep->fullIData(oldp+476,(vlSelf->top__DOT__CPU_Xreg_value_a4[9]),32);
        tracep->fullIData(oldp+477,(vlSelf->top__DOT__CPU_Xreg_value_a4[10]),32);
        tracep->fullIData(oldp+478,(vlSelf->top__DOT__CPU_Xreg_value_a4[11]),32);
        tracep->fullIData(oldp+479,(vlSelf->top__DOT__CPU_Xreg_value_a4[12]),32);
        tracep->fullIData(oldp+480,(vlSelf->top__DOT__CPU_Xreg_value_a4[13]),32);
        tracep->fullIData(oldp+481,(vlSelf->top__DOT__CPU_Xreg_value_a4[14]),32);
        tracep->fullIData(oldp+482,(vlSelf->top__DOT__CPU_Xreg_value_a4[15]),32);
        tracep->fullIData(oldp+483,(vlSelf->top__DOT__CPU_Xreg_value_a4[16]),32);
        tracep->fullIData(oldp+484,(vlSelf->top__DOT__CPU_Xreg_value_a4[17]),32);
        tracep->fullIData(oldp+485,(vlSelf->top__DOT__CPU_Xreg_value_a4[18]),32);
        tracep->fullIData(oldp+486,(vlSelf->top__DOT__CPU_Xreg_value_a4[19]),32);
        tracep->fullIData(oldp+487,(vlSelf->top__DOT__CPU_Xreg_value_a4[20]),32);
        tracep->fullIData(oldp+488,(vlSelf->top__DOT__CPU_Xreg_value_a4[21]),32);
        tracep->fullIData(oldp+489,(vlSelf->top__DOT__CPU_Xreg_value_a4[22]),32);
        tracep->fullIData(oldp+490,(vlSelf->top__DOT__CPU_Xreg_value_a4[23]),32);
        tracep->fullIData(oldp+491,(vlSelf->top__DOT__CPU_Xreg_value_a4[24]),32);
        tracep->fullIData(oldp+492,(vlSelf->top__DOT__CPU_Xreg_value_a4[25]),32);
        tracep->fullIData(oldp+493,(vlSelf->top__DOT__CPU_Xreg_value_a4[26]),32);
        tracep->fullIData(oldp+494,(vlSelf->top__DOT__CPU_Xreg_value_a4[27]),32);
        tracep->fullIData(oldp+495,(vlSelf->top__DOT__CPU_Xreg_value_a4[28]),32);
        tracep->fullIData(oldp+496,(vlSelf->top__DOT__CPU_Xreg_value_a4[29]),32);
        tracep->fullIData(oldp+497,(vlSelf->top__DOT__CPU_Xreg_value_a4[30]),32);
        tracep->fullIData(oldp+498,(vlSelf->top__DOT__CPU_Xreg_value_a4[31]),32);
        tracep->fullIData(oldp+499,(vlSelf->top__DOT__CPU_Xreg_value_a5[0]),32);
        tracep->fullIData(oldp+500,(vlSelf->top__DOT__CPU_Xreg_value_a5[1]),32);
        tracep->fullIData(oldp+501,(vlSelf->top__DOT__CPU_Xreg_value_a5[2]),32);
        tracep->fullIData(oldp+502,(vlSelf->top__DOT__CPU_Xreg_value_a5[3]),32);
        tracep->fullIData(oldp+503,(vlSelf->top__DOT__CPU_Xreg_value_a5[4]),32);
        tracep->fullIData(oldp+504,(vlSelf->top__DOT__CPU_Xreg_value_a5[5]),32);
        tracep->fullIData(oldp+505,(vlSelf->top__DOT__CPU_Xreg_value_a5[6]),32);
        tracep->fullIData(oldp+506,(vlSelf->top__DOT__CPU_Xreg_value_a5[7]),32);
        tracep->fullIData(oldp+507,(vlSelf->top__DOT__CPU_Xreg_value_a5[8]),32);
        tracep->fullIData(oldp+508,(vlSelf->top__DOT__CPU_Xreg_value_a5[9]),32);
        tracep->fullIData(oldp+509,(vlSelf->top__DOT__CPU_Xreg_value_a5[10]),32);
        tracep->fullIData(oldp+510,(vlSelf->top__DOT__CPU_Xreg_value_a5[11]),32);
        tracep->fullIData(oldp+511,(vlSelf->top__DOT__CPU_Xreg_value_a5[12]),32);
        tracep->fullIData(oldp+512,(vlSelf->top__DOT__CPU_Xreg_value_a5[13]),32);
        tracep->fullIData(oldp+513,(vlSelf->top__DOT__CPU_Xreg_value_a5[14]),32);
        tracep->fullIData(oldp+514,(vlSelf->top__DOT__CPU_Xreg_value_a5[15]),32);
        tracep->fullIData(oldp+515,(vlSelf->top__DOT__CPU_Xreg_value_a5[16]),32);
        tracep->fullIData(oldp+516,(vlSelf->top__DOT__CPU_Xreg_value_a5[17]),32);
        tracep->fullIData(oldp+517,(vlSelf->top__DOT__CPU_Xreg_value_a5[18]),32);
        tracep->fullIData(oldp+518,(vlSelf->top__DOT__CPU_Xreg_value_a5[19]),32);
        tracep->fullIData(oldp+519,(vlSelf->top__DOT__CPU_Xreg_value_a5[20]),32);
        tracep->fullIData(oldp+520,(vlSelf->top__DOT__CPU_Xreg_value_a5[21]),32);
        tracep->fullIData(oldp+521,(vlSelf->top__DOT__CPU_Xreg_value_a5[22]),32);
        tracep->fullIData(oldp+522,(vlSelf->top__DOT__CPU_Xreg_value_a5[23]),32);
        tracep->fullIData(oldp+523,(vlSelf->top__DOT__CPU_Xreg_value_a5[24]),32);
        tracep->fullIData(oldp+524,(vlSelf->top__DOT__CPU_Xreg_value_a5[25]),32);
        tracep->fullIData(oldp+525,(vlSelf->top__DOT__CPU_Xreg_value_a5[26]),32);
        tracep->fullIData(oldp+526,(vlSelf->top__DOT__CPU_Xreg_value_a5[27]),32);
        tracep->fullIData(oldp+527,(vlSelf->top__DOT__CPU_Xreg_value_a5[28]),32);
        tracep->fullIData(oldp+528,(vlSelf->top__DOT__CPU_Xreg_value_a5[29]),32);
        tracep->fullIData(oldp+529,(vlSelf->top__DOT__CPU_Xreg_value_a5[30]),32);
        tracep->fullIData(oldp+530,(vlSelf->top__DOT__CPU_Xreg_value_a5[31]),32);
        tracep->fullWData(oldp+531,(vlSelf->top__DOT__CPUVIZ_mnemonic_a4),80);
        tracep->fullBit(oldp+534,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__0__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+535,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__1__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+536,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__2__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+537,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__3__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+538,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__4__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+539,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__5__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+540,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__6__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+541,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__7__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+542,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__8__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+543,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__9__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+544,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__10__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+545,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__11__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+546,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__12__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+547,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__13__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+548,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__14__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+549,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__15__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+550,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__16__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+551,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__17__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+552,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__18__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+553,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__19__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+554,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__20__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+555,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__21__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+556,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__22__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+557,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__23__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+558,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__24__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+559,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__25__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+560,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__26__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+561,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__27__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+562,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__28__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+563,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__29__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+564,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__30__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+565,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__31__KET____DOT__L1_wr_a4));
        tracep->fullBit(oldp+566,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__0__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+567,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__0__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+568,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__0__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+569,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__0__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+570,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__1__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+571,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__1__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+572,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__1__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+573,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__1__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+574,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__2__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+575,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__2__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+576,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__2__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+577,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__2__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+578,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__3__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+579,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__3__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+580,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__3__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+581,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__3__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+582,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__4__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+583,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__4__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+584,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__4__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+585,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__4__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+586,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__5__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+587,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__5__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__5__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__5__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+590,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__6__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+591,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__6__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+592,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__6__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+593,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__6__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+594,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__7__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+595,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__7__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+596,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__7__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__7__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+598,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__8__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+599,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__8__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+600,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__8__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+601,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__8__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__9__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+603,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__9__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+604,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__9__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__9__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__10__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+607,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__10__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+608,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__10__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+609,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__10__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+610,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__11__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+611,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__11__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+612,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__11__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+613,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__11__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+614,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__12__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+615,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__12__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+616,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__12__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+617,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__12__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+618,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__13__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+619,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__13__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+620,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__13__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+621,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__13__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+622,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__14__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+623,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__14__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+624,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__14__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+625,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__14__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+626,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__15__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+627,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__15__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+628,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__15__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+629,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__15__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+630,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__16__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+631,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__16__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+632,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__16__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+633,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__16__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+634,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__17__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+635,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__17__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+636,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__17__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+637,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__17__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+638,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__18__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+639,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__18__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+640,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__18__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+641,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__18__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+642,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__19__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+643,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__19__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+644,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__19__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+645,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__19__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+646,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__20__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+647,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__20__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+648,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__20__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+649,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__20__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+650,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__21__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+651,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__21__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+652,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__21__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+653,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__21__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+654,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__22__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+655,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__22__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+656,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__22__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+657,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__22__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+658,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__23__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+659,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__23__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+660,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__23__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+661,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__23__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+662,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__24__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+663,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__24__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+664,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__24__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+665,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__24__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+666,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__25__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+667,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__25__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+668,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__25__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+669,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__25__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+670,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__26__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+671,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__26__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+672,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__26__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+673,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__26__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+674,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__27__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+675,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__27__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+676,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__27__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+677,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__27__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+678,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__28__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+679,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__28__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+680,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__28__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+681,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__28__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+682,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__29__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+683,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__29__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+684,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__29__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+685,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__29__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+686,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__30__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+687,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__30__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+688,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__30__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+689,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__30__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+690,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__31__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+691,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__31__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+692,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__31__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+693,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__31__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+694,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__0__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+695,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__0__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+696,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__0__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+697,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__0__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+698,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__1__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+699,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__1__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+700,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__1__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+701,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__1__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+702,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__2__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+703,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__2__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+704,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__2__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+705,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__2__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+706,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__3__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+707,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__3__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+708,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__3__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+709,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__3__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+710,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__4__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+711,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__4__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+712,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__4__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+713,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__4__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+714,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__5__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+715,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__5__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+716,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__5__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+717,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__5__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+718,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__6__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+719,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__6__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+720,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__6__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+721,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__6__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+722,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__7__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+723,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__7__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+724,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__7__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+725,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__7__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+726,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__8__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+727,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__8__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+728,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__8__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+729,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__8__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+730,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__9__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+731,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__9__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+732,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__9__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+733,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__9__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+734,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__10__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+735,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__10__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+736,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__10__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+737,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__10__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+738,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__11__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+739,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__11__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+740,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__11__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+741,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__11__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+742,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__12__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+743,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__12__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+744,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__12__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+745,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__12__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+746,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__13__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+747,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__13__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+748,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__13__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+749,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__13__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+750,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__14__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+751,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__14__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+752,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__14__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+753,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__14__KET____DOT__L1_dummy_a4));
        tracep->fullBit(oldp+754,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__15__KET____DOT__L1_dummy_a1));
        tracep->fullBit(oldp+755,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__15__KET____DOT__L1_dummy_a2));
        tracep->fullBit(oldp+756,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__15__KET____DOT__L1_dummy_a3));
        tracep->fullBit(oldp+757,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__15__KET____DOT__L1_dummy_a4));
        tracep->fullIData(oldp+758,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0U]),32);
        tracep->fullIData(oldp+759,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__0__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+760,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [1U]),32);
        tracep->fullIData(oldp+761,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__1__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+762,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [2U]),32);
        tracep->fullIData(oldp+763,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__2__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+764,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [3U]),32);
        tracep->fullIData(oldp+765,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__3__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+766,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [4U]),32);
        tracep->fullIData(oldp+767,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__4__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+768,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [5U]),32);
        tracep->fullIData(oldp+769,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__5__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+770,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [6U]),32);
        tracep->fullIData(oldp+771,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__6__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+772,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [7U]),32);
        tracep->fullIData(oldp+773,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__7__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+774,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [8U]),32);
        tracep->fullIData(oldp+775,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__8__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+776,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [9U]),32);
        tracep->fullIData(oldp+777,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__9__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+778,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0xaU]),32);
        tracep->fullIData(oldp+779,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__10__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+780,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0xbU]),32);
        tracep->fullIData(oldp+781,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__11__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+782,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0xcU]),32);
        tracep->fullIData(oldp+783,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__12__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+784,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0xdU]),32);
        tracep->fullIData(oldp+785,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__13__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+786,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0xeU]),32);
        tracep->fullIData(oldp+787,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__14__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+788,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0xfU]),32);
        tracep->fullIData(oldp+789,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__15__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+790,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x10U]),32);
        tracep->fullIData(oldp+791,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__16__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+792,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x11U]),32);
        tracep->fullIData(oldp+793,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__17__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+794,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x12U]),32);
        tracep->fullIData(oldp+795,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__18__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+796,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x13U]),32);
        tracep->fullIData(oldp+797,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__19__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+798,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x14U]),32);
        tracep->fullIData(oldp+799,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__20__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+800,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x15U]),32);
        tracep->fullIData(oldp+801,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__21__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+802,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x16U]),32);
        tracep->fullIData(oldp+803,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__22__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+804,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x17U]),32);
        tracep->fullIData(oldp+805,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__23__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+806,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x18U]),32);
        tracep->fullIData(oldp+807,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__24__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+808,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x19U]),32);
        tracep->fullIData(oldp+809,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__25__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+810,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x1aU]),32);
        tracep->fullIData(oldp+811,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__26__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+812,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x1bU]),32);
        tracep->fullIData(oldp+813,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__27__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+814,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x1cU]),32);
        tracep->fullIData(oldp+815,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__28__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+816,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x1dU]),32);
        tracep->fullIData(oldp+817,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__29__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+818,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x1eU]),32);
        tracep->fullIData(oldp+819,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__30__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+820,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [0x1fU]),32);
        tracep->fullIData(oldp+821,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__31__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+822,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__0__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+823,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__1__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+824,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__2__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+825,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__3__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+826,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__4__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+827,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__5__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+828,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__6__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+829,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__7__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+830,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__8__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+831,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__9__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+832,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__10__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+833,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__11__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+834,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__12__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+835,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__13__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+836,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__14__KET____DOT__L1_value_a5),32);
        tracep->fullIData(oldp+837,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__15__KET____DOT__L1_value_a5),32);
        if (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_reset_a1) {
            __Vtemp211[0U] = Vtop__ConstPool__CONST_8aaa57a3_0[0U];
            __Vtemp211[1U] = Vtop__ConstPool__CONST_8aaa57a3_0[1U];
            __Vtemp211[2U] = Vtop__ConstPool__CONST_8aaa57a3_0[2U];
            __Vtemp211[3U] = Vtop__ConstPool__CONST_8aaa57a3_0[3U];
            __Vtemp211[4U] = Vtop__ConstPool__CONST_8aaa57a3_0[4U];
            __Vtemp211[5U] = Vtop__ConstPool__CONST_8aaa57a3_0[5U];
            __Vtemp211[6U] = Vtop__ConstPool__CONST_8aaa57a3_0[6U];
            __Vtemp211[7U] = Vtop__ConstPool__CONST_8aaa57a3_0[7U];
            __Vtemp211[8U] = Vtop__ConstPool__CONST_8aaa57a3_0[8U];
        } else {
            __Vtemp211[0U] = ((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U] 
                               << 1U) ^ (Vtop__ConstPool__CONST_81cf83eb_0[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
            __Vtemp211[1U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U] 
                                >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U] 
                                             << 1U)) 
                              ^ (Vtop__ConstPool__CONST_81cf83eb_0[1U] 
                                 & (- (IData)((1U & 
                                               vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
            __Vtemp211[2U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U] 
                                >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U] 
                                             << 1U)) 
                              ^ (Vtop__ConstPool__CONST_81cf83eb_0[2U] 
                                 & (- (IData)((1U & 
                                               vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
            __Vtemp211[3U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U] 
                                >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U] 
                                             << 1U)) 
                              ^ (Vtop__ConstPool__CONST_81cf83eb_0[3U] 
                                 & (- (IData)((1U & 
                                               vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
            __Vtemp211[4U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U] 
                                >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U] 
                                             << 1U)) 
                              ^ (Vtop__ConstPool__CONST_81cf83eb_0[4U] 
                                 & (- (IData)((1U & 
                                               vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
            __Vtemp211[5U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U] 
                                >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U] 
                                             << 1U)) 
                              ^ (Vtop__ConstPool__CONST_81cf83eb_0[5U] 
                                 & (- (IData)((1U & 
                                               vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
            __Vtemp211[6U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U] 
                                >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U] 
                                             << 1U)) 
                              ^ (Vtop__ConstPool__CONST_81cf83eb_0[6U] 
                                 & (- (IData)((1U & 
                                               vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
            __Vtemp211[7U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U] 
                                >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U] 
                                             << 1U)) 
                              ^ (Vtop__ConstPool__CONST_81cf83eb_0[7U] 
                                 & (- (IData)((1U & 
                                               vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
            __Vtemp211[8U] = ((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U] 
                               >> 0x1fU) ^ (Vtop__ConstPool__CONST_81cf83eb_0[8U] 
                                            & (- (IData)(
                                                         (1U 
                                                          & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
        }
        tracep->fullWData(oldp+838,(__Vtemp211),257);
        tracep->fullBit(oldp+847,(vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_reset_a1));
        tracep->fullBit(oldp+848,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (0U == (0xfU & 
                                             (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))))));
        tracep->fullBit(oldp+849,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (1U == (0xfU & 
                                             (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))))));
        tracep->fullBit(oldp+850,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (2U == (0xfU & 
                                             (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))))));
        tracep->fullBit(oldp+851,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (3U == (0xfU & 
                                             (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))))));
        tracep->fullBit(oldp+852,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (4U == (0xfU & 
                                             (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))))));
        tracep->fullBit(oldp+853,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (5U == (0xfU & 
                                             (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))))));
        tracep->fullBit(oldp+854,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (6U == (0xfU & 
                                             (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))))));
        tracep->fullBit(oldp+855,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (7U == (0xfU & 
                                             (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))))));
        tracep->fullBit(oldp+856,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (8U == (0xfU & 
                                             (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))))));
        tracep->fullBit(oldp+857,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (9U == (0xfU & 
                                             (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))))));
        tracep->fullBit(oldp+858,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (0xaU == (0xfU 
                                               & (vlSelf->top__DOT__CPU_result_a4 
                                                  >> 2U))))));
        tracep->fullBit(oldp+859,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (0xbU == (0xfU 
                                               & (vlSelf->top__DOT__CPU_result_a4 
                                                  >> 2U))))));
        tracep->fullBit(oldp+860,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (0xcU == (0xfU 
                                               & (vlSelf->top__DOT__CPU_result_a4 
                                                  >> 2U))))));
        tracep->fullBit(oldp+861,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (0xdU == (0xfU 
                                               & (vlSelf->top__DOT__CPU_result_a4 
                                                  >> 2U))))));
        tracep->fullBit(oldp+862,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (0xeU == (0xfU 
                                               & (vlSelf->top__DOT__CPU_result_a4 
                                                  >> 2U))))));
        tracep->fullBit(oldp+863,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                   & (0xfU == (0xfU 
                                               & (vlSelf->top__DOT__CPU_result_a4 
                                                  >> 2U))))));
        tracep->fullBit(oldp+864,(vlSelf->top__DOT__clkP_CPU_dmem_rd_en_a5));
        tracep->fullBit(oldp+865,(vlSelf->top__DOT__clkP_CPU_rd_valid_a2));
        tracep->fullBit(oldp+866,(vlSelf->top__DOT__clkP_CPU_rd_valid_a3));
        tracep->fullBit(oldp+867,(vlSelf->top__DOT__clkP_CPU_rd_valid_a4));
        tracep->fullBit(oldp+868,(vlSelf->top__DOT__clkP_CPU_rd_valid_a5));
        tracep->fullBit(oldp+869,(vlSelf->top__DOT__clkP_CPU_rs1_valid_a2));
        tracep->fullBit(oldp+870,(vlSelf->top__DOT__clkP_CPU_rs1_valid_a3));
        tracep->fullBit(oldp+871,(vlSelf->top__DOT__clkP_CPU_rs1_valid_a4));
        tracep->fullBit(oldp+872,(vlSelf->top__DOT__clkP_CPU_rs2_valid_a2));
        tracep->fullBit(oldp+873,(vlSelf->top__DOT__clkP_CPU_rs2_valid_a3));
        tracep->fullBit(oldp+874,(vlSelf->top__DOT__clkP_CPU_rs2_valid_a4));
        tracep->fullBit(oldp+875,(vlSelf->top__DOT__gen_clkP_CPU_dmem_rd_en_a5__DOT__latched_clk_en));
        tracep->fullBit(oldp+876,(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a2__DOT__latched_clk_en));
        tracep->fullBit(oldp+877,(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a3__DOT__latched_clk_en));
        tracep->fullBit(oldp+878,(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a4__DOT__latched_clk_en));
        tracep->fullBit(oldp+879,(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a5__DOT__latched_clk_en));
        tracep->fullBit(oldp+880,(vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a2__DOT__latched_clk_en));
        tracep->fullBit(oldp+881,(vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a3__DOT__latched_clk_en));
        tracep->fullBit(oldp+882,(vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a4__DOT__latched_clk_en));
        tracep->fullBit(oldp+883,(vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a2__DOT__latched_clk_en));
        tracep->fullBit(oldp+884,(vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a3__DOT__latched_clk_en));
        tracep->fullBit(oldp+885,(vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a4__DOT__latched_clk_en));
        tracep->fullCData(oldp+886,((0xfU & (vlSelf->top__DOT__CPU_result_a4 
                                             >> 2U))),4);
        tracep->fullIData(oldp+887,(vlSelf->top__DOT__CPU_Dmem_value_a5
                                    [(0xfU & (vlSelf->top__DOT__CPU_result_a4 
                                              >> 2U))]),32);
        tracep->fullIData(oldp+888,(vlSelf->top__DOT__CPU_result_a3),32);
        tracep->fullIData(oldp+889,(vlSelf->top__DOT__CPU_result_a4),32);
        tracep->fullIData(oldp+890,(vlSelf->top__DOT__CPU_Dmem_value_a4[0]),32);
        tracep->fullIData(oldp+891,(vlSelf->top__DOT__CPU_Dmem_value_a4[1]),32);
        tracep->fullIData(oldp+892,(vlSelf->top__DOT__CPU_Dmem_value_a4[2]),32);
        tracep->fullIData(oldp+893,(vlSelf->top__DOT__CPU_Dmem_value_a4[3]),32);
        tracep->fullIData(oldp+894,(vlSelf->top__DOT__CPU_Dmem_value_a4[4]),32);
        tracep->fullIData(oldp+895,(vlSelf->top__DOT__CPU_Dmem_value_a4[5]),32);
        tracep->fullIData(oldp+896,(vlSelf->top__DOT__CPU_Dmem_value_a4[6]),32);
        tracep->fullIData(oldp+897,(vlSelf->top__DOT__CPU_Dmem_value_a4[7]),32);
        tracep->fullIData(oldp+898,(vlSelf->top__DOT__CPU_Dmem_value_a4[8]),32);
        tracep->fullIData(oldp+899,(vlSelf->top__DOT__CPU_Dmem_value_a4[9]),32);
        tracep->fullIData(oldp+900,(vlSelf->top__DOT__CPU_Dmem_value_a4[10]),32);
        tracep->fullIData(oldp+901,(vlSelf->top__DOT__CPU_Dmem_value_a4[11]),32);
        tracep->fullIData(oldp+902,(vlSelf->top__DOT__CPU_Dmem_value_a4[12]),32);
        tracep->fullIData(oldp+903,(vlSelf->top__DOT__CPU_Dmem_value_a4[13]),32);
        tracep->fullIData(oldp+904,(vlSelf->top__DOT__CPU_Dmem_value_a4[14]),32);
        tracep->fullIData(oldp+905,(vlSelf->top__DOT__CPU_Dmem_value_a4[15]),32);
        tracep->fullIData(oldp+906,(vlSelf->top__DOT__CPU_Dmem_value_a5[0]),32);
        tracep->fullIData(oldp+907,(vlSelf->top__DOT__CPU_Dmem_value_a5[1]),32);
        tracep->fullIData(oldp+908,(vlSelf->top__DOT__CPU_Dmem_value_a5[2]),32);
        tracep->fullIData(oldp+909,(vlSelf->top__DOT__CPU_Dmem_value_a5[3]),32);
        tracep->fullIData(oldp+910,(vlSelf->top__DOT__CPU_Dmem_value_a5[4]),32);
        tracep->fullIData(oldp+911,(vlSelf->top__DOT__CPU_Dmem_value_a5[5]),32);
        tracep->fullIData(oldp+912,(vlSelf->top__DOT__CPU_Dmem_value_a5[6]),32);
        tracep->fullIData(oldp+913,(vlSelf->top__DOT__CPU_Dmem_value_a5[7]),32);
        tracep->fullIData(oldp+914,(vlSelf->top__DOT__CPU_Dmem_value_a5[8]),32);
        tracep->fullIData(oldp+915,(vlSelf->top__DOT__CPU_Dmem_value_a5[9]),32);
        tracep->fullIData(oldp+916,(vlSelf->top__DOT__CPU_Dmem_value_a5[10]),32);
        tracep->fullIData(oldp+917,(vlSelf->top__DOT__CPU_Dmem_value_a5[11]),32);
        tracep->fullIData(oldp+918,(vlSelf->top__DOT__CPU_Dmem_value_a5[12]),32);
        tracep->fullIData(oldp+919,(vlSelf->top__DOT__CPU_Dmem_value_a5[13]),32);
        tracep->fullIData(oldp+920,(vlSelf->top__DOT__CPU_Dmem_value_a5[14]),32);
        tracep->fullIData(oldp+921,(vlSelf->top__DOT__CPU_Dmem_value_a5[15]),32);
        tracep->fullIData(oldp+922,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [0U]),32);
        tracep->fullIData(oldp+923,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [1U]),32);
        tracep->fullIData(oldp+924,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [2U]),32);
        tracep->fullIData(oldp+925,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [3U]),32);
        tracep->fullIData(oldp+926,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [4U]),32);
        tracep->fullIData(oldp+927,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [5U]),32);
        tracep->fullIData(oldp+928,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [6U]),32);
        tracep->fullIData(oldp+929,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [7U]),32);
        tracep->fullIData(oldp+930,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [8U]),32);
        tracep->fullIData(oldp+931,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [9U]),32);
        tracep->fullIData(oldp+932,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [0xaU]),32);
        tracep->fullIData(oldp+933,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [0xbU]),32);
        tracep->fullIData(oldp+934,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [0xcU]),32);
        tracep->fullIData(oldp+935,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [0xdU]),32);
        tracep->fullIData(oldp+936,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [0xeU]),32);
        tracep->fullIData(oldp+937,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                    [0xfU]),32);
        tracep->fullSData(oldp+938,(vlSelf->top__DOT__CPU_dec_bits_a1),11);
        tracep->fullCData(oldp+939,((7U & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+940,(((((IData)(vlSelf->top__DOT__CPU_is_r_instr_a1) 
                                     | (8U == (0x1fU 
                                               & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                  >> 2U)))) 
                                    | (0x18U == (0x1fU 
                                                 & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                    >> 2U)))) 
                                   | (IData)(vlSelf->top__DOT__CPU_is_i_instr_a1))));
        tracep->fullCData(oldp+941,((vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+942,(vlSelf->top__DOT__CPU_is_r_instr_a1));
        tracep->fullIData(oldp+943,(vlSelf->top__DOT__CPU_imem_rd_data_a1),32);
        tracep->fullIData(oldp+944,(vlSelf->top__DOT__CPU_imm_a1),32);
        tracep->fullBit(oldp+945,((0x33U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+946,((0x13U == (0x3ffU 
                                             & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+947,((0x3b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+948,((0x393U == (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+949,((0x17U == (0x7fU 
                                             & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+950,((0x18U == (0x1fU 
                                             & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                >> 2U)))));
        tracep->fullBit(oldp+951,((0x63U == (0x3ffU 
                                             & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+952,((0x2e3U == (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+953,((0x3e3U == (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+954,((0x263U == (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+955,((0x363U == (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+956,((0xe3U == (0x3ffU 
                                             & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+957,(vlSelf->top__DOT__CPU_is_i_instr_a1));
        tracep->fullBit(oldp+958,((0x1bU == (0x1fU 
                                             & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                >> 2U)))));
        tracep->fullBit(oldp+959,((0x6fU == (0x7fU 
                                             & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+960,((0x67U == (0x3ffU 
                                             & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+961,(((0x6fU == (0x7fU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))) 
                                   | (0x67U == (0x3ffU 
                                                & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))))));
        tracep->fullBit(oldp+962,((3U == (0x7fU & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+963,((0x37U == (0x7fU 
                                             & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+964,((0x333U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+965,((0x313U == (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+966,((8U == (0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                   >> 2U)))));
        tracep->fullBit(oldp+967,((0x23U == (0x3ffU 
                                             & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+968,((0xa3U == (0x3ffU 
                                             & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+969,((0xb3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+970,((0x93U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+971,((0x133U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+972,((0x113U == (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+973,((0x193U == (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+974,((0x1b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+975,((0x6b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+976,((0x693U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+977,((0x2b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+978,((0x293U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+979,((0x433U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+980,((0x123U == (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullBit(oldp+981,((5U == (0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                   >> 2U)))));
        tracep->fullBit(oldp+982,((0x233U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
        tracep->fullBit(oldp+983,((0x213U == (0x3ffU 
                                              & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
        tracep->fullCData(oldp+984,((0x7fU & vlSelf->top__DOT__CPU_imem_rd_data_a1)),7);
        tracep->fullCData(oldp+985,((0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                              >> 7U))),5);
        tracep->fullBit(oldp+986,(vlSelf->top__DOT__CPU_rd_valid_a1));
        tracep->fullCData(oldp+987,((0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                              >> 0xfU))),5);
        tracep->fullBit(oldp+988,(vlSelf->top__DOT__CPU_rs1_valid_a1));
        tracep->fullCData(oldp+989,((0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+990,(vlSelf->top__DOT__CPU_rs2_valid_a1));
        tracep->fullBit(oldp+991,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__0__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+992,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__1__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+993,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__2__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+994,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__3__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+995,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__4__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+996,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__5__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+997,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__6__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+998,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__7__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+999,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__8__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1000,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__9__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1001,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__10__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1002,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__11__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1003,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__12__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1004,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__13__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1005,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__14__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1006,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__15__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1007,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__16__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1008,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__17__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1009,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__18__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1010,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__19__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1011,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__20__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1012,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__21__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1013,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__22__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1014,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__23__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1015,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__24__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1016,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__25__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1017,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__26__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1018,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__27__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1019,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__28__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1020,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__29__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1021,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__30__KET____DOT__L1_wr_a3));
        tracep->fullBit(oldp+1022,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__31__KET____DOT__L1_wr_a3));
        tracep->fullIData(oldp+1023,(vlSelf->top__DOT__CPU_Xreg_value_a3[0]),32);
        tracep->fullIData(oldp+1024,(vlSelf->top__DOT__CPU_Xreg_value_a3[1]),32);
        tracep->fullIData(oldp+1025,(vlSelf->top__DOT__CPU_Xreg_value_a3[2]),32);
        tracep->fullIData(oldp+1026,(vlSelf->top__DOT__CPU_Xreg_value_a3[3]),32);
        tracep->fullIData(oldp+1027,(vlSelf->top__DOT__CPU_Xreg_value_a3[4]),32);
        tracep->fullIData(oldp+1028,(vlSelf->top__DOT__CPU_Xreg_value_a3[5]),32);
        tracep->fullIData(oldp+1029,(vlSelf->top__DOT__CPU_Xreg_value_a3[6]),32);
        tracep->fullIData(oldp+1030,(vlSelf->top__DOT__CPU_Xreg_value_a3[7]),32);
        tracep->fullIData(oldp+1031,(vlSelf->top__DOT__CPU_Xreg_value_a3[8]),32);
        tracep->fullIData(oldp+1032,(vlSelf->top__DOT__CPU_Xreg_value_a3[9]),32);
        tracep->fullIData(oldp+1033,(vlSelf->top__DOT__CPU_Xreg_value_a3[10]),32);
        tracep->fullIData(oldp+1034,(vlSelf->top__DOT__CPU_Xreg_value_a3[11]),32);
        tracep->fullIData(oldp+1035,(vlSelf->top__DOT__CPU_Xreg_value_a3[12]),32);
        tracep->fullIData(oldp+1036,(vlSelf->top__DOT__CPU_Xreg_value_a3[13]),32);
        tracep->fullIData(oldp+1037,(vlSelf->top__DOT__CPU_Xreg_value_a3[14]),32);
        tracep->fullIData(oldp+1038,(vlSelf->top__DOT__CPU_Xreg_value_a3[15]),32);
        tracep->fullIData(oldp+1039,(vlSelf->top__DOT__CPU_Xreg_value_a3[16]),32);
        tracep->fullIData(oldp+1040,(vlSelf->top__DOT__CPU_Xreg_value_a3[17]),32);
        tracep->fullIData(oldp+1041,(vlSelf->top__DOT__CPU_Xreg_value_a3[18]),32);
        tracep->fullIData(oldp+1042,(vlSelf->top__DOT__CPU_Xreg_value_a3[19]),32);
        tracep->fullIData(oldp+1043,(vlSelf->top__DOT__CPU_Xreg_value_a3[20]),32);
        tracep->fullIData(oldp+1044,(vlSelf->top__DOT__CPU_Xreg_value_a3[21]),32);
        tracep->fullIData(oldp+1045,(vlSelf->top__DOT__CPU_Xreg_value_a3[22]),32);
        tracep->fullIData(oldp+1046,(vlSelf->top__DOT__CPU_Xreg_value_a3[23]),32);
        tracep->fullIData(oldp+1047,(vlSelf->top__DOT__CPU_Xreg_value_a3[24]),32);
        tracep->fullIData(oldp+1048,(vlSelf->top__DOT__CPU_Xreg_value_a3[25]),32);
        tracep->fullIData(oldp+1049,(vlSelf->top__DOT__CPU_Xreg_value_a3[26]),32);
        tracep->fullIData(oldp+1050,(vlSelf->top__DOT__CPU_Xreg_value_a3[27]),32);
        tracep->fullIData(oldp+1051,(vlSelf->top__DOT__CPU_Xreg_value_a3[28]),32);
        tracep->fullIData(oldp+1052,(vlSelf->top__DOT__CPU_Xreg_value_a3[29]),32);
        tracep->fullIData(oldp+1053,(vlSelf->top__DOT__CPU_Xreg_value_a3[30]),32);
        tracep->fullIData(oldp+1054,(vlSelf->top__DOT__CPU_Xreg_value_a3[31]),32);
        tracep->fullBit(oldp+1055,(vlSelf->clk));
        tracep->fullBit(oldp+1056,(vlSelf->reset));
        tracep->fullBit(oldp+1057,(vlSelf->passed));
        tracep->fullBit(oldp+1058,(vlSelf->failed));
        tracep->fullIData(oldp+1059,(vlSelf->top__DOT__CPU_dmem_rd_data_a5),32);
        tracep->fullBit(oldp+1060,((1U & (~ (IData)(vlSelf->reset)))));
        tracep->fullIData(oldp+1061,((vlSelf->top__DOT__CPU_src1_value_a2 
                                      + vlSelf->top__DOT__CPU_imm_a2)),32);
        tracep->fullCData(oldp+1062,(vlSelf->top__DOT__CPU_rd_a2),5);
        tracep->fullCData(oldp+1063,(vlSelf->top__DOT__CPU_rd_a3),5);
        tracep->fullCData(oldp+1064,(vlSelf->top__DOT__CPU_rd_a4),5);
        tracep->fullCData(oldp+1065,(vlSelf->top__DOT__CPU_rd_a5),5);
        tracep->fullIData(oldp+1066,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                     [vlSelf->top__DOT__CPU_rs1_a2]),32);
        tracep->fullIData(oldp+1067,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                     [vlSelf->top__DOT__CPU_rs2_a2]),32);
        tracep->fullCData(oldp+1068,(vlSelf->top__DOT__CPU_rs1_a2),5);
        tracep->fullCData(oldp+1069,(vlSelf->top__DOT__CPU_rs2_a2),5);
        tracep->fullIData(oldp+1070,(vlSelf->top__DOT__CPU_rf_wr_data_a3),32);
        tracep->fullBit(oldp+1071,(vlSelf->top__DOT__CPU_rf_wr_en_a3));
        tracep->fullCData(oldp+1072,(vlSelf->top__DOT__CPU_rf_wr_index_a3),5);
        tracep->fullCData(oldp+1073,(vlSelf->top__DOT__CPU_rs1_a3),5);
        tracep->fullCData(oldp+1074,(vlSelf->top__DOT__CPU_rs1_a4),5);
        tracep->fullCData(oldp+1075,(vlSelf->top__DOT__CPU_rs2_a3),5);
        tracep->fullCData(oldp+1076,(vlSelf->top__DOT__CPU_rs2_a4),5);
        tracep->fullIData(oldp+1077,(vlSelf->top__DOT__CPU_src1_value_a2),32);
        tracep->fullIData(oldp+1078,(((((IData)(vlSelf->top__DOT__CPU_rd_a3) 
                                        == (IData)(vlSelf->top__DOT__CPU_rs2_a2)) 
                                       & (IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3))
                                       ? vlSelf->top__DOT__CPU_result_a3
                                       : vlSelf->top__DOT__CPU_Xreg_value_a4
                                      [vlSelf->top__DOT__CPU_rs2_a2])),32);
        tracep->fullBit(oldp+1079,(0U));
        tracep->fullCData(oldp+1080,(0U),4);
        tracep->fullIData(oldp+1081,(0U),32);
        tracep->fullCData(oldp+1082,(0U),5);
        tracep->fullBit(oldp+1083,(1U));
        tracep->fullBit(oldp+1084,(0U));
        tracep->fullIData(oldp+1085,(0x101U),32);
        tracep->fullWData(oldp+1086,(Vtop__ConstPool__CONST_81cf83eb_0),257);
        tracep->fullWData(oldp+1095,(Vtop__ConstPool__CONST_8aaa57a3_0),257);
    }
}
