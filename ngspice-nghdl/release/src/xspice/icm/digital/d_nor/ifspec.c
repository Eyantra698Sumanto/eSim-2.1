
/*
 * Structures for model: d_nor
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
    IOP("rise_delay", 0, IF_REAL, "rise delay"),
    IOP("fall_delay", 1, IF_REAL, "fall delay"),
    IOP("input_load", 2, IF_REAL, "input load value (pF)"),
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


static Mif_Conn_Info_t MIFconnTable[] = {
  {
    "in",
    "input",
    MIF_IN,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum0,
    MIFportStr0,
    MIF_TRUE,
    MIF_TRUE,
    2,
    MIF_FALSE,
    0,
    MIF_FALSE,
  },
  {
    "out",
    "output",
    MIF_OUT,
    MIF_DIGITAL,
    "d",
    1,
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
    "input_load",
    "input load value (pF)",
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
};


extern void cm_d_nor(Mif_Private_t *);

static int val_terms             = 0;
static int val_numNames          = 0;
static int val_numInstanceParms  = 0;
static int val_numModelParms     = 3;
static int val_sizeofMIFinstance = sizeof(MIFinstance);
static int val_sizeofMIFmodel    = sizeof(MIFmodel);

SPICEdev cm_d_nor_info = {
    .DEVpublic = {
        .name = "d_nor",
        .description = "digital n-input nor gate",
        .terms = &val_terms,
        .numNames = &val_numNames,
        .termNames = NULL,
        .numInstanceParms = &val_numInstanceParms,
        .instanceParms = NULL,
        .numModelParms = &val_numModelParms,
        .modelParms = MIFmPTable,
        .flags = 0,

        .cm_func = cm_d_nor,
        .num_conn = 2,
        .conn = MIFconnTable,
        .num_param = 3,
        .param = MIFparamTable,
        .num_inst_var = 0,
        .inst_var = NULL,
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

