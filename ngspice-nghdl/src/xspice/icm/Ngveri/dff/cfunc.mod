/* This is cfunc.mod file auto generated 
Developed by Sumanto Kar at IIT Bombay */

        
#include <stdio.h>
#include <math.h>
#include <string.h>


void cm_dff(ARGS) 
{   
    Digital_State_t *_op_q, *_op_q_old;

    // Declaring components of Client
    FILE *fpin,*fpout,*fptemp;
    int bytes_recieved;
    char recv_data[1024];
    char *key_iter;
    char temp_data[1024*1024];
    char temp_d[1024];
    char temp_rstn[1024];
    char temp_clk[1024];
    
    static int inst_count=0;
    static int count=0;

    if(INIT)
    {
        inst_count++;
        PARAM(instance_id)=inst_count;
        char path[1000]="/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff/input";
        char ch=(char)(PARAM(instance_id)+48);    
        strncat(path,&ch,1);
        strcat(path,".txt");
        fclose(fopen(path,"w+"));
        fclose(fopen("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff/output.txt","r"));
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


    }
    else
    {
        _op_q = (Digital_State_t *) cm_event_get_ptr(0,0);
        _op_q_old = (Digital_State_t *) cm_event_get_ptr(0,1);
    }
    
    //Formating data for sending it to client
    int Ii;

    for(Ii=0;Ii<PORT_SIZE(d);Ii++)
    {
        if( INPUT_STATE(d[Ii])==ZERO )
        {
            temp_d[Ii]='0';
        }
        else
        {
            temp_d[Ii]='1';
        }
    }
    temp_d[Ii]='\0';

    for(Ii=0;Ii<PORT_SIZE(rstn);Ii++)
    {
        if( INPUT_STATE(rstn[Ii])==ZERO )
        {
            temp_rstn[Ii]='0';
        }
        else
        {
            temp_rstn[Ii]='1';
        }
    }
    temp_rstn[Ii]='\0';

    for(Ii=0;Ii<PORT_SIZE(clk);Ii++)
    {
        if( INPUT_STATE(clk[Ii])==ZERO )
        {
            temp_clk[Ii]='0';
        }
        else
        {
            temp_clk[Ii]='1';
        }
    }
    temp_clk[Ii]='\0';
    char pathio[1000]="/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff/input";
    char ch=(char)(PARAM(instance_id)+48);    
    strncat(pathio,&ch,1);
    strcat(pathio,".txt");
    //printf("%s",path);
    fpout = fopen(pathio,"a+");
    fprintf(fpout,"%s",temp_d);
    fprintf(fpout,"%s",temp_rstn);
    fprintf(fpout,"%s",temp_clk);
    fclose(fpout);
    fptemp = fopen(pathio,"r");
    fscanf(fptemp,"%s", temp_data);
    fclose(fptemp);
    fpout = fopen("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff/input.txt","w+");
    fprintf(fpout,"%s", temp_data);
    fclose(fpout);
    system("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff/obj_dir/Vdff");
    fpin=fopen("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff/output.txt","r");
    fscanf(fpin,"%s", recv_data);
    fclose(fpin);
    printf("%lf %s %s %s %s %d\n",TIME,temp_d,temp_rstn,temp_clk,recv_data,count);
    
    /* Scheduling event and processing them */
    if((key_iter=strstr(recv_data, "q:")) != NULL)
    {
        while(*key_iter++ != ':');
        for(Ii=0;*key_iter != ';';Ii++,key_iter++)
        {
            if(*key_iter=='0')
            {
                _op_q[Ii]=ZERO;
            }
            else if(*key_iter=='1')
            {
                _op_q[Ii]=ONE;
            }
            else
            {

                printf("Unknown value  \n");
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

}