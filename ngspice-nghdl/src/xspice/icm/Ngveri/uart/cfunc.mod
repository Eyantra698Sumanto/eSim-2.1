/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_uart.h"

        
void cm_uart(ARGS) 
{
	Digital_State_t *_op_tx_out, *_op_tx_out_old;
	Digital_State_t *_op_tx_empty, *_op_tx_empty_old;
	Digital_State_t *_op_rx_data, *_op_rx_data_old;
	Digital_State_t *_op_rx_empty, *_op_rx_empty_old;

    static int inst_count=0;
    int count=0;
        
    if(INIT)
    {   
        inst_count++;
        PARAM(instance_id)=inst_count;
        foouart(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_reset=PORT_SIZE(reset);

        port_txclk=PORT_SIZE(txclk);

        port_ld_tx_data=PORT_SIZE(ld_tx_data);

        port_tx_data=PORT_SIZE(tx_data);

        port_tx_enable=PORT_SIZE(tx_enable);

        port_rxclk=PORT_SIZE(rxclk);

        port_uld_rx_data=PORT_SIZE(uld_rx_data);

        port_rx_enable=PORT_SIZE(rx_enable);

        port_rx_in=PORT_SIZE(rx_in);

        port_tx_out=PORT_SIZE(tx_out);

        port_tx_empty=PORT_SIZE(tx_empty);

        port_rx_data=PORT_SIZE(rx_data);

        port_rx_empty=PORT_SIZE(rx_empty);
		cm_event_alloc(0,1*sizeof(Digital_State_t));
		cm_event_alloc(1,1*sizeof(Digital_State_t));
		cm_event_alloc(2,8*sizeof(Digital_State_t));
		cm_event_alloc(3,1*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<PORT_SIZE(reset);Ii++)
		{
			LOAD(reset[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(txclk);Ii++)
		{
			LOAD(txclk[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(ld_tx_data);Ii++)
		{
			LOAD(ld_tx_data[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(tx_data);Ii++)
		{
			LOAD(tx_data[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(tx_enable);Ii++)
		{
			LOAD(tx_enable[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(rxclk);Ii++)
		{
			LOAD(rxclk[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(uld_rx_data);Ii++)
		{
			LOAD(uld_rx_data[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(rx_enable);Ii++)
		{
			LOAD(rx_enable[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(rx_in);Ii++)
		{
			LOAD(rx_in[Ii])=PARAM(input_load); 
		}

		/*Retrieve Storage for output*/
		_op_tx_out = _op_tx_out_old = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_tx_empty = _op_tx_empty_old = (Digital_State_t *) cm_event_get_ptr(1,0);
		_op_rx_data = _op_rx_data_old = (Digital_State_t *) cm_event_get_ptr(2,0);
		_op_rx_empty = _op_rx_empty_old = (Digital_State_t *) cm_event_get_ptr(3,0);


	}
	else
	{
		_op_tx_out = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_tx_out_old = (Digital_State_t *) cm_event_get_ptr(0,1);
		_op_tx_empty = (Digital_State_t *) cm_event_get_ptr(1,1);
		_op_tx_empty_old = (Digital_State_t *) cm_event_get_ptr(1,2);
		_op_rx_data = (Digital_State_t *) cm_event_get_ptr(2,2);
		_op_rx_data_old = (Digital_State_t *) cm_event_get_ptr(2,3);
		_op_rx_empty = (Digital_State_t *) cm_event_get_ptr(3,3);
		_op_rx_empty_old = (Digital_State_t *) cm_event_get_ptr(3,4);
	}

	//Formating data for sending it to client
	int Ii;
	count=(int)PARAM(instance_id);

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
    for(Ii=0;Ii<PORT_SIZE(txclk);Ii++)
    {
        if( INPUT_STATE(txclk[Ii])==ZERO )
        {
            temp_txclk[Ii]=0;            }
        else
        {
            temp_txclk[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(ld_tx_data);Ii++)
    {
        if( INPUT_STATE(ld_tx_data[Ii])==ZERO )
        {
            temp_ld_tx_data[Ii]=0;            }
        else
        {
            temp_ld_tx_data[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(tx_data);Ii++)
    {
        if( INPUT_STATE(tx_data[Ii])==ZERO )
        {
            temp_tx_data[Ii]=0;            }
        else
        {
            temp_tx_data[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(tx_enable);Ii++)
    {
        if( INPUT_STATE(tx_enable[Ii])==ZERO )
        {
            temp_tx_enable[Ii]=0;            }
        else
        {
            temp_tx_enable[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(rxclk);Ii++)
    {
        if( INPUT_STATE(rxclk[Ii])==ZERO )
        {
            temp_rxclk[Ii]=0;            }
        else
        {
            temp_rxclk[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(uld_rx_data);Ii++)
    {
        if( INPUT_STATE(uld_rx_data[Ii])==ZERO )
        {
            temp_uld_rx_data[Ii]=0;            }
        else
        {
            temp_uld_rx_data[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(rx_enable);Ii++)
    {
        if( INPUT_STATE(rx_enable[Ii])==ZERO )
        {
            temp_rx_enable[Ii]=0;            }
        else
        {
            temp_rx_enable[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(rx_in);Ii++)
    {
        if( INPUT_STATE(rx_in[Ii])==ZERO )
        {
            temp_rx_in[Ii]=0;            }
        else
        {
            temp_rx_in[Ii]=1;
        }
            }
	foouart(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(tx_out);Ii++)
    {
        if(temp_tx_out[Ii]==0)
        {
            _op_tx_out[Ii]=ZERO;
            }
        else if(temp_tx_out[Ii]==1)
        {
            _op_tx_out[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(tx_out[Ii]) = _op_tx_out[Ii];
            }
        else if(_op_tx_out[Ii] != _op_tx_out_old[Ii])
        {
            OUTPUT_STATE(tx_out[Ii]) = _op_tx_out[Ii];
            OUTPUT_DELAY(tx_out[Ii]) = ((_op_tx_out[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(tx_out[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(tx_out[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(tx_empty);Ii++)
    {
        if(temp_tx_empty[Ii]==0)
        {
            _op_tx_empty[Ii]=ZERO;
            }
        else if(temp_tx_empty[Ii]==1)
        {
            _op_tx_empty[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(tx_empty[Ii]) = _op_tx_empty[Ii];
            }
        else if(_op_tx_empty[Ii] != _op_tx_empty_old[Ii])
        {
            OUTPUT_STATE(tx_empty[Ii]) = _op_tx_empty[Ii];
            OUTPUT_DELAY(tx_empty[Ii]) = ((_op_tx_empty[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(tx_empty[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(tx_empty[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(rx_data);Ii++)
    {
        if(temp_rx_data[Ii]==0)
        {
            _op_rx_data[Ii]=ZERO;
            }
        else if(temp_rx_data[Ii]==1)
        {
            _op_rx_data[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(rx_data[Ii]) = _op_rx_data[Ii];
            }
        else if(_op_rx_data[Ii] != _op_rx_data_old[Ii])
        {
            OUTPUT_STATE(rx_data[Ii]) = _op_rx_data[Ii];
            OUTPUT_DELAY(rx_data[Ii]) = ((_op_rx_data[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(rx_data[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(rx_data[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(rx_empty);Ii++)
    {
        if(temp_rx_empty[Ii]==0)
        {
            _op_rx_empty[Ii]=ZERO;
            }
        else if(temp_rx_empty[Ii]==1)
        {
            _op_rx_empty[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(rx_empty[Ii]) = _op_rx_empty[Ii];
            }
        else if(_op_rx_empty[Ii] != _op_rx_empty_old[Ii])
        {
            OUTPUT_STATE(rx_empty[Ii]) = _op_rx_empty[Ii];
            OUTPUT_DELAY(rx_empty[Ii]) = ((_op_rx_empty[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(rx_empty[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(rx_empty[Ii]) = STRONG;
    }

}