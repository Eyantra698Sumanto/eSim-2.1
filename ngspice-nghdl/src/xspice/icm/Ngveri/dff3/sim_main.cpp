#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#define MAX 80
#define SA struct sockaddr
#include <memory>
#include <verilated.h>
#include "Vdff.h"
#include <stdio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;


    #include <sys/socket.h>
    #include <netinet/in.h>
    #include <arpa/inet.h>

    

//double sc_time_stamp() { return 0; }
string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}



int main(int argc, char** argv, char** env) {
    struct hostent *host;
    //char* my_ip = (char*)malloc(16);
    if (false && argc && argv && env) {}
    int PORT= atoi(argv[1]);
    //my_ip= argv[2];
    printf("%d",PORT);
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    const std::unique_ptr<Vdff> dff{new Vdff{contextp.get(), "dff"}};
    string line,lineprev;
    ifstream fpin;
    ofstream fpout;
    //fpin.open("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff3/input.txt",ios::in);
    
    //printf("\nq=%d\n",dff->q);
    //fpout<<("q:");
    //fpout<<(char)(dff->q+48);
    //fpout<<(";\n");
    
    //fpout.close();
    int sockfd, connfd;socklen_t len1;
    struct sockaddr_in servaddr, cli;
   
    // socket create and verification
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    //printf("Client Adress = %s",inet_ntop(AF_INET, SOCK_STREAM, 0));
    if (sockfd == -1) {
        printf("socket creation failed...\n");
        exit(0);
    }
    else
        printf("Socket successfully created..\n");
    bzero(&servaddr, sizeof(servaddr));
    //host = gethostbyname(my_ip);
    // assign IP, PORT
    servaddr.sin_family = AF_INET;
    //char *add;
    inet_aton(argv[2],&servaddr.sin_addr);
    printf("%s",argv[2]);
    //servaddr.sin_addr.s_addr = *add;
    servaddr.sin_port = htons(PORT);
    //sleep(5);
    // Binding newly created socket to given IP and verification
    if ((bind(sockfd, (SA*)&servaddr, sizeof(servaddr))) != 0) {
        printf("socket bind failed...\n");
        exit(0);
    }
    else
        printf("Socket successfully binded..\n");
    //printf("\nREQUEST FROM%sPORT\n",(char)in6_addr() );
    // Now server is ready to listen and verification
    if ((listen(sockfd, 5)) != 0) {
        printf("Listen failed...\n");
        exit(0);
    }
    else
        printf("Server listening..\n");
    len1 = sizeof(cli);
    while(1){
        // Accept the data packet from client and verification
        connfd = accept(sockfd, (SA*)&cli, &len1);
        if (connfd < 0) {
            printf("server accept failed...\n");
            exit(0);
        }
        else
        printf("server accept the client...\n");
   
        // Function for chatting between client and server
        char buff[MAX];
        int n;
        // infinite loop for chat
    
        bzero(buff, MAX);
   
        // read the message from client and copy it in buffer
        read(connfd, buff, sizeof(buff));
        // print buffer which contains the client contents
        printf("From client: %s\t To client : ", buff);
        
        char *tmp="CLOSE_FROM_NGSPICE";
        if(strcmp(buff,tmp)==0)
            break;
        
        n = 0;
        //line=buff;
    
        contextp->timeInc(1);
        dff->d=(int)buff[0]-48;
        dff->rstn=(int)buff[1]-48;

        dff->clk=(int)buff[2]-48;
        dff->eval();
        //printf("\nq=%d\n",dff->q);
        printf("\n%d%d%d%c",dff->d,dff->rstn,dff->clk,(char)dff->q+48);
    
        bzero(buff, MAX);
        buff[0]='q';
        buff[1]=':';
        buff[2]=(char)dff->q+48;
        buff[3]=';';
        printf("%s",buff);
        // and send that buffer to client
        write(connfd, buff, sizeof(buff));
   
        // if msg contains "Exit" then server exit and chat ended.

        close(connfd);
   
    // After chatting close the socket
    }
}
