/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_compressor.h"

        
void cm_compressor(ARGS) 
{
	Digital_State_t *_op_CompressedCache, *_op_CompressedCache_old;
	Digital_State_t *_op_DeCompressedCache, *_op_DeCompressedCache_old;

    static int inst_count=0;
    int count=0;
        
    if(INIT)
    {   
        inst_count++;
        PARAM(instance_id)=inst_count;
        foocompressor(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_clock=PORT_SIZE(clock);

        port_UnCompressedCache=PORT_SIZE(UnCompressedCache);

        port_h=PORT_SIZE(h);

        port_n=PORT_SIZE(n);

        port_CompressedCache=PORT_SIZE(CompressedCache);

        port_DeCompressedCache=PORT_SIZE(DeCompressedCache);
		cm_event_alloc(0,256*sizeof(Digital_State_t));
		cm_event_alloc(1,256*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<PORT_SIZE(clock);Ii++)
		{
			LOAD(clock[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(UnCompressedCache);Ii++)
		{
			LOAD(UnCompressedCache[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(h);Ii++)
		{
			LOAD(h[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(n);Ii++)
		{
			LOAD(n[Ii])=PARAM(input_load); 
		}

		/*Retrieve Storage for output*/
		_op_CompressedCache = _op_CompressedCache_old = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_DeCompressedCache = _op_DeCompressedCache_old = (Digital_State_t *) cm_event_get_ptr(1,0);


	}
	else
	{
		_op_CompressedCache = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_CompressedCache_old = (Digital_State_t *) cm_event_get_ptr(0,1);
		_op_DeCompressedCache = (Digital_State_t *) cm_event_get_ptr(1,1);
		_op_DeCompressedCache_old = (Digital_State_t *) cm_event_get_ptr(1,2);
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
    for(Ii=0;Ii<PORT_SIZE(UnCompressedCache);Ii++)
    {
        if( INPUT_STATE(UnCompressedCache[Ii])==ZERO )
        {
            temp_UnCompressedCache[Ii]=0;            }
        else
        {
            temp_UnCompressedCache[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(h);Ii++)
    {
        if( INPUT_STATE(h[Ii])==ZERO )
        {
            temp_h[Ii]=0;            }
        else
        {
            temp_h[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(n);Ii++)
    {
        if( INPUT_STATE(n[Ii])==ZERO )
        {
            temp_n[Ii]=0;            }
        else
        {
            temp_n[Ii]=1;
        }
            }
	foocompressor(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(CompressedCache);Ii++)
    {
        if(temp_CompressedCache[Ii]==0)
        {
            _op_CompressedCache[Ii]=ZERO;
            }
        else if(temp_CompressedCache[Ii]==1)
        {
            _op_CompressedCache[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(CompressedCache[Ii]) = _op_CompressedCache[Ii];
            }
        else if(_op_CompressedCache[Ii] != _op_CompressedCache_old[Ii])
        {
            OUTPUT_STATE(CompressedCache[Ii]) = _op_CompressedCache[Ii];
            OUTPUT_DELAY(CompressedCache[Ii]) = ((_op_CompressedCache[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(CompressedCache[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(CompressedCache[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(DeCompressedCache);Ii++)
    {
        if(temp_DeCompressedCache[Ii]==0)
        {
            _op_DeCompressedCache[Ii]=ZERO;
            }
        else if(temp_DeCompressedCache[Ii]==1)
        {
            _op_DeCompressedCache[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(DeCompressedCache[Ii]) = _op_DeCompressedCache[Ii];
            }
        else if(_op_DeCompressedCache[Ii] != _op_DeCompressedCache_old[Ii])
        {
            OUTPUT_STATE(DeCompressedCache[Ii]) = _op_DeCompressedCache[Ii];
            OUTPUT_DELAY(DeCompressedCache[Ii]) = ((_op_DeCompressedCache[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(DeCompressedCache[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(DeCompressedCache[Ii]) = STRONG;
    }

}