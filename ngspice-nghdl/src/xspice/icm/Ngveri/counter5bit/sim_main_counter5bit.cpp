/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vcounter5bit.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_clk[1024];
        extern "C" int port_clk;
        extern "C" int temp_rstn[1024];
        extern "C" int port_rstn;
        extern "C" int temp_out[1024];
        extern "C" int port_out;
        extern "C" int foocounter5bit(int,int);
        
        void int2arrcounter5bit(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intcounter5bit(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int foocounter5bit(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vcounter5bit* counter5bit[1024];
            count--;
            if (init==0) 
            {
                counter5bit[count]=new Vcounter5bit{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============counter5bit : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clk=%d\n", counter5bit[count] ->clk);
				printf("rstn=%d\n", counter5bit[count] ->rstn);
				printf("out=%d\n", counter5bit[count] ->out);
				counter5bit[count]->clk = arr2intcounter5bit(temp_clk, port_clk);
				counter5bit[count]->rstn = arr2intcounter5bit(temp_rstn, port_rstn);
				counter5bit[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clk=%d\n", counter5bit[count] ->clk);
				printf("rstn=%d\n", counter5bit[count] ->rstn);
				printf("out=%d\n", counter5bit[count] ->out);
				int2arrcounter5bit(counter5bit[count] -> out, temp_out, port_out);

            }
            return 0;
        }