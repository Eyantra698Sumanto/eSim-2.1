#include "ngspice/cm.h"
extern void cm_top1(Mif_Private_t *);
/* This is cfunc.mod file auto generated 
Developed by Sumanto Kar at IIT Bombay */

        
#include <stdio.h>
#include <math.h>
#include <string.h>


void cm_top1(Mif_Private_t *mif_private) 
{   
    Digital_State_t *_op_passed, *_op_passed_old;
    Digital_State_t *_op_failed, *_op_failed_old;
    // Declaring components of Client
    FILE *fpin,*fpout,*fptemp;
    int bytes_recieved;
    char recv_data[1024];
    char *key_iter;
    char temp_data[1024*1024];
    //char temp_d[1024];
    char temp_reset[1024];
    char temp_clk[1024];
    char temp_cyc_cnt[1024];

    
    static int inst_count=0;
    static int count=0;

    if(mif_private->circuit.init)
    {
        inst_count++;
        mif_private->param[0]->element[0].rvalue=inst_count;
        char path[1000]="/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/top1/input";
        char ch=(char)(mif_private->param[0]->element[0].rvalue+48);    
        strncat(path,&ch,1);
        strcat(path,".txt");
        fclose(fopen(path,"w+"));
        fclose(fopen("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/top1/output.txt","r"));
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
        {   printf("ports=%d",mif_private->conn[2]->size);
            mif_private->conn[2]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
        }
        

        /*Retrieve Storage for output*/
        _op_passed = _op_passed_old = (Digital_State_t *) cm_event_get_ptr(0,0);
        _op_failed = _op_failed_old = (Digital_State_t *) cm_event_get_ptr(0,0);


    }
    else
    {
        _op_passed = (Digital_State_t *) cm_event_get_ptr(0,0);
        _op_passed_old = (Digital_State_t *) cm_event_get_ptr(0,1);
        _op_failed = (Digital_State_t *) cm_event_get_ptr(0,0);
        _op_failed_old = (Digital_State_t *) cm_event_get_ptr(0,1);
    }
    
    //Formating data for sending it to client
    int Ii;

   

    for(Ii=0;Ii<mif_private->conn[0]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[0]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_clk[Ii]='0';
        }
        else
        {
            temp_clk[Ii]='1';
        }
    }

    for(Ii=0;Ii<mif_private->conn[1]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[1]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_reset[Ii]='0';
        }
        else
        {
            temp_reset[Ii]='1';
        }
    }
    for(Ii=0;Ii<mif_private->conn[2]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[2]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_cyc_cnt[Ii]='0';
        }
        else
        {
            temp_cyc_cnt[Ii]='1';
        }
    }
    temp_reset[Ii]='\0';
    temp_cyc_cnt[Ii]='\0';
    
    temp_clk[Ii]='\0';
    char pathio[1000]="/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/top1/input";
    char ch=(char)(mif_private->param[0]->element[0].rvalue+48);    
    strncat(pathio,&ch,1);
    strcat(pathio,".txt");
    //printf("%s",path);
    fpout = fopen(pathio,"a+");
    fprintf(fpout,"%sS",temp_clk);
    fprintf(fpout,"%sS",temp_reset);
    
    fprintf(fpout,"%sS",temp_cyc_cnt);
    
    fclose(fpout);
    fptemp = fopen(pathio,"r");
    fscanf(fptemp,"%s", temp_data);
    fclose(fptemp);
    fpout = fopen("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/top1/input.txt","w+");
    fprintf(fpout,"%s", temp_data);
    fclose(fpout);
    system("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/top1/obj_dir/Vtop1");
    fpin=fopen("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/top1/output.txt","r");
    fscanf(fpin,"%s", recv_data);
    fclose(fpin);
    printf("%lf %s %s %s %s %d\n",mif_private->circuit.time, temp_cyc_cnt,temp_clk,temp_reset,recv_data,count);
    
    /* Scheduling event and processing them */
    if((key_iter=strstr(recv_data, "passed:")) != NULL)
    {
        while(*key_iter++ != ':');
        for(Ii=0;*key_iter != ';';Ii++,key_iter++)
        {
            if(*key_iter=='0')
            {
                _op_passed[Ii]=ZERO;
            }
            else if(*key_iter=='1')
            {
                _op_passed[Ii]=ONE;
            }
            else
            {

                printf("Unknown value  \n");
            }

            if(mif_private->circuit.anal_type == DC)
            {
                ((Digital_t*)(mif_private->conn[3]->port[Ii]->output.pvalue))->state = _op_passed[Ii];
            }
            else if(_op_passed[Ii] != _op_passed_old[Ii])
            {
                ((Digital_t*)(mif_private->conn[3]->port[Ii]->output.pvalue))->state = _op_passed[Ii];
                mif_private->conn[3]->port[Ii]->delay = ((_op_passed[Ii] == ZERO) ? mif_private->param[3]->element[0].rvalue : mif_private->param[2]->element[0].rvalue);
            }
            else
            {
                mif_private->conn[3]->port[Ii]->changed = FALSE;
            }
            ((Digital_t*)(mif_private->conn[3]->port[Ii]->output.pvalue))->strength = STRONG;
        }
    }
    if((key_iter=strstr(recv_data, "failed:")) != NULL)
    {
        while(*key_iter++ != ':');
        for(Ii=0;*key_iter != ';';Ii++,key_iter++)
        {
            if(*key_iter=='0')
            {
                _op_failed[Ii]=ZERO;
            }
            else if(*key_iter=='1')
            {
                _op_failed[Ii]=ONE;
            }
            else
            {

                printf("Unknown value  \n");
            }

            if(mif_private->circuit.anal_type == DC)
            {
                ((Digital_t*)(mif_private->conn[4]->port[Ii]->output.pvalue))->state = _op_failed[Ii];
            }
            else if(_op_failed[Ii] != _op_failed_old[Ii])
            {
                ((Digital_t*)(mif_private->conn[4]->port[Ii]->output.pvalue))->state = _op_failed[Ii];
                mif_private->conn[4]->port[Ii]->delay = ((_op_failed[Ii] == ZERO) ? mif_private->param[3]->element[0].rvalue : mif_private->param[2]->element[0].rvalue);
            }
            else
            {
                mif_private->conn[4]->port[Ii]->changed = FALSE;
            }
            ((Digital_t*)(mif_private->conn[4]->port[Ii]->output.pvalue))->strength = STRONG;
        }
    }

}