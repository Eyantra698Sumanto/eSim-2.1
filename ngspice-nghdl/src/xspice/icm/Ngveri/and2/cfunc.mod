/* This is cfunc.mod file auto generated by gen_con_info.py
Developed by Sumanto Kar at IIT Bombay */

        
#include <stdio.h>
#include <math.h>
#include <string.h>


void cm_and2(ARGS) 
{
    Digital_State_t *_op_Y, *_op_Y_old;

    // Declaring components of Client
    FILE *fpin,*fpout;
    int bytes_recieved;
    char recv_data[1024];
    char *key_iter;
    char temp_A[1024];
    char temp_B[1024];


    if(INIT)
    {
        /* Allocate storage for output ports and set the load for input ports */
        cm_event_alloc(0,1*sizeof(Digital_State_t));
        /* set the load for input ports. */
        int Ii;
        for(Ii=0;Ii<PORT_SIZE(A);Ii++)
        {
            LOAD(A[Ii])=PARAM(input_load); 
        }
        for(Ii=0;Ii<PORT_SIZE(B);Ii++)
        {
            LOAD(B[Ii])=PARAM(input_load); 
        }

        /*Retrieve Storage for output*/
        _op_Y = _op_Y_old = (Digital_State_t *) cm_event_get_ptr(0,0);


    }
    else
    {
        _op_Y = (Digital_State_t *) cm_event_get_ptr(0,0);
        _op_Y_old = (Digital_State_t *) cm_event_get_ptr(0,1);
    }

    //Formating data for sending it to client
    int Ii;

    for(Ii=0;Ii<PORT_SIZE(A);Ii++)
    {
        if( INPUT_STATE(A[Ii])==ZERO )
        {
            temp_A[Ii]='0';
        }
        else
        {
            temp_A[Ii]='1';
        }
    }
    temp_A[Ii]='\0';

    for(Ii=0;Ii<PORT_SIZE(B);Ii++)
    {
        if( INPUT_STATE(B[Ii])==ZERO )
        {
            temp_B[Ii]='0';
        }
        else
        {
            temp_B[Ii]='1';
        }
    }
    temp_B[Ii]='\0';


    fpout = fopen("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/and2/input.txt","a+");
    fprintf(fpout,"%s",temp_A);
    fprintf(fpout,"%s",temp_B);
    fclose(fpout);
    system("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/and2/obj_dir/Vand2");
    fpin=fopen("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/and2/output.txt","r");
    fscanf(fpin,"%s", recv_data);
    fclose(fpin);
    
    /* Scheduling event and processing them */
    if((key_iter=strstr(recv_data, "Y:")) != NULL)
    {
        while(*key_iter++ != ':');
        for(Ii=0;*key_iter != ';';Ii++,key_iter++)
        {
            if(*key_iter=='0')
            {
                _op_Y[Ii]=ZERO;
            }
            else if(*key_iter=='1')
            {
                _op_Y[Ii]=ONE;
            }
            else
            {

                printf("Unknown value  \n");
            }

            if(ANALYSIS == DC)
            {
                OUTPUT_STATE(Y[Ii]) = _op_Y[Ii];
            }
            else if(_op_Y[Ii] != _op_Y_old[Ii])
            {
                OUTPUT_STATE(Y[Ii]) = _op_Y[Ii];
                OUTPUT_DELAY(Y[Ii]) = ((_op_Y[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
            else
            {
                OUTPUT_CHANGED(Y[Ii]) = FALSE;
            }
            OUTPUT_STRENGTH(Y[Ii]) = STRONG;
        }
    }

}