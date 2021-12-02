#include "ngspice/cm.h"
extern void cm_dff3(Mif_Private_t *);
/* This is cfunc.mod file auto generated 
Developed by Sumanto Kar at IIT Bombay */
                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include <time.h>
        #include <sys/types.h>
        #include <stdlib.h>
        #include <unistd.h>
        #include <errno.h>

        
            #include <sys/socket.h>
            #include <netinet/in.h>
            #include <netdb.h>
        
#include <stdio.h>
#include <math.h>
#include <string.h>


void cm_dff3(Mif_Private_t *mif_private) 
{   
    Digital_State_t *_op_q, *_op_q_old;

    // Declaring components of Client
    FILE *fpin,*fpout,*fptemp;
    int bytes_recieved;
    int socket_fd;
    struct sockaddr_in server_addr;
    char recv_data[1024];
    struct hostent *host;
    char *key_iter;
    char send_data[1024];
    char temp_data[1024*1024];
    char temp_d[1024];
    char temp_rstn[1024];
    char temp_clk[1024];
    FILE *log_client=fopen("client.log","a");
    int sock_port = 5000+mif_private->param[0]->element[0].rvalue;
    
    static int inst_count=0;
    static int count=0;

    if(mif_private->circuit.init)
    {
        inst_count++;
        mif_private->param[0]->element[0].rvalue=inst_count;
        char path[1000]="/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff3/input";
        char ch=(char)(mif_private->param[0]->element[0].rvalue+48);    
        strncat(path,&ch,1);
        strcat(path,".txt");
        fclose(fopen(path,"w+"));
        fclose(fopen("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff3/output.txt","r"));
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
        time_t systime;
                systime = time(NULL);
                printf(ctime(&systime));
                printf("Client-Initialising ...\n\n");
                fprintf(log_client,"Setup Client Server Connection at %s \n",ctime(&systime));
        

                /* Client Setup IP Addr */
                FILE *fptr;
                int ip_count = 0;
                char* my_ip = malloc(16);

                char ip_filename[100];
        
                    sprintf(ip_filename, "/tmp/NGHDL_COMMON_IP_%d.txt", getpid());
            
                fptr = fopen(ip_filename, "r");
                if (fptr)
                {
                    char line_ip[20];
                    int line_port;
                    while(fscanf(fptr, "%s %d", line_ip, &line_port) == 2) {
                        ip_count++;
                    }

                    fclose(fptr);
                }

                if (ip_count < 254) {
                    sprintf(my_ip, "127.0.0.%d", ip_count+1);
                } else {
                    sprintf(my_ip, "127.0.%d.1", (ip_count+3)%256);
                }

                fptr = fopen(ip_filename, "a");
                if (fptr)
                {
                    fprintf(fptr, "%s %d\n", my_ip, sock_port);
                    fclose(fptr);
                } else {
                    perror("Client - cannot open Common_IP file ");
                    exit(1);
                }

                mif_private->inst_var[0]->element[0].pvalue = my_ip;
        
        char command[1024];
        snprintf(command,1024,"/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff3/start_server.sh %d %s &",sock_port, my_ip);
        printf(command,1024,"/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff3/start_server.sh %d %s &",sock_port, my_ip);
        system(command);


    }
    else
    {
        _op_q = (Digital_State_t *) cm_event_get_ptr(0,0);
        _op_q_old = (Digital_State_t *) cm_event_get_ptr(0,1);
    }
    /* Client Fetch IP Addr */
        
            char* my_ip = mif_private->inst_var[0]->element[0].pvalue;

            host = gethostbyname(my_ip);
            fprintf(log_client,"Creating client socket \n");
        
            //Creating socket for client
            if ((socket_fd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
            {
                perror("Client - Error while creating client Socket ");
                fprintf(log_client,"Error while creating client socket \n");
                exit(1);
            }

            printf("Client-Socket (Id : %d) created\n", socket_fd);
            fprintf(log_client,"Client-Client Socket created successfully \n");
            fprintf(log_client,"Client- Socket Id : %d \n",socket_fd);

            // memset(&server_addr, 0, sizeof(server_addr));
            server_addr.sin_family = AF_INET;
            server_addr.sin_port = htons(sock_port);
            printf("%s",my_ip);
            server_addr.sin_addr = *((struct in_addr *)host->h_addr);
            bzero(&(server_addr.sin_zero),8);

        
            fprintf(log_client,"Client-Connecting to server \n");

            //Connecting to server
            int try_limit=40;
            while(try_limit>0)
            {
                if (connect(socket_fd, (struct sockaddr*)&server_addr,sizeof(struct sockaddr)) == -1)
                {
                    sleep(1);
                    try_limit--;
                    if(try_limit==0)
                    {
                        fprintf(stderr,"Connect- Error:Tried to connect server on port,failed...giving up \n");
                        fprintf(log_client,"Connect- Error:Tried to connect server on port, failed...giving up \n");
                        exit(1);
                    }
                }
                else
                {
                    printf("Client-Connected to server \n");
                    fprintf(log_client,"Client-Connected to server \n");
                    break;
                }
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
    snprintf(send_data,sizeof(send_data),"%s%s%s", temp_d,temp_rstn,temp_clk);
    if ( send(socket_fd,send_data,sizeof(send_data),0)==-1)
            {
                fprintf(stderr, "Client-Failure Sending Message \n");
        
                    close(socket_fd);
            
                exit(1);
            }
            else
            {
                printf("Client-Message sent: %s \n",send_data);
                fprintf(log_client,"Socket Id : %d & Message sent : %s \n",socket_fd,send_data);
            }
    
    
    bytes_recieved=recv(socket_fd,recv_data,sizeof(recv_data),0);
            if ( bytes_recieved <= 0 )
            {
                perror("Client-Either Connection Closed or Error ");
                exit(1);
            }
            recv_data[bytes_recieved] = '\0';
            
            printf("Client-Message Received -  %s\n\n",recv_data);
            fprintf(log_client,"Message Received From Server-%s\n",recv_data);
    /* Scheduling event and processing them */
    printf("%lf %s %s %s %s %d\n",mif_private->circuit.time,temp_d,temp_rstn,temp_clk,recv_data,count);
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
    close(socket_fd);

    fclose(log_client);

}