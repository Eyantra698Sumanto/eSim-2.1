
/*
 * Structures for model: spi
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


static Mif_Port_Type_t MIFportEnum9[] = {
    MIF_DIGITAL,
};


static char *MIFportStr9[] = {
    "d",
};


static Mif_Conn_Info_t MIFconnTable[] = {
  {
    "in_data",
    "input port in_data",
    MIF_IN,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum0,
    MIFportStr0,
    MIF_TRUE,
    MIF_TRUE,
    8,
    MIF_TRUE,
    8,
    MIF_FALSE,
  },
  {
    "clk",
    "input port clk",
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
    "addr",
    "input port addr",
    MIF_IN,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum2,
    MIFportStr2,
    MIF_TRUE,
    MIF_TRUE,
    2,
    MIF_TRUE,
    2,
    MIF_FALSE,
  },
  {
    "wr",
    "input port wr",
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
    "rd",
    "input port rd",
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
    "cs",
    "input port cs",
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
    "mosi",
    "input port mosi",
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
    "miso",
    "input port miso",
    MIF_IN,
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
    "sclk",
    "input port sclk",
    MIF_IN,
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
  {
    "out_data",
    "output port out_data",
    MIF_OUT,
    MIF_DIGITAL,
    "d",
    1,
    MIFportEnum9,
    MIFportStr9,
    MIF_TRUE,
    MIF_TRUE,
    8,
    MIF_TRUE,
    8,
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
};


extern void cm_spi(Mif_Private_t *);

static int val_terms             = 0;
static int val_numNames          = 0;
static int val_numInstanceParms  = 0;
static int val_numModelParms     = 4;
static int val_sizeofMIFinstance = sizeof(MIFinstance);
static int val_sizeofMIFmodel    = sizeof(MIFmodel);

SPICEdev cm_spi_info = {
    .DEVpublic = {
        .name = "spi",
        .description = "Model generated from ghdl code spi.v",
        .terms = &val_terms,
        .numNames = &val_numNames,
        .termNames = NULL,
        .numInstanceParms = &val_numInstanceParms,
        .instanceParms = NULL,
        .numModelParms = &val_numModelParms,
        .modelParms = MIFmPTable,
        .flags = 0,

        .cm_func = cm_spi,
        .num_conn = 10,
        .conn = MIFconnTable,
        .num_param = 4,
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

