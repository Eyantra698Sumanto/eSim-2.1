/* This is cfunc.mod file auto generated 
Developed by Rahul Paknikar at IIT Bombay */

        
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "sim_main.h"

void cm_dff4(ARGS) 
{   
    Digital_State_t *_op_q, *_op_q_old;

    // Declaring components of Client
    //FILE *fpin,*fpout,*fptemp;
    //int bytes_recieved;
    //char temp_q[1024];
    //char *key_iter;
    //char temp_data[1024*1024];
    //char temp_d[1024];
    //char temp_rstn[1024];
    //char temp_clk[1024];

    static int inst_count=0;
    int count=0;
    if(INIT)
    { 
        inst_count++;
        PARAM(instance_id)=inst_count;
        port_d=PORT_SIZE(d);
        port_rstn=PORT_SIZE(rstn);
        port_clk=PORT_SIZE(clk);
        port_q=PORT_SIZE(q);
        
        /* Allocate storage for output ports and set the load for input ports */
        cm_event_alloc(0,1*sizeof(Digital_State_t));
        /* set the load for input ports. */
        int Ii;
        for(Ii=0;Ii<PORT_SIZE(d);Ii++)
        {
            LOAD(d[Ii])=PARAM(input_load); 
        }
        for(Ii=0;Ii<PORT_SIZE(rstn);Ii++)
        {
            LOAD(rstn[Ii])=PARAM(input_load); 
        }
        for(Ii=0;Ii<PORT_SIZE(clk);Ii++)
        {
            LOAD(clk[Ii])=PARAM(input_load); 
        }

        /*Retrieve Storage for output*/
        _op_q = _op_q_old = (Digital_State_t *) cm_event_get_ptr(0,0);

        foo(0,inst_count);
    }
    else
    {
        _op_q = (Digital_State_t *) cm_event_get_ptr(0,0);
        _op_q_old = (Digital_State_t *) cm_event_get_ptr(0,1);
    }
    
    //Formating data for sending it to client
    int Ii;
     count=(int)PARAM(instance_id);
    for(Ii=0;Ii<PORT_SIZE(d);Ii++)
    {   
        if( INPUT_STATE(d[Ii])==ZERO )
        {
            temp_d[Ii] =0;
        }
        else
        {
            temp_d[Ii] =1;
        }
    }
    //temp_d[Ii]='\0';

    for(Ii=0;Ii<PORT_SIZE(rstn);Ii++)
    {   
        if( INPUT_STATE(rstn[Ii])==ZERO )
        {
            temp_rstn[Ii] =0;
        }
        else
        {
            temp_rstn[Ii] =1;
        }
    }
    //temp_rstn[Ii]='\0';

    for(Ii=0;Ii<PORT_SIZE(clk);Ii++)
    {   
        if( INPUT_STATE(clk[Ii])==ZERO )
        {
            temp_clk[Ii] =0;
        }
        else
        {
            temp_clk[Ii] =1;
        }
    }
    //temp_clk[Ii]='\0';
   
    foo(1,count);
    Ii=0;

    /* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(q);Ii++)
    {   
            if(temp_q[Ii] ==0)
            {
                _op_q[Ii]=ZERO;
            }
            else if(temp_q[0] ==1)
            {
                _op_q[Ii]=ONE;
            }
            else
            {

                printf("Unknown value %d\n", temp_q[0] );
            }

            if(ANALYSIS == DC)
            {
                OUTPUT_STATE(q[Ii]) = _op_q[Ii];
            }
            else if(_op_q[Ii] != _op_q_old[Ii])
            {
                OUTPUT_STATE(q[Ii]) = _op_q[Ii];
                OUTPUT_DELAY(q[Ii]) = ((_op_q[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
            else
            {
                OUTPUT_CHANGED(q[Ii]) = FALSE;
            }
            OUTPUT_STRENGTH(q[Ii]) = STRONG;
            }
}