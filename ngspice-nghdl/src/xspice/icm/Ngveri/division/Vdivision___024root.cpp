// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivision.h for the primary calling header

#include "Vdivision___024root.h"
#include "Vdivision__Syms.h"

//==========

VL_INLINE_OPT void Vdivision___024root___combo__TOP__1(Vdivision___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___combo__TOP__1\n"); );
    // Variables
    CData/*0:0*/ division__DOT__X0__DOT__operation_add_sub_signal;
    CData/*7:0*/ division__DOT__X0__DOT__exponent_diff;
    CData/*0:0*/ division__DOT__X0__DOT__perform;
    CData/*4:0*/ division__DOT__X0__DOT__pe__DOT__shift;
    CData/*0:0*/ division__DOT__X1__DOT__M1__DOT__zero;
    CData/*0:0*/ division__DOT__X1__DOT__A1__DOT__operation_add_sub_signal;
    CData/*7:0*/ division__DOT__X1__DOT__A1__DOT__exponent_diff;
    CData/*0:0*/ division__DOT__X1__DOT__A1__DOT__perform;
    CData/*4:0*/ division__DOT__X1__DOT__A1__DOT__pe__DOT__shift;
    CData/*0:0*/ division__DOT__X1__DOT__M2__DOT__exception;
    CData/*0:0*/ division__DOT__X1__DOT__M2__DOT__sign;
    CData/*0:0*/ division__DOT__X1__DOT__M2__DOT__zero;
    CData/*0:0*/ division__DOT__X2__DOT__M1__DOT__zero;
    CData/*0:0*/ division__DOT__X2__DOT__A1__DOT__operation_add_sub_signal;
    CData/*7:0*/ division__DOT__X2__DOT__A1__DOT__exponent_diff;
    CData/*0:0*/ division__DOT__X2__DOT__A1__DOT__perform;
    CData/*4:0*/ division__DOT__X2__DOT__A1__DOT__pe__DOT__shift;
    CData/*0:0*/ division__DOT__X2__DOT__M2__DOT__exception;
    CData/*0:0*/ division__DOT__X2__DOT__M2__DOT__sign;
    CData/*0:0*/ division__DOT__X2__DOT__M2__DOT__zero;
    CData/*0:0*/ division__DOT__X3__DOT__M1__DOT__zero;
    CData/*0:0*/ division__DOT__X3__DOT__A1__DOT__operation_add_sub_signal;
    CData/*7:0*/ division__DOT__X3__DOT__A1__DOT__exponent_diff;
    CData/*0:0*/ division__DOT__X3__DOT__A1__DOT__perform;
    CData/*4:0*/ division__DOT__X3__DOT__A1__DOT__pe__DOT__shift;
    CData/*0:0*/ division__DOT__X3__DOT__M2__DOT__exception;
    CData/*0:0*/ division__DOT__X3__DOT__M2__DOT__sign;
    CData/*0:0*/ division__DOT__X3__DOT__M2__DOT__zero;
    CData/*0:0*/ division__DOT__END__DOT__exception;
    CData/*0:0*/ division__DOT__END__DOT__sign;
    CData/*0:0*/ division__DOT__END__DOT__zero;
    SData/*8:0*/ division__DOT__X1__DOT__M1__DOT__exponent;
    SData/*8:0*/ division__DOT__X1__DOT__M2__DOT__exponent;
    SData/*8:0*/ division__DOT__X2__DOT__M1__DOT__exponent;
    SData/*8:0*/ division__DOT__X2__DOT__M2__DOT__exponent;
    SData/*8:0*/ division__DOT__X3__DOT__M1__DOT__exponent;
    SData/*8:0*/ division__DOT__X3__DOT__M2__DOT__exponent;
    SData/*8:0*/ division__DOT__END__DOT__exponent;
    IData/*31:0*/ division__DOT__op_a;
    IData/*31:0*/ division__DOT__Intermediate_X0;
    IData/*31:0*/ division__DOT__Iteration_X0;
    IData/*31:0*/ division__DOT__Iteration_X1;
    IData/*31:0*/ division__DOT__Iteration_X2;
    IData/*31:0*/ division__DOT__Iteration_X3;
    IData/*22:0*/ division__DOT__x0__DOT__product_mantissa;
    IData/*31:0*/ division__DOT__X0__DOT__op_a;
    IData/*31:0*/ division__DOT__X0__DOT__op_b;
    IData/*23:0*/ division__DOT__X0__DOT__significand_a;
    IData/*23:0*/ division__DOT__X0__DOT__significand_b_add_sub;
    IData/*24:0*/ division__DOT__X0__DOT__significand_add;
    IData/*24:0*/ division__DOT__X0__DOT__significand_sub;
    IData/*24:0*/ division__DOT__X0__DOT__subtraction_diff;
    IData/*31:0*/ division__DOT__X1__DOT__Intermediate_Value1;
    IData/*31:0*/ division__DOT__X1__DOT__Intermediate_Value2;
    IData/*22:0*/ division__DOT__X1__DOT__M1__DOT__product_mantissa;
    IData/*31:0*/ division__DOT__X1__DOT__A1__DOT__op_a;
    IData/*31:0*/ division__DOT__X1__DOT__A1__DOT__op_b;
    IData/*23:0*/ division__DOT__X1__DOT__A1__DOT__significand_a;
    IData/*23:0*/ division__DOT__X1__DOT__A1__DOT__significand_b_add_sub;
    IData/*24:0*/ division__DOT__X1__DOT__A1__DOT__significand_add;
    IData/*24:0*/ division__DOT__X1__DOT__A1__DOT__significand_sub;
    IData/*24:0*/ division__DOT__X1__DOT__A1__DOT__subtraction_diff;
    IData/*22:0*/ division__DOT__X1__DOT__M2__DOT__product_mantissa;
    IData/*31:0*/ division__DOT__X2__DOT__Intermediate_Value1;
    IData/*31:0*/ division__DOT__X2__DOT__Intermediate_Value2;
    IData/*22:0*/ division__DOT__X2__DOT__M1__DOT__product_mantissa;
    IData/*31:0*/ division__DOT__X2__DOT__A1__DOT__op_a;
    IData/*31:0*/ division__DOT__X2__DOT__A1__DOT__op_b;
    IData/*23:0*/ division__DOT__X2__DOT__A1__DOT__significand_a;
    IData/*23:0*/ division__DOT__X2__DOT__A1__DOT__significand_b_add_sub;
    IData/*24:0*/ division__DOT__X2__DOT__A1__DOT__significand_add;
    IData/*24:0*/ division__DOT__X2__DOT__A1__DOT__significand_sub;
    IData/*24:0*/ division__DOT__X2__DOT__A1__DOT__subtraction_diff;
    IData/*22:0*/ division__DOT__X2__DOT__M2__DOT__product_mantissa;
    IData/*31:0*/ division__DOT__X3__DOT__Intermediate_Value1;
    IData/*31:0*/ division__DOT__X3__DOT__Intermediate_Value2;
    IData/*22:0*/ division__DOT__X3__DOT__M1__DOT__product_mantissa;
    IData/*31:0*/ division__DOT__X3__DOT__A1__DOT__op_a;
    IData/*31:0*/ division__DOT__X3__DOT__A1__DOT__op_b;
    IData/*23:0*/ division__DOT__X3__DOT__A1__DOT__significand_a;
    IData/*23:0*/ division__DOT__X3__DOT__A1__DOT__significand_b_add_sub;
    IData/*24:0*/ division__DOT__X3__DOT__A1__DOT__significand_add;
    IData/*24:0*/ division__DOT__X3__DOT__A1__DOT__significand_sub;
    IData/*24:0*/ division__DOT__X3__DOT__A1__DOT__subtraction_diff;
    IData/*22:0*/ division__DOT__X3__DOT__M2__DOT__product_mantissa;
    IData/*22:0*/ division__DOT__END__DOT__product_mantissa;
    QData/*47:0*/ division__DOT__x0__DOT__product_normalised;
    QData/*47:0*/ division__DOT__X1__DOT__M1__DOT__product;
    QData/*47:0*/ division__DOT__X1__DOT__M1__DOT__product_normalised;
    QData/*47:0*/ division__DOT__X1__DOT__M2__DOT__product;
    QData/*47:0*/ division__DOT__X1__DOT__M2__DOT__product_normalised;
    QData/*47:0*/ division__DOT__X2__DOT__M1__DOT__product;
    QData/*47:0*/ division__DOT__X2__DOT__M1__DOT__product_normalised;
    QData/*47:0*/ division__DOT__X2__DOT__M2__DOT__product;
    QData/*47:0*/ division__DOT__X2__DOT__M2__DOT__product_normalised;
    QData/*47:0*/ division__DOT__X3__DOT__M1__DOT__product;
    QData/*47:0*/ division__DOT__X3__DOT__M1__DOT__product_normalised;
    QData/*47:0*/ division__DOT__X3__DOT__M2__DOT__product;
    QData/*47:0*/ division__DOT__X3__DOT__M2__DOT__product_normalised;
    QData/*47:0*/ division__DOT__END__DOT__product;
    QData/*47:0*/ division__DOT__END__DOT__product_normalised;
    // Body
    vlSelf->exception = ((0xffU == (0xffU & (vlSelf->a 
                                             >> 0x17U))) 
                         | (0xffU == (0xffU & (vlSelf->b 
                                               >> 0x17U))));
    division__DOT__op_a = ((0x80000000U & vlSelf->a) 
                           | ((0x7f800000U & (((vlSelf->a 
                                                >> 0x17U) 
                                               + ((IData)(0x7eU) 
                                                  - 
                                                  (vlSelf->b 
                                                   >> 0x17U))) 
                                              << 0x17U)) 
                              | (0x7fffffU & vlSelf->a)));
    division__DOT__x0__DOT__product_normalised = (0xffffffffffffULL 
                                                  & ((1U 
                                                      & (IData)(
                                                                (1ULL 
                                                                 & ((0x8b4b4bULL 
                                                                     * (QData)((IData)(
                                                                                (0x800000U 
                                                                                | (0x7fffffU 
                                                                                & vlSelf->b))))) 
                                                                    >> 0x2fU))))
                                                      ? 
                                                     (0x8b4b4bULL 
                                                      * (QData)((IData)(
                                                                        (0x800000U 
                                                                         | (0x7fffffU 
                                                                            & vlSelf->b)))))
                                                      : 
                                                     ((0x8b4b4bULL 
                                                       * (QData)((IData)(
                                                                         (0x800000U 
                                                                          | (0x7fffffU 
                                                                             & vlSelf->b))))) 
                                                      << 1U)));
    division__DOT__x0__DOT__product_mantissa = (0x7fffffU 
                                                & ((IData)(
                                                           (division__DOT__x0__DOT__product_normalised 
                                                            >> 0x18U)) 
                                                   + 
                                                   ((IData)(
                                                            (division__DOT__x0__DOT__product_normalised 
                                                             >> 0x17U)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & (IData)(division__DOT__x0__DOT__product_normalised))))));
    division__DOT__Intermediate_X0 = ((0U == division__DOT__x0__DOT__product_mantissa)
                                       ? 0x80000000U
                                       : ((1U & (((
                                                   ((IData)(0x7fU) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (1ULL 
                                                                & ((0x8b4b4bULL 
                                                                    * (QData)((IData)(
                                                                                (0x800000U 
                                                                                | (0x7fffffU 
                                                                                & vlSelf->b))))) 
                                                                   >> 0x2fU))))) 
                                                   >> 8U) 
                                                  & (~ 
                                                     (3U 
                                                      & (((IData)(0x7fU) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (1ULL 
                                                                      & ((0x8b4b4bULL 
                                                                          * (QData)((IData)(
                                                                                (0x800000U 
                                                                                | (0x7fffffU 
                                                                                & vlSelf->b))))) 
                                                                         >> 0x2fU))))) 
                                                         >> 7U)))) 
                                                 & (0U 
                                                    != division__DOT__x0__DOT__product_mantissa)))
                                           ? 0xff800000U
                                           : ((1U & 
                                               (((((IData)(0x7fU) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (1ULL 
                                                               & ((0x8b4b4bULL 
                                                                   * (QData)((IData)(
                                                                                (0x800000U 
                                                                                | (0x7fffffU 
                                                                                & vlSelf->b))))) 
                                                                  >> 0x2fU))))) 
                                                  >> 8U) 
                                                 & (((IData)(0x7fU) 
                                                     + 
                                                     (1U 
                                                      & (IData)(
                                                                (1ULL 
                                                                 & ((0x8b4b4bULL 
                                                                     * (QData)((IData)(
                                                                                (0x800000U 
                                                                                | (0x7fffffU 
                                                                                & vlSelf->b))))) 
                                                                    >> 0x2fU))))) 
                                                    >> 7U)) 
                                                & (0U 
                                                   != division__DOT__x0__DOT__product_mantissa)))
                                               ? 0x80000000U
                                               : (0x80000000U 
                                                  | ((0x7f800000U 
                                                      & (((IData)(0x7fU) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (1ULL 
                                                                      & ((0x8b4b4bULL 
                                                                          * (QData)((IData)(
                                                                                (0x800000U 
                                                                                | (0x7fffffU 
                                                                                & vlSelf->b))))) 
                                                                         >> 0x2fU))))) 
                                                         << 0x17U)) 
                                                     | division__DOT__x0__DOT__product_mantissa)))));
    if ((0x4034b4b5U > (0x7fffffffU & division__DOT__Intermediate_X0))) {
        division__DOT__X0__DOT__op_b = (IData)((0x4034b4b500000000ULL 
                                                | (QData)((IData)(division__DOT__Intermediate_X0))));
        division__DOT__X0__DOT__op_a = (IData)(((0x4034b4b500000000ULL 
                                                 | (QData)((IData)(division__DOT__Intermediate_X0))) 
                                                >> 0x20U));
    } else {
        division__DOT__X0__DOT__op_b = 0x4034b4b5U;
        division__DOT__X0__DOT__op_a = (IData)((QData)((IData)(division__DOT__Intermediate_X0)));
    }
    division__DOT__X0__DOT__significand_a = ((0U != 
                                              (0xffU 
                                               & (division__DOT__X0__DOT__op_a 
                                                  >> 0x17U)))
                                              ? (0x800000U 
                                                 | (0x7fffffU 
                                                    & division__DOT__X0__DOT__op_a))
                                              : (0x7fffffU 
                                                 & division__DOT__X0__DOT__op_a));
    division__DOT__X0__DOT__operation_add_sub_signal 
        = (1U & (~ ((division__DOT__X0__DOT__op_a ^ division__DOT__X0__DOT__op_b) 
                    >> 0x1fU)));
    division__DOT__X0__DOT__exponent_diff = (0xffU 
                                             & ((division__DOT__X0__DOT__op_a 
                                                 >> 0x17U) 
                                                - (division__DOT__X0__DOT__op_b 
                                                   >> 0x17U)));
    division__DOT__X0__DOT__significand_b_add_sub = 
        ((0x17U >= (IData)(division__DOT__X0__DOT__exponent_diff))
          ? (0xffffffU & (((0U != (0xffU & (division__DOT__X0__DOT__op_b 
                                            >> 0x17U)))
                            ? (0x800000U | (0x7fffffU 
                                            & division__DOT__X0__DOT__op_b))
                            : (0x7fffffU & division__DOT__X0__DOT__op_b)) 
                          >> (IData)(division__DOT__X0__DOT__exponent_diff)))
          : 0U);
    division__DOT__X0__DOT__perform = ((0xffU & (division__DOT__X0__DOT__op_a 
                                                 >> 0x17U)) 
                                       == (0xffU & 
                                           ((division__DOT__X0__DOT__op_b 
                                             >> 0x17U) 
                                            + (IData)(division__DOT__X0__DOT__exponent_diff))));
    division__DOT__X0__DOT__significand_add = (((IData)(division__DOT__X0__DOT__perform) 
                                                & (IData)(division__DOT__X0__DOT__operation_add_sub_signal))
                                                ? (0x1ffffffU 
                                                   & (division__DOT__X0__DOT__significand_a 
                                                      + division__DOT__X0__DOT__significand_b_add_sub))
                                                : 0U);
    division__DOT__X0__DOT__significand_sub = ((IData)(division__DOT__X0__DOT__perform)
                                                ? (0x1ffffffU 
                                                   & (division__DOT__X0__DOT__significand_a 
                                                      + 
                                                      (((IData)(division__DOT__X0__DOT__perform) 
                                                        & (~ (IData)(division__DOT__X0__DOT__operation_add_sub_signal)))
                                                        ? 
                                                       (0xffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ division__DOT__X0__DOT__significand_b_add_sub)))
                                                        : 0U)))
                                                : 0U);
    vlSelf->division__DOT__X0__DOT__add_sum = ((0x7f800000U 
                                                & vlSelf->division__DOT__X0__DOT__add_sum) 
                                               | (0x7fffffU 
                                                  & ((0x1000000U 
                                                      & division__DOT__X0__DOT__significand_add)
                                                      ? 
                                                     (division__DOT__X0__DOT__significand_add 
                                                      >> 1U)
                                                      : division__DOT__X0__DOT__significand_add)));
    vlSelf->division__DOT__X0__DOT__add_sum = ((0x7fffffU 
                                                & vlSelf->division__DOT__X0__DOT__add_sum) 
                                               | (0x7f800000U 
                                                  & (((0x1000000U 
                                                       & division__DOT__X0__DOT__significand_add)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (division__DOT__X0__DOT__op_a 
                                                        >> 0x17U))
                                                       : 
                                                      (division__DOT__X0__DOT__op_a 
                                                       >> 0x17U)) 
                                                     << 0x17U)));
    if (((((((((0x1800000U == (0x1800000U & division__DOT__X0__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & division__DOT__X0__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & division__DOT__X0__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & division__DOT__X0__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & division__DOT__X0__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & division__DOT__X0__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & division__DOT__X0__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & division__DOT__X0__DOT__significand_sub)))) {
        division__DOT__X0__DOT__pe__DOT__shift = ((0x1800000U 
                                                   == 
                                                   (0x1800000U 
                                                    & division__DOT__X0__DOT__significand_sub))
                                                   ? 0U
                                                   : 
                                                  ((0x1400000U 
                                                    == 
                                                    (0x1c00000U 
                                                     & division__DOT__X0__DOT__significand_sub))
                                                    ? 1U
                                                    : 
                                                   ((0x1200000U 
                                                     == 
                                                     (0x1e00000U 
                                                      & division__DOT__X0__DOT__significand_sub))
                                                     ? 2U
                                                     : 
                                                    ((0x1100000U 
                                                      == 
                                                      (0x1f00000U 
                                                       & division__DOT__X0__DOT__significand_sub))
                                                      ? 3U
                                                      : 
                                                     ((0x1080000U 
                                                       == 
                                                       (0x1f80000U 
                                                        & division__DOT__X0__DOT__significand_sub))
                                                       ? 4U
                                                       : 
                                                      ((0x1040000U 
                                                        == 
                                                        (0x1fc0000U 
                                                         & division__DOT__X0__DOT__significand_sub))
                                                        ? 5U
                                                        : 
                                                       ((0x1020000U 
                                                         == 
                                                         (0x1fe0000U 
                                                          & division__DOT__X0__DOT__significand_sub))
                                                         ? 6U
                                                         : 7U)))))));
        division__DOT__X0__DOT__subtraction_diff = 
            (0x1ffffffU & ((0x1800000U == (0x1800000U 
                                           & division__DOT__X0__DOT__significand_sub))
                            ? division__DOT__X0__DOT__significand_sub
                            : ((0x1400000U == (0x1c00000U 
                                               & division__DOT__X0__DOT__significand_sub))
                                ? (division__DOT__X0__DOT__significand_sub 
                                   << 1U) : ((0x1200000U 
                                              == (0x1e00000U 
                                                  & division__DOT__X0__DOT__significand_sub))
                                              ? (division__DOT__X0__DOT__significand_sub 
                                                 << 2U)
                                              : ((0x1100000U 
                                                  == 
                                                  (0x1f00000U 
                                                   & division__DOT__X0__DOT__significand_sub))
                                                  ? 
                                                 (division__DOT__X0__DOT__significand_sub 
                                                  << 3U)
                                                  : 
                                                 ((0x1080000U 
                                                   == 
                                                   (0x1f80000U 
                                                    & division__DOT__X0__DOT__significand_sub))
                                                   ? 
                                                  (division__DOT__X0__DOT__significand_sub 
                                                   << 4U)
                                                   : 
                                                  ((0x1040000U 
                                                    == 
                                                    (0x1fc0000U 
                                                     & division__DOT__X0__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X0__DOT__significand_sub 
                                                    << 5U)
                                                    : 
                                                   ((0x1020000U 
                                                     == 
                                                     (0x1fe0000U 
                                                      & division__DOT__X0__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X0__DOT__significand_sub 
                                                     << 6U)
                                                     : 
                                                    (division__DOT__X0__DOT__significand_sub 
                                                     << 7U)))))))));
    } else {
        division__DOT__X0__DOT__pe__DOT__shift = ((
                                                   (((((((0x1008000U 
                                                          == 
                                                          (0x1ff8000U 
                                                           & division__DOT__X0__DOT__significand_sub)) 
                                                         | (0x1004000U 
                                                            == 
                                                            (0x1ffc000U 
                                                             & division__DOT__X0__DOT__significand_sub))) 
                                                        | (0x1002000U 
                                                           == 
                                                           (0x1ffe000U 
                                                            & division__DOT__X0__DOT__significand_sub))) 
                                                       | (0x1001000U 
                                                          == 
                                                          (0x1fff000U 
                                                           & division__DOT__X0__DOT__significand_sub))) 
                                                      | (0x1000800U 
                                                         == 
                                                         (0x1fff800U 
                                                          & division__DOT__X0__DOT__significand_sub))) 
                                                     | (0x1000400U 
                                                        == 
                                                        (0x1fffc00U 
                                                         & division__DOT__X0__DOT__significand_sub))) 
                                                    | (0x1000200U 
                                                       == 
                                                       (0x1fffe00U 
                                                        & division__DOT__X0__DOT__significand_sub))) 
                                                   | (0x1000100U 
                                                      == 
                                                      (0x1ffff00U 
                                                       & division__DOT__X0__DOT__significand_sub)))
                                                   ? 
                                                  ((0x1008000U 
                                                    == 
                                                    (0x1ff8000U 
                                                     & division__DOT__X0__DOT__significand_sub))
                                                    ? 8U
                                                    : 
                                                   ((0x1004000U 
                                                     == 
                                                     (0x1ffc000U 
                                                      & division__DOT__X0__DOT__significand_sub))
                                                     ? 9U
                                                     : 
                                                    ((0x1002000U 
                                                      == 
                                                      (0x1ffe000U 
                                                       & division__DOT__X0__DOT__significand_sub))
                                                      ? 0xaU
                                                      : 
                                                     ((0x1001000U 
                                                       == 
                                                       (0x1fff000U 
                                                        & division__DOT__X0__DOT__significand_sub))
                                                       ? 0xbU
                                                       : 
                                                      ((0x1000800U 
                                                        == 
                                                        (0x1fff800U 
                                                         & division__DOT__X0__DOT__significand_sub))
                                                        ? 0xcU
                                                        : 
                                                       ((0x1000400U 
                                                         == 
                                                         (0x1fffc00U 
                                                          & division__DOT__X0__DOT__significand_sub))
                                                         ? 0xdU
                                                         : 
                                                        ((0x1000200U 
                                                          == 
                                                          (0x1fffe00U 
                                                           & division__DOT__X0__DOT__significand_sub))
                                                          ? 0xeU
                                                          : 0xfU)))))))
                                                   : 
                                                  (((((((((0x1000080U 
                                                           == 
                                                           (0x1ffff80U 
                                                            & division__DOT__X0__DOT__significand_sub)) 
                                                          | (0x1000040U 
                                                             == 
                                                             (0x1ffffc0U 
                                                              & division__DOT__X0__DOT__significand_sub))) 
                                                         | (0x1000020U 
                                                            == 
                                                            (0x1ffffe0U 
                                                             & division__DOT__X0__DOT__significand_sub))) 
                                                        | (0x1000010U 
                                                           == 
                                                           (0x1fffff0U 
                                                            & division__DOT__X0__DOT__significand_sub))) 
                                                       | (0x1000008U 
                                                          == 
                                                          (0x1fffff8U 
                                                           & division__DOT__X0__DOT__significand_sub))) 
                                                      | (0x1000004U 
                                                         == 
                                                         (0x1fffffcU 
                                                          & division__DOT__X0__DOT__significand_sub))) 
                                                     | (0x1000002U 
                                                        == 
                                                        (0x1fffffeU 
                                                         & division__DOT__X0__DOT__significand_sub))) 
                                                    | (0x1000001U 
                                                       == division__DOT__X0__DOT__significand_sub))
                                                    ? 
                                                   ((0x1000080U 
                                                     == 
                                                     (0x1ffff80U 
                                                      & division__DOT__X0__DOT__significand_sub))
                                                     ? 0x10U
                                                     : 
                                                    ((0x1000040U 
                                                      == 
                                                      (0x1ffffc0U 
                                                       & division__DOT__X0__DOT__significand_sub))
                                                      ? 0x11U
                                                      : 
                                                     ((0x1000020U 
                                                       == 
                                                       (0x1ffffe0U 
                                                        & division__DOT__X0__DOT__significand_sub))
                                                       ? 0x12U
                                                       : 
                                                      ((0x1000010U 
                                                        == 
                                                        (0x1fffff0U 
                                                         & division__DOT__X0__DOT__significand_sub))
                                                        ? 0x13U
                                                        : 
                                                       ((0x1000008U 
                                                         == 
                                                         (0x1fffff8U 
                                                          & division__DOT__X0__DOT__significand_sub))
                                                         ? 0x14U
                                                         : 
                                                        ((0x1000004U 
                                                          == 
                                                          (0x1fffffcU 
                                                           & division__DOT__X0__DOT__significand_sub))
                                                          ? 0x15U
                                                          : 
                                                         ((0x1000002U 
                                                           == 
                                                           (0x1fffffeU 
                                                            & division__DOT__X0__DOT__significand_sub))
                                                           ? 0x16U
                                                           : 0x17U)))))))
                                                    : 
                                                   ((0x1000000U 
                                                     == division__DOT__X0__DOT__significand_sub)
                                                     ? 0x18U
                                                     : 0U)));
        division__DOT__X0__DOT__subtraction_diff = 
            (0x1ffffffU & (((((((((0x1008000U == (0x1ff8000U 
                                                  & division__DOT__X0__DOT__significand_sub)) 
                                  | (0x1004000U == 
                                     (0x1ffc000U & division__DOT__X0__DOT__significand_sub))) 
                                 | (0x1002000U == (0x1ffe000U 
                                                   & division__DOT__X0__DOT__significand_sub))) 
                                | (0x1001000U == (0x1fff000U 
                                                  & division__DOT__X0__DOT__significand_sub))) 
                               | (0x1000800U == (0x1fff800U 
                                                 & division__DOT__X0__DOT__significand_sub))) 
                              | (0x1000400U == (0x1fffc00U 
                                                & division__DOT__X0__DOT__significand_sub))) 
                             | (0x1000200U == (0x1fffe00U 
                                               & division__DOT__X0__DOT__significand_sub))) 
                            | (0x1000100U == (0x1ffff00U 
                                              & division__DOT__X0__DOT__significand_sub)))
                            ? ((0x1008000U == (0x1ff8000U 
                                               & division__DOT__X0__DOT__significand_sub))
                                ? (division__DOT__X0__DOT__significand_sub 
                                   << 8U) : ((0x1004000U 
                                              == (0x1ffc000U 
                                                  & division__DOT__X0__DOT__significand_sub))
                                              ? (division__DOT__X0__DOT__significand_sub 
                                                 << 9U)
                                              : ((0x1002000U 
                                                  == 
                                                  (0x1ffe000U 
                                                   & division__DOT__X0__DOT__significand_sub))
                                                  ? 
                                                 (division__DOT__X0__DOT__significand_sub 
                                                  << 0xaU)
                                                  : 
                                                 ((0x1001000U 
                                                   == 
                                                   (0x1fff000U 
                                                    & division__DOT__X0__DOT__significand_sub))
                                                   ? 
                                                  (division__DOT__X0__DOT__significand_sub 
                                                   << 0xbU)
                                                   : 
                                                  ((0x1000800U 
                                                    == 
                                                    (0x1fff800U 
                                                     & division__DOT__X0__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X0__DOT__significand_sub 
                                                    << 0xcU)
                                                    : 
                                                   ((0x1000400U 
                                                     == 
                                                     (0x1fffc00U 
                                                      & division__DOT__X0__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X0__DOT__significand_sub 
                                                     << 0xdU)
                                                     : 
                                                    ((0x1000200U 
                                                      == 
                                                      (0x1fffe00U 
                                                       & division__DOT__X0__DOT__significand_sub))
                                                      ? 
                                                     (division__DOT__X0__DOT__significand_sub 
                                                      << 0xeU)
                                                      : 
                                                     (division__DOT__X0__DOT__significand_sub 
                                                      << 0xfU))))))))
                            : (((((((((0x1000080U == 
                                       (0x1ffff80U 
                                        & division__DOT__X0__DOT__significand_sub)) 
                                      | (0x1000040U 
                                         == (0x1ffffc0U 
                                             & division__DOT__X0__DOT__significand_sub))) 
                                     | (0x1000020U 
                                        == (0x1ffffe0U 
                                            & division__DOT__X0__DOT__significand_sub))) 
                                    | (0x1000010U == 
                                       (0x1fffff0U 
                                        & division__DOT__X0__DOT__significand_sub))) 
                                   | (0x1000008U == 
                                      (0x1fffff8U & division__DOT__X0__DOT__significand_sub))) 
                                  | (0x1000004U == 
                                     (0x1fffffcU & division__DOT__X0__DOT__significand_sub))) 
                                 | (0x1000002U == (0x1fffffeU 
                                                   & division__DOT__X0__DOT__significand_sub))) 
                                | (0x1000001U == division__DOT__X0__DOT__significand_sub))
                                ? ((0x1000080U == (0x1ffff80U 
                                                   & division__DOT__X0__DOT__significand_sub))
                                    ? (division__DOT__X0__DOT__significand_sub 
                                       << 0x10U) : 
                                   ((0x1000040U == 
                                     (0x1ffffc0U & division__DOT__X0__DOT__significand_sub))
                                     ? (division__DOT__X0__DOT__significand_sub 
                                        << 0x11U) : 
                                    ((0x1000020U == 
                                      (0x1ffffe0U & division__DOT__X0__DOT__significand_sub))
                                      ? (division__DOT__X0__DOT__significand_sub 
                                         << 0x12U) : 
                                     ((0x1000010U == 
                                       (0x1fffff0U 
                                        & division__DOT__X0__DOT__significand_sub))
                                       ? (division__DOT__X0__DOT__significand_sub 
                                          << 0x13U)
                                       : ((0x1000008U 
                                           == (0x1fffff8U 
                                               & division__DOT__X0__DOT__significand_sub))
                                           ? (division__DOT__X0__DOT__significand_sub 
                                              << 0x14U)
                                           : ((0x1000004U 
                                               == (0x1fffffcU 
                                                   & division__DOT__X0__DOT__significand_sub))
                                               ? (division__DOT__X0__DOT__significand_sub 
                                                  << 0x15U)
                                               : ((0x1000002U 
                                                   == 
                                                   (0x1fffffeU 
                                                    & division__DOT__X0__DOT__significand_sub))
                                                   ? 
                                                  (division__DOT__X0__DOT__significand_sub 
                                                   << 0x16U)
                                                   : 
                                                  (division__DOT__X0__DOT__significand_sub 
                                                   << 0x17U))))))))
                                : ((0x1000000U == division__DOT__X0__DOT__significand_sub)
                                    ? (division__DOT__X0__DOT__significand_sub 
                                       << 0x18U) : 
                                   ((IData)(1U) + (~ division__DOT__X0__DOT__significand_sub))))));
    }
    division__DOT__Iteration_X0 = (((0xffU == (0xffU 
                                               & (division__DOT__X0__DOT__op_a 
                                                  >> 0x17U))) 
                                    | (0xffU == (0xffU 
                                                 & (division__DOT__X0__DOT__op_b 
                                                    >> 0x17U))))
                                    ? 0U : ((IData)(division__DOT__X0__DOT__operation_add_sub_signal)
                                             ? ((0x80000000U 
                                                 & division__DOT__X0__DOT__op_a) 
                                                | vlSelf->division__DOT__X0__DOT__add_sum)
                                             : ((0x80000000U 
                                                 & division__DOT__X0__DOT__op_a) 
                                                | ((0x7f800000U 
                                                    & (((division__DOT__X0__DOT__op_a 
                                                         >> 0x17U) 
                                                        - (IData)(division__DOT__X0__DOT__pe__DOT__shift)) 
                                                       << 0x17U)) 
                                                   | (0x7fffffU 
                                                      & division__DOT__X0__DOT__subtraction_diff)))));
    division__DOT__X1__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                & ((QData)((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (division__DOT__Iteration_X0 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & division__DOT__Iteration_X0))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & division__DOT__Iteration_X0)))) 
                                                   * (QData)((IData)(
                                                                     (0x800000U 
                                                                      | (0x7fffffU 
                                                                         & vlSelf->b))))));
    division__DOT__X1__DOT__M1__DOT__exponent = (0x1ffU 
                                                 & ((IData)(0x1ffU) 
                                                    + 
                                                    ((0xffU 
                                                      & (division__DOT__Iteration_X0 
                                                         >> 0x17U)) 
                                                     + 
                                                     (1U 
                                                      & (IData)(
                                                                (division__DOT__X1__DOT__M1__DOT__product 
                                                                 >> 0x2fU))))));
    division__DOT__X1__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((division__DOT__X1__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? division__DOT__X1__DOT__M1__DOT__product
                                 : (division__DOT__X1__DOT__M1__DOT__product 
                                    << 1U)));
    division__DOT__X1__DOT__M1__DOT__product_mantissa 
        = (0x7fffffU & ((IData)((division__DOT__X1__DOT__M1__DOT__product_normalised 
                                 >> 0x18U)) + ((IData)(
                                                       (division__DOT__X1__DOT__M1__DOT__product_normalised 
                                                        >> 0x17U)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(division__DOT__X1__DOT__M1__DOT__product_normalised))))));
    division__DOT__X1__DOT__M1__DOT__zero = ((~ (IData)(
                                                        (0xffU 
                                                         == 
                                                         (0xffU 
                                                          & (division__DOT__Iteration_X0 
                                                             >> 0x17U))))) 
                                             & (0U 
                                                == division__DOT__X1__DOT__M1__DOT__product_mantissa));
    division__DOT__X1__DOT__Intermediate_Value1 = (
                                                   (0xffU 
                                                    == 
                                                    (0xffU 
                                                     & (division__DOT__Iteration_X0 
                                                        >> 0x17U)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(division__DOT__X1__DOT__M1__DOT__zero)
                                                     ? 
                                                    (0x80000000U 
                                                     & division__DOT__Iteration_X0)
                                                     : 
                                                    ((1U 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(division__DOT__X1__DOT__M1__DOT__exponent)))) 
                                                         & (~ (IData)(division__DOT__X1__DOT__M1__DOT__zero))))
                                                      ? 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & division__DOT__Iteration_X0))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(
                                                                  (0x180U 
                                                                   == 
                                                                   (0x180U 
                                                                    & (IData)(division__DOT__X1__DOT__M1__DOT__exponent)))) 
                                                          & (~ (IData)(division__DOT__X1__DOT__M1__DOT__zero))))
                                                       ? 
                                                      (0x80000000U 
                                                       & division__DOT__Iteration_X0)
                                                       : 
                                                      ((0x80000000U 
                                                        & division__DOT__Iteration_X0) 
                                                       | ((0x7f800000U 
                                                           & ((IData)(division__DOT__X1__DOT__M1__DOT__exponent) 
                                                              << 0x17U)) 
                                                          | division__DOT__X1__DOT__M1__DOT__product_mantissa))))));
    if ((0x40000000U < (0x7fffffffU & division__DOT__X1__DOT__Intermediate_Value1))) {
        division__DOT__X1__DOT__A1__DOT__op_b = (IData)(
                                                        (0x40000000ULL 
                                                         | ((QData)((IData)(
                                                                            (0x80000000U 
                                                                             | (0x7fffffffU 
                                                                                & division__DOT__X1__DOT__Intermediate_Value1)))) 
                                                            << 0x20U)));
        division__DOT__X1__DOT__A1__DOT__op_a = (IData)(
                                                        ((0x40000000ULL 
                                                          | ((QData)((IData)(
                                                                             (0x80000000U 
                                                                              | (0x7fffffffU 
                                                                                & division__DOT__X1__DOT__Intermediate_Value1)))) 
                                                             << 0x20U)) 
                                                         >> 0x20U));
    } else {
        division__DOT__X1__DOT__A1__DOT__op_b = (0x80000000U 
                                                 | (0x7fffffffU 
                                                    & division__DOT__X1__DOT__Intermediate_Value1));
        division__DOT__X1__DOT__A1__DOT__op_a = 0x40000000U;
    }
    division__DOT__X1__DOT__A1__DOT__significand_a 
        = ((0U != (0xffU & (division__DOT__X1__DOT__A1__DOT__op_a 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & division__DOT__X1__DOT__A1__DOT__op_a))
            : (0x7fffffU & division__DOT__X1__DOT__A1__DOT__op_a));
    division__DOT__X1__DOT__A1__DOT__operation_add_sub_signal 
        = (1U & (~ ((division__DOT__X1__DOT__A1__DOT__op_a 
                     ^ division__DOT__X1__DOT__A1__DOT__op_b) 
                    >> 0x1fU)));
    division__DOT__X1__DOT__A1__DOT__exponent_diff 
        = (0xffU & ((division__DOT__X1__DOT__A1__DOT__op_a 
                     >> 0x17U) - (division__DOT__X1__DOT__A1__DOT__op_b 
                                  >> 0x17U)));
    division__DOT__X1__DOT__A1__DOT__significand_b_add_sub 
        = ((0x17U >= (IData)(division__DOT__X1__DOT__A1__DOT__exponent_diff))
            ? (0xffffffU & (((0U != (0xffU & (division__DOT__X1__DOT__A1__DOT__op_b 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & division__DOT__X1__DOT__A1__DOT__op_b))
                              : (0x7fffffU & division__DOT__X1__DOT__A1__DOT__op_b)) 
                            >> (IData)(division__DOT__X1__DOT__A1__DOT__exponent_diff)))
            : 0U);
    division__DOT__X1__DOT__A1__DOT__perform = ((0xffU 
                                                 & (division__DOT__X1__DOT__A1__DOT__op_a 
                                                    >> 0x17U)) 
                                                == 
                                                (0xffU 
                                                 & ((division__DOT__X1__DOT__A1__DOT__op_b 
                                                     >> 0x17U) 
                                                    + (IData)(division__DOT__X1__DOT__A1__DOT__exponent_diff))));
    division__DOT__X1__DOT__A1__DOT__significand_add 
        = (((IData)(division__DOT__X1__DOT__A1__DOT__perform) 
            & (IData)(division__DOT__X1__DOT__A1__DOT__operation_add_sub_signal))
            ? (0x1ffffffU & (division__DOT__X1__DOT__A1__DOT__significand_a 
                             + division__DOT__X1__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    division__DOT__X1__DOT__A1__DOT__significand_sub 
        = ((IData)(division__DOT__X1__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (division__DOT__X1__DOT__A1__DOT__significand_a 
                             + (((IData)(division__DOT__X1__DOT__A1__DOT__perform) 
                                 & (~ (IData)(division__DOT__X1__DOT__A1__DOT__operation_add_sub_signal)))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ division__DOT__X1__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    vlSelf->division__DOT__X1__DOT__A1__DOT__add_sum 
        = ((0x7f800000U & vlSelf->division__DOT__X1__DOT__A1__DOT__add_sum) 
           | (0x7fffffU & ((0x1000000U & division__DOT__X1__DOT__A1__DOT__significand_add)
                            ? (division__DOT__X1__DOT__A1__DOT__significand_add 
                               >> 1U) : division__DOT__X1__DOT__A1__DOT__significand_add)));
    vlSelf->division__DOT__X1__DOT__A1__DOT__add_sum 
        = ((0x7fffffU & vlSelf->division__DOT__X1__DOT__A1__DOT__add_sum) 
           | (0x7f800000U & (((0x1000000U & division__DOT__X1__DOT__A1__DOT__significand_add)
                               ? ((IData)(1U) + (division__DOT__X1__DOT__A1__DOT__op_a 
                                                 >> 0x17U))
                               : (division__DOT__X1__DOT__A1__DOT__op_a 
                                  >> 0x17U)) << 0x17U)));
    if (((((((((0x1800000U == (0x1800000U & division__DOT__X1__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & division__DOT__X1__DOT__A1__DOT__significand_sub)))) {
        division__DOT__X1__DOT__A1__DOT__pe__DOT__shift 
            = ((0x1800000U == (0x1800000U & division__DOT__X1__DOT__A1__DOT__significand_sub))
                ? 0U : ((0x1400000U == (0x1c00000U 
                                        & division__DOT__X1__DOT__A1__DOT__significand_sub))
                         ? 1U : ((0x1200000U == (0x1e00000U 
                                                 & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                  ? 2U : ((0x1100000U 
                                           == (0x1f00000U 
                                               & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                           ? 3U : (
                                                   (0x1080000U 
                                                    == 
                                                    (0x1f80000U 
                                                     & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                    ? 4U
                                                    : 
                                                   ((0x1040000U 
                                                     == 
                                                     (0x1fc0000U 
                                                      & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                     ? 5U
                                                     : 
                                                    ((0x1020000U 
                                                      == 
                                                      (0x1fe0000U 
                                                       & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                      ? 6U
                                                      : 7U)))))));
        division__DOT__X1__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((0x1800000U == (0x1800000U 
                                             & division__DOT__X1__DOT__A1__DOT__significand_sub))
                              ? division__DOT__X1__DOT__A1__DOT__significand_sub
                              : ((0x1400000U == (0x1c00000U 
                                                 & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                  ? (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                     << 1U) : ((0x1200000U 
                                                == 
                                                (0x1e00000U 
                                                 & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                ? (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                   << 2U)
                                                : (
                                                   (0x1100000U 
                                                    == 
                                                    (0x1f00000U 
                                                     & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                    << 3U)
                                                    : 
                                                   ((0x1080000U 
                                                     == 
                                                     (0x1f80000U 
                                                      & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                     << 4U)
                                                     : 
                                                    ((0x1040000U 
                                                      == 
                                                      (0x1fc0000U 
                                                       & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                      ? 
                                                     (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                      << 5U)
                                                      : 
                                                     ((0x1020000U 
                                                       == 
                                                       (0x1fe0000U 
                                                        & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                       ? 
                                                      (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                       << 6U)
                                                       : 
                                                      (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                       << 7U)))))))));
    } else {
        division__DOT__X1__DOT__A1__DOT__pe__DOT__shift 
            = (((((((((0x1008000U == (0x1ff8000U & division__DOT__X1__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & division__DOT__X1__DOT__A1__DOT__significand_sub)))
                ? ((0x1008000U == (0x1ff8000U & division__DOT__X1__DOT__A1__DOT__significand_sub))
                    ? 8U : ((0x1004000U == (0x1ffc000U 
                                            & division__DOT__X1__DOT__A1__DOT__significand_sub))
                             ? 9U : ((0x1002000U == 
                                      (0x1ffe000U & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                      ? 0xaU : ((0x1001000U 
                                                 == 
                                                 (0x1fff000U 
                                                  & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000800U 
                                                  == 
                                                  (0x1fff800U 
                                                   & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                  ? 0xcU
                                                  : 
                                                 ((0x1000400U 
                                                   == 
                                                   (0x1fffc00U 
                                                    & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                   ? 0xdU
                                                   : 
                                                  ((0x1000200U 
                                                    == 
                                                    (0x1fffe00U 
                                                     & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : (((((((((0x1000080U == (0x1ffff80U 
                                          & division__DOT__X1__DOT__A1__DOT__significand_sub)) 
                          | (0x1000040U == (0x1ffffc0U 
                                            & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                         | (0x1000020U == (0x1ffffe0U 
                                           & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                        | (0x1000010U == (0x1fffff0U 
                                          & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                       | (0x1000008U == (0x1fffff8U 
                                         & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                      | (0x1000004U == (0x1fffffcU 
                                        & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                     | (0x1000002U == (0x1fffffeU & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                    | (0x1000001U == division__DOT__X1__DOT__A1__DOT__significand_sub))
                    ? ((0x1000080U == (0x1ffff80U & division__DOT__X1__DOT__A1__DOT__significand_sub))
                        ? 0x10U : ((0x1000040U == (0x1ffffc0U 
                                                   & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                    ? 0x11U : ((0x1000020U 
                                                == 
                                                (0x1ffffe0U 
                                                 & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                ? 0x12U
                                                : (
                                                   (0x1000010U 
                                                    == 
                                                    (0x1fffff0U 
                                                     & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                    ? 0x13U
                                                    : 
                                                   ((0x1000008U 
                                                     == 
                                                     (0x1fffff8U 
                                                      & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                     ? 0x14U
                                                     : 
                                                    ((0x1000004U 
                                                      == 
                                                      (0x1fffffcU 
                                                       & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                      ? 0x15U
                                                      : 
                                                     ((0x1000002U 
                                                       == 
                                                       (0x1fffffeU 
                                                        & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : ((0x1000000U == division__DOT__X1__DOT__A1__DOT__significand_sub)
                        ? 0x18U : 0U)));
        division__DOT__X1__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & (((((((((0x1008000U == 
                                     (0x1ff8000U & division__DOT__X1__DOT__A1__DOT__significand_sub)) 
                                    | (0x1004000U == 
                                       (0x1ffc000U 
                                        & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                                   | (0x1002000U == 
                                      (0x1ffe000U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                                  | (0x1001000U == 
                                     (0x1fff000U & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                                 | (0x1000800U == (0x1fff800U 
                                                   & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                                | (0x1000400U == (0x1fffc00U 
                                                  & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                               | (0x1000200U == (0x1fffe00U 
                                                 & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                              | (0x1000100U == (0x1ffff00U 
                                                & division__DOT__X1__DOT__A1__DOT__significand_sub)))
                              ? ((0x1008000U == (0x1ff8000U 
                                                 & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                  ? (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                     << 8U) : ((0x1004000U 
                                                == 
                                                (0x1ffc000U 
                                                 & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                ? (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                   << 9U)
                                                : (
                                                   (0x1002000U 
                                                    == 
                                                    (0x1ffe000U 
                                                     & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                    << 0xaU)
                                                    : 
                                                   ((0x1001000U 
                                                     == 
                                                     (0x1fff000U 
                                                      & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                     << 0xbU)
                                                     : 
                                                    ((0x1000800U 
                                                      == 
                                                      (0x1fff800U 
                                                       & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                      ? 
                                                     (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                      << 0xcU)
                                                      : 
                                                     ((0x1000400U 
                                                       == 
                                                       (0x1fffc00U 
                                                        & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                       ? 
                                                      (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                       << 0xdU)
                                                       : 
                                                      ((0x1000200U 
                                                        == 
                                                        (0x1fffe00U 
                                                         & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                        ? 
                                                       (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                        << 0xeU)
                                                        : 
                                                       (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                        << 0xfU))))))))
                              : (((((((((0x1000080U 
                                         == (0x1ffff80U 
                                             & division__DOT__X1__DOT__A1__DOT__significand_sub)) 
                                        | (0x1000040U 
                                           == (0x1ffffc0U 
                                               & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                                       | (0x1000020U 
                                          == (0x1ffffe0U 
                                              & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                                      | (0x1000010U 
                                         == (0x1fffff0U 
                                             & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                                     | (0x1000008U 
                                        == (0x1fffff8U 
                                            & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                                    | (0x1000004U == 
                                       (0x1fffffcU 
                                        & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                                   | (0x1000002U == 
                                      (0x1fffffeU & division__DOT__X1__DOT__A1__DOT__significand_sub))) 
                                  | (0x1000001U == division__DOT__X1__DOT__A1__DOT__significand_sub))
                                  ? ((0x1000080U == 
                                      (0x1ffff80U & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                      ? (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                         << 0x10U) : 
                                     ((0x1000040U == 
                                       (0x1ffffc0U 
                                        & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                       ? (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                          << 0x11U)
                                       : ((0x1000020U 
                                           == (0x1ffffe0U 
                                               & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                           ? (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                              << 0x12U)
                                           : ((0x1000010U 
                                               == (0x1fffff0U 
                                                   & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                               ? (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                  << 0x13U)
                                               : ((0x1000008U 
                                                   == 
                                                   (0x1fffff8U 
                                                    & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                   ? 
                                                  (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                   << 0x14U)
                                                   : 
                                                  ((0x1000004U 
                                                    == 
                                                    (0x1fffffcU 
                                                     & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                    << 0x15U)
                                                    : 
                                                   ((0x1000002U 
                                                     == 
                                                     (0x1fffffeU 
                                                      & division__DOT__X1__DOT__A1__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                     << 0x16U)
                                                     : 
                                                    (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                                     << 0x17U))))))))
                                  : ((0x1000000U == division__DOT__X1__DOT__A1__DOT__significand_sub)
                                      ? (division__DOT__X1__DOT__A1__DOT__significand_sub 
                                         << 0x18U) : 
                                     ((IData)(1U) + 
                                      (~ division__DOT__X1__DOT__A1__DOT__significand_sub))))));
    }
    division__DOT__X1__DOT__Intermediate_Value2 = (
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (division__DOT__X1__DOT__A1__DOT__op_a 
                                                         >> 0x17U))) 
                                                    | (0xffU 
                                                       == 
                                                       (0xffU 
                                                        & (division__DOT__X1__DOT__A1__DOT__op_b 
                                                           >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(division__DOT__X1__DOT__A1__DOT__operation_add_sub_signal)
                                                     ? 
                                                    ((0x80000000U 
                                                      & division__DOT__X1__DOT__A1__DOT__op_a) 
                                                     | vlSelf->division__DOT__X1__DOT__A1__DOT__add_sum)
                                                     : 
                                                    ((0x80000000U 
                                                      & division__DOT__X1__DOT__A1__DOT__op_a) 
                                                     | ((0x7f800000U 
                                                         & (((division__DOT__X1__DOT__A1__DOT__op_a 
                                                              >> 0x17U) 
                                                             - (IData)(division__DOT__X1__DOT__A1__DOT__pe__DOT__shift)) 
                                                            << 0x17U)) 
                                                        | (0x7fffffU 
                                                           & division__DOT__X1__DOT__A1__DOT__subtraction_diff)))));
    division__DOT__X1__DOT__M2__DOT__sign = ((division__DOT__Iteration_X0 
                                              ^ division__DOT__X1__DOT__Intermediate_Value2) 
                                             >> 0x1fU);
    division__DOT__X1__DOT__M2__DOT__exception = ((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (division__DOT__Iteration_X0 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (division__DOT__X1__DOT__Intermediate_Value2 
                                                         >> 0x17U))));
    division__DOT__X1__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                & ((QData)((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (division__DOT__Iteration_X0 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & division__DOT__Iteration_X0))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & division__DOT__Iteration_X0)))) 
                                                   * (QData)((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xffU 
                                                                        & (division__DOT__X1__DOT__Intermediate_Value2 
                                                                           >> 0x17U)))
                                                                       ? 
                                                                      (0x800000U 
                                                                       | (0x7fffffU 
                                                                          & division__DOT__X1__DOT__Intermediate_Value2))
                                                                       : 
                                                                      (0x7fffffU 
                                                                       & division__DOT__X1__DOT__Intermediate_Value2))))));
    division__DOT__X1__DOT__M2__DOT__exponent = (0x1ffU 
                                                 & ((((0xffU 
                                                       & (division__DOT__Iteration_X0 
                                                          >> 0x17U)) 
                                                      + 
                                                      (0xffU 
                                                       & (division__DOT__X1__DOT__Intermediate_Value2 
                                                          >> 0x17U))) 
                                                     - (IData)(0x7fU)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (division__DOT__X1__DOT__M2__DOT__product 
                                                                >> 0x2fU)))));
    division__DOT__X1__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((division__DOT__X1__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? division__DOT__X1__DOT__M2__DOT__product
                                 : (division__DOT__X1__DOT__M2__DOT__product 
                                    << 1U)));
    division__DOT__X1__DOT__M2__DOT__product_mantissa 
        = (0x7fffffU & ((IData)((division__DOT__X1__DOT__M2__DOT__product_normalised 
                                 >> 0x18U)) + ((IData)(
                                                       (division__DOT__X1__DOT__M2__DOT__product_normalised 
                                                        >> 0x17U)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(division__DOT__X1__DOT__M2__DOT__product_normalised))))));
    division__DOT__X1__DOT__M2__DOT__zero = ((~ (IData)(division__DOT__X1__DOT__M2__DOT__exception)) 
                                             & (0U 
                                                == division__DOT__X1__DOT__M2__DOT__product_mantissa));
    division__DOT__Iteration_X1 = ((IData)(division__DOT__X1__DOT__M2__DOT__exception)
                                    ? 0U : ((IData)(division__DOT__X1__DOT__M2__DOT__zero)
                                             ? ((IData)(division__DOT__X1__DOT__M2__DOT__sign) 
                                                << 0x1fU)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x100U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(division__DOT__X1__DOT__M2__DOT__exponent)))) 
                                                    & (~ (IData)(division__DOT__X1__DOT__M2__DOT__zero))))
                                                 ? 
                                                (0x7f800000U 
                                                 | ((IData)(division__DOT__X1__DOT__M2__DOT__sign) 
                                                    << 0x1fU))
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x180U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(division__DOT__X1__DOT__M2__DOT__exponent)))) 
                                                     & (~ (IData)(division__DOT__X1__DOT__M2__DOT__zero))))
                                                  ? 
                                                 ((IData)(division__DOT__X1__DOT__M2__DOT__sign) 
                                                  << 0x1fU)
                                                  : 
                                                 (((IData)(division__DOT__X1__DOT__M2__DOT__sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & ((IData)(division__DOT__X1__DOT__M2__DOT__exponent) 
                                                         << 0x17U)) 
                                                     | division__DOT__X1__DOT__M2__DOT__product_mantissa))))));
    division__DOT__X2__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                & ((QData)((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (division__DOT__Iteration_X1 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & division__DOT__Iteration_X1))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & division__DOT__Iteration_X1)))) 
                                                   * (QData)((IData)(
                                                                     (0x800000U 
                                                                      | (0x7fffffU 
                                                                         & vlSelf->b))))));
    division__DOT__X2__DOT__M1__DOT__exponent = (0x1ffU 
                                                 & ((IData)(0x1ffU) 
                                                    + 
                                                    ((0xffU 
                                                      & (division__DOT__Iteration_X1 
                                                         >> 0x17U)) 
                                                     + 
                                                     (1U 
                                                      & (IData)(
                                                                (division__DOT__X2__DOT__M1__DOT__product 
                                                                 >> 0x2fU))))));
    division__DOT__X2__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((division__DOT__X2__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? division__DOT__X2__DOT__M1__DOT__product
                                 : (division__DOT__X2__DOT__M1__DOT__product 
                                    << 1U)));
    division__DOT__X2__DOT__M1__DOT__product_mantissa 
        = (0x7fffffU & ((IData)((division__DOT__X2__DOT__M1__DOT__product_normalised 
                                 >> 0x18U)) + ((IData)(
                                                       (division__DOT__X2__DOT__M1__DOT__product_normalised 
                                                        >> 0x17U)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(division__DOT__X2__DOT__M1__DOT__product_normalised))))));
    division__DOT__X2__DOT__M1__DOT__zero = ((~ (IData)(
                                                        (0xffU 
                                                         == 
                                                         (0xffU 
                                                          & (division__DOT__Iteration_X1 
                                                             >> 0x17U))))) 
                                             & (0U 
                                                == division__DOT__X2__DOT__M1__DOT__product_mantissa));
    division__DOT__X2__DOT__Intermediate_Value1 = (
                                                   (0xffU 
                                                    == 
                                                    (0xffU 
                                                     & (division__DOT__Iteration_X1 
                                                        >> 0x17U)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(division__DOT__X2__DOT__M1__DOT__zero)
                                                     ? 
                                                    (0x80000000U 
                                                     & division__DOT__Iteration_X1)
                                                     : 
                                                    ((1U 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(division__DOT__X2__DOT__M1__DOT__exponent)))) 
                                                         & (~ (IData)(division__DOT__X2__DOT__M1__DOT__zero))))
                                                      ? 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & division__DOT__Iteration_X1))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(
                                                                  (0x180U 
                                                                   == 
                                                                   (0x180U 
                                                                    & (IData)(division__DOT__X2__DOT__M1__DOT__exponent)))) 
                                                          & (~ (IData)(division__DOT__X2__DOT__M1__DOT__zero))))
                                                       ? 
                                                      (0x80000000U 
                                                       & division__DOT__Iteration_X1)
                                                       : 
                                                      ((0x80000000U 
                                                        & division__DOT__Iteration_X1) 
                                                       | ((0x7f800000U 
                                                           & ((IData)(division__DOT__X2__DOT__M1__DOT__exponent) 
                                                              << 0x17U)) 
                                                          | division__DOT__X2__DOT__M1__DOT__product_mantissa))))));
    if ((0x40000000U < (0x7fffffffU & division__DOT__X2__DOT__Intermediate_Value1))) {
        division__DOT__X2__DOT__A1__DOT__op_b = (IData)(
                                                        (0x40000000ULL 
                                                         | ((QData)((IData)(
                                                                            (0x80000000U 
                                                                             | (0x7fffffffU 
                                                                                & division__DOT__X2__DOT__Intermediate_Value1)))) 
                                                            << 0x20U)));
        division__DOT__X2__DOT__A1__DOT__op_a = (IData)(
                                                        ((0x40000000ULL 
                                                          | ((QData)((IData)(
                                                                             (0x80000000U 
                                                                              | (0x7fffffffU 
                                                                                & division__DOT__X2__DOT__Intermediate_Value1)))) 
                                                             << 0x20U)) 
                                                         >> 0x20U));
    } else {
        division__DOT__X2__DOT__A1__DOT__op_b = (0x80000000U 
                                                 | (0x7fffffffU 
                                                    & division__DOT__X2__DOT__Intermediate_Value1));
        division__DOT__X2__DOT__A1__DOT__op_a = 0x40000000U;
    }
    division__DOT__X2__DOT__A1__DOT__significand_a 
        = ((0U != (0xffU & (division__DOT__X2__DOT__A1__DOT__op_a 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & division__DOT__X2__DOT__A1__DOT__op_a))
            : (0x7fffffU & division__DOT__X2__DOT__A1__DOT__op_a));
    division__DOT__X2__DOT__A1__DOT__operation_add_sub_signal 
        = (1U & (~ ((division__DOT__X2__DOT__A1__DOT__op_a 
                     ^ division__DOT__X2__DOT__A1__DOT__op_b) 
                    >> 0x1fU)));
    division__DOT__X2__DOT__A1__DOT__exponent_diff 
        = (0xffU & ((division__DOT__X2__DOT__A1__DOT__op_a 
                     >> 0x17U) - (division__DOT__X2__DOT__A1__DOT__op_b 
                                  >> 0x17U)));
    division__DOT__X2__DOT__A1__DOT__significand_b_add_sub 
        = ((0x17U >= (IData)(division__DOT__X2__DOT__A1__DOT__exponent_diff))
            ? (0xffffffU & (((0U != (0xffU & (division__DOT__X2__DOT__A1__DOT__op_b 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & division__DOT__X2__DOT__A1__DOT__op_b))
                              : (0x7fffffU & division__DOT__X2__DOT__A1__DOT__op_b)) 
                            >> (IData)(division__DOT__X2__DOT__A1__DOT__exponent_diff)))
            : 0U);
    division__DOT__X2__DOT__A1__DOT__perform = ((0xffU 
                                                 & (division__DOT__X2__DOT__A1__DOT__op_a 
                                                    >> 0x17U)) 
                                                == 
                                                (0xffU 
                                                 & ((division__DOT__X2__DOT__A1__DOT__op_b 
                                                     >> 0x17U) 
                                                    + (IData)(division__DOT__X2__DOT__A1__DOT__exponent_diff))));
    division__DOT__X2__DOT__A1__DOT__significand_sub 
        = ((IData)(division__DOT__X2__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (division__DOT__X2__DOT__A1__DOT__significand_a 
                             + (((IData)(division__DOT__X2__DOT__A1__DOT__perform) 
                                 & (~ (IData)(division__DOT__X2__DOT__A1__DOT__operation_add_sub_signal)))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ division__DOT__X2__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    division__DOT__X2__DOT__A1__DOT__significand_add 
        = (((IData)(division__DOT__X2__DOT__A1__DOT__perform) 
            & (IData)(division__DOT__X2__DOT__A1__DOT__operation_add_sub_signal))
            ? (0x1ffffffU & (division__DOT__X2__DOT__A1__DOT__significand_a 
                             + division__DOT__X2__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    if (((((((((0x1800000U == (0x1800000U & division__DOT__X2__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & division__DOT__X2__DOT__A1__DOT__significand_sub)))) {
        division__DOT__X2__DOT__A1__DOT__pe__DOT__shift 
            = ((0x1800000U == (0x1800000U & division__DOT__X2__DOT__A1__DOT__significand_sub))
                ? 0U : ((0x1400000U == (0x1c00000U 
                                        & division__DOT__X2__DOT__A1__DOT__significand_sub))
                         ? 1U : ((0x1200000U == (0x1e00000U 
                                                 & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                  ? 2U : ((0x1100000U 
                                           == (0x1f00000U 
                                               & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                           ? 3U : (
                                                   (0x1080000U 
                                                    == 
                                                    (0x1f80000U 
                                                     & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                    ? 4U
                                                    : 
                                                   ((0x1040000U 
                                                     == 
                                                     (0x1fc0000U 
                                                      & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                     ? 5U
                                                     : 
                                                    ((0x1020000U 
                                                      == 
                                                      (0x1fe0000U 
                                                       & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                      ? 6U
                                                      : 7U)))))));
        division__DOT__X2__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((0x1800000U == (0x1800000U 
                                             & division__DOT__X2__DOT__A1__DOT__significand_sub))
                              ? division__DOT__X2__DOT__A1__DOT__significand_sub
                              : ((0x1400000U == (0x1c00000U 
                                                 & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                  ? (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                     << 1U) : ((0x1200000U 
                                                == 
                                                (0x1e00000U 
                                                 & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                ? (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                   << 2U)
                                                : (
                                                   (0x1100000U 
                                                    == 
                                                    (0x1f00000U 
                                                     & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                    << 3U)
                                                    : 
                                                   ((0x1080000U 
                                                     == 
                                                     (0x1f80000U 
                                                      & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                     << 4U)
                                                     : 
                                                    ((0x1040000U 
                                                      == 
                                                      (0x1fc0000U 
                                                       & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                      ? 
                                                     (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                      << 5U)
                                                      : 
                                                     ((0x1020000U 
                                                       == 
                                                       (0x1fe0000U 
                                                        & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                       ? 
                                                      (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                       << 6U)
                                                       : 
                                                      (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                       << 7U)))))))));
    } else {
        division__DOT__X2__DOT__A1__DOT__pe__DOT__shift 
            = (((((((((0x1008000U == (0x1ff8000U & division__DOT__X2__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & division__DOT__X2__DOT__A1__DOT__significand_sub)))
                ? ((0x1008000U == (0x1ff8000U & division__DOT__X2__DOT__A1__DOT__significand_sub))
                    ? 8U : ((0x1004000U == (0x1ffc000U 
                                            & division__DOT__X2__DOT__A1__DOT__significand_sub))
                             ? 9U : ((0x1002000U == 
                                      (0x1ffe000U & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                      ? 0xaU : ((0x1001000U 
                                                 == 
                                                 (0x1fff000U 
                                                  & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000800U 
                                                  == 
                                                  (0x1fff800U 
                                                   & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                  ? 0xcU
                                                  : 
                                                 ((0x1000400U 
                                                   == 
                                                   (0x1fffc00U 
                                                    & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                   ? 0xdU
                                                   : 
                                                  ((0x1000200U 
                                                    == 
                                                    (0x1fffe00U 
                                                     & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : (((((((((0x1000080U == (0x1ffff80U 
                                          & division__DOT__X2__DOT__A1__DOT__significand_sub)) 
                          | (0x1000040U == (0x1ffffc0U 
                                            & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                         | (0x1000020U == (0x1ffffe0U 
                                           & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                        | (0x1000010U == (0x1fffff0U 
                                          & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                       | (0x1000008U == (0x1fffff8U 
                                         & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                      | (0x1000004U == (0x1fffffcU 
                                        & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                     | (0x1000002U == (0x1fffffeU & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                    | (0x1000001U == division__DOT__X2__DOT__A1__DOT__significand_sub))
                    ? ((0x1000080U == (0x1ffff80U & division__DOT__X2__DOT__A1__DOT__significand_sub))
                        ? 0x10U : ((0x1000040U == (0x1ffffc0U 
                                                   & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                    ? 0x11U : ((0x1000020U 
                                                == 
                                                (0x1ffffe0U 
                                                 & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                ? 0x12U
                                                : (
                                                   (0x1000010U 
                                                    == 
                                                    (0x1fffff0U 
                                                     & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                    ? 0x13U
                                                    : 
                                                   ((0x1000008U 
                                                     == 
                                                     (0x1fffff8U 
                                                      & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                     ? 0x14U
                                                     : 
                                                    ((0x1000004U 
                                                      == 
                                                      (0x1fffffcU 
                                                       & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                      ? 0x15U
                                                      : 
                                                     ((0x1000002U 
                                                       == 
                                                       (0x1fffffeU 
                                                        & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : ((0x1000000U == division__DOT__X2__DOT__A1__DOT__significand_sub)
                        ? 0x18U : 0U)));
        division__DOT__X2__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & (((((((((0x1008000U == 
                                     (0x1ff8000U & division__DOT__X2__DOT__A1__DOT__significand_sub)) 
                                    | (0x1004000U == 
                                       (0x1ffc000U 
                                        & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                                   | (0x1002000U == 
                                      (0x1ffe000U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                                  | (0x1001000U == 
                                     (0x1fff000U & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                                 | (0x1000800U == (0x1fff800U 
                                                   & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                                | (0x1000400U == (0x1fffc00U 
                                                  & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                               | (0x1000200U == (0x1fffe00U 
                                                 & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                              | (0x1000100U == (0x1ffff00U 
                                                & division__DOT__X2__DOT__A1__DOT__significand_sub)))
                              ? ((0x1008000U == (0x1ff8000U 
                                                 & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                  ? (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                     << 8U) : ((0x1004000U 
                                                == 
                                                (0x1ffc000U 
                                                 & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                ? (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                   << 9U)
                                                : (
                                                   (0x1002000U 
                                                    == 
                                                    (0x1ffe000U 
                                                     & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                    << 0xaU)
                                                    : 
                                                   ((0x1001000U 
                                                     == 
                                                     (0x1fff000U 
                                                      & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                     << 0xbU)
                                                     : 
                                                    ((0x1000800U 
                                                      == 
                                                      (0x1fff800U 
                                                       & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                      ? 
                                                     (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                      << 0xcU)
                                                      : 
                                                     ((0x1000400U 
                                                       == 
                                                       (0x1fffc00U 
                                                        & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                       ? 
                                                      (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                       << 0xdU)
                                                       : 
                                                      ((0x1000200U 
                                                        == 
                                                        (0x1fffe00U 
                                                         & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                        ? 
                                                       (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                        << 0xeU)
                                                        : 
                                                       (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                        << 0xfU))))))))
                              : (((((((((0x1000080U 
                                         == (0x1ffff80U 
                                             & division__DOT__X2__DOT__A1__DOT__significand_sub)) 
                                        | (0x1000040U 
                                           == (0x1ffffc0U 
                                               & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                                       | (0x1000020U 
                                          == (0x1ffffe0U 
                                              & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                                      | (0x1000010U 
                                         == (0x1fffff0U 
                                             & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                                     | (0x1000008U 
                                        == (0x1fffff8U 
                                            & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                                    | (0x1000004U == 
                                       (0x1fffffcU 
                                        & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                                   | (0x1000002U == 
                                      (0x1fffffeU & division__DOT__X2__DOT__A1__DOT__significand_sub))) 
                                  | (0x1000001U == division__DOT__X2__DOT__A1__DOT__significand_sub))
                                  ? ((0x1000080U == 
                                      (0x1ffff80U & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                      ? (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                         << 0x10U) : 
                                     ((0x1000040U == 
                                       (0x1ffffc0U 
                                        & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                       ? (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                          << 0x11U)
                                       : ((0x1000020U 
                                           == (0x1ffffe0U 
                                               & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                           ? (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                              << 0x12U)
                                           : ((0x1000010U 
                                               == (0x1fffff0U 
                                                   & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                               ? (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                  << 0x13U)
                                               : ((0x1000008U 
                                                   == 
                                                   (0x1fffff8U 
                                                    & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                   ? 
                                                  (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                   << 0x14U)
                                                   : 
                                                  ((0x1000004U 
                                                    == 
                                                    (0x1fffffcU 
                                                     & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                    << 0x15U)
                                                    : 
                                                   ((0x1000002U 
                                                     == 
                                                     (0x1fffffeU 
                                                      & division__DOT__X2__DOT__A1__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                     << 0x16U)
                                                     : 
                                                    (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                                     << 0x17U))))))))
                                  : ((0x1000000U == division__DOT__X2__DOT__A1__DOT__significand_sub)
                                      ? (division__DOT__X2__DOT__A1__DOT__significand_sub 
                                         << 0x18U) : 
                                     ((IData)(1U) + 
                                      (~ division__DOT__X2__DOT__A1__DOT__significand_sub))))));
    }
    vlSelf->division__DOT__X2__DOT__A1__DOT__add_sum 
        = ((0x7f800000U & vlSelf->division__DOT__X2__DOT__A1__DOT__add_sum) 
           | (0x7fffffU & ((0x1000000U & division__DOT__X2__DOT__A1__DOT__significand_add)
                            ? (division__DOT__X2__DOT__A1__DOT__significand_add 
                               >> 1U) : division__DOT__X2__DOT__A1__DOT__significand_add)));
    vlSelf->division__DOT__X2__DOT__A1__DOT__add_sum 
        = ((0x7fffffU & vlSelf->division__DOT__X2__DOT__A1__DOT__add_sum) 
           | (0x7f800000U & (((0x1000000U & division__DOT__X2__DOT__A1__DOT__significand_add)
                               ? ((IData)(1U) + (division__DOT__X2__DOT__A1__DOT__op_a 
                                                 >> 0x17U))
                               : (division__DOT__X2__DOT__A1__DOT__op_a 
                                  >> 0x17U)) << 0x17U)));
    division__DOT__X2__DOT__Intermediate_Value2 = (
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (division__DOT__X2__DOT__A1__DOT__op_a 
                                                         >> 0x17U))) 
                                                    | (0xffU 
                                                       == 
                                                       (0xffU 
                                                        & (division__DOT__X2__DOT__A1__DOT__op_b 
                                                           >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(division__DOT__X2__DOT__A1__DOT__operation_add_sub_signal)
                                                     ? 
                                                    ((0x80000000U 
                                                      & division__DOT__X2__DOT__A1__DOT__op_a) 
                                                     | vlSelf->division__DOT__X2__DOT__A1__DOT__add_sum)
                                                     : 
                                                    ((0x80000000U 
                                                      & division__DOT__X2__DOT__A1__DOT__op_a) 
                                                     | ((0x7f800000U 
                                                         & (((division__DOT__X2__DOT__A1__DOT__op_a 
                                                              >> 0x17U) 
                                                             - (IData)(division__DOT__X2__DOT__A1__DOT__pe__DOT__shift)) 
                                                            << 0x17U)) 
                                                        | (0x7fffffU 
                                                           & division__DOT__X2__DOT__A1__DOT__subtraction_diff)))));
    division__DOT__X2__DOT__M2__DOT__sign = ((division__DOT__Iteration_X1 
                                              ^ division__DOT__X2__DOT__Intermediate_Value2) 
                                             >> 0x1fU);
    division__DOT__X2__DOT__M2__DOT__exception = ((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (division__DOT__Iteration_X1 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (division__DOT__X2__DOT__Intermediate_Value2 
                                                         >> 0x17U))));
    division__DOT__X2__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                & ((QData)((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (division__DOT__Iteration_X1 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & division__DOT__Iteration_X1))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & division__DOT__Iteration_X1)))) 
                                                   * (QData)((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xffU 
                                                                        & (division__DOT__X2__DOT__Intermediate_Value2 
                                                                           >> 0x17U)))
                                                                       ? 
                                                                      (0x800000U 
                                                                       | (0x7fffffU 
                                                                          & division__DOT__X2__DOT__Intermediate_Value2))
                                                                       : 
                                                                      (0x7fffffU 
                                                                       & division__DOT__X2__DOT__Intermediate_Value2))))));
    division__DOT__X2__DOT__M2__DOT__exponent = (0x1ffU 
                                                 & ((((0xffU 
                                                       & (division__DOT__Iteration_X1 
                                                          >> 0x17U)) 
                                                      + 
                                                      (0xffU 
                                                       & (division__DOT__X2__DOT__Intermediate_Value2 
                                                          >> 0x17U))) 
                                                     - (IData)(0x7fU)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (division__DOT__X2__DOT__M2__DOT__product 
                                                                >> 0x2fU)))));
    division__DOT__X2__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((division__DOT__X2__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? division__DOT__X2__DOT__M2__DOT__product
                                 : (division__DOT__X2__DOT__M2__DOT__product 
                                    << 1U)));
    division__DOT__X2__DOT__M2__DOT__product_mantissa 
        = (0x7fffffU & ((IData)((division__DOT__X2__DOT__M2__DOT__product_normalised 
                                 >> 0x18U)) + ((IData)(
                                                       (division__DOT__X2__DOT__M2__DOT__product_normalised 
                                                        >> 0x17U)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(division__DOT__X2__DOT__M2__DOT__product_normalised))))));
    division__DOT__X2__DOT__M2__DOT__zero = ((~ (IData)(division__DOT__X2__DOT__M2__DOT__exception)) 
                                             & (0U 
                                                == division__DOT__X2__DOT__M2__DOT__product_mantissa));
    division__DOT__Iteration_X2 = ((IData)(division__DOT__X2__DOT__M2__DOT__exception)
                                    ? 0U : ((IData)(division__DOT__X2__DOT__M2__DOT__zero)
                                             ? ((IData)(division__DOT__X2__DOT__M2__DOT__sign) 
                                                << 0x1fU)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x100U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(division__DOT__X2__DOT__M2__DOT__exponent)))) 
                                                    & (~ (IData)(division__DOT__X2__DOT__M2__DOT__zero))))
                                                 ? 
                                                (0x7f800000U 
                                                 | ((IData)(division__DOT__X2__DOT__M2__DOT__sign) 
                                                    << 0x1fU))
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x180U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(division__DOT__X2__DOT__M2__DOT__exponent)))) 
                                                     & (~ (IData)(division__DOT__X2__DOT__M2__DOT__zero))))
                                                  ? 
                                                 ((IData)(division__DOT__X2__DOT__M2__DOT__sign) 
                                                  << 0x1fU)
                                                  : 
                                                 (((IData)(division__DOT__X2__DOT__M2__DOT__sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & ((IData)(division__DOT__X2__DOT__M2__DOT__exponent) 
                                                         << 0x17U)) 
                                                     | division__DOT__X2__DOT__M2__DOT__product_mantissa))))));
    division__DOT__X3__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                & ((QData)((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (division__DOT__Iteration_X2 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & division__DOT__Iteration_X2))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & division__DOT__Iteration_X2)))) 
                                                   * (QData)((IData)(
                                                                     (0x800000U 
                                                                      | (0x7fffffU 
                                                                         & vlSelf->b))))));
    division__DOT__X3__DOT__M1__DOT__exponent = (0x1ffU 
                                                 & ((IData)(0x1ffU) 
                                                    + 
                                                    ((0xffU 
                                                      & (division__DOT__Iteration_X2 
                                                         >> 0x17U)) 
                                                     + 
                                                     (1U 
                                                      & (IData)(
                                                                (division__DOT__X3__DOT__M1__DOT__product 
                                                                 >> 0x2fU))))));
    division__DOT__X3__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((division__DOT__X3__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? division__DOT__X3__DOT__M1__DOT__product
                                 : (division__DOT__X3__DOT__M1__DOT__product 
                                    << 1U)));
    division__DOT__X3__DOT__M1__DOT__product_mantissa 
        = (0x7fffffU & ((IData)((division__DOT__X3__DOT__M1__DOT__product_normalised 
                                 >> 0x18U)) + ((IData)(
                                                       (division__DOT__X3__DOT__M1__DOT__product_normalised 
                                                        >> 0x17U)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(division__DOT__X3__DOT__M1__DOT__product_normalised))))));
    division__DOT__X3__DOT__M1__DOT__zero = ((~ (IData)(
                                                        (0xffU 
                                                         == 
                                                         (0xffU 
                                                          & (division__DOT__Iteration_X2 
                                                             >> 0x17U))))) 
                                             & (0U 
                                                == division__DOT__X3__DOT__M1__DOT__product_mantissa));
    division__DOT__X3__DOT__Intermediate_Value1 = (
                                                   (0xffU 
                                                    == 
                                                    (0xffU 
                                                     & (division__DOT__Iteration_X2 
                                                        >> 0x17U)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(division__DOT__X3__DOT__M1__DOT__zero)
                                                     ? 
                                                    (0x80000000U 
                                                     & division__DOT__Iteration_X2)
                                                     : 
                                                    ((1U 
                                                      & ((IData)(
                                                                 (0x100U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(division__DOT__X3__DOT__M1__DOT__exponent)))) 
                                                         & (~ (IData)(division__DOT__X3__DOT__M1__DOT__zero))))
                                                      ? 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & division__DOT__Iteration_X2))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(
                                                                  (0x180U 
                                                                   == 
                                                                   (0x180U 
                                                                    & (IData)(division__DOT__X3__DOT__M1__DOT__exponent)))) 
                                                          & (~ (IData)(division__DOT__X3__DOT__M1__DOT__zero))))
                                                       ? 
                                                      (0x80000000U 
                                                       & division__DOT__Iteration_X2)
                                                       : 
                                                      ((0x80000000U 
                                                        & division__DOT__Iteration_X2) 
                                                       | ((0x7f800000U 
                                                           & ((IData)(division__DOT__X3__DOT__M1__DOT__exponent) 
                                                              << 0x17U)) 
                                                          | division__DOT__X3__DOT__M1__DOT__product_mantissa))))));
    if ((0x40000000U < (0x7fffffffU & division__DOT__X3__DOT__Intermediate_Value1))) {
        division__DOT__X3__DOT__A1__DOT__op_b = (IData)(
                                                        (0x40000000ULL 
                                                         | ((QData)((IData)(
                                                                            (0x80000000U 
                                                                             | (0x7fffffffU 
                                                                                & division__DOT__X3__DOT__Intermediate_Value1)))) 
                                                            << 0x20U)));
        division__DOT__X3__DOT__A1__DOT__op_a = (IData)(
                                                        ((0x40000000ULL 
                                                          | ((QData)((IData)(
                                                                             (0x80000000U 
                                                                              | (0x7fffffffU 
                                                                                & division__DOT__X3__DOT__Intermediate_Value1)))) 
                                                             << 0x20U)) 
                                                         >> 0x20U));
    } else {
        division__DOT__X3__DOT__A1__DOT__op_b = (0x80000000U 
                                                 | (0x7fffffffU 
                                                    & division__DOT__X3__DOT__Intermediate_Value1));
        division__DOT__X3__DOT__A1__DOT__op_a = 0x40000000U;
    }
    division__DOT__X3__DOT__A1__DOT__significand_a 
        = ((0U != (0xffU & (division__DOT__X3__DOT__A1__DOT__op_a 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & division__DOT__X3__DOT__A1__DOT__op_a))
            : (0x7fffffU & division__DOT__X3__DOT__A1__DOT__op_a));
    division__DOT__X3__DOT__A1__DOT__operation_add_sub_signal 
        = (1U & (~ ((division__DOT__X3__DOT__A1__DOT__op_a 
                     ^ division__DOT__X3__DOT__A1__DOT__op_b) 
                    >> 0x1fU)));
    division__DOT__X3__DOT__A1__DOT__exponent_diff 
        = (0xffU & ((division__DOT__X3__DOT__A1__DOT__op_a 
                     >> 0x17U) - (division__DOT__X3__DOT__A1__DOT__op_b 
                                  >> 0x17U)));
    division__DOT__X3__DOT__A1__DOT__significand_b_add_sub 
        = ((0x17U >= (IData)(division__DOT__X3__DOT__A1__DOT__exponent_diff))
            ? (0xffffffU & (((0U != (0xffU & (division__DOT__X3__DOT__A1__DOT__op_b 
                                              >> 0x17U)))
                              ? (0x800000U | (0x7fffffU 
                                              & division__DOT__X3__DOT__A1__DOT__op_b))
                              : (0x7fffffU & division__DOT__X3__DOT__A1__DOT__op_b)) 
                            >> (IData)(division__DOT__X3__DOT__A1__DOT__exponent_diff)))
            : 0U);
    division__DOT__X3__DOT__A1__DOT__perform = ((0xffU 
                                                 & (division__DOT__X3__DOT__A1__DOT__op_a 
                                                    >> 0x17U)) 
                                                == 
                                                (0xffU 
                                                 & ((division__DOT__X3__DOT__A1__DOT__op_b 
                                                     >> 0x17U) 
                                                    + (IData)(division__DOT__X3__DOT__A1__DOT__exponent_diff))));
    division__DOT__X3__DOT__A1__DOT__significand_sub 
        = ((IData)(division__DOT__X3__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (division__DOT__X3__DOT__A1__DOT__significand_a 
                             + (((IData)(division__DOT__X3__DOT__A1__DOT__perform) 
                                 & (~ (IData)(division__DOT__X3__DOT__A1__DOT__operation_add_sub_signal)))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ division__DOT__X3__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    division__DOT__X3__DOT__A1__DOT__significand_add 
        = (((IData)(division__DOT__X3__DOT__A1__DOT__perform) 
            & (IData)(division__DOT__X3__DOT__A1__DOT__operation_add_sub_signal))
            ? (0x1ffffffU & (division__DOT__X3__DOT__A1__DOT__significand_a 
                             + division__DOT__X3__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    if (((((((((0x1800000U == (0x1800000U & division__DOT__X3__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & division__DOT__X3__DOT__A1__DOT__significand_sub)))) {
        division__DOT__X3__DOT__A1__DOT__pe__DOT__shift 
            = ((0x1800000U == (0x1800000U & division__DOT__X3__DOT__A1__DOT__significand_sub))
                ? 0U : ((0x1400000U == (0x1c00000U 
                                        & division__DOT__X3__DOT__A1__DOT__significand_sub))
                         ? 1U : ((0x1200000U == (0x1e00000U 
                                                 & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                  ? 2U : ((0x1100000U 
                                           == (0x1f00000U 
                                               & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                           ? 3U : (
                                                   (0x1080000U 
                                                    == 
                                                    (0x1f80000U 
                                                     & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                    ? 4U
                                                    : 
                                                   ((0x1040000U 
                                                     == 
                                                     (0x1fc0000U 
                                                      & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                     ? 5U
                                                     : 
                                                    ((0x1020000U 
                                                      == 
                                                      (0x1fe0000U 
                                                       & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                      ? 6U
                                                      : 7U)))))));
        division__DOT__X3__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((0x1800000U == (0x1800000U 
                                             & division__DOT__X3__DOT__A1__DOT__significand_sub))
                              ? division__DOT__X3__DOT__A1__DOT__significand_sub
                              : ((0x1400000U == (0x1c00000U 
                                                 & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                  ? (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                     << 1U) : ((0x1200000U 
                                                == 
                                                (0x1e00000U 
                                                 & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                ? (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                   << 2U)
                                                : (
                                                   (0x1100000U 
                                                    == 
                                                    (0x1f00000U 
                                                     & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                    << 3U)
                                                    : 
                                                   ((0x1080000U 
                                                     == 
                                                     (0x1f80000U 
                                                      & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                     << 4U)
                                                     : 
                                                    ((0x1040000U 
                                                      == 
                                                      (0x1fc0000U 
                                                       & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                      ? 
                                                     (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                      << 5U)
                                                      : 
                                                     ((0x1020000U 
                                                       == 
                                                       (0x1fe0000U 
                                                        & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                       ? 
                                                      (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                       << 6U)
                                                       : 
                                                      (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                       << 7U)))))))));
    } else {
        division__DOT__X3__DOT__A1__DOT__pe__DOT__shift 
            = (((((((((0x1008000U == (0x1ff8000U & division__DOT__X3__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & division__DOT__X3__DOT__A1__DOT__significand_sub)))
                ? ((0x1008000U == (0x1ff8000U & division__DOT__X3__DOT__A1__DOT__significand_sub))
                    ? 8U : ((0x1004000U == (0x1ffc000U 
                                            & division__DOT__X3__DOT__A1__DOT__significand_sub))
                             ? 9U : ((0x1002000U == 
                                      (0x1ffe000U & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                      ? 0xaU : ((0x1001000U 
                                                 == 
                                                 (0x1fff000U 
                                                  & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000800U 
                                                  == 
                                                  (0x1fff800U 
                                                   & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                  ? 0xcU
                                                  : 
                                                 ((0x1000400U 
                                                   == 
                                                   (0x1fffc00U 
                                                    & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                   ? 0xdU
                                                   : 
                                                  ((0x1000200U 
                                                    == 
                                                    (0x1fffe00U 
                                                     & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : (((((((((0x1000080U == (0x1ffff80U 
                                          & division__DOT__X3__DOT__A1__DOT__significand_sub)) 
                          | (0x1000040U == (0x1ffffc0U 
                                            & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                         | (0x1000020U == (0x1ffffe0U 
                                           & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                        | (0x1000010U == (0x1fffff0U 
                                          & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                       | (0x1000008U == (0x1fffff8U 
                                         & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                      | (0x1000004U == (0x1fffffcU 
                                        & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                     | (0x1000002U == (0x1fffffeU & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                    | (0x1000001U == division__DOT__X3__DOT__A1__DOT__significand_sub))
                    ? ((0x1000080U == (0x1ffff80U & division__DOT__X3__DOT__A1__DOT__significand_sub))
                        ? 0x10U : ((0x1000040U == (0x1ffffc0U 
                                                   & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                    ? 0x11U : ((0x1000020U 
                                                == 
                                                (0x1ffffe0U 
                                                 & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                ? 0x12U
                                                : (
                                                   (0x1000010U 
                                                    == 
                                                    (0x1fffff0U 
                                                     & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                    ? 0x13U
                                                    : 
                                                   ((0x1000008U 
                                                     == 
                                                     (0x1fffff8U 
                                                      & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                     ? 0x14U
                                                     : 
                                                    ((0x1000004U 
                                                      == 
                                                      (0x1fffffcU 
                                                       & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                      ? 0x15U
                                                      : 
                                                     ((0x1000002U 
                                                       == 
                                                       (0x1fffffeU 
                                                        & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : ((0x1000000U == division__DOT__X3__DOT__A1__DOT__significand_sub)
                        ? 0x18U : 0U)));
        division__DOT__X3__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & (((((((((0x1008000U == 
                                     (0x1ff8000U & division__DOT__X3__DOT__A1__DOT__significand_sub)) 
                                    | (0x1004000U == 
                                       (0x1ffc000U 
                                        & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                                   | (0x1002000U == 
                                      (0x1ffe000U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                                  | (0x1001000U == 
                                     (0x1fff000U & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                                 | (0x1000800U == (0x1fff800U 
                                                   & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                                | (0x1000400U == (0x1fffc00U 
                                                  & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                               | (0x1000200U == (0x1fffe00U 
                                                 & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                              | (0x1000100U == (0x1ffff00U 
                                                & division__DOT__X3__DOT__A1__DOT__significand_sub)))
                              ? ((0x1008000U == (0x1ff8000U 
                                                 & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                  ? (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                     << 8U) : ((0x1004000U 
                                                == 
                                                (0x1ffc000U 
                                                 & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                ? (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                   << 9U)
                                                : (
                                                   (0x1002000U 
                                                    == 
                                                    (0x1ffe000U 
                                                     & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                    << 0xaU)
                                                    : 
                                                   ((0x1001000U 
                                                     == 
                                                     (0x1fff000U 
                                                      & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                     << 0xbU)
                                                     : 
                                                    ((0x1000800U 
                                                      == 
                                                      (0x1fff800U 
                                                       & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                      ? 
                                                     (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                      << 0xcU)
                                                      : 
                                                     ((0x1000400U 
                                                       == 
                                                       (0x1fffc00U 
                                                        & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                       ? 
                                                      (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                       << 0xdU)
                                                       : 
                                                      ((0x1000200U 
                                                        == 
                                                        (0x1fffe00U 
                                                         & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                        ? 
                                                       (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                        << 0xeU)
                                                        : 
                                                       (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                        << 0xfU))))))))
                              : (((((((((0x1000080U 
                                         == (0x1ffff80U 
                                             & division__DOT__X3__DOT__A1__DOT__significand_sub)) 
                                        | (0x1000040U 
                                           == (0x1ffffc0U 
                                               & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                                       | (0x1000020U 
                                          == (0x1ffffe0U 
                                              & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                                      | (0x1000010U 
                                         == (0x1fffff0U 
                                             & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                                     | (0x1000008U 
                                        == (0x1fffff8U 
                                            & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                                    | (0x1000004U == 
                                       (0x1fffffcU 
                                        & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                                   | (0x1000002U == 
                                      (0x1fffffeU & division__DOT__X3__DOT__A1__DOT__significand_sub))) 
                                  | (0x1000001U == division__DOT__X3__DOT__A1__DOT__significand_sub))
                                  ? ((0x1000080U == 
                                      (0x1ffff80U & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                      ? (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                         << 0x10U) : 
                                     ((0x1000040U == 
                                       (0x1ffffc0U 
                                        & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                       ? (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                          << 0x11U)
                                       : ((0x1000020U 
                                           == (0x1ffffe0U 
                                               & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                           ? (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                              << 0x12U)
                                           : ((0x1000010U 
                                               == (0x1fffff0U 
                                                   & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                               ? (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                  << 0x13U)
                                               : ((0x1000008U 
                                                   == 
                                                   (0x1fffff8U 
                                                    & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                   ? 
                                                  (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                   << 0x14U)
                                                   : 
                                                  ((0x1000004U 
                                                    == 
                                                    (0x1fffffcU 
                                                     & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                    ? 
                                                   (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                    << 0x15U)
                                                    : 
                                                   ((0x1000002U 
                                                     == 
                                                     (0x1fffffeU 
                                                      & division__DOT__X3__DOT__A1__DOT__significand_sub))
                                                     ? 
                                                    (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                     << 0x16U)
                                                     : 
                                                    (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                                     << 0x17U))))))))
                                  : ((0x1000000U == division__DOT__X3__DOT__A1__DOT__significand_sub)
                                      ? (division__DOT__X3__DOT__A1__DOT__significand_sub 
                                         << 0x18U) : 
                                     ((IData)(1U) + 
                                      (~ division__DOT__X3__DOT__A1__DOT__significand_sub))))));
    }
    vlSelf->division__DOT__X3__DOT__A1__DOT__add_sum 
        = ((0x7f800000U & vlSelf->division__DOT__X3__DOT__A1__DOT__add_sum) 
           | (0x7fffffU & ((0x1000000U & division__DOT__X3__DOT__A1__DOT__significand_add)
                            ? (division__DOT__X3__DOT__A1__DOT__significand_add 
                               >> 1U) : division__DOT__X3__DOT__A1__DOT__significand_add)));
    vlSelf->division__DOT__X3__DOT__A1__DOT__add_sum 
        = ((0x7fffffU & vlSelf->division__DOT__X3__DOT__A1__DOT__add_sum) 
           | (0x7f800000U & (((0x1000000U & division__DOT__X3__DOT__A1__DOT__significand_add)
                               ? ((IData)(1U) + (division__DOT__X3__DOT__A1__DOT__op_a 
                                                 >> 0x17U))
                               : (division__DOT__X3__DOT__A1__DOT__op_a 
                                  >> 0x17U)) << 0x17U)));
    division__DOT__X3__DOT__Intermediate_Value2 = (
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (division__DOT__X3__DOT__A1__DOT__op_a 
                                                         >> 0x17U))) 
                                                    | (0xffU 
                                                       == 
                                                       (0xffU 
                                                        & (division__DOT__X3__DOT__A1__DOT__op_b 
                                                           >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(division__DOT__X3__DOT__A1__DOT__operation_add_sub_signal)
                                                     ? 
                                                    ((0x80000000U 
                                                      & division__DOT__X3__DOT__A1__DOT__op_a) 
                                                     | vlSelf->division__DOT__X3__DOT__A1__DOT__add_sum)
                                                     : 
                                                    ((0x80000000U 
                                                      & division__DOT__X3__DOT__A1__DOT__op_a) 
                                                     | ((0x7f800000U 
                                                         & (((division__DOT__X3__DOT__A1__DOT__op_a 
                                                              >> 0x17U) 
                                                             - (IData)(division__DOT__X3__DOT__A1__DOT__pe__DOT__shift)) 
                                                            << 0x17U)) 
                                                        | (0x7fffffU 
                                                           & division__DOT__X3__DOT__A1__DOT__subtraction_diff)))));
    division__DOT__X3__DOT__M2__DOT__sign = ((division__DOT__Iteration_X2 
                                              ^ division__DOT__X3__DOT__Intermediate_Value2) 
                                             >> 0x1fU);
    division__DOT__X3__DOT__M2__DOT__exception = ((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (division__DOT__Iteration_X2 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (division__DOT__X3__DOT__Intermediate_Value2 
                                                         >> 0x17U))));
    division__DOT__X3__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                & ((QData)((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (division__DOT__Iteration_X2 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & division__DOT__Iteration_X2))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & division__DOT__Iteration_X2)))) 
                                                   * (QData)((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xffU 
                                                                        & (division__DOT__X3__DOT__Intermediate_Value2 
                                                                           >> 0x17U)))
                                                                       ? 
                                                                      (0x800000U 
                                                                       | (0x7fffffU 
                                                                          & division__DOT__X3__DOT__Intermediate_Value2))
                                                                       : 
                                                                      (0x7fffffU 
                                                                       & division__DOT__X3__DOT__Intermediate_Value2))))));
    division__DOT__X3__DOT__M2__DOT__exponent = (0x1ffU 
                                                 & ((((0xffU 
                                                       & (division__DOT__Iteration_X2 
                                                          >> 0x17U)) 
                                                      + 
                                                      (0xffU 
                                                       & (division__DOT__X3__DOT__Intermediate_Value2 
                                                          >> 0x17U))) 
                                                     - (IData)(0x7fU)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (division__DOT__X3__DOT__M2__DOT__product 
                                                                >> 0x2fU)))));
    division__DOT__X3__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((division__DOT__X3__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? division__DOT__X3__DOT__M2__DOT__product
                                 : (division__DOT__X3__DOT__M2__DOT__product 
                                    << 1U)));
    division__DOT__X3__DOT__M2__DOT__product_mantissa 
        = (0x7fffffU & ((IData)((division__DOT__X3__DOT__M2__DOT__product_normalised 
                                 >> 0x18U)) + ((IData)(
                                                       (division__DOT__X3__DOT__M2__DOT__product_normalised 
                                                        >> 0x17U)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(division__DOT__X3__DOT__M2__DOT__product_normalised))))));
    division__DOT__X3__DOT__M2__DOT__zero = ((~ (IData)(division__DOT__X3__DOT__M2__DOT__exception)) 
                                             & (0U 
                                                == division__DOT__X3__DOT__M2__DOT__product_mantissa));
    division__DOT__Iteration_X3 = ((IData)(division__DOT__X3__DOT__M2__DOT__exception)
                                    ? 0U : ((IData)(division__DOT__X3__DOT__M2__DOT__zero)
                                             ? ((IData)(division__DOT__X3__DOT__M2__DOT__sign) 
                                                << 0x1fU)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x100U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(division__DOT__X3__DOT__M2__DOT__exponent)))) 
                                                    & (~ (IData)(division__DOT__X3__DOT__M2__DOT__zero))))
                                                 ? 
                                                (0x7f800000U 
                                                 | ((IData)(division__DOT__X3__DOT__M2__DOT__sign) 
                                                    << 0x1fU))
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x180U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(division__DOT__X3__DOT__M2__DOT__exponent)))) 
                                                     & (~ (IData)(division__DOT__X3__DOT__M2__DOT__zero))))
                                                  ? 
                                                 ((IData)(division__DOT__X3__DOT__M2__DOT__sign) 
                                                  << 0x1fU)
                                                  : 
                                                 (((IData)(division__DOT__X3__DOT__M2__DOT__sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & ((IData)(division__DOT__X3__DOT__M2__DOT__exponent) 
                                                         << 0x17U)) 
                                                     | division__DOT__X3__DOT__M2__DOT__product_mantissa))))));
    division__DOT__END__DOT__sign = ((division__DOT__Iteration_X3 
                                      ^ division__DOT__op_a) 
                                     >> 0x1fU);
    division__DOT__END__DOT__exception = ((0xffU == 
                                           (0xffU & 
                                            (division__DOT__Iteration_X3 
                                             >> 0x17U))) 
                                          | (0xffU 
                                             == (0xffU 
                                                 & (division__DOT__op_a 
                                                    >> 0x17U))));
    division__DOT__END__DOT__product = (0xffffffffffffULL 
                                        & ((QData)((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xffU 
                                                              & (division__DOT__Iteration_X3 
                                                                 >> 0x17U)))
                                                             ? 
                                                            (0x800000U 
                                                             | (0x7fffffU 
                                                                & division__DOT__Iteration_X3))
                                                             : 
                                                            (0x7fffffU 
                                                             & division__DOT__Iteration_X3)))) 
                                           * (QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xffU 
                                                                & (division__DOT__op_a 
                                                                   >> 0x17U)))
                                                               ? 
                                                              (0x800000U 
                                                               | (0x7fffffU 
                                                                  & division__DOT__op_a))
                                                               : 
                                                              (0x7fffffU 
                                                               & division__DOT__op_a))))));
    division__DOT__END__DOT__exponent = (0x1ffU & (
                                                   (((0xffU 
                                                      & (division__DOT__Iteration_X3 
                                                         >> 0x17U)) 
                                                     + 
                                                     (0xffU 
                                                      & (division__DOT__op_a 
                                                         >> 0x17U))) 
                                                    - (IData)(0x7fU)) 
                                                   + 
                                                   (1U 
                                                    & (IData)(
                                                              (division__DOT__END__DOT__product 
                                                               >> 0x2fU)))));
    division__DOT__END__DOT__product_normalised = (0xffffffffffffULL 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (division__DOT__END__DOT__product 
                                                                  >> 0x2fU)))
                                                       ? division__DOT__END__DOT__product
                                                       : 
                                                      (division__DOT__END__DOT__product 
                                                       << 1U)));
    division__DOT__END__DOT__product_mantissa = (0x7fffffU 
                                                 & ((IData)(
                                                            (division__DOT__END__DOT__product_normalised 
                                                             >> 0x18U)) 
                                                    + 
                                                    ((IData)(
                                                             (division__DOT__END__DOT__product_normalised 
                                                              >> 0x17U)) 
                                                     & (0U 
                                                        != 
                                                        (0x7fffffU 
                                                         & (IData)(division__DOT__END__DOT__product_normalised))))));
    division__DOT__END__DOT__zero = ((~ (IData)(division__DOT__END__DOT__exception)) 
                                     & (0U == division__DOT__END__DOT__product_mantissa));
    vlSelf->res = ((0x80000000U & (vlSelf->a ^ vlSelf->b)) 
                   | ((IData)(division__DOT__END__DOT__exception)
                       ? 0U : (0x7fffffffU & ((IData)(division__DOT__END__DOT__zero)
                                               ? ((IData)(division__DOT__END__DOT__sign) 
                                                  << 0x1fU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x100U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(division__DOT__END__DOT__exponent)))) 
                                                      & (~ (IData)(division__DOT__END__DOT__zero))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(division__DOT__END__DOT__sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x180U 
                                                                 & (IData)(division__DOT__END__DOT__exponent)))) 
                                                       & (~ (IData)(division__DOT__END__DOT__zero))))
                                                    ? 
                                                   ((IData)(division__DOT__END__DOT__sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(division__DOT__END__DOT__sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(division__DOT__END__DOT__exponent) 
                                                           << 0x17U)) 
                                                       | division__DOT__END__DOT__product_mantissa))))))));
}

void Vdivision___024root___eval(Vdivision___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval\n"); );
    // Body
    Vdivision___024root___combo__TOP__1(vlSelf);
}

QData Vdivision___024root___change_request_1(Vdivision___024root* vlSelf);

VL_INLINE_OPT QData Vdivision___024root___change_request(Vdivision___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___change_request\n"); );
    // Body
    return (Vdivision___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdivision___024root___change_request_1(Vdivision___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdivision___024root___eval_debug_assertions(Vdivision___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
