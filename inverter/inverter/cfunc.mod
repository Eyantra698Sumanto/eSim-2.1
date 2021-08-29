

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>

            
void cm_inverter(ARGS) 
{
    Digital_State_t *_op_o, *_op_o_old;

    FILE *fpin,*fpout;
    char *line;
    char temp_i[1024];
    int bytes_recieved;
    char recv_data[1024];
    char *key_iter;

            if(INIT)
            {
                /* Allocate storage for output ports and set the load for input ports */
                cm_event_alloc(0,1*sizeof(Digital_State_t));
        /* set the load for input ports. */
        int Ii;
        for(Ii=0;Ii<PORT_SIZE(i);Ii++)
        {
            LOAD(i[Ii])=PARAM(input_load); 
        }

        /*Retrieve Storage for output*/
        _op_o = _op_o_old = (Digital_State_t *) cm_event_get_ptr(0,0);

                /*Taking system time info for log */
        }        
    else
    {
        _op_o = (Digital_State_t *) cm_event_get_ptr(0,0);
        _op_o_old = (Digital_State_t *) cm_event_get_ptr(0,1);
    }

            /* Client Fetch IP Addr */   
           
            //Formating data for sending it to client
    int Ii;

    for(Ii=0;Ii<PORT_SIZE(i);Ii++)
            {
        if( INPUT_STATE(i[Ii])==ZERO )
                {
            temp_i[Ii]='0';
        }
                else
        {
            temp_i[Ii]='1';
                }
    }
    temp_i[Ii]='\0';
    bytes_recieved=1;
    //Sending and receiving data to-from server 
    recv_data[bytes_recieved] = '\0';
    fpout = fopen("read.txt","w");

    fprintf(fpout,"%s",temp_i);
    fclose(fpout);
    system("/home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/inverter/obj_dir/VConvert");
    //sleep(1);
    fpin=fopen("write.txt","r");
    fscanf(fpin,"%s", recv_data);
    fclose(fpin);

            printf(" %s\n\n",recv_data);
            /*fprintf(log_client,"Message Received From Server-%s\n",recv_data);*/

            /* Scheduling event and processing them */
            if((key_iter=strstr(recv_data, "o:")) != NULL)
            {
                while(*key_iter++ != ':');
                for(Ii=0;*key_iter != ';';Ii++,key_iter++)
                {
                    //fprintf(log_client,"Client-Bit val is %c \n",*key_iter);
                    if(*key_iter=='0')
                        {
                            _op_o[Ii]=ZERO;
                        }
                    else if(*key_iter=='1')
                    {
                        _op_o[Ii]=ONE;
                    }
            else
            {     
                printf("Unknown value \n");
            }

                    if(ANALYSIS == DC)
            {
                        OUTPUT_STATE(o[Ii]) = _op_o[Ii];
                    }
            else if(_op_o[Ii] != _op_o_old[Ii])
                    {
                OUTPUT_STATE(o[Ii]) = _op_o[Ii];
                        OUTPUT_DELAY(o[Ii]) = ((_op_o[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
                    }
            else
            {
                        OUTPUT_CHANGED(o[Ii]) = FALSE;
            }
                    OUTPUT_STRENGTH(o[Ii]) = STRONG;
                }
            }

}