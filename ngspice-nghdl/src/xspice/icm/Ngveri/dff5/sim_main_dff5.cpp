/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vdff5.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_d[1024];
        extern "C" int port_d;
        extern "C" int temp_rstn[1024];
        extern "C" int port_rstn;
        extern "C" int temp_clk[1024];
        extern "C" int port_clk;
        extern "C" int temp_q[1024];
        extern "C" int port_q;
        extern "C" int foodff5(int,int);
        
        void int2arrdff5(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[i] = num % 10;
                num /= 10;
                }
        }
        int arr2intdff5(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 10 * k + array[i];
            return k;
        }
        
        int foodff5(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vdff5* dff5[1024];
            count--;
            if (init==0) 
            {
                dff5[count]=new Vdff5{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============New Iteration===========");
                printf("\nInside foo before eval.....\n");
				printf("d=%d\n", dff5[count] ->d);
				printf("rstn=%d\n", dff5[count] ->rstn);
				printf("clk=%d\n", dff5[count] ->clk);
				printf("q=%d\n", dff5[count] ->q);
				dff5[count]->d = arr2intdff5(temp_d, port_d);
				dff5[count]->rstn = arr2intdff5(temp_rstn, port_rstn);
				dff5[count]->clk = arr2intdff5(temp_clk, port_clk);
				dff5[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("d=%d\n", dff5[count] ->d);
				printf("rstn=%d\n", dff5[count] ->rstn);
				printf("clk=%d\n", dff5[count] ->clk);
				printf("q=%d\n", dff5[count] ->q);
				int2arrdff5(dff5[count] -> q, temp_q, port_q);

            }
            return 0;
        }