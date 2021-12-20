/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_ram.h"

        
void cm_ram(ARGS) 
{
	Digital_State_t *_op_dataread, *_op_dataread_old;

    static int inst_count=0;
    int count=0;
        
    if(INIT)
    {   
        inst_count++;
        PARAM(instance_id)=inst_count;
        fooram(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_clk=PORT_SIZE(clk);

        port_reset=PORT_SIZE(reset);

        port_cs=PORT_SIZE(cs);

        port_read=PORT_SIZE(read);

        port_write=PORT_SIZE(write);

        port_datawrite=PORT_SIZE(datawrite);

        port_address=PORT_SIZE(address);

        port_dataread=PORT_SIZE(dataread);
		cm_event_alloc(0,8*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<PORT_SIZE(clk);Ii++)
		{
			LOAD(clk[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(reset);Ii++)
		{
			LOAD(reset[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(cs);Ii++)
		{
			LOAD(cs[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(read);Ii++)
		{
			LOAD(read[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(write);Ii++)
		{
			LOAD(write[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(datawrite);Ii++)
		{
			LOAD(datawrite[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(address);Ii++)
		{
			LOAD(address[Ii])=PARAM(input_load); 
		}

		/*Retrieve Storage for output*/
		_op_dataread = _op_dataread_old = (Digital_State_t *) cm_event_get_ptr(0,0);


	}
	else
	{
		_op_dataread = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_dataread_old = (Digital_State_t *) cm_event_get_ptr(0,1);
	}

	//Formating data for sending it to client
	int Ii;
	count=(int)PARAM(instance_id);

    for(Ii=0;Ii<PORT_SIZE(clk);Ii++)
    {
        if( INPUT_STATE(clk[Ii])==ZERO )
        {
            temp_clk[Ii]=0;            }
        else
        {
            temp_clk[Ii]=1;
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
    for(Ii=0;Ii<PORT_SIZE(cs);Ii++)
    {
        if( INPUT_STATE(cs[Ii])==ZERO )
        {
            temp_cs[Ii]=0;            }
        else
        {
            temp_cs[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(read);Ii++)
    {
        if( INPUT_STATE(read[Ii])==ZERO )
        {
            temp_read[Ii]=0;            }
        else
        {
            temp_read[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(write);Ii++)
    {
        if( INPUT_STATE(write[Ii])==ZERO )
        {
            temp_write[Ii]=0;            }
        else
        {
            temp_write[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(datawrite);Ii++)
    {
        if( INPUT_STATE(datawrite[Ii])==ZERO )
        {
            temp_datawrite[Ii]=0;            }
        else
        {
            temp_datawrite[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(address);Ii++)
    {
        if( INPUT_STATE(address[Ii])==ZERO )
        {
            temp_address[Ii]=0;            }
        else
        {
            temp_address[Ii]=1;
        }
            }
	fooram(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(dataread);Ii++)
    {
        if(temp_dataread[Ii]==0)
        {
            _op_dataread[Ii]=ZERO;
            }
        else if(temp_dataread[Ii]==1)
        {
            _op_dataread[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(dataread[Ii]) = _op_dataread[Ii];
            }
        else if(_op_dataread[Ii] != _op_dataread_old[Ii])
        {
            OUTPUT_STATE(dataread[Ii]) = _op_dataread[Ii];
            OUTPUT_DELAY(dataread[Ii]) = ((_op_dataread[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(dataread[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(dataread[Ii]) = STRONG;
    }

}