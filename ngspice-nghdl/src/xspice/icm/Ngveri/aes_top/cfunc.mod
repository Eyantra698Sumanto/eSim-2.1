/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_aes_top.h"

        
void cm_aes_top(ARGS) 
{
	Digital_State_t *_op_done, *_op_done_old;
	Digital_State_t *_op_completed_round, *_op_completed_round_old;
	Digital_State_t *_op_cipher_text, *_op_cipher_text_old;

    static int inst_count=0;
    int count=0;
        
    if(INIT)
    {   
        inst_count++;
        PARAM(instance_id)=inst_count;
        fooaes_top(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_clk=PORT_SIZE(clk);

        port_start=PORT_SIZE(start);

        port_rstn=PORT_SIZE(rstn);

        port_plain_text=PORT_SIZE(plain_text);

        port_cipher_key=PORT_SIZE(cipher_key);

        port_done=PORT_SIZE(done);

        port_completed_round=PORT_SIZE(completed_round);

        port_cipher_text=PORT_SIZE(cipher_text);
		cm_event_alloc(0,1*sizeof(Digital_State_t));
		cm_event_alloc(1,10*sizeof(Digital_State_t));
		cm_event_alloc(2,128*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<PORT_SIZE(clk);Ii++)
		{
			LOAD(clk[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(start);Ii++)
		{
			LOAD(start[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(rstn);Ii++)
		{
			LOAD(rstn[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(plain_text);Ii++)
		{
			LOAD(plain_text[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(cipher_key);Ii++)
		{
			LOAD(cipher_key[Ii])=PARAM(input_load); 
		}

		/*Retrieve Storage for output*/
		_op_done = _op_done_old = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_completed_round = _op_completed_round_old = (Digital_State_t *) cm_event_get_ptr(1,0);
		_op_cipher_text = _op_cipher_text_old = (Digital_State_t *) cm_event_get_ptr(2,0);


	}
	else
	{
		_op_done = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_done_old = (Digital_State_t *) cm_event_get_ptr(0,1);
		_op_completed_round = (Digital_State_t *) cm_event_get_ptr(1,1);
		_op_completed_round_old = (Digital_State_t *) cm_event_get_ptr(1,2);
		_op_cipher_text = (Digital_State_t *) cm_event_get_ptr(2,2);
		_op_cipher_text_old = (Digital_State_t *) cm_event_get_ptr(2,3);
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
    for(Ii=0;Ii<PORT_SIZE(start);Ii++)
    {
        if( INPUT_STATE(start[Ii])==ZERO )
        {
            temp_start[Ii]=0;            }
        else
        {
            temp_start[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(rstn);Ii++)
    {
        if( INPUT_STATE(rstn[Ii])==ZERO )
        {
            temp_rstn[Ii]=0;            }
        else
        {
            temp_rstn[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(plain_text);Ii++)
    {
        if( INPUT_STATE(plain_text[Ii])==ZERO )
        {
            temp_plain_text[Ii]=0;            }
        else
        {
            temp_plain_text[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(cipher_key);Ii++)
    {
        if( INPUT_STATE(cipher_key[Ii])==ZERO )
        {
            temp_cipher_key[Ii]=0;            }
        else
        {
            temp_cipher_key[Ii]=1;
        }
            }
	fooaes_top(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(done);Ii++)
    {
        if(temp_done[Ii]==0)
        {
            _op_done[Ii]=ZERO;
            }
        else if(temp_done[Ii]==1)
        {
            _op_done[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(done[Ii]) = _op_done[Ii];
            }
        else if(_op_done[Ii] != _op_done_old[Ii])
        {
            OUTPUT_STATE(done[Ii]) = _op_done[Ii];
            OUTPUT_DELAY(done[Ii]) = ((_op_done[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(done[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(done[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(completed_round);Ii++)
    {
        if(temp_completed_round[Ii]==0)
        {
            _op_completed_round[Ii]=ZERO;
            }
        else if(temp_completed_round[Ii]==1)
        {
            _op_completed_round[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(completed_round[Ii]) = _op_completed_round[Ii];
            }
        else if(_op_completed_round[Ii] != _op_completed_round_old[Ii])
        {
            OUTPUT_STATE(completed_round[Ii]) = _op_completed_round[Ii];
            OUTPUT_DELAY(completed_round[Ii]) = ((_op_completed_round[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(completed_round[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(completed_round[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(cipher_text);Ii++)
    {
        if(temp_cipher_text[Ii]==0)
        {
            _op_cipher_text[Ii]=ZERO;
            }
        else if(temp_cipher_text[Ii]==1)
        {
            _op_cipher_text[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(cipher_text[Ii]) = _op_cipher_text[Ii];
            }
        else if(_op_cipher_text[Ii] != _op_cipher_text_old[Ii])
        {
            OUTPUT_STATE(cipher_text[Ii]) = _op_cipher_text[Ii];
            OUTPUT_DELAY(cipher_text[Ii]) = ((_op_cipher_text[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(cipher_text[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(cipher_text[Ii]) = STRONG;
    }

}