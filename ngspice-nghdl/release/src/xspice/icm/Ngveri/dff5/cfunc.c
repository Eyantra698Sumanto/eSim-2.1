#include "ngspice/cm.h"
extern void cm_dff5(Mif_Private_t *);
/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_dff5.h"

        
void cm_dff5(Mif_Private_t *mif_private) 
{
	Digital_State_t *_op_q, *_op_q_old;

    static int inst_count=0;
    int count=0;
        
    if(mif_private->circuit.init)
    {   
        inst_count++;
        mif_private->param[0]->element[0].rvalue=inst_count;
        foodff5(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_d=mif_private->conn[0]->size;

        port_rstn=mif_private->conn[1]->size;

        port_clk=mif_private->conn[2]->size;

        port_q=mif_private->conn[3]->size;
		cm_event_alloc(0,1*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<mif_private->conn[0]->size;Ii++)
		{
			mif_private->conn[0]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}
		for(Ii=0;Ii<mif_private->conn[1]->size;Ii++)
		{
			mif_private->conn[1]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}
		for(Ii=0;Ii<mif_private->conn[2]->size;Ii++)
		{
			mif_private->conn[2]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}

		/*Retrieve Storage for output*/
		_op_q = _op_q_old = (Digital_State_t *) cm_event_get_ptr(0,0);


	}
	else
	{
		_op_q = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_q_old = (Digital_State_t *) cm_event_get_ptr(0,1);
	}

	//Formating data for sending it to client
	int Ii;
	count=(int)mif_private->param[0]->element[0].rvalue;

    for(Ii=0;Ii<mif_private->conn[0]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[0]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_d[Ii]=0;            }
        else
        {
            temp_d[Ii]=1;
        }
            }
    for(Ii=0;Ii<mif_private->conn[1]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[1]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_rstn[Ii]=0;            }
        else
        {
            temp_rstn[Ii]=1;
        }
            }
    for(Ii=0;Ii<mif_private->conn[2]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[2]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_clk[Ii]=0;            }
        else
        {
            temp_clk[Ii]=1;
        }
            }
	foodff5(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<mif_private->conn[3]->size;Ii++)
    {
        if(temp_q[Ii]==0)
        {
            _op_q[Ii]=ZERO;
            }
        else if(temp_q[Ii]==1)
        {
            _op_q[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(mif_private->circuit.anal_type == DC)
        {
            ((Digital_t*)(mif_private->conn[3]->port[Ii]->output.pvalue))->state = _op_q[Ii];
            }
        else if(_op_q[Ii] != _op_q_old[Ii])
        {
            ((Digital_t*)(mif_private->conn[3]->port[Ii]->output.pvalue))->state = _op_q[Ii];
            mif_private->conn[3]->port[Ii]->delay = ((_op_q[Ii] == ZERO) ? mif_private->param[3]->element[0].rvalue : mif_private->param[2]->element[0].rvalue);
            }
        else
        {
            mif_private->conn[3]->port[Ii]->changed = FALSE;
            }
        ((Digital_t*)(mif_private->conn[3]->port[Ii]->output.pvalue))->strength = STRONG;
    }

}