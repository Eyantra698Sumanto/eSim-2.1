/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_shiftregister_pipo.h"

        
void cm_shiftregister_pipo(ARGS) 
{
	Digital_State_t *_op_Po, *_op_Po_old;

    static int inst_count=0;
    int count=0;
        
    if(INIT)
    {   
        inst_count++;
        PARAM(instance_id)=inst_count;
        fooshiftregister_pipo(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_Clk=PORT_SIZE(Clk);

        port_Pi=PORT_SIZE(Pi);

        port_Po=PORT_SIZE(Po);
		cm_event_alloc(0,4*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<PORT_SIZE(Clk);Ii++)
		{
			LOAD(Clk[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(Pi);Ii++)
		{
			LOAD(Pi[Ii])=PARAM(input_load); 
		}

		/*Retrieve Storage for output*/
		_op_Po = _op_Po_old = (Digital_State_t *) cm_event_get_ptr(0,0);


	}
	else
	{
		_op_Po = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_Po_old = (Digital_State_t *) cm_event_get_ptr(0,1);
	}

	//Formating data for sending it to client
	int Ii;
	count=(int)PARAM(instance_id);

    for(Ii=0;Ii<PORT_SIZE(Clk);Ii++)
    {
        if( INPUT_STATE(Clk[Ii])==ZERO )
        {
            temp_Clk[Ii]=0;            }
        else
        {
            temp_Clk[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(Pi);Ii++)
    {
        if( INPUT_STATE(Pi[Ii])==ZERO )
        {
            temp_Pi[Ii]=0;            }
        else
        {
            temp_Pi[Ii]=1;
        }
            }
	fooshiftregister_pipo(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(Po);Ii++)
    {
        if(temp_Po[Ii]==0)
        {
            _op_Po[Ii]=ZERO;
            }
        else if(temp_Po[Ii]==1)
        {
            _op_Po[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(Po[Ii]) = _op_Po[Ii];
            }
        else if(_op_Po[Ii] != _op_Po_old[Ii])
        {
            OUTPUT_STATE(Po[Ii]) = _op_Po[Ii];
            OUTPUT_DELAY(Po[Ii]) = ((_op_Po[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(Po[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(Po[Ii]) = STRONG;
    }

}