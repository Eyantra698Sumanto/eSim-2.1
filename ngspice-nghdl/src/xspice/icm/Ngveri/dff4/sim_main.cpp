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

extern "C" int  temp_d[1024];
extern "C" int temp_rstn[1024];
extern "C" int temp_clk[1024];
extern "C" int temp_q[1024];
extern "C" int  port_d;
extern "C" int port_rstn;
extern "C" int port_clk;
extern "C" int port_q;
extern "C" int foo(int,int);

void int2arr(int  num, int array[], int n)
{   //int array[1024];
    for (int i = 0; i < n && num>=0; i++) {
    array[i] = num % 10;
    num /= 10;}
}
int arr2int(int array[],int n)
{   int i,k=0;
    for (i = 0; i < n; i++)
    {    printf("k=%d\n",array[i]);
        k = 10 * k + array[i];}
    return k;
}

int foo(int init,int count) {
    printf("%d\n",count);
      static VerilatedContext* contextp = new VerilatedContext;
      //contextp->commandArgs(argc, argv);
      static Vdff* dff[1024];
      count--;

    if (init==0) {
        
        dff[count]=new Vdff{contextp};
      
        contextp->traceEverOn(true);
    } else {
        printf("\nInside foo before eval: %d %d %d %d %d\n",dff[count]->d,dff[count]->rstn,dff[count]->clk, dff[count]->q,count);
        contextp->timeInc(1);
        dff[count]->d=arr2int(temp_d,port_d) ;
        dff[count]->clk=arr2int(temp_clk,port_clk) ;
        dff[count]->rstn=arr2int(temp_rstn,port_rstn) ;
        dff[count]->eval();

        // dff->final();
        printf("\nInside foo after eval: %d %d %d %d\n",dff[count] ->d,dff[count] ->rstn,dff[count] ->clk, dff[count]->q);
        int2arr(dff[count]->q,temp_q,port_q);
        //temp_q=itoa(dff[count]->q);
    }

    return 0;
}

