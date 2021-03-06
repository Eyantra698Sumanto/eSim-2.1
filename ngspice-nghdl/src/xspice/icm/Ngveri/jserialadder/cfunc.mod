/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_jserialadder.h"

        
void cm_jserialadder(ARGS) 
{
	Digital_State_t *_op_y, *_op_y_old;
	Digital_State_t *_op_carryout, *_op_carryout_old;
	Digital_State_t *_op_isValid, *_op_isValid_old;
	Digital_State_t *_op_currentsum, *_op_currentsum_old;
	Digital_State_t *_op_currentcarryout, *_op_currentcarryout_old;
	Digital_State_t *_op_currentbitcount, *_op_currentbitcount_old;

    static int inst_count=0;
    int count=0;
        
    if(INIT)
    {   
        inst_count++;
        PARAM(instance_id)=inst_count;
        foojserialadder(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_clk=PORT_SIZE(clk);

        port_rst=PORT_SIZE(rst);

        port_a=PORT_SIZE(a);

        port_b=PORT_SIZE(b);

        port_carryin=PORT_SIZE(carryin);

        port_y=PORT_SIZE(y);

        port_carryout=PORT_SIZE(carryout);

        port_isValid=PORT_SIZE(isValid);

        port_currentsum=PORT_SIZE(currentsum);

        port_currentcarryout=PORT_SIZE(currentcarryout);

        port_currentbitcount=PORT_SIZE(currentbitcount);
		cm_event_alloc(0,4*sizeof(Digital_State_t));
		cm_event_alloc(1,1*sizeof(Digital_State_t));
		cm_event_alloc(2,1*sizeof(Digital_State_t));
		cm_event_alloc(3,1*sizeof(Digital_State_t));
		cm_event_alloc(4,1*sizeof(Digital_State_t));
		cm_event_alloc(5,2*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<PORT_SIZE(clk);Ii++)
		{
			LOAD(clk[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(rst);Ii++)
		{
			LOAD(rst[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(a);Ii++)
		{
			LOAD(a[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(b);Ii++)
		{
			LOAD(b[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(carryin);Ii++)
		{
			LOAD(carryin[Ii])=PARAM(input_load); 
		}

		/*Retrieve Storage for output*/
		_op_y = _op_y_old = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_carryout = _op_carryout_old = (Digital_State_t *) cm_event_get_ptr(1,0);
		_op_isValid = _op_isValid_old = (Digital_State_t *) cm_event_get_ptr(2,0);
		_op_currentsum = _op_currentsum_old = (Digital_State_t *) cm_event_get_ptr(3,0);
		_op_currentcarryout = _op_currentcarryout_old = (Digital_State_t *) cm_event_get_ptr(4,0);
		_op_currentbitcount = _op_currentbitcount_old = (Digital_State_t *) cm_event_get_ptr(5,0);


	}
	else
	{
		_op_y = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_y_old = (Digital_State_t *) cm_event_get_ptr(0,1);
		_op_carryout = (Digital_State_t *) cm_event_get_ptr(1,1);
		_op_carryout_old = (Digital_State_t *) cm_event_get_ptr(1,2);
		_op_isValid = (Digital_State_t *) cm_event_get_ptr(2,2);
		_op_isValid_old = (Digital_State_t *) cm_event_get_ptr(2,3);
		_op_currentsum = (Digital_State_t *) cm_event_get_ptr(3,3);
		_op_currentsum_old = (Digital_State_t *) cm_event_get_ptr(3,4);
		_op_currentcarryout = (Digital_State_t *) cm_event_get_ptr(4,4);
		_op_currentcarryout_old = (Digital_State_t *) cm_event_get_ptr(4,5);
		_op_currentbitcount = (Digital_State_t *) cm_event_get_ptr(5,5);
		_op_currentbitcount_old = (Digital_State_t *) cm_event_get_ptr(5,6);
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
    for(Ii=0;Ii<PORT_SIZE(rst);Ii++)
    {
        if( INPUT_STATE(rst[Ii])==ZERO )
        {
            temp_rst[Ii]=0;            }
        else
        {
            temp_rst[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(a);Ii++)
    {
        if( INPUT_STATE(a[Ii])==ZERO )
        {
            temp_a[Ii]=0;            }
        else
        {
            temp_a[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(b);Ii++)
    {
        if( INPUT_STATE(b[Ii])==ZERO )
        {
            temp_b[Ii]=0;            }
        else
        {
            temp_b[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(carryin);Ii++)
    {
        if( INPUT_STATE(carryin[Ii])==ZERO )
        {
            temp_carryin[Ii]=0;            }
        else
        {
            temp_carryin[Ii]=1;
        }
            }
	foojserialadder(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(y);Ii++)
    {
        if(temp_y[Ii]==0)
        {
            _op_y[Ii]=ZERO;
            }
        else if(temp_y[Ii]==1)
        {
            _op_y[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(y[Ii]) = _op_y[Ii];
            }
        else if(_op_y[Ii] != _op_y_old[Ii])
        {
            OUTPUT_STATE(y[Ii]) = _op_y[Ii];
            OUTPUT_DELAY(y[Ii]) = ((_op_y[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(y[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(y[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(carryout);Ii++)
    {
        if(temp_carryout[Ii]==0)
        {
            _op_carryout[Ii]=ZERO;
            }
        else if(temp_carryout[Ii]==1)
        {
            _op_carryout[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(carryout[Ii]) = _op_carryout[Ii];
            }
        else if(_op_carryout[Ii] != _op_carryout_old[Ii])
        {
            OUTPUT_STATE(carryout[Ii]) = _op_carryout[Ii];
            OUTPUT_DELAY(carryout[Ii]) = ((_op_carryout[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(carryout[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(carryout[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(isValid);Ii++)
    {
        if(temp_isValid[Ii]==0)
        {
            _op_isValid[Ii]=ZERO;
            }
        else if(temp_isValid[Ii]==1)
        {
            _op_isValid[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(isValid[Ii]) = _op_isValid[Ii];
            }
        else if(_op_isValid[Ii] != _op_isValid_old[Ii])
        {
            OUTPUT_STATE(isValid[Ii]) = _op_isValid[Ii];
            OUTPUT_DELAY(isValid[Ii]) = ((_op_isValid[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(isValid[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(isValid[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(currentsum);Ii++)
    {
        if(temp_currentsum[Ii]==0)
        {
            _op_currentsum[Ii]=ZERO;
            }
        else if(temp_currentsum[Ii]==1)
        {
            _op_currentsum[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(currentsum[Ii]) = _op_currentsum[Ii];
            }
        else if(_op_currentsum[Ii] != _op_currentsum_old[Ii])
        {
            OUTPUT_STATE(currentsum[Ii]) = _op_currentsum[Ii];
            OUTPUT_DELAY(currentsum[Ii]) = ((_op_currentsum[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(currentsum[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(currentsum[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(currentcarryout);Ii++)
    {
        if(temp_currentcarryout[Ii]==0)
        {
            _op_currentcarryout[Ii]=ZERO;
            }
        else if(temp_currentcarryout[Ii]==1)
        {
            _op_currentcarryout[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(currentcarryout[Ii]) = _op_currentcarryout[Ii];
            }
        else if(_op_currentcarryout[Ii] != _op_currentcarryout_old[Ii])
        {
            OUTPUT_STATE(currentcarryout[Ii]) = _op_currentcarryout[Ii];
            OUTPUT_DELAY(currentcarryout[Ii]) = ((_op_currentcarryout[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(currentcarryout[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(currentcarryout[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(currentbitcount);Ii++)
    {
        if(temp_currentbitcount[Ii]==0)
        {
            _op_currentbitcount[Ii]=ZERO;
            }
        else if(temp_currentbitcount[Ii]==1)
        {
            _op_currentbitcount[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(currentbitcount[Ii]) = _op_currentbitcount[Ii];
            }
        else if(_op_currentbitcount[Ii] != _op_currentbitcount_old[Ii])
        {
            OUTPUT_STATE(currentbitcount[Ii]) = _op_currentbitcount[Ii];
            OUTPUT_DELAY(currentbitcount[Ii]) = ((_op_currentbitcount[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(currentbitcount[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(currentbitcount[Ii]) = STRONG;
    }

}