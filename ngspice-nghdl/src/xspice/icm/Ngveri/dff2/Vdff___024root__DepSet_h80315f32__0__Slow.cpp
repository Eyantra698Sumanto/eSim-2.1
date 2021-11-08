// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff.h for the primary calling header

#include "verilated.h"

#include "Vdff__Syms.h"
#include "Vdff___024root.h"

VL_ATTR_COLD void Vdff___024root___initial__TOP__1(Vdff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff___024root___initial__TOP__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h93c46245__0;
    // Body
    VL_WRITEF("[%0t] Tracing to logs/vlt_dump.vcd...\n\n",
              64,VL_TIME_UNITED_Q(1),-12);
    __Vtemp_h93c46245__0[0U] = 0x2e766364U;
    __Vtemp_h93c46245__0[1U] = 0x64756d70U;
    __Vtemp_h93c46245__0[2U] = 0x766c745fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_h93c46245__0));
    VL_PRINTF_MT("-Info: dff.v:16: $dumpvar ignored, as Verilated without --trace\n");
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
}
