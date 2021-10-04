// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_8aaa57a3_0;
extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_81cf83eb_0;

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<10>/*319:0*/ __Vtemp212;
    VlWide<10>/*319:0*/ __Vtemp213;
    VlWide<10>/*319:0*/ __Vtemp214;
    VlWide<10>/*319:0*/ __Vtemp215;
    VlWide<10>/*319:0*/ __Vtemp216;
    VlWide<10>/*319:0*/ __Vtemp217;
    VlWide<10>/*319:0*/ __Vtemp218;
    VlWide<10>/*319:0*/ __Vtemp219;
    VlWide<10>/*319:0*/ __Vtemp220;
    VlWide<10>/*319:0*/ __Vtemp221;
    VlWide<10>/*319:0*/ __Vtemp222;
    VlWide<9>/*287:0*/ __Vtemp228;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__CPU_Imem_instr_a1[0]),32);
            tracep->chgIData(oldp+1,(vlSelf->top__DOT__CPU_Imem_instr_a1[1]),32);
            tracep->chgIData(oldp+2,(vlSelf->top__DOT__CPU_Imem_instr_a1[2]),32);
            tracep->chgIData(oldp+3,(vlSelf->top__DOT__CPU_Imem_instr_a1[3]),32);
            tracep->chgIData(oldp+4,(vlSelf->top__DOT__CPU_Imem_instr_a1[4]),32);
            tracep->chgIData(oldp+5,(vlSelf->top__DOT__CPU_Imem_instr_a1[5]),32);
            tracep->chgIData(oldp+6,(vlSelf->top__DOT__CPU_Imem_instr_a1[6]),32);
            tracep->chgIData(oldp+7,(vlSelf->top__DOT__CPU_Imem_instr_a1[7]),32);
            tracep->chgIData(oldp+8,(vlSelf->top__DOT__CPU_Imem_instr_a1[8]),32);
            tracep->chgIData(oldp+9,(vlSelf->top__DOT__CPU_Imem_instr_a1[9]),32);
            tracep->chgIData(oldp+10,(vlSelf->top__DOT__instrs[0]),32);
            tracep->chgIData(oldp+11,(vlSelf->top__DOT__instrs[1]),32);
            tracep->chgIData(oldp+12,(vlSelf->top__DOT__instrs[2]),32);
            tracep->chgIData(oldp+13,(vlSelf->top__DOT__instrs[3]),32);
            tracep->chgIData(oldp+14,(vlSelf->top__DOT__instrs[4]),32);
            tracep->chgIData(oldp+15,(vlSelf->top__DOT__instrs[5]),32);
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__instrs[6]),32);
            tracep->chgIData(oldp+17,(vlSelf->top__DOT__instrs[7]),32);
            tracep->chgIData(oldp+18,(vlSelf->top__DOT__instrs[8]),32);
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__instrs[9]),32);
            tracep->chgWData(oldp+20,(vlSelf->top__DOT__instr_strs[0]),320);
            tracep->chgWData(oldp+30,(vlSelf->top__DOT__instr_strs[1]),320);
            tracep->chgWData(oldp+40,(vlSelf->top__DOT__instr_strs[2]),320);
            tracep->chgWData(oldp+50,(vlSelf->top__DOT__instr_strs[3]),320);
            tracep->chgWData(oldp+60,(vlSelf->top__DOT__instr_strs[4]),320);
            tracep->chgWData(oldp+70,(vlSelf->top__DOT__instr_strs[5]),320);
            tracep->chgWData(oldp+80,(vlSelf->top__DOT__instr_strs[6]),320);
            tracep->chgWData(oldp+90,(vlSelf->top__DOT__instr_strs[7]),320);
            tracep->chgWData(oldp+100,(vlSelf->top__DOT__instr_strs[8]),320);
            tracep->chgWData(oldp+110,(vlSelf->top__DOT__instr_strs[9]),320);
            tracep->chgWData(oldp+120,(vlSelf->top__DOT__instr_strs[10]),320);
            tracep->chgIData(oldp+130,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                       [0U]),32);
            __Vtemp212[0U] = vlSelf->top__DOT__instr_strs
                [0U][0U];
            __Vtemp212[1U] = vlSelf->top__DOT__instr_strs
                [0U][1U];
            __Vtemp212[2U] = vlSelf->top__DOT__instr_strs
                [0U][2U];
            __Vtemp212[3U] = vlSelf->top__DOT__instr_strs
                [0U][3U];
            __Vtemp212[4U] = vlSelf->top__DOT__instr_strs
                [0U][4U];
            __Vtemp212[5U] = vlSelf->top__DOT__instr_strs
                [0U][5U];
            __Vtemp212[6U] = vlSelf->top__DOT__instr_strs
                [0U][6U];
            __Vtemp212[7U] = vlSelf->top__DOT__instr_strs
                [0U][7U];
            __Vtemp212[8U] = vlSelf->top__DOT__instr_strs
                [0U][8U];
            __Vtemp212[9U] = vlSelf->top__DOT__instr_strs
                [0U][9U];
            tracep->chgWData(oldp+131,(__Vtemp212),320);
            tracep->chgIData(oldp+141,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                       [1U]),32);
            __Vtemp213[0U] = vlSelf->top__DOT__instr_strs
                [1U][0U];
            __Vtemp213[1U] = vlSelf->top__DOT__instr_strs
                [1U][1U];
            __Vtemp213[2U] = vlSelf->top__DOT__instr_strs
                [1U][2U];
            __Vtemp213[3U] = vlSelf->top__DOT__instr_strs
                [1U][3U];
            __Vtemp213[4U] = vlSelf->top__DOT__instr_strs
                [1U][4U];
            __Vtemp213[5U] = vlSelf->top__DOT__instr_strs
                [1U][5U];
            __Vtemp213[6U] = vlSelf->top__DOT__instr_strs
                [1U][6U];
            __Vtemp213[7U] = vlSelf->top__DOT__instr_strs
                [1U][7U];
            __Vtemp213[8U] = vlSelf->top__DOT__instr_strs
                [1U][8U];
            __Vtemp213[9U] = vlSelf->top__DOT__instr_strs
                [1U][9U];
            tracep->chgWData(oldp+142,(__Vtemp213),320);
            tracep->chgIData(oldp+152,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                       [2U]),32);
            __Vtemp214[0U] = vlSelf->top__DOT__instr_strs
                [2U][0U];
            __Vtemp214[1U] = vlSelf->top__DOT__instr_strs
                [2U][1U];
            __Vtemp214[2U] = vlSelf->top__DOT__instr_strs
                [2U][2U];
            __Vtemp214[3U] = vlSelf->top__DOT__instr_strs
                [2U][3U];
            __Vtemp214[4U] = vlSelf->top__DOT__instr_strs
                [2U][4U];
            __Vtemp214[5U] = vlSelf->top__DOT__instr_strs
                [2U][5U];
            __Vtemp214[6U] = vlSelf->top__DOT__instr_strs
                [2U][6U];
            __Vtemp214[7U] = vlSelf->top__DOT__instr_strs
                [2U][7U];
            __Vtemp214[8U] = vlSelf->top__DOT__instr_strs
                [2U][8U];
            __Vtemp214[9U] = vlSelf->top__DOT__instr_strs
                [2U][9U];
            tracep->chgWData(oldp+153,(__Vtemp214),320);
            tracep->chgIData(oldp+163,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                       [3U]),32);
            __Vtemp215[0U] = vlSelf->top__DOT__instr_strs
                [3U][0U];
            __Vtemp215[1U] = vlSelf->top__DOT__instr_strs
                [3U][1U];
            __Vtemp215[2U] = vlSelf->top__DOT__instr_strs
                [3U][2U];
            __Vtemp215[3U] = vlSelf->top__DOT__instr_strs
                [3U][3U];
            __Vtemp215[4U] = vlSelf->top__DOT__instr_strs
                [3U][4U];
            __Vtemp215[5U] = vlSelf->top__DOT__instr_strs
                [3U][5U];
            __Vtemp215[6U] = vlSelf->top__DOT__instr_strs
                [3U][6U];
            __Vtemp215[7U] = vlSelf->top__DOT__instr_strs
                [3U][7U];
            __Vtemp215[8U] = vlSelf->top__DOT__instr_strs
                [3U][8U];
            __Vtemp215[9U] = vlSelf->top__DOT__instr_strs
                [3U][9U];
            tracep->chgWData(oldp+164,(__Vtemp215),320);
            tracep->chgIData(oldp+174,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                       [4U]),32);
            __Vtemp216[0U] = vlSelf->top__DOT__instr_strs
                [4U][0U];
            __Vtemp216[1U] = vlSelf->top__DOT__instr_strs
                [4U][1U];
            __Vtemp216[2U] = vlSelf->top__DOT__instr_strs
                [4U][2U];
            __Vtemp216[3U] = vlSelf->top__DOT__instr_strs
                [4U][3U];
            __Vtemp216[4U] = vlSelf->top__DOT__instr_strs
                [4U][4U];
            __Vtemp216[5U] = vlSelf->top__DOT__instr_strs
                [4U][5U];
            __Vtemp216[6U] = vlSelf->top__DOT__instr_strs
                [4U][6U];
            __Vtemp216[7U] = vlSelf->top__DOT__instr_strs
                [4U][7U];
            __Vtemp216[8U] = vlSelf->top__DOT__instr_strs
                [4U][8U];
            __Vtemp216[9U] = vlSelf->top__DOT__instr_strs
                [4U][9U];
            tracep->chgWData(oldp+175,(__Vtemp216),320);
            tracep->chgIData(oldp+185,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                       [5U]),32);
            __Vtemp217[0U] = vlSelf->top__DOT__instr_strs
                [5U][0U];
            __Vtemp217[1U] = vlSelf->top__DOT__instr_strs
                [5U][1U];
            __Vtemp217[2U] = vlSelf->top__DOT__instr_strs
                [5U][2U];
            __Vtemp217[3U] = vlSelf->top__DOT__instr_strs
                [5U][3U];
            __Vtemp217[4U] = vlSelf->top__DOT__instr_strs
                [5U][4U];
            __Vtemp217[5U] = vlSelf->top__DOT__instr_strs
                [5U][5U];
            __Vtemp217[6U] = vlSelf->top__DOT__instr_strs
                [5U][6U];
            __Vtemp217[7U] = vlSelf->top__DOT__instr_strs
                [5U][7U];
            __Vtemp217[8U] = vlSelf->top__DOT__instr_strs
                [5U][8U];
            __Vtemp217[9U] = vlSelf->top__DOT__instr_strs
                [5U][9U];
            tracep->chgWData(oldp+186,(__Vtemp217),320);
            tracep->chgIData(oldp+196,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                       [6U]),32);
            __Vtemp218[0U] = vlSelf->top__DOT__instr_strs
                [6U][0U];
            __Vtemp218[1U] = vlSelf->top__DOT__instr_strs
                [6U][1U];
            __Vtemp218[2U] = vlSelf->top__DOT__instr_strs
                [6U][2U];
            __Vtemp218[3U] = vlSelf->top__DOT__instr_strs
                [6U][3U];
            __Vtemp218[4U] = vlSelf->top__DOT__instr_strs
                [6U][4U];
            __Vtemp218[5U] = vlSelf->top__DOT__instr_strs
                [6U][5U];
            __Vtemp218[6U] = vlSelf->top__DOT__instr_strs
                [6U][6U];
            __Vtemp218[7U] = vlSelf->top__DOT__instr_strs
                [6U][7U];
            __Vtemp218[8U] = vlSelf->top__DOT__instr_strs
                [6U][8U];
            __Vtemp218[9U] = vlSelf->top__DOT__instr_strs
                [6U][9U];
            tracep->chgWData(oldp+197,(__Vtemp218),320);
            tracep->chgIData(oldp+207,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                       [7U]),32);
            __Vtemp219[0U] = vlSelf->top__DOT__instr_strs
                [7U][0U];
            __Vtemp219[1U] = vlSelf->top__DOT__instr_strs
                [7U][1U];
            __Vtemp219[2U] = vlSelf->top__DOT__instr_strs
                [7U][2U];
            __Vtemp219[3U] = vlSelf->top__DOT__instr_strs
                [7U][3U];
            __Vtemp219[4U] = vlSelf->top__DOT__instr_strs
                [7U][4U];
            __Vtemp219[5U] = vlSelf->top__DOT__instr_strs
                [7U][5U];
            __Vtemp219[6U] = vlSelf->top__DOT__instr_strs
                [7U][6U];
            __Vtemp219[7U] = vlSelf->top__DOT__instr_strs
                [7U][7U];
            __Vtemp219[8U] = vlSelf->top__DOT__instr_strs
                [7U][8U];
            __Vtemp219[9U] = vlSelf->top__DOT__instr_strs
                [7U][9U];
            tracep->chgWData(oldp+208,(__Vtemp219),320);
            tracep->chgIData(oldp+218,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                       [8U]),32);
            __Vtemp220[0U] = vlSelf->top__DOT__instr_strs
                [8U][0U];
            __Vtemp220[1U] = vlSelf->top__DOT__instr_strs
                [8U][1U];
            __Vtemp220[2U] = vlSelf->top__DOT__instr_strs
                [8U][2U];
            __Vtemp220[3U] = vlSelf->top__DOT__instr_strs
                [8U][3U];
            __Vtemp220[4U] = vlSelf->top__DOT__instr_strs
                [8U][4U];
            __Vtemp220[5U] = vlSelf->top__DOT__instr_strs
                [8U][5U];
            __Vtemp220[6U] = vlSelf->top__DOT__instr_strs
                [8U][6U];
            __Vtemp220[7U] = vlSelf->top__DOT__instr_strs
                [8U][7U];
            __Vtemp220[8U] = vlSelf->top__DOT__instr_strs
                [8U][8U];
            __Vtemp220[9U] = vlSelf->top__DOT__instr_strs
                [8U][9U];
            tracep->chgWData(oldp+219,(__Vtemp220),320);
            tracep->chgIData(oldp+229,(vlSelf->top__DOT__CPU_Imem_instr_a1
                                       [9U]),32);
            __Vtemp221[0U] = vlSelf->top__DOT__instr_strs
                [9U][0U];
            __Vtemp221[1U] = vlSelf->top__DOT__instr_strs
                [9U][1U];
            __Vtemp221[2U] = vlSelf->top__DOT__instr_strs
                [9U][2U];
            __Vtemp221[3U] = vlSelf->top__DOT__instr_strs
                [9U][3U];
            __Vtemp221[4U] = vlSelf->top__DOT__instr_strs
                [9U][4U];
            __Vtemp221[5U] = vlSelf->top__DOT__instr_strs
                [9U][5U];
            __Vtemp221[6U] = vlSelf->top__DOT__instr_strs
                [9U][6U];
            __Vtemp221[7U] = vlSelf->top__DOT__instr_strs
                [9U][7U];
            __Vtemp221[8U] = vlSelf->top__DOT__instr_strs
                [9U][8U];
            __Vtemp221[9U] = vlSelf->top__DOT__instr_strs
                [9U][9U];
            tracep->chgWData(oldp+230,(__Vtemp221),320);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+240,(vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2),257);
            __Vtemp222[0U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U];
            __Vtemp222[1U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U];
            __Vtemp222[2U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U];
            __Vtemp222[3U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U];
            __Vtemp222[4U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U];
            __Vtemp222[5U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U];
            __Vtemp222[6U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U];
            __Vtemp222[7U] = vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U];
            __Vtemp222[8U] = (((IData)((0x7fffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U]))))) 
                               << 1U) | vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U]);
            __Vtemp222[9U] = (((IData)((0x7fffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U]))))) 
                               >> 0x1fU) | ((IData)(
                                                    ((0x7fffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U])))) 
                                                     >> 0x20U)) 
                                            << 1U));
            tracep->chgWData(oldp+249,(__Vtemp222),320);
            tracep->chgIData(oldp+259,((vlSelf->top__DOT__CPU_pc_a2 
                                        + vlSelf->top__DOT__CPU_imm_a2)),32);
            tracep->chgIData(oldp+260,(vlSelf->top__DOT__CPU_br_tgt_pc_a3),32);
            tracep->chgBit(oldp+261,(vlSelf->top__DOT__CPU_valid_load_a4));
            tracep->chgIData(oldp+262,(vlSelf->top__DOT__CPU_src2_value_a4),32);
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__CPU_dmem_wr_en_a4));
            tracep->chgIData(oldp+264,((0xfU & (vlSelf->top__DOT__CPU_pc_a0 
                                                >> 2U))),32);
            tracep->chgIData(oldp+265,(vlSelf->top__DOT__CPU_imem_rd_addr_a1),32);
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__CPU_imem_rd_en_a1));
            tracep->chgIData(oldp+267,(vlSelf->top__DOT__CPU_imm_a2),32);
            tracep->chgIData(oldp+268,(vlSelf->top__DOT__CPU_imm_a3),32);
            tracep->chgIData(oldp+269,(vlSelf->top__DOT__CPU_imm_a4),32);
            tracep->chgIData(oldp+270,(((IData)(4U) 
                                        + vlSelf->top__DOT__CPU_pc_a1)),32);
            tracep->chgIData(oldp+271,(vlSelf->top__DOT__CPU_inc_pc_a2),32);
            tracep->chgIData(oldp+272,(vlSelf->top__DOT__CPU_inc_pc_a3),32);
            tracep->chgBit(oldp+273,(vlSelf->top__DOT__CPU_is_add_a2));
            tracep->chgBit(oldp+274,(vlSelf->top__DOT__CPU_is_add_a3));
            tracep->chgBit(oldp+275,(vlSelf->top__DOT__CPU_is_add_a4));
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__CPU_is_addi_a2));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__CPU_is_addi_a3));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__CPU_is_addi_a4));
            tracep->chgBit(oldp+279,(vlSelf->top__DOT__CPU_is_and_a2));
            tracep->chgBit(oldp+280,(vlSelf->top__DOT__CPU_is_and_a3));
            tracep->chgBit(oldp+281,(vlSelf->top__DOT__CPU_is_and_a4));
            tracep->chgBit(oldp+282,(vlSelf->top__DOT__CPU_is_andi_a2));
            tracep->chgBit(oldp+283,(vlSelf->top__DOT__CPU_is_andi_a3));
            tracep->chgBit(oldp+284,(vlSelf->top__DOT__CPU_is_andi_a4));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__CPU_is_auipc_a2));
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__CPU_is_auipc_a3));
            tracep->chgBit(oldp+287,(vlSelf->top__DOT__CPU_is_auipc_a4));
            tracep->chgBit(oldp+288,(vlSelf->top__DOT__CPU_is_beq_a2));
            tracep->chgBit(oldp+289,(vlSelf->top__DOT__CPU_is_beq_a3));
            tracep->chgBit(oldp+290,(vlSelf->top__DOT__CPU_is_beq_a4));
            tracep->chgBit(oldp+291,(vlSelf->top__DOT__CPU_is_beq_a5));
            tracep->chgBit(oldp+292,(vlSelf->top__DOT__CPU_is_bge_a2));
            tracep->chgBit(oldp+293,(vlSelf->top__DOT__CPU_is_bge_a3));
            tracep->chgBit(oldp+294,(vlSelf->top__DOT__CPU_is_bge_a4));
            tracep->chgBit(oldp+295,(vlSelf->top__DOT__CPU_is_bge_a5));
            tracep->chgBit(oldp+296,(vlSelf->top__DOT__CPU_is_bgeu_a2));
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__CPU_is_bgeu_a3));
            tracep->chgBit(oldp+298,(vlSelf->top__DOT__CPU_is_bgeu_a4));
            tracep->chgBit(oldp+299,(vlSelf->top__DOT__CPU_is_bgeu_a5));
            tracep->chgBit(oldp+300,(vlSelf->top__DOT__CPU_is_blt_a2));
            tracep->chgBit(oldp+301,(vlSelf->top__DOT__CPU_is_blt_a3));
            tracep->chgBit(oldp+302,(vlSelf->top__DOT__CPU_is_blt_a4));
            tracep->chgBit(oldp+303,(vlSelf->top__DOT__CPU_is_blt_a5));
            tracep->chgBit(oldp+304,(vlSelf->top__DOT__CPU_is_bltu_a2));
            tracep->chgBit(oldp+305,(vlSelf->top__DOT__CPU_is_bltu_a3));
            tracep->chgBit(oldp+306,(vlSelf->top__DOT__CPU_is_bltu_a4));
            tracep->chgBit(oldp+307,(vlSelf->top__DOT__CPU_is_bltu_a5));
            tracep->chgBit(oldp+308,(vlSelf->top__DOT__CPU_is_bne_a2));
            tracep->chgBit(oldp+309,(vlSelf->top__DOT__CPU_is_bne_a3));
            tracep->chgBit(oldp+310,(vlSelf->top__DOT__CPU_is_bne_a4));
            tracep->chgBit(oldp+311,(vlSelf->top__DOT__CPU_is_bne_a5));
            tracep->chgBit(oldp+312,(vlSelf->top__DOT__CPU_is_csrrc_a1));
            tracep->chgBit(oldp+313,(vlSelf->top__DOT__CPU_is_csrrc_a2));
            tracep->chgBit(oldp+314,(vlSelf->top__DOT__CPU_is_csrrc_a3));
            tracep->chgBit(oldp+315,(vlSelf->top__DOT__CPU_is_csrrc_a4));
            tracep->chgBit(oldp+316,(vlSelf->top__DOT__CPU_is_csrrci_a1));
            tracep->chgBit(oldp+317,(vlSelf->top__DOT__CPU_is_csrrci_a2));
            tracep->chgBit(oldp+318,(vlSelf->top__DOT__CPU_is_csrrci_a3));
            tracep->chgBit(oldp+319,(vlSelf->top__DOT__CPU_is_csrrci_a4));
            tracep->chgBit(oldp+320,(vlSelf->top__DOT__CPU_is_csrrs_a1));
            tracep->chgBit(oldp+321,(vlSelf->top__DOT__CPU_is_csrrs_a2));
            tracep->chgBit(oldp+322,(vlSelf->top__DOT__CPU_is_csrrs_a3));
            tracep->chgBit(oldp+323,(vlSelf->top__DOT__CPU_is_csrrs_a4));
            tracep->chgBit(oldp+324,(vlSelf->top__DOT__CPU_is_csrrsi_a1));
            tracep->chgBit(oldp+325,(vlSelf->top__DOT__CPU_is_csrrsi_a2));
            tracep->chgBit(oldp+326,(vlSelf->top__DOT__CPU_is_csrrsi_a3));
            tracep->chgBit(oldp+327,(vlSelf->top__DOT__CPU_is_csrrsi_a4));
            tracep->chgBit(oldp+328,(vlSelf->top__DOT__CPU_is_csrrw_a1));
            tracep->chgBit(oldp+329,(vlSelf->top__DOT__CPU_is_csrrw_a2));
            tracep->chgBit(oldp+330,(vlSelf->top__DOT__CPU_is_csrrw_a3));
            tracep->chgBit(oldp+331,(vlSelf->top__DOT__CPU_is_csrrw_a4));
            tracep->chgBit(oldp+332,(vlSelf->top__DOT__CPU_is_csrrwi_a1));
            tracep->chgBit(oldp+333,(vlSelf->top__DOT__CPU_is_csrrwi_a2));
            tracep->chgBit(oldp+334,(vlSelf->top__DOT__CPU_is_csrrwi_a3));
            tracep->chgBit(oldp+335,(vlSelf->top__DOT__CPU_is_csrrwi_a4));
            tracep->chgBit(oldp+336,(vlSelf->top__DOT__CPU_is_jal_a2));
            tracep->chgBit(oldp+337,(vlSelf->top__DOT__CPU_is_jal_a3));
            tracep->chgBit(oldp+338,(vlSelf->top__DOT__CPU_is_jal_a4));
            tracep->chgBit(oldp+339,(vlSelf->top__DOT__CPU_is_jalr_a2));
            tracep->chgBit(oldp+340,(vlSelf->top__DOT__CPU_is_jalr_a3));
            tracep->chgBit(oldp+341,(vlSelf->top__DOT__CPU_is_jalr_a4));
            tracep->chgBit(oldp+342,(vlSelf->top__DOT__CPU_is_jump_a2));
            tracep->chgBit(oldp+343,(vlSelf->top__DOT__CPU_is_jump_a3));
            tracep->chgBit(oldp+344,(vlSelf->top__DOT__CPU_is_lb_a1));
            tracep->chgBit(oldp+345,(vlSelf->top__DOT__CPU_is_lb_a2));
            tracep->chgBit(oldp+346,(vlSelf->top__DOT__CPU_is_lb_a3));
            tracep->chgBit(oldp+347,(vlSelf->top__DOT__CPU_is_lb_a4));
            tracep->chgBit(oldp+348,(vlSelf->top__DOT__CPU_is_lbu_a1));
            tracep->chgBit(oldp+349,(vlSelf->top__DOT__CPU_is_lbu_a2));
            tracep->chgBit(oldp+350,(vlSelf->top__DOT__CPU_is_lbu_a3));
            tracep->chgBit(oldp+351,(vlSelf->top__DOT__CPU_is_lbu_a4));
            tracep->chgBit(oldp+352,(vlSelf->top__DOT__CPU_is_lh_a1));
            tracep->chgBit(oldp+353,(vlSelf->top__DOT__CPU_is_lh_a2));
            tracep->chgBit(oldp+354,(vlSelf->top__DOT__CPU_is_lh_a3));
            tracep->chgBit(oldp+355,(vlSelf->top__DOT__CPU_is_lh_a4));
            tracep->chgBit(oldp+356,(vlSelf->top__DOT__CPU_is_lhu_a1));
            tracep->chgBit(oldp+357,(vlSelf->top__DOT__CPU_is_lhu_a2));
            tracep->chgBit(oldp+358,(vlSelf->top__DOT__CPU_is_lhu_a3));
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__CPU_is_lhu_a4));
            tracep->chgBit(oldp+360,(vlSelf->top__DOT__CPU_is_load_a2));
            tracep->chgBit(oldp+361,(vlSelf->top__DOT__CPU_is_load_a3));
            tracep->chgBit(oldp+362,(vlSelf->top__DOT__CPU_is_load_a4));
            tracep->chgBit(oldp+363,(vlSelf->top__DOT__CPU_is_lui_a2));
            tracep->chgBit(oldp+364,(vlSelf->top__DOT__CPU_is_lui_a3));
            tracep->chgBit(oldp+365,(vlSelf->top__DOT__CPU_is_lui_a4));
            tracep->chgBit(oldp+366,(vlSelf->top__DOT__CPU_is_lw_a1));
            tracep->chgBit(oldp+367,(vlSelf->top__DOT__CPU_is_lw_a2));
            tracep->chgBit(oldp+368,(vlSelf->top__DOT__CPU_is_lw_a3));
            tracep->chgBit(oldp+369,(vlSelf->top__DOT__CPU_is_lw_a4));
            tracep->chgBit(oldp+370,(vlSelf->top__DOT__CPU_is_or_a2));
            tracep->chgBit(oldp+371,(vlSelf->top__DOT__CPU_is_or_a3));
            tracep->chgBit(oldp+372,(vlSelf->top__DOT__CPU_is_or_a4));
            tracep->chgBit(oldp+373,(vlSelf->top__DOT__CPU_is_ori_a2));
            tracep->chgBit(oldp+374,(vlSelf->top__DOT__CPU_is_ori_a3));
            tracep->chgBit(oldp+375,(vlSelf->top__DOT__CPU_is_ori_a4));
            tracep->chgBit(oldp+376,(vlSelf->top__DOT__CPU_is_s_instr_a2));
            tracep->chgBit(oldp+377,(vlSelf->top__DOT__CPU_is_s_instr_a3));
            tracep->chgBit(oldp+378,(vlSelf->top__DOT__CPU_is_s_instr_a4));
            tracep->chgBit(oldp+379,(vlSelf->top__DOT__CPU_is_sb_a2));
            tracep->chgBit(oldp+380,(vlSelf->top__DOT__CPU_is_sb_a3));
            tracep->chgBit(oldp+381,(vlSelf->top__DOT__CPU_is_sb_a4));
            tracep->chgBit(oldp+382,(vlSelf->top__DOT__CPU_is_sh_a2));
            tracep->chgBit(oldp+383,(vlSelf->top__DOT__CPU_is_sh_a3));
            tracep->chgBit(oldp+384,(vlSelf->top__DOT__CPU_is_sh_a4));
            tracep->chgBit(oldp+385,(vlSelf->top__DOT__CPU_is_sll_a2));
            tracep->chgBit(oldp+386,(vlSelf->top__DOT__CPU_is_sll_a3));
            tracep->chgBit(oldp+387,(vlSelf->top__DOT__CPU_is_sll_a4));
            tracep->chgBit(oldp+388,(vlSelf->top__DOT__CPU_is_slli_a2));
            tracep->chgBit(oldp+389,(vlSelf->top__DOT__CPU_is_slli_a3));
            tracep->chgBit(oldp+390,(vlSelf->top__DOT__CPU_is_slli_a4));
            tracep->chgBit(oldp+391,(vlSelf->top__DOT__CPU_is_slt_a2));
            tracep->chgBit(oldp+392,(vlSelf->top__DOT__CPU_is_slt_a3));
            tracep->chgBit(oldp+393,(vlSelf->top__DOT__CPU_is_slt_a4));
            tracep->chgBit(oldp+394,(vlSelf->top__DOT__CPU_is_slti_a2));
            tracep->chgBit(oldp+395,(vlSelf->top__DOT__CPU_is_slti_a3));
            tracep->chgBit(oldp+396,(vlSelf->top__DOT__CPU_is_slti_a4));
            tracep->chgBit(oldp+397,(vlSelf->top__DOT__CPU_is_sltiu_a2));
            tracep->chgBit(oldp+398,(vlSelf->top__DOT__CPU_is_sltiu_a3));
            tracep->chgBit(oldp+399,(vlSelf->top__DOT__CPU_is_sltiu_a4));
            tracep->chgBit(oldp+400,(vlSelf->top__DOT__CPU_is_sltu_a2));
            tracep->chgBit(oldp+401,(vlSelf->top__DOT__CPU_is_sltu_a3));
            tracep->chgBit(oldp+402,(vlSelf->top__DOT__CPU_is_sltu_a4));
            tracep->chgBit(oldp+403,(vlSelf->top__DOT__CPU_is_sra_a2));
            tracep->chgBit(oldp+404,(vlSelf->top__DOT__CPU_is_sra_a3));
            tracep->chgBit(oldp+405,(vlSelf->top__DOT__CPU_is_sra_a4));
            tracep->chgBit(oldp+406,(vlSelf->top__DOT__CPU_is_srai_a2));
            tracep->chgBit(oldp+407,(vlSelf->top__DOT__CPU_is_srai_a3));
            tracep->chgBit(oldp+408,(vlSelf->top__DOT__CPU_is_srai_a4));
            tracep->chgBit(oldp+409,(vlSelf->top__DOT__CPU_is_srl_a2));
            tracep->chgBit(oldp+410,(vlSelf->top__DOT__CPU_is_srl_a3));
            tracep->chgBit(oldp+411,(vlSelf->top__DOT__CPU_is_srl_a4));
            tracep->chgBit(oldp+412,(vlSelf->top__DOT__CPU_is_srli_a2));
            tracep->chgBit(oldp+413,(vlSelf->top__DOT__CPU_is_srli_a3));
            tracep->chgBit(oldp+414,(vlSelf->top__DOT__CPU_is_srli_a4));
            tracep->chgBit(oldp+415,(vlSelf->top__DOT__CPU_is_store_a1));
            tracep->chgBit(oldp+416,(vlSelf->top__DOT__CPU_is_store_a2));
            tracep->chgBit(oldp+417,(vlSelf->top__DOT__CPU_is_store_a3));
            tracep->chgBit(oldp+418,(vlSelf->top__DOT__CPU_is_store_a4));
            tracep->chgBit(oldp+419,(vlSelf->top__DOT__CPU_is_sub_a2));
            tracep->chgBit(oldp+420,(vlSelf->top__DOT__CPU_is_sub_a3));
            tracep->chgBit(oldp+421,(vlSelf->top__DOT__CPU_is_sub_a4));
            tracep->chgBit(oldp+422,(vlSelf->top__DOT__CPU_is_sw_a2));
            tracep->chgBit(oldp+423,(vlSelf->top__DOT__CPU_is_sw_a3));
            tracep->chgBit(oldp+424,(vlSelf->top__DOT__CPU_is_sw_a4));
            tracep->chgBit(oldp+425,(vlSelf->top__DOT__CPU_is_xor_a2));
            tracep->chgBit(oldp+426,(vlSelf->top__DOT__CPU_is_xor_a3));
            tracep->chgBit(oldp+427,(vlSelf->top__DOT__CPU_is_xor_a4));
            tracep->chgBit(oldp+428,(vlSelf->top__DOT__CPU_is_xori_a2));
            tracep->chgBit(oldp+429,(vlSelf->top__DOT__CPU_is_xori_a3));
            tracep->chgBit(oldp+430,(vlSelf->top__DOT__CPU_is_xori_a4));
            tracep->chgIData(oldp+431,(vlSelf->top__DOT__CPU_jalr_tgt_pc_a3),32);
            tracep->chgIData(oldp+432,(vlSelf->top__DOT__CPU_pc_a0),32);
            tracep->chgIData(oldp+433,(vlSelf->top__DOT__CPU_pc_a1),32);
            tracep->chgIData(oldp+434,(vlSelf->top__DOT__CPU_pc_a2),32);
            tracep->chgIData(oldp+435,(vlSelf->top__DOT__CPU_pc_a3),32);
            tracep->chgIData(oldp+436,(vlSelf->top__DOT__CPU_pc_a4),32);
            tracep->chgBit(oldp+437,(vlSelf->top__DOT__CPU_rd_valid_a2));
            tracep->chgBit(oldp+438,(vlSelf->top__DOT__CPU_rd_valid_a3));
            tracep->chgBit(oldp+439,(vlSelf->top__DOT__CPU_rd_valid_a4));
            tracep->chgBit(oldp+440,(vlSelf->top__DOT__CPU_reset_a1));
            tracep->chgBit(oldp+441,(vlSelf->top__DOT__CPU_reset_a2));
            tracep->chgBit(oldp+442,(vlSelf->top__DOT__CPU_reset_a3));
            tracep->chgBit(oldp+443,(vlSelf->top__DOT__CPU_reset_a4));
            tracep->chgBit(oldp+444,(vlSelf->top__DOT__CPU_rs1_valid_a2));
            tracep->chgBit(oldp+445,(vlSelf->top__DOT__CPU_rs2_valid_a2));
            tracep->chgBit(oldp+446,(vlSelf->top__DOT__CPU_rs1_valid_a3));
            tracep->chgBit(oldp+447,(vlSelf->top__DOT__CPU_rs1_valid_a4));
            tracep->chgBit(oldp+448,(vlSelf->top__DOT__CPU_rs2_valid_a3));
            tracep->chgBit(oldp+449,(vlSelf->top__DOT__CPU_rs2_valid_a4));
            tracep->chgBit(oldp+450,(vlSelf->top__DOT__CPU_sltiu_result_a3));
            tracep->chgBit(oldp+451,(vlSelf->top__DOT__CPU_sltu_result_a3));
            tracep->chgIData(oldp+452,(vlSelf->top__DOT__CPU_src1_value_a3),32);
            tracep->chgIData(oldp+453,(vlSelf->top__DOT__CPU_src1_value_a4),32);
            tracep->chgIData(oldp+454,(vlSelf->top__DOT__CPU_src2_value_a3),32);
            tracep->chgBit(oldp+455,(((IData)(vlSelf->top__DOT__CPU_is_beq_a3)
                                       ? (vlSelf->top__DOT__CPU_src1_value_a3 
                                          == vlSelf->top__DOT__CPU_src2_value_a3)
                                       : ((IData)(vlSelf->top__DOT__CPU_is_bne_a3)
                                           ? (vlSelf->top__DOT__CPU_src1_value_a3 
                                              != vlSelf->top__DOT__CPU_src2_value_a3)
                                           : ((IData)(vlSelf->top__DOT__CPU_is_blt_a3)
                                               ? ((vlSelf->top__DOT__CPU_src1_value_a3 
                                                   < vlSelf->top__DOT__CPU_src2_value_a3) 
                                                  ^ 
                                                  ((vlSelf->top__DOT__CPU_src1_value_a3 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->top__DOT__CPU_src2_value_a3 
                                                    >> 0x1fU)))
                                               : ((IData)(vlSelf->top__DOT__CPU_is_bge_a3)
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
                                                       >= vlSelf->top__DOT__CPU_src2_value_a3)))))))));
            tracep->chgBit(oldp+456,(vlSelf->top__DOT__CPU_valid_a3));
            tracep->chgBit(oldp+457,(vlSelf->top__DOT__CPU_valid_a4));
            tracep->chgBit(oldp+458,(vlSelf->top__DOT__CPU_valid_jump_a3));
            tracep->chgBit(oldp+459,(vlSelf->top__DOT__CPU_valid_jump_a4));
            tracep->chgBit(oldp+460,(vlSelf->top__DOT__CPU_valid_jump_a5));
            tracep->chgBit(oldp+461,(vlSelf->top__DOT__CPU_valid_load_a3));
            tracep->chgBit(oldp+462,(vlSelf->top__DOT__CPU_valid_load_a5));
            tracep->chgBit(oldp+463,(vlSelf->top__DOT__CPU_valid_taken_br_a3));
            tracep->chgBit(oldp+464,(vlSelf->top__DOT__CPU_valid_taken_br_a4));
            tracep->chgBit(oldp+465,(vlSelf->top__DOT__CPU_valid_taken_br_a5));
            tracep->chgIData(oldp+466,(vlSelf->top__DOT__CPU_Xreg_value_a4[0]),32);
            tracep->chgIData(oldp+467,(vlSelf->top__DOT__CPU_Xreg_value_a4[1]),32);
            tracep->chgIData(oldp+468,(vlSelf->top__DOT__CPU_Xreg_value_a4[2]),32);
            tracep->chgIData(oldp+469,(vlSelf->top__DOT__CPU_Xreg_value_a4[3]),32);
            tracep->chgIData(oldp+470,(vlSelf->top__DOT__CPU_Xreg_value_a4[4]),32);
            tracep->chgIData(oldp+471,(vlSelf->top__DOT__CPU_Xreg_value_a4[5]),32);
            tracep->chgIData(oldp+472,(vlSelf->top__DOT__CPU_Xreg_value_a4[6]),32);
            tracep->chgIData(oldp+473,(vlSelf->top__DOT__CPU_Xreg_value_a4[7]),32);
            tracep->chgIData(oldp+474,(vlSelf->top__DOT__CPU_Xreg_value_a4[8]),32);
            tracep->chgIData(oldp+475,(vlSelf->top__DOT__CPU_Xreg_value_a4[9]),32);
            tracep->chgIData(oldp+476,(vlSelf->top__DOT__CPU_Xreg_value_a4[10]),32);
            tracep->chgIData(oldp+477,(vlSelf->top__DOT__CPU_Xreg_value_a4[11]),32);
            tracep->chgIData(oldp+478,(vlSelf->top__DOT__CPU_Xreg_value_a4[12]),32);
            tracep->chgIData(oldp+479,(vlSelf->top__DOT__CPU_Xreg_value_a4[13]),32);
            tracep->chgIData(oldp+480,(vlSelf->top__DOT__CPU_Xreg_value_a4[14]),32);
            tracep->chgIData(oldp+481,(vlSelf->top__DOT__CPU_Xreg_value_a4[15]),32);
            tracep->chgIData(oldp+482,(vlSelf->top__DOT__CPU_Xreg_value_a4[16]),32);
            tracep->chgIData(oldp+483,(vlSelf->top__DOT__CPU_Xreg_value_a4[17]),32);
            tracep->chgIData(oldp+484,(vlSelf->top__DOT__CPU_Xreg_value_a4[18]),32);
            tracep->chgIData(oldp+485,(vlSelf->top__DOT__CPU_Xreg_value_a4[19]),32);
            tracep->chgIData(oldp+486,(vlSelf->top__DOT__CPU_Xreg_value_a4[20]),32);
            tracep->chgIData(oldp+487,(vlSelf->top__DOT__CPU_Xreg_value_a4[21]),32);
            tracep->chgIData(oldp+488,(vlSelf->top__DOT__CPU_Xreg_value_a4[22]),32);
            tracep->chgIData(oldp+489,(vlSelf->top__DOT__CPU_Xreg_value_a4[23]),32);
            tracep->chgIData(oldp+490,(vlSelf->top__DOT__CPU_Xreg_value_a4[24]),32);
            tracep->chgIData(oldp+491,(vlSelf->top__DOT__CPU_Xreg_value_a4[25]),32);
            tracep->chgIData(oldp+492,(vlSelf->top__DOT__CPU_Xreg_value_a4[26]),32);
            tracep->chgIData(oldp+493,(vlSelf->top__DOT__CPU_Xreg_value_a4[27]),32);
            tracep->chgIData(oldp+494,(vlSelf->top__DOT__CPU_Xreg_value_a4[28]),32);
            tracep->chgIData(oldp+495,(vlSelf->top__DOT__CPU_Xreg_value_a4[29]),32);
            tracep->chgIData(oldp+496,(vlSelf->top__DOT__CPU_Xreg_value_a4[30]),32);
            tracep->chgIData(oldp+497,(vlSelf->top__DOT__CPU_Xreg_value_a4[31]),32);
            tracep->chgIData(oldp+498,(vlSelf->top__DOT__CPU_Xreg_value_a5[0]),32);
            tracep->chgIData(oldp+499,(vlSelf->top__DOT__CPU_Xreg_value_a5[1]),32);
            tracep->chgIData(oldp+500,(vlSelf->top__DOT__CPU_Xreg_value_a5[2]),32);
            tracep->chgIData(oldp+501,(vlSelf->top__DOT__CPU_Xreg_value_a5[3]),32);
            tracep->chgIData(oldp+502,(vlSelf->top__DOT__CPU_Xreg_value_a5[4]),32);
            tracep->chgIData(oldp+503,(vlSelf->top__DOT__CPU_Xreg_value_a5[5]),32);
            tracep->chgIData(oldp+504,(vlSelf->top__DOT__CPU_Xreg_value_a5[6]),32);
            tracep->chgIData(oldp+505,(vlSelf->top__DOT__CPU_Xreg_value_a5[7]),32);
            tracep->chgIData(oldp+506,(vlSelf->top__DOT__CPU_Xreg_value_a5[8]),32);
            tracep->chgIData(oldp+507,(vlSelf->top__DOT__CPU_Xreg_value_a5[9]),32);
            tracep->chgIData(oldp+508,(vlSelf->top__DOT__CPU_Xreg_value_a5[10]),32);
            tracep->chgIData(oldp+509,(vlSelf->top__DOT__CPU_Xreg_value_a5[11]),32);
            tracep->chgIData(oldp+510,(vlSelf->top__DOT__CPU_Xreg_value_a5[12]),32);
            tracep->chgIData(oldp+511,(vlSelf->top__DOT__CPU_Xreg_value_a5[13]),32);
            tracep->chgIData(oldp+512,(vlSelf->top__DOT__CPU_Xreg_value_a5[14]),32);
            tracep->chgIData(oldp+513,(vlSelf->top__DOT__CPU_Xreg_value_a5[15]),32);
            tracep->chgIData(oldp+514,(vlSelf->top__DOT__CPU_Xreg_value_a5[16]),32);
            tracep->chgIData(oldp+515,(vlSelf->top__DOT__CPU_Xreg_value_a5[17]),32);
            tracep->chgIData(oldp+516,(vlSelf->top__DOT__CPU_Xreg_value_a5[18]),32);
            tracep->chgIData(oldp+517,(vlSelf->top__DOT__CPU_Xreg_value_a5[19]),32);
            tracep->chgIData(oldp+518,(vlSelf->top__DOT__CPU_Xreg_value_a5[20]),32);
            tracep->chgIData(oldp+519,(vlSelf->top__DOT__CPU_Xreg_value_a5[21]),32);
            tracep->chgIData(oldp+520,(vlSelf->top__DOT__CPU_Xreg_value_a5[22]),32);
            tracep->chgIData(oldp+521,(vlSelf->top__DOT__CPU_Xreg_value_a5[23]),32);
            tracep->chgIData(oldp+522,(vlSelf->top__DOT__CPU_Xreg_value_a5[24]),32);
            tracep->chgIData(oldp+523,(vlSelf->top__DOT__CPU_Xreg_value_a5[25]),32);
            tracep->chgIData(oldp+524,(vlSelf->top__DOT__CPU_Xreg_value_a5[26]),32);
            tracep->chgIData(oldp+525,(vlSelf->top__DOT__CPU_Xreg_value_a5[27]),32);
            tracep->chgIData(oldp+526,(vlSelf->top__DOT__CPU_Xreg_value_a5[28]),32);
            tracep->chgIData(oldp+527,(vlSelf->top__DOT__CPU_Xreg_value_a5[29]),32);
            tracep->chgIData(oldp+528,(vlSelf->top__DOT__CPU_Xreg_value_a5[30]),32);
            tracep->chgIData(oldp+529,(vlSelf->top__DOT__CPU_Xreg_value_a5[31]),32);
            tracep->chgWData(oldp+530,(vlSelf->top__DOT__CPUVIZ_mnemonic_a4),80);
            tracep->chgBit(oldp+533,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__0__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+534,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__1__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+535,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__2__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+536,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__3__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+537,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__4__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+538,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__5__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+539,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__6__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+540,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__7__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+541,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__8__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+542,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__9__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+543,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__10__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+544,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__11__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+545,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__12__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+546,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__13__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+547,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__14__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+548,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__15__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+549,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__16__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+550,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__17__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+551,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__18__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+552,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__19__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+553,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__20__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+554,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__21__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+555,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__22__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+556,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__23__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+557,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__24__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+558,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__25__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+559,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__26__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+560,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__27__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+561,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__28__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+562,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__29__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+563,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__30__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+564,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__31__KET____DOT__L1_wr_a4));
            tracep->chgBit(oldp+565,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__0__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+566,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__0__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+567,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__0__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+568,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__0__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+569,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__1__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+570,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__1__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+571,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__1__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+572,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__1__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+573,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__2__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+574,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__2__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+575,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__2__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+576,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__2__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+577,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__3__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+578,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__3__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+579,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__3__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+580,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__3__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+581,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__4__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+582,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__4__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+583,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__4__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+584,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__4__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+585,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__5__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+586,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__5__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+587,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__5__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+588,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__5__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+589,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__6__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+590,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__6__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+591,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__6__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+592,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__6__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+593,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__7__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+594,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__7__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+595,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__7__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+596,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__7__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+597,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__8__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+598,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__8__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+599,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__8__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+600,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__8__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+601,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__9__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+602,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__9__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+603,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__9__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+604,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__9__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+605,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__10__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+606,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__10__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+607,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__10__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+608,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__10__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+609,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__11__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+610,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__11__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+611,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__11__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+612,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__11__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+613,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__12__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+614,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__12__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+615,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__12__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+616,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__12__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+617,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__13__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+618,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__13__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+619,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__13__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+620,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__13__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+621,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__14__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+622,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__14__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+623,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__14__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+624,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__14__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+625,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__15__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+626,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__15__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+627,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__15__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+628,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__15__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+629,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__16__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+630,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__16__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+631,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__16__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+632,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__16__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+633,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__17__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+634,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__17__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+635,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__17__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+636,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__17__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+637,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__18__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+638,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__18__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+639,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__18__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+640,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__18__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+641,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__19__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+642,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__19__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+643,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__19__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+644,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__19__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+645,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__20__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+646,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__20__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+647,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__20__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+648,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__20__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+649,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__21__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+650,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__21__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+651,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__21__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+652,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__21__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+653,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__22__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+654,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__22__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+655,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__22__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+656,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__22__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+657,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__23__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+658,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__23__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+659,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__23__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+660,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__23__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+661,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__24__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+662,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__24__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+663,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__24__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+664,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__24__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+665,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__25__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+666,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__25__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+667,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__25__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+668,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__25__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+669,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__26__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+670,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__26__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+671,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__26__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+672,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__26__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+673,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__27__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+674,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__27__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+675,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__27__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+676,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__27__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+677,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__28__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+678,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__28__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+679,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__28__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+680,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__28__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+681,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__29__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+682,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__29__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+683,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__29__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+684,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__29__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+685,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__30__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+686,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__30__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+687,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__30__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+688,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__30__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+689,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__31__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+690,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__31__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+691,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__31__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+692,(vlSelf->top__DOT__L1b_CPU_Xreg__BRA__31__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+693,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__0__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+694,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__0__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+695,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__0__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+696,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__0__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+697,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__1__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+698,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__1__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+699,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__1__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+700,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__1__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+701,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__2__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+702,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__2__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+703,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__2__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+704,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__2__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+705,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__3__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+706,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__3__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+707,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__3__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+708,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__3__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+709,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__4__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+710,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__4__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+711,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__4__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+712,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__4__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+713,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__5__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+714,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__5__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+715,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__5__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+716,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__5__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+717,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__6__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+718,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__6__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+719,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__6__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+720,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__6__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+721,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__7__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+722,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__7__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+723,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__7__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+724,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__7__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+725,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__8__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+726,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__8__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+727,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__8__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+728,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__8__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+729,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__9__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+730,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__9__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+731,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__9__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+732,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__9__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+733,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__10__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+734,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__10__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+735,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__10__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+736,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__10__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+737,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__11__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+738,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__11__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+739,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__11__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+740,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__11__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+741,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__12__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+742,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__12__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+743,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__12__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+744,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__12__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+745,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__13__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+746,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__13__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+747,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__13__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+748,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__13__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+749,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__14__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+750,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__14__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+751,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__14__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+752,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__14__KET____DOT__L1_dummy_a4));
            tracep->chgBit(oldp+753,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__15__KET____DOT__L1_dummy_a1));
            tracep->chgBit(oldp+754,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__15__KET____DOT__L1_dummy_a2));
            tracep->chgBit(oldp+755,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__15__KET____DOT__L1_dummy_a3));
            tracep->chgBit(oldp+756,(vlSelf->top__DOT__L1b_CPU_Dmem__BRA__15__KET____DOT__L1_dummy_a4));
            tracep->chgIData(oldp+757,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0U]),32);
            tracep->chgIData(oldp+758,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__0__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+759,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [1U]),32);
            tracep->chgIData(oldp+760,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__1__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+761,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [2U]),32);
            tracep->chgIData(oldp+762,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__2__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+763,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [3U]),32);
            tracep->chgIData(oldp+764,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__3__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+765,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [4U]),32);
            tracep->chgIData(oldp+766,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__4__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+767,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [5U]),32);
            tracep->chgIData(oldp+768,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__5__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+769,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [6U]),32);
            tracep->chgIData(oldp+770,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__6__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+771,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [7U]),32);
            tracep->chgIData(oldp+772,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__7__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+773,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [8U]),32);
            tracep->chgIData(oldp+774,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__8__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+775,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [9U]),32);
            tracep->chgIData(oldp+776,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__9__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+777,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0xaU]),32);
            tracep->chgIData(oldp+778,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__10__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+779,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0xbU]),32);
            tracep->chgIData(oldp+780,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__11__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+781,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0xcU]),32);
            tracep->chgIData(oldp+782,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__12__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+783,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0xdU]),32);
            tracep->chgIData(oldp+784,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__13__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+785,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0xeU]),32);
            tracep->chgIData(oldp+786,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__14__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+787,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0xfU]),32);
            tracep->chgIData(oldp+788,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__15__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+789,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x10U]),32);
            tracep->chgIData(oldp+790,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__16__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+791,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x11U]),32);
            tracep->chgIData(oldp+792,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__17__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+793,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x12U]),32);
            tracep->chgIData(oldp+794,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__18__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+795,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x13U]),32);
            tracep->chgIData(oldp+796,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__19__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+797,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x14U]),32);
            tracep->chgIData(oldp+798,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__20__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+799,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x15U]),32);
            tracep->chgIData(oldp+800,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__21__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+801,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x16U]),32);
            tracep->chgIData(oldp+802,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__22__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+803,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x17U]),32);
            tracep->chgIData(oldp+804,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__23__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+805,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x18U]),32);
            tracep->chgIData(oldp+806,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__24__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+807,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x19U]),32);
            tracep->chgIData(oldp+808,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__25__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+809,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x1aU]),32);
            tracep->chgIData(oldp+810,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__26__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+811,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x1bU]),32);
            tracep->chgIData(oldp+812,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__27__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+813,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x1cU]),32);
            tracep->chgIData(oldp+814,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__28__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+815,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x1dU]),32);
            tracep->chgIData(oldp+816,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__29__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+817,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x1eU]),32);
            tracep->chgIData(oldp+818,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__30__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+819,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                       [0x1fU]),32);
            tracep->chgIData(oldp+820,(vlSelf->top__DOT__L1_CPUVIZ_Xreg__BRA__31__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+821,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__0__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+822,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__1__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+823,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__2__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+824,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__3__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+825,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__4__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+826,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__5__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+827,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__6__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+828,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__7__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+829,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__8__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+830,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__9__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+831,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__10__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+832,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__11__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+833,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__12__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+834,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__13__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+835,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__14__KET____DOT__L1_value_a5),32);
            tracep->chgIData(oldp+836,(vlSelf->top__DOT__L1_CPUVIZ_Dmem__BRA__15__KET____DOT__L1_value_a5),32);
            if (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_reset_a1) {
                __Vtemp228[0U] = Vtop__ConstPool__CONST_8aaa57a3_0[0U];
                __Vtemp228[1U] = Vtop__ConstPool__CONST_8aaa57a3_0[1U];
                __Vtemp228[2U] = Vtop__ConstPool__CONST_8aaa57a3_0[2U];
                __Vtemp228[3U] = Vtop__ConstPool__CONST_8aaa57a3_0[3U];
                __Vtemp228[4U] = Vtop__ConstPool__CONST_8aaa57a3_0[4U];
                __Vtemp228[5U] = Vtop__ConstPool__CONST_8aaa57a3_0[5U];
                __Vtemp228[6U] = Vtop__ConstPool__CONST_8aaa57a3_0[6U];
                __Vtemp228[7U] = Vtop__ConstPool__CONST_8aaa57a3_0[7U];
                __Vtemp228[8U] = Vtop__ConstPool__CONST_8aaa57a3_0[8U];
            } else {
                __Vtemp228[0U] = ((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U] 
                                   << 1U) ^ (Vtop__ConstPool__CONST_81cf83eb_0[0U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
                __Vtemp228[1U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[0U] 
                                    >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U] 
                                                 << 1U)) 
                                  ^ (Vtop__ConstPool__CONST_81cf83eb_0[1U] 
                                     & (- (IData)((1U 
                                                   & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
                __Vtemp228[2U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[1U] 
                                    >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U] 
                                                 << 1U)) 
                                  ^ (Vtop__ConstPool__CONST_81cf83eb_0[2U] 
                                     & (- (IData)((1U 
                                                   & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
                __Vtemp228[3U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[2U] 
                                    >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U] 
                                                 << 1U)) 
                                  ^ (Vtop__ConstPool__CONST_81cf83eb_0[3U] 
                                     & (- (IData)((1U 
                                                   & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
                __Vtemp228[4U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[3U] 
                                    >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U] 
                                                 << 1U)) 
                                  ^ (Vtop__ConstPool__CONST_81cf83eb_0[4U] 
                                     & (- (IData)((1U 
                                                   & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
                __Vtemp228[5U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[4U] 
                                    >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U] 
                                                 << 1U)) 
                                  ^ (Vtop__ConstPool__CONST_81cf83eb_0[5U] 
                                     & (- (IData)((1U 
                                                   & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
                __Vtemp228[6U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[5U] 
                                    >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U] 
                                                 << 1U)) 
                                  ^ (Vtop__ConstPool__CONST_81cf83eb_0[6U] 
                                     & (- (IData)((1U 
                                                   & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
                __Vtemp228[7U] = (((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[6U] 
                                    >> 0x1fU) | (vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U] 
                                                 << 1U)) 
                                  ^ (Vtop__ConstPool__CONST_81cf83eb_0[7U] 
                                     & (- (IData)((1U 
                                                   & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
                __Vtemp228[8U] = ((vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[7U] 
                                   >> 0x1fU) ^ (Vtop__ConstPool__CONST_81cf83eb_0[8U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_lfsr_a2[8U])))));
            }
            tracep->chgWData(oldp+837,(__Vtemp228),257);
            tracep->chgBit(oldp+846,(vlSelf->top__DOT__pseudo_rand__DOT__DEFAULT_reset_a1));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+847,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (0U == (0xfU 
                                                & (vlSelf->top__DOT__CPU_result_a4 
                                                   >> 2U))))));
            tracep->chgBit(oldp+848,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (1U == (0xfU 
                                                & (vlSelf->top__DOT__CPU_result_a4 
                                                   >> 2U))))));
            tracep->chgBit(oldp+849,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (2U == (0xfU 
                                                & (vlSelf->top__DOT__CPU_result_a4 
                                                   >> 2U))))));
            tracep->chgBit(oldp+850,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (3U == (0xfU 
                                                & (vlSelf->top__DOT__CPU_result_a4 
                                                   >> 2U))))));
            tracep->chgBit(oldp+851,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (4U == (0xfU 
                                                & (vlSelf->top__DOT__CPU_result_a4 
                                                   >> 2U))))));
            tracep->chgBit(oldp+852,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (5U == (0xfU 
                                                & (vlSelf->top__DOT__CPU_result_a4 
                                                   >> 2U))))));
            tracep->chgBit(oldp+853,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (6U == (0xfU 
                                                & (vlSelf->top__DOT__CPU_result_a4 
                                                   >> 2U))))));
            tracep->chgBit(oldp+854,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (7U == (0xfU 
                                                & (vlSelf->top__DOT__CPU_result_a4 
                                                   >> 2U))))));
            tracep->chgBit(oldp+855,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (8U == (0xfU 
                                                & (vlSelf->top__DOT__CPU_result_a4 
                                                   >> 2U))))));
            tracep->chgBit(oldp+856,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (9U == (0xfU 
                                                & (vlSelf->top__DOT__CPU_result_a4 
                                                   >> 2U))))));
            tracep->chgBit(oldp+857,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (0xaU == (0xfU 
                                                  & (vlSelf->top__DOT__CPU_result_a4 
                                                     >> 2U))))));
            tracep->chgBit(oldp+858,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (0xbU == (0xfU 
                                                  & (vlSelf->top__DOT__CPU_result_a4 
                                                     >> 2U))))));
            tracep->chgBit(oldp+859,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (0xcU == (0xfU 
                                                  & (vlSelf->top__DOT__CPU_result_a4 
                                                     >> 2U))))));
            tracep->chgBit(oldp+860,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (0xdU == (0xfU 
                                                  & (vlSelf->top__DOT__CPU_result_a4 
                                                     >> 2U))))));
            tracep->chgBit(oldp+861,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (0xeU == (0xfU 
                                                  & (vlSelf->top__DOT__CPU_result_a4 
                                                     >> 2U))))));
            tracep->chgBit(oldp+862,(((IData)(vlSelf->top__DOT__CPU_dmem_wr_en_a4) 
                                      & (0xfU == (0xfU 
                                                  & (vlSelf->top__DOT__CPU_result_a4 
                                                     >> 2U))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+863,(vlSelf->top__DOT__clkP_CPU_dmem_rd_en_a5));
            tracep->chgBit(oldp+864,(vlSelf->top__DOT__clkP_CPU_rd_valid_a2));
            tracep->chgBit(oldp+865,(vlSelf->top__DOT__clkP_CPU_rd_valid_a3));
            tracep->chgBit(oldp+866,(vlSelf->top__DOT__clkP_CPU_rd_valid_a4));
            tracep->chgBit(oldp+867,(vlSelf->top__DOT__clkP_CPU_rd_valid_a5));
            tracep->chgBit(oldp+868,(vlSelf->top__DOT__clkP_CPU_rs1_valid_a2));
            tracep->chgBit(oldp+869,(vlSelf->top__DOT__clkP_CPU_rs1_valid_a3));
            tracep->chgBit(oldp+870,(vlSelf->top__DOT__clkP_CPU_rs1_valid_a4));
            tracep->chgBit(oldp+871,(vlSelf->top__DOT__clkP_CPU_rs2_valid_a2));
            tracep->chgBit(oldp+872,(vlSelf->top__DOT__clkP_CPU_rs2_valid_a3));
            tracep->chgBit(oldp+873,(vlSelf->top__DOT__clkP_CPU_rs2_valid_a4));
            tracep->chgBit(oldp+874,(vlSelf->top__DOT__gen_clkP_CPU_dmem_rd_en_a5__DOT__latched_clk_en));
            tracep->chgBit(oldp+875,(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a2__DOT__latched_clk_en));
            tracep->chgBit(oldp+876,(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a3__DOT__latched_clk_en));
            tracep->chgBit(oldp+877,(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a4__DOT__latched_clk_en));
            tracep->chgBit(oldp+878,(vlSelf->top__DOT__gen_clkP_CPU_rd_valid_a5__DOT__latched_clk_en));
            tracep->chgBit(oldp+879,(vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a2__DOT__latched_clk_en));
            tracep->chgBit(oldp+880,(vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a3__DOT__latched_clk_en));
            tracep->chgBit(oldp+881,(vlSelf->top__DOT__gen_clkP_CPU_rs1_valid_a4__DOT__latched_clk_en));
            tracep->chgBit(oldp+882,(vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a2__DOT__latched_clk_en));
            tracep->chgBit(oldp+883,(vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a3__DOT__latched_clk_en));
            tracep->chgBit(oldp+884,(vlSelf->top__DOT__gen_clkP_CPU_rs2_valid_a4__DOT__latched_clk_en));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+885,((0xfU & (vlSelf->top__DOT__CPU_result_a4 
                                                >> 2U))),4);
            tracep->chgIData(oldp+886,(vlSelf->top__DOT__CPU_Dmem_value_a5
                                       [(0xfU & (vlSelf->top__DOT__CPU_result_a4 
                                                 >> 2U))]),32);
            tracep->chgIData(oldp+887,(vlSelf->top__DOT__CPU_result_a3),32);
            tracep->chgIData(oldp+888,(vlSelf->top__DOT__CPU_result_a4),32);
            tracep->chgIData(oldp+889,(vlSelf->top__DOT__CPU_Dmem_value_a4[0]),32);
            tracep->chgIData(oldp+890,(vlSelf->top__DOT__CPU_Dmem_value_a4[1]),32);
            tracep->chgIData(oldp+891,(vlSelf->top__DOT__CPU_Dmem_value_a4[2]),32);
            tracep->chgIData(oldp+892,(vlSelf->top__DOT__CPU_Dmem_value_a4[3]),32);
            tracep->chgIData(oldp+893,(vlSelf->top__DOT__CPU_Dmem_value_a4[4]),32);
            tracep->chgIData(oldp+894,(vlSelf->top__DOT__CPU_Dmem_value_a4[5]),32);
            tracep->chgIData(oldp+895,(vlSelf->top__DOT__CPU_Dmem_value_a4[6]),32);
            tracep->chgIData(oldp+896,(vlSelf->top__DOT__CPU_Dmem_value_a4[7]),32);
            tracep->chgIData(oldp+897,(vlSelf->top__DOT__CPU_Dmem_value_a4[8]),32);
            tracep->chgIData(oldp+898,(vlSelf->top__DOT__CPU_Dmem_value_a4[9]),32);
            tracep->chgIData(oldp+899,(vlSelf->top__DOT__CPU_Dmem_value_a4[10]),32);
            tracep->chgIData(oldp+900,(vlSelf->top__DOT__CPU_Dmem_value_a4[11]),32);
            tracep->chgIData(oldp+901,(vlSelf->top__DOT__CPU_Dmem_value_a4[12]),32);
            tracep->chgIData(oldp+902,(vlSelf->top__DOT__CPU_Dmem_value_a4[13]),32);
            tracep->chgIData(oldp+903,(vlSelf->top__DOT__CPU_Dmem_value_a4[14]),32);
            tracep->chgIData(oldp+904,(vlSelf->top__DOT__CPU_Dmem_value_a4[15]),32);
            tracep->chgIData(oldp+905,(vlSelf->top__DOT__CPU_Dmem_value_a5[0]),32);
            tracep->chgIData(oldp+906,(vlSelf->top__DOT__CPU_Dmem_value_a5[1]),32);
            tracep->chgIData(oldp+907,(vlSelf->top__DOT__CPU_Dmem_value_a5[2]),32);
            tracep->chgIData(oldp+908,(vlSelf->top__DOT__CPU_Dmem_value_a5[3]),32);
            tracep->chgIData(oldp+909,(vlSelf->top__DOT__CPU_Dmem_value_a5[4]),32);
            tracep->chgIData(oldp+910,(vlSelf->top__DOT__CPU_Dmem_value_a5[5]),32);
            tracep->chgIData(oldp+911,(vlSelf->top__DOT__CPU_Dmem_value_a5[6]),32);
            tracep->chgIData(oldp+912,(vlSelf->top__DOT__CPU_Dmem_value_a5[7]),32);
            tracep->chgIData(oldp+913,(vlSelf->top__DOT__CPU_Dmem_value_a5[8]),32);
            tracep->chgIData(oldp+914,(vlSelf->top__DOT__CPU_Dmem_value_a5[9]),32);
            tracep->chgIData(oldp+915,(vlSelf->top__DOT__CPU_Dmem_value_a5[10]),32);
            tracep->chgIData(oldp+916,(vlSelf->top__DOT__CPU_Dmem_value_a5[11]),32);
            tracep->chgIData(oldp+917,(vlSelf->top__DOT__CPU_Dmem_value_a5[12]),32);
            tracep->chgIData(oldp+918,(vlSelf->top__DOT__CPU_Dmem_value_a5[13]),32);
            tracep->chgIData(oldp+919,(vlSelf->top__DOT__CPU_Dmem_value_a5[14]),32);
            tracep->chgIData(oldp+920,(vlSelf->top__DOT__CPU_Dmem_value_a5[15]),32);
            tracep->chgIData(oldp+921,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [0U]),32);
            tracep->chgIData(oldp+922,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [1U]),32);
            tracep->chgIData(oldp+923,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [2U]),32);
            tracep->chgIData(oldp+924,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [3U]),32);
            tracep->chgIData(oldp+925,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [4U]),32);
            tracep->chgIData(oldp+926,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [5U]),32);
            tracep->chgIData(oldp+927,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [6U]),32);
            tracep->chgIData(oldp+928,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [7U]),32);
            tracep->chgIData(oldp+929,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [8U]),32);
            tracep->chgIData(oldp+930,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [9U]),32);
            tracep->chgIData(oldp+931,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [0xaU]),32);
            tracep->chgIData(oldp+932,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [0xbU]),32);
            tracep->chgIData(oldp+933,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [0xcU]),32);
            tracep->chgIData(oldp+934,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [0xdU]),32);
            tracep->chgIData(oldp+935,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [0xeU]),32);
            tracep->chgIData(oldp+936,(vlSelf->top__DOT__CPU_Dmem_value_a4
                                       [0xfU]),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgSData(oldp+937,(vlSelf->top__DOT__CPU_dec_bits_a1),11);
            tracep->chgCData(oldp+938,((7U & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+939,(((((IData)(vlSelf->top__DOT__CPU_is_r_instr_a1) 
                                        | (8U == (0x1fU 
                                                  & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                     >> 2U)))) 
                                       | (0x18U == 
                                          (0x1fU & 
                                           (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                            >> 2U)))) 
                                      | (IData)(vlSelf->top__DOT__CPU_is_i_instr_a1))));
            tracep->chgCData(oldp+940,((vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+941,(vlSelf->top__DOT__CPU_is_r_instr_a1));
            tracep->chgIData(oldp+942,(vlSelf->top__DOT__CPU_imem_rd_data_a1),32);
            tracep->chgIData(oldp+943,(vlSelf->top__DOT__CPU_imm_a1),32);
            tracep->chgBit(oldp+944,((0x33U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+945,((0x13U == (0x3ffU 
                                                & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+946,((0x3b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+947,((0x393U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+948,((0x17U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+949,((0x18U == (0x1fU 
                                                & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                   >> 2U)))));
            tracep->chgBit(oldp+950,((0x63U == (0x3ffU 
                                                & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+951,((0x2e3U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+952,((0x3e3U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+953,((0x263U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+954,((0x363U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+955,((0xe3U == (0x3ffU 
                                                & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+956,(vlSelf->top__DOT__CPU_is_i_instr_a1));
            tracep->chgBit(oldp+957,((0x1bU == (0x1fU 
                                                & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                   >> 2U)))));
            tracep->chgBit(oldp+958,((0x6fU == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+959,((0x67U == (0x3ffU 
                                                & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+960,(((0x6fU == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))) 
                                      | (0x67U == (0x3ffU 
                                                   & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))))));
            tracep->chgBit(oldp+961,((3U == (0x7fU 
                                             & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+962,((0x37U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+963,((0x333U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+964,((0x313U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+965,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                >> 2U)))));
            tracep->chgBit(oldp+966,((0x23U == (0x3ffU 
                                                & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+967,((0xa3U == (0x3ffU 
                                                & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+968,((0xb3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+969,((0x93U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+970,((0x133U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+971,((0x113U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+972,((0x193U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+973,((0x1b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+974,((0x6b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+975,((0x693U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+976,((0x2b3U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+977,((0x293U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+978,((0x433U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+979,((0x123U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgBit(oldp+980,((5U == (0x1fU 
                                             & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                >> 2U)))));
            tracep->chgBit(oldp+981,((0x233U == (IData)(vlSelf->top__DOT__CPU_dec_bits_a1))));
            tracep->chgBit(oldp+982,((0x213U == (0x3ffU 
                                                 & (IData)(vlSelf->top__DOT__CPU_dec_bits_a1)))));
            tracep->chgCData(oldp+983,((0x7fU & vlSelf->top__DOT__CPU_imem_rd_data_a1)),7);
            tracep->chgCData(oldp+984,((0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+985,(vlSelf->top__DOT__CPU_rd_valid_a1));
            tracep->chgCData(oldp+986,((0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                 >> 0xfU))),5);
            tracep->chgBit(oldp+987,(vlSelf->top__DOT__CPU_rs1_valid_a1));
            tracep->chgCData(oldp+988,((0x1fU & (vlSelf->top__DOT__CPU_imem_rd_data_a1 
                                                 >> 0x14U))),5);
            tracep->chgBit(oldp+989,(vlSelf->top__DOT__CPU_rs2_valid_a1));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+990,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__0__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+991,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__1__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+992,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__2__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+993,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__3__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+994,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__4__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+995,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__5__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+996,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__6__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+997,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__7__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+998,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__8__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+999,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__9__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1000,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__10__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1001,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__11__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1002,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__12__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1003,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__13__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1004,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__14__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1005,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__15__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1006,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__16__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1007,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__17__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1008,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__18__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1009,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__19__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1010,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__20__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1011,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__21__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1012,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__22__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1013,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__23__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1014,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__24__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1015,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__25__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1016,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__26__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1017,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__27__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1018,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__28__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1019,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__29__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1020,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__30__KET____DOT__L1_wr_a3));
            tracep->chgBit(oldp+1021,(vlSelf->top__DOT__L1_CPU_Xreg__BRA__31__KET____DOT__L1_wr_a3));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgIData(oldp+1022,(vlSelf->top__DOT__CPU_Xreg_value_a3[0]),32);
            tracep->chgIData(oldp+1023,(vlSelf->top__DOT__CPU_Xreg_value_a3[1]),32);
            tracep->chgIData(oldp+1024,(vlSelf->top__DOT__CPU_Xreg_value_a3[2]),32);
            tracep->chgIData(oldp+1025,(vlSelf->top__DOT__CPU_Xreg_value_a3[3]),32);
            tracep->chgIData(oldp+1026,(vlSelf->top__DOT__CPU_Xreg_value_a3[4]),32);
            tracep->chgIData(oldp+1027,(vlSelf->top__DOT__CPU_Xreg_value_a3[5]),32);
            tracep->chgIData(oldp+1028,(vlSelf->top__DOT__CPU_Xreg_value_a3[6]),32);
            tracep->chgIData(oldp+1029,(vlSelf->top__DOT__CPU_Xreg_value_a3[7]),32);
            tracep->chgIData(oldp+1030,(vlSelf->top__DOT__CPU_Xreg_value_a3[8]),32);
            tracep->chgIData(oldp+1031,(vlSelf->top__DOT__CPU_Xreg_value_a3[9]),32);
            tracep->chgIData(oldp+1032,(vlSelf->top__DOT__CPU_Xreg_value_a3[10]),32);
            tracep->chgIData(oldp+1033,(vlSelf->top__DOT__CPU_Xreg_value_a3[11]),32);
            tracep->chgIData(oldp+1034,(vlSelf->top__DOT__CPU_Xreg_value_a3[12]),32);
            tracep->chgIData(oldp+1035,(vlSelf->top__DOT__CPU_Xreg_value_a3[13]),32);
            tracep->chgIData(oldp+1036,(vlSelf->top__DOT__CPU_Xreg_value_a3[14]),32);
            tracep->chgIData(oldp+1037,(vlSelf->top__DOT__CPU_Xreg_value_a3[15]),32);
            tracep->chgIData(oldp+1038,(vlSelf->top__DOT__CPU_Xreg_value_a3[16]),32);
            tracep->chgIData(oldp+1039,(vlSelf->top__DOT__CPU_Xreg_value_a3[17]),32);
            tracep->chgIData(oldp+1040,(vlSelf->top__DOT__CPU_Xreg_value_a3[18]),32);
            tracep->chgIData(oldp+1041,(vlSelf->top__DOT__CPU_Xreg_value_a3[19]),32);
            tracep->chgIData(oldp+1042,(vlSelf->top__DOT__CPU_Xreg_value_a3[20]),32);
            tracep->chgIData(oldp+1043,(vlSelf->top__DOT__CPU_Xreg_value_a3[21]),32);
            tracep->chgIData(oldp+1044,(vlSelf->top__DOT__CPU_Xreg_value_a3[22]),32);
            tracep->chgIData(oldp+1045,(vlSelf->top__DOT__CPU_Xreg_value_a3[23]),32);
            tracep->chgIData(oldp+1046,(vlSelf->top__DOT__CPU_Xreg_value_a3[24]),32);
            tracep->chgIData(oldp+1047,(vlSelf->top__DOT__CPU_Xreg_value_a3[25]),32);
            tracep->chgIData(oldp+1048,(vlSelf->top__DOT__CPU_Xreg_value_a3[26]),32);
            tracep->chgIData(oldp+1049,(vlSelf->top__DOT__CPU_Xreg_value_a3[27]),32);
            tracep->chgIData(oldp+1050,(vlSelf->top__DOT__CPU_Xreg_value_a3[28]),32);
            tracep->chgIData(oldp+1051,(vlSelf->top__DOT__CPU_Xreg_value_a3[29]),32);
            tracep->chgIData(oldp+1052,(vlSelf->top__DOT__CPU_Xreg_value_a3[30]),32);
            tracep->chgIData(oldp+1053,(vlSelf->top__DOT__CPU_Xreg_value_a3[31]),32);
        }
        tracep->chgBit(oldp+1054,(vlSelf->clk));
        tracep->chgBit(oldp+1055,(vlSelf->reset));
        tracep->chgBit(oldp+1056,(vlSelf->passed));
        tracep->chgBit(oldp+1057,(vlSelf->failed));
        tracep->chgIData(oldp+1058,(vlSelf->top__DOT__CPU_dmem_rd_data_a5),32);
        tracep->chgBit(oldp+1059,((1U & (~ (IData)(vlSelf->reset)))));
        tracep->chgIData(oldp+1060,((vlSelf->top__DOT__CPU_src1_value_a2 
                                     + vlSelf->top__DOT__CPU_imm_a2)),32);
        tracep->chgCData(oldp+1061,(vlSelf->top__DOT__CPU_rd_a2),5);
        tracep->chgCData(oldp+1062,(vlSelf->top__DOT__CPU_rd_a3),5);
        tracep->chgCData(oldp+1063,(vlSelf->top__DOT__CPU_rd_a4),5);
        tracep->chgCData(oldp+1064,(vlSelf->top__DOT__CPU_rd_a5),5);
        tracep->chgIData(oldp+1065,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [vlSelf->top__DOT__CPU_rs1_a2]),32);
        tracep->chgIData(oldp+1066,(vlSelf->top__DOT__CPU_Xreg_value_a4
                                    [vlSelf->top__DOT__CPU_rs2_a2]),32);
        tracep->chgCData(oldp+1067,(vlSelf->top__DOT__CPU_rs1_a2),5);
        tracep->chgCData(oldp+1068,(vlSelf->top__DOT__CPU_rs2_a2),5);
        tracep->chgIData(oldp+1069,(vlSelf->top__DOT__CPU_rf_wr_data_a3),32);
        tracep->chgBit(oldp+1070,(vlSelf->top__DOT__CPU_rf_wr_en_a3));
        tracep->chgCData(oldp+1071,(vlSelf->top__DOT__CPU_rf_wr_index_a3),5);
        tracep->chgCData(oldp+1072,(vlSelf->top__DOT__CPU_rs1_a3),5);
        tracep->chgCData(oldp+1073,(vlSelf->top__DOT__CPU_rs1_a4),5);
        tracep->chgCData(oldp+1074,(vlSelf->top__DOT__CPU_rs2_a3),5);
        tracep->chgCData(oldp+1075,(vlSelf->top__DOT__CPU_rs2_a4),5);
        tracep->chgIData(oldp+1076,(vlSelf->top__DOT__CPU_src1_value_a2),32);
        tracep->chgIData(oldp+1077,(((((IData)(vlSelf->top__DOT__CPU_rd_a3) 
                                       == (IData)(vlSelf->top__DOT__CPU_rs2_a2)) 
                                      & (IData)(vlSelf->top__DOT__CPU_rf_wr_en_a3))
                                      ? vlSelf->top__DOT__CPU_result_a3
                                      : vlSelf->top__DOT__CPU_Xreg_value_a4
                                     [vlSelf->top__DOT__CPU_rs2_a2])),32);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    }
}
