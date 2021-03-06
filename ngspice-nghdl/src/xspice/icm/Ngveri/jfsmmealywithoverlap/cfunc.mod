/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_jfsmmealywithoverlap.h"

        
void cm_jfsmmealywithoverlap(ARGS) 
{
	Digital_State_t *_op_dataout, *_op_dataout_old;

    static int inst_count=0;
    int count=0;
        
    if(INIT)
    {   
        inst_count++;
        PARAM(instance_id)=inst_count;
        foojfsmmealywithoverlap(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_clock=PORT_SIZE(clock);

        port_reset=PORT_SIZE(reset);

        port_datain=PORT_SIZE(datain);

        port_dataout=PORT_SIZE(dataout);
		cm_event_alloc(0,1*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<PORT_SIZE(clock);Ii++)
		{
			LOAD(clock[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(reset);Ii++)
		{
			LOAD(reset[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(datain);Ii++)
		{
			LOAD(datain[Ii])=PARAM(input_load); 
		}

		/*Retrieve Storage for output*/
		_op_dataout = _op_dataout_old = (Digital_State_t *) cm_event_get_ptr(0,0);


	}
	else
	{
		_op_dataout = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_dataout_old = (Digital_State_t *) cm_event_get_ptr(0,1);
	}

	//Formating data for sending it to client
	int Ii;
	count=(int)PARAM(instance_id);

    for(Ii=0;Ii<PORT_SIZE(clock);Ii++)
    {
        if( INPUT_STATE(clock[Ii])==ZERO )
        {
            temp_clock[Ii]=0;            }
        else
        {
            temp_clock[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(reset);Ii++)
    {
        if( INPUT_STATE(reset[Ii])==ZERO )
        {
            temp_reset[Ii]=0;            }
        else
        {
            temp_reset[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(datain);Ii++)
    {
        if( INPUT_STATE(datain[Ii])==ZERO )
        {
            temp_datain[Ii]=0;            }
        else
        {
            temp_datain[Ii]=1;
        }
            }
	foojfsmmealywithoverlap(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(dataout);Ii++)
    {
        if(temp_dataout[Ii]==0)
        {
            _op_dataout[Ii]=ZERO;
            }
        else if(temp_dataout[Ii]==1)
        {
            _op_dataout[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(dataout[Ii]) = _op_dataout[Ii];
            }
        else if(_op_dataout[Ii] != _op_dataout_old[Ii])
        {
            OUTPUT_STATE(dataout[Ii]) = _op_dataout[Ii];
            OUTPUT_DELAY(dataout[Ii]) = ((_op_dataout[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(dataout[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(dataout[Ii]) = STRONG;
    }

}