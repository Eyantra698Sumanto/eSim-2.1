
/*
 * Structures for model: pwl
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
    IOP("x_array", 0, (IF_REAL|IF_VECTOR), "x-element array"),
    IOP("y_array", 1, (IF_REAL|IF_VECTOR), "y-element array"),
    IOP("input_domain", 2, IF_REAL, "input sm. domain"),
    IOP("fraction", 3, IF_FLAG, "smoothing %/abs switch"),
    IOP("limit", 4, IF_FLAG, "const or linearily extrapolated output"),
};


static IFparm MIFpTable[] = {
    OP("last_x_value", 5, IF_STRING, "iteration holding variable for limiting"),
    OP("x", 6, IF_STRING, "x-coefficient array"),
    OP("y", 7, IF_STRING, "y-coefficient array"),
};


static Mif_Port_Type_t MIFportEnum0[] = {
    MIF_VOLTAGE,
    MIF_DIFF_VOLTAGE,
    MIF_CURRENT,
    MIF_DIFF_CURRENT,
    MIF_VSOURCE_CURRENT,
};


static char *MIFportStr0[] = {
    "v",
    "vd",
    "i",
    "id",
    "vnam",
};


static Mif_Port_Type_t MIFportEnum1[] = {
    MIF_VOLTAGE,
    MIF_DIFF_VOLTAGE,
    MIF_CURRENT,
    MIF_DIFF_CURRENT,
};


static char *MIFportStr1[] = {
    "v",
    "vd",
    "i",
    "id",
};


static Mif_Conn_Info_t MIFconnTable[] = {
  {
    "in",
    "input",
    MIF_IN,
    MIF_VOLTAGE,
    "v",
    5,
    MIFportEnum0,
    MIFportStr0,
    MIF_FALSE,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_FALSE,
  },
  {
    "out",
    "output",
    MIF_OUT,
    MIF_VOLTAGE,
    "v",
    4,
    MIFportEnum1,
    MIFportStr1,
    MIF_FALSE,
    MIF_FALSE,
    0,
    MIF_FALSE,
    0,
    MIF_FALSE,
  },
};


static Mif_Param_Info_t MIFparamTable[] = {
  {
    "x_array",
    "x-element array",
    MIF_REAL,
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_TRUE,
    MIF_FALSE,
    0,
    MIF_TRUE,
    2,
    MIF_FALSE,
    0,
    MIF_FALSE,
  },
  {
    "y_array",
    "y-element array",
    MIF_REAL,
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_FALSE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
    MIF_TRUE,
    MIF_FALSE,
    0,
    MIF_TRUE,
    2,
    MIF_FALSE,
    0,
    MIF_FALSE,
  },
  {
    "input_domain",
    "input sm. domain",
    MIF_REAL,
    MIF_TRUE,
    {MIF_FALSE, 0, 1.000000e-02, {0.0, 0.0}, NULL},
    MIF_TRUE,
    {MIF_FALSE, 0, 1.000000e-12, {0.0, 0.0}, NULL},
    MIF_TRUE,
    {MIF_FALSE, 0, 5.000000e-01, {0.0, 0.0}, NULL},
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
    "fraction",
    "smoothing %/abs switch",
    MIF_BOOLEAN,
    MIF_TRUE,
    {MIF_TRUE, 0, 0.0, {0.0, 0.0}, NULL},
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
    "limit",
    "const or linearily extrapolated output",
    MIF_BOOLEAN,
    MIF_TRUE,
    {MIF_FALSE, 0, 0.0, {0.0, 0.0}, NULL},
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
};


static Mif_Inst_Var_Info_t MIFinst_varTable[] = {
  {
    "last_x_value",
    "iteration holding variable for limiting",
    MIF_STRING,
    MIF_FALSE,
  },
  {
    "x",
    "x-coefficient array",
    MIF_STRING,
    MIF_FALSE,
  },
  {
    "y",
    "y-coefficient array",
    MIF_STRING,
    MIF_FALSE,
  },
};


extern void cm_pwl(Mif_Private_t *);

static int val_terms             = 0;
static int val_numNames          = 0;
static int val_numInstanceParms  = 3;
static int val_numModelParms     = 5;
static int val_sizeofMIFinstance = sizeof(MIFinstance);
static int val_sizeofMIFmodel    = sizeof(MIFmodel);

SPICEdev cm_pwl_info = {
    .DEVpublic = {
        .name = "pwl",
        .description = "piecwise linear controlled source",
        .terms = &val_terms,
        .numNames = &val_numNames,
        .termNames = NULL,
        .numInstanceParms = &val_numInstanceParms,
        .instanceParms = MIFpTable,
        .numModelParms = &val_numModelParms,
        .modelParms = MIFmPTable,
        .flags = 0,

        .cm_func = cm_pwl,
        .num_conn = 2,
        .conn = MIFconnTable,
        .num_param = 5,
        .param = MIFparamTable,
        .num_inst_var = 3,
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

