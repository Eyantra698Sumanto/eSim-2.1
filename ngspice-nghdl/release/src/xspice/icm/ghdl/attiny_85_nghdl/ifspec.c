
/*
 * Structures for model: attiny_85_nghdl
 *
 * Automatically generated by cmpp preprocessor
 *
 * !!! DO NOT EDIT !!!
 *
 */


#include "ngspice/ngspice.h"
#include <stdio.h>
#include "ngspice/devdefs.h"
#include "ngspice/ifsim.h"
#include "ngspice/mifdefs.h"
#include "ngspice/mifproto.h"
#include "ngspice/mifparse.h"


static IFparm MIFmPTable[] = {
    IOP("instance_id", 0, IF_REAL, "instance_id"),
    IOP("input_load", 1, IF_REAL, "input load value (F)"),
    IOP("rise_delay", 2, IF_REAL, "rise delay"),
    IOP("fall_delay", 3, IF_REAL, "fall delay"),
    IOP("Sumanto", 4, IF_REAL, "Sumanto"),
};


static IFparm MIFpTable[] = {
    OP("my_ip", 5, IF_STRING, "connect to ghdlserver through this ip"),
};


static Mif_Port_Type_t MIFportEnum0[] = {
    MIF_DIGITAL,
};


static char *MIFportStr0[] = {
    "d",
};


static Mif_Port_Type_t MIFportEnum1[] = {
    MIF_DIGITAL,
};


static char *MIFportStr1[] = {
    "d",
};


static Mif_Port_Type_t MIFportEnum2[] = {
    MIF_DIGITAL,
};


static char *MIFportStr2[] = {
    "d",
};


static Mif_Port_Type_t MIFportEnum3[] = {
    MIF_DIGITAL,
};


static char *MIFportStr3[] = {
    "d",
};


static Mif_Port_Type_t MIFportEnum4[] = {
    MIF_DIGITAL,
};


static char *MIFportStr4[] = {
    "d",
};


static Mif_Port_Type_t MIFportEnum5[] = {
    MIF_DIGITAL,
};


static char *MIFportStr5[] = {
    "d",
};


static Mif_Port_Type_t MIFportEnum6[] = {
    MIF_DIGITAL,
};


static char *MIFportStr6[] = {
    "d",
};


static Mif_Port_Type_t MIFportEnum7[] = {
    MIF_DIGITAL,
};


static char *MIFportStr7[] = {
    "d",
};


static Mif_Port_Type_t MIFportEnum8[] = {
    MIF_DIGITAL,
};


static char *MIFportStr8[] = {
    "d",
};


static Mif_Conn_Info_t MIFconnTable[] = {
  {
    "VCC",
    "input port VCC",
    MIF_IN,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum0,
    MIFportStr0,
    MIF_TRUE,
    MIF_TRUE,
    1,
    MIF_TRUE,
    1,
    MIF_FALSE,
  },
  {
    "GND",
    "input port GND",
    MIF_IN,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum1,
    MIFportStr1,
    MIF_TRUE,
    MIF_TRUE,
    1,
    MIF_TRUE,
    1,
    MIF_FALSE,
  },
  {
    "clk",
    "input port clk",
    MIF_IN,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum2,
    MIFportStr2,
    MIF_TRUE,
    MIF_TRUE,
    1,
    MIF_TRUE,
    1,
    MIF_FALSE,
  },
  {
    "PB2",
    "input port PB2",
    MIF_IN,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum3,
    MIFportStr3,
    MIF_TRUE,
    MIF_TRUE,
    1,
    MIF_TRUE,
    1,
    MIF_FALSE,
  },
  {
    "PB3",
    "input port PB3",
    MIF_IN,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum4,
    MIFportStr4,
    MIF_TRUE,
    MIF_TRUE,
    1,
    MIF_TRUE,
    1,
    MIF_FALSE,
  },
  {
    "PB4",
    "input port PB4",
    MIF_IN,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum5,
    MIFportStr5,
    MIF_TRUE,
    MIF_TRUE,
    1,
    MIF_TRUE,
    1,
    MIF_FALSE,
  },
  {
    "PB5",
    "input port PB5",
    MIF_IN,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum6,
    MIFportStr6,
    MIF_TRUE,
    MIF_TRUE,
    1,
    MIF_TRUE,
    1,
    MIF_FALSE,
  },
  {
    "PB0",
    "output port PB0",
    MIF_OUT,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum7,
    MIFportStr7,
    MIF_TRUE,
    MIF_TRUE,
    1,
    MIF_TRUE,
    1,
    MIF_FALSE,
  },
  {
    "PB1",
    "output port PB1",
    MIF_OUT,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum8,
    MIFportStr8,
    MIF_TRUE,
    MIF_TRUE,
    1,
    MIF_TRUE,
    1,
    MIF_FALSE,
  },
};


static Mif_Param_Info_t MIFparamTable[] = {
  {
    "instance_id",
    "instance_id",
    MIF_REAL,
    MIF_TRUE,
    {MIF_FALSE, 0, 0.000000e+00, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_TRUE,
  },
  {
    "input_load",
    "input load value (F)",
    MIF_REAL,
    MIF_TRUE,
    {MIF_FALSE, 0, 1.000000e-12, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_TRUE,
  },
  {
    "rise_delay",
    "rise delay",
    MIF_REAL,
    MIF_TRUE,
    {MIF_FALSE, 0, 1.000000e-09, {0.0, 0.0}, NULL},
    MIF_TRUE,
    {MIF_FALSE, 0, 1.000000e-12, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_TRUE,
  },
  {
    "fall_delay",
    "fall delay",
    MIF_REAL,
    MIF_TRUE,
    {MIF_FALSE, 0, 1.000000e-09, {0.0, 0.0}, NULL},
    MIF_TRUE,
    {MIF_FALSE, 0, 1.000000e-12, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_TRUE,
  },
  {
    "Sumanto",
    "Sumanto",
    MIF_REAL,
    MIF_TRUE,
    {MIF_FALSE, 0, 1.000000e-09, {0.0, 0.0}, NULL},
    MIF_TRUE,
    {MIF_FALSE, 0, 1.000000e-12, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_TRUE,
  },
};


static Mif_Inst_Var_Info_t MIFinst_varTable[] = {
  {
    "my_ip",
    "connect to ghdlserver through this ip",
    MIF_STRING,
    MIF_FALSE,
  },
};


extern void cm_attiny_85_nghdl(Mif_Private_t *);

static int val_terms             = 0;
static int val_numNames          = 0;
static int val_numInstanceParms  = 1;
static int val_numModelParms     = 5;
static int val_sizeofMIFinstance = sizeof(MIFinstance);
static int val_sizeofMIFmodel    = sizeof(MIFmodel);

SPICEdev cm_attiny_85_nghdl_info = {
    .DEVpublic = {
        .name = "attiny_85_nghdl",
        .description = "Model generated from ghdl code attiny_85_nghdl.vhdl",
        .terms = &val_terms,
        .numNames = &val_numNames,
        .termNames = NULL,
        .numInstanceParms = &val_numInstanceParms,
        .instanceParms = MIFpTable,
        .numModelParms = &val_numModelParms,
        .modelParms = MIFmPTable,
        .flags = 0,

        .cm_func = cm_attiny_85_nghdl,
        .num_conn = 9,
        .conn = MIFconnTable,
        .num_param = 5,
        .param = MIFparamTable,
        .num_inst_var = 1,
        .inst_var = MIFinst_varTable,
    },

    .DEVparam = NULL,
    .DEVmodParam = MIFmParam,
    .DEVload = MIFload,
    .DEVsetup = MIFsetup,
    .DEVunsetup = MIFunsetup,
    .DEVpzSetup = NULL,
    .DEVtemperature = NULL,
    .DEVtrunc = MIFtrunc,
    .DEVfindBranch = NULL,
    .DEVacLoad = MIFload,
    .DEVaccept = NULL,
    .DEVdestroy = NULL,
    .DEVmodDelete = MIFmDelete,
    .DEVdelete = MIFdelete,
    .DEVsetic = NULL,
    .DEVask = MIFask,
    .DEVmodAsk = MIFmAsk,
    .DEVpzLoad = NULL,
    .DEVconvTest = MIFconvTest,
    .DEVsenSetup = NULL,
    .DEVsenLoad = NULL,
    .DEVsenUpdate = NULL,
    .DEVsenAcLoad = NULL,
    .DEVsenPrint = NULL,
    .DEVsenTrunc = NULL,
    .DEVdisto = NULL,
    .DEVnoise = NULL,
    .DEVsoaCheck = NULL,
    .DEVinstSize = &val_sizeofMIFinstance,
    .DEVmodSize = &val_sizeofMIFmodel,

#ifdef CIDER
    .DEVdump = NULL,
    .DEVacct = NULL,
#endif
};
