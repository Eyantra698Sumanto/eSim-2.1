#include "ngspice/cm.h"
extern void cm_d_xnor(Mif_Private_t *);
/*.......1.........2.........3.........4.........5.........6.........7.........8
================================================================================

FILE d_xnor/cfunc.mod

Public Domain

Georgia Tech Research Corporation
Atlanta, Georgia 30332
PROJECT A-8503-405
               

AUTHORS                      

    18 Jun 1991     Jeffrey P. Murray


MODIFICATIONS   

     7 Aug 1991    Jeffrey P. Murray
     2 Oct 1991    Jeffrey P. Murray
                                   

SUMMARY

    This file contains the model-specific routines used to
    functionally describe the d_xnor code model.


INTERFACES       

    FILE                 ROUTINE CALLED     

    CMutil.c             void cm_toggle_bit(); 
       
    CMevt.c              void *cm_event_alloc()
                         void *cm_event_get_ptr()
                         


REFERENCED FILES

    Inputs from and outputs to ARGS structure.
                     

NON-STANDARD FEATURES

    NONE

===============================================================================*/

/*=== INCLUDE FILES ====================*/


                                      

/*=== CONSTANTS ========================*/




/*=== MACROS ===========================*/



  
/*=== LOCAL VARIABLES & TYPEDEFS =======*/                         


    
           
/*=== FUNCTION PROTOTYPE DEFINITIONS ===*/




                   
/*==============================================================================

FUNCTION cm_toggle_bit()


AUTHORS                      

    27 Sept 1991     Jeffrey P. Murray


MODIFICATIONS   

    NONE


SUMMARY

    Alters the state of a passed digital variable to its
    complement. Thus, a ONE changes to a ZERO. A ZERO changes
    to a ONE, and an UNKNOWN remains unchanged.


INTERFACES       

    FILE                 ROUTINE CALLED     

    N/A                  N/A


RETURNED VALUE
    
    No returned value. Passed pointer to variable is used 
    to redefine the variable value.
           

GLOBAL VARIABLES
    
    NONE


NON-STANDARD FEATURES

    NONE
                                                   
===============================================================================*/

/*=== CM_TOGGLE_BIT ROUTINE ===*/

static void cm_toggle_bit(Digital_State_t *bit) 

{
    /* Toggle bit from ONE to ZERO or vice versa, unless the
       bit value is UNKNOWN. In the latter case, return 
       without changing the bit value.                      */

    if ( UNKNOWN != *bit ) {
        if ( ONE == *bit ) {
            *bit = ZERO;
        }
        else { 
            *bit = ONE;
        }
    }

}
                     

/*==============================================================================

FUNCTION cm_d_xnor()


AUTHORS                      

    18 Jun 1991     Jeffrey P. Murray


MODIFICATIONS   

     7 Aug 1991     Jeffrey P. Murray
     2 Oct 1991     Jeffrey P. Murray


SUMMARY

    This function implements the d_xnor code model.


INTERFACES       

    FILE                 ROUTINE CALLED     

    CMutil.c             void cm_toggle_bit(); 
       
    CMevt.c              void *cm_event_alloc()
                         void *cm_event_get_ptr()


RETURNED VALUE
    
    Returns inputs and outputs via ARGS structure.
           

GLOBAL VARIABLES
    
    NONE


NON-STANDARD FEATURES

    NONE
                                                   
===============================================================================*/

/*=== CM_D_XNOR ROUTINE ===*/

/************************************************
*      The following is the model for the       *
*   digital XNOR gate for the                   *
*   ATESSE Version 2.0 system.                  *
*                                               *
*   Created 6/18/91              J.P.Murray     *
************************************************/


void cm_d_xnor(Mif_Private_t *mif_private) 

{
    int                    i,   /* generic loop counter index */
	                    size;   /* number of input & output ports */
         
                        

    Digital_State_t     *out,   /* temporary output for buffers */
                    *out_old,   /* previous output for buffers  */                               
                       input;   /* temp storage for input bits  */    


    /** Retrieve size value... **/
    size = mif_private->conn[0]->size;

                                          

    /*** Setup required state variables ***/

    if(mif_private->circuit.init) {  /* initial pass */ 

        /* allocate storage for the outputs */
        cm_event_alloc(0,sizeof(Digital_State_t));

        for (i=0; i<size; i++) mif_private->conn[0]->port[i]->load = mif_private->param[2]->element[0].rvalue;

        /* retrieve storage for the outputs */
        out = out_old = (Digital_State_t *) cm_event_get_ptr(0,0);

    }
    else {      /* Retrieve previous values */
                                              
        /* retrieve storage for the outputs */
        out = (Digital_State_t *) cm_event_get_ptr(0,0);
        out_old = (Digital_State_t *) cm_event_get_ptr(0,1);
    }


                                     

    /*** Calculate new output value based on inputs ***/

    *out = ONE;
    for (i=0; i<size; i++) {

        /* make sure this input isn't floating... */
        if ( FALSE == mif_private->conn[0]->is_null ) {

            /* if a 1, toggle bit value */
            if ( ONE == (input = ((Digital_t*)(mif_private->conn[0]->port[i]->input.pvalue))->state) ) {
                cm_toggle_bit(out);
            }
            else {                    
                /* if an unknown input, set *out to unknown & break */
                if ( UNKNOWN == input ) {
                    *out = UNKNOWN;
                    break;
                }
            }
        }
        else {
            /* at least one port is floating...output is unknown */
            *out = UNKNOWN;
            break;
        }
    }       



    /*** Determine analysis type and output appropriate values ***/

    if (mif_private->circuit.anal_type == DC) {   /** DC analysis...output w/o delays **/
                                  
        ((Digital_t*)(mif_private->conn[1]->port[0]->output.pvalue))->state = *out;

    }

    else {      /** Transient Analysis **/


        if ( *out != *out_old ) { /* output value is changing */

            switch ( *out ) {
                                                 
            /* fall to zero value */
            case 0: ((Digital_t*)(mif_private->conn[1]->port[0]->output.pvalue))->state = ZERO;
                    mif_private->conn[1]->port[0]->delay = mif_private->param[1]->element[0].rvalue;
                    break;
    
            /* rise to one value */
            case 1: ((Digital_t*)(mif_private->conn[1]->port[0]->output.pvalue))->state = ONE;
                    mif_private->conn[1]->port[0]->delay = mif_private->param[0]->element[0].rvalue;
                    break;
                                    
            /* unknown output */
            default:
                    ((Digital_t*)(mif_private->conn[1]->port[0]->output.pvalue))->state = *out = UNKNOWN;
    
                    /* based on old value, add rise or fall delay */
                    if (0 == *out_old) {  /* add rising delay */
                        mif_private->conn[1]->port[0]->delay = mif_private->param[0]->element[0].rvalue;
                    }
                    else {                /* add falling delay */
                        mif_private->conn[1]->port[0]->delay = mif_private->param[1]->element[0].rvalue;
                    }   
                    break;
            }
        }
        else {                    /* output value not changing */
            mif_private->conn[1]->port[0]->changed = FALSE;
        }
    }

    ((Digital_t*)(mif_private->conn[1]->port[0]->output.pvalue))->strength = STRONG;

} 

      



