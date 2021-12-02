#include "ngspice/cm.h"
extern void cm_dff(Mif_Private_t *);
/* This is cfunc.mod file auto generated 
Developed by Sumanto Kar at IIT Bombay */

        
#include <stdio.h>
#include <math.h>
#include <string.h>


void cm_dff(Mif_Private_t *mif_private) 
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

    if(mif_private->circuit.init)
    {
        inst_count++;
        mif_private->param[0]->element[0].rvalue=inst_count;
        char path[1000]="/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff/input";
        char ch=(char)(mif_private->param[0]->element[0].rvalue+48);    
        strncat(path,&ch,1);
        strcat(path,".txt");
        fclose(fopen(path,"w+"));
        fclose(fopen("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff/output.txt","r"));
        /* Allocate storage for output ports and set the load for input ports */
        cm_event_alloc(0,1*sizeof(Digital_State_t));
        /* set the load for input ports. */
        int Ii;
        for(Ii=0;Ii<mif_private->conn[0]->size;Ii++)
        {
            mif_private->conn[0]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
        }
        for(Ii=0;Ii<mif_private->conn[1]->size;Ii++)
        {
            mif_private->conn[1]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
        }
        for(Ii=0;Ii<mif_private->conn[2]->size;Ii++)
        {
            mif_private->conn[2]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
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

    for(Ii=0;Ii<mif_private->conn[0]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[0]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_d[Ii]='0';
        }
        else
        {
            temp_d[Ii]='1';
        }
    }
    temp_d[Ii]='\0';

    for(Ii=0;Ii<mif_private->conn[1]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[1]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_rstn[Ii]='0';
        }
        else
        {
            temp_rstn[Ii]='1';
        }
    }
    temp_rstn[Ii]='\0';

    for(Ii=0;Ii<mif_private->conn[2]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[2]->port[Ii]->input.pvalue))->state==ZERO )
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
    char ch=(char)(mif_private->param[0]->element[0].rvalue+48);    
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
    printf("%lf %s %s %s %s %d\n",mif_private->circuit.time,temp_d,temp_rstn,temp_clk,recv_data,count);
    
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

            if(mif_private->circuit.anal_type == DC)
            {
                ((Digital_t*)(mif_private->conn[3]->port[Ii]->output.pvalue))->state = _op_q[Ii];
            }
            else if(_op_q[Ii] != _op_q_old[Ii])
            {
                ((Digital_t*)(mif_private->conn[3]->port[Ii]->output.pvalue))->state = _op_q[Ii];
                mif_private->conn[3]->port[Ii]->delay = ((_op_q[Ii] == ZERO) ? mif_private->param[3]->element[0].rvalue : mif_private->param[2]->element[0].rvalue);
            }
            else
            {
                mif_private->conn[3]->port[Ii]->changed = FALSE;
            }
            ((Digital_t*)(mif_private->conn[3]->port[Ii]->output.pvalue))->strength = STRONG;
        }
    }

}