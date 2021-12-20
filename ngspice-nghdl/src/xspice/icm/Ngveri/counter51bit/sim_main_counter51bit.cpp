/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vcounter51bit.h"
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
        extern "C" int temp_reset[1024];
        extern "C" int port_reset;
        extern "C" int temp_out[1024];
        extern "C" int port_out;
        extern "C" int foocounter51bit(int,int);
        
        void int2arrcounter51bit(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intcounter51bit(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int foocounter51bit(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vcounter51bit* counter51bit[1024];
            count--;
            if (init==0) 
            {
                counter51bit[count]=new Vcounter51bit{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============counter51bit : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clk=%d\n", counter51bit[count] ->clk);
				printf("reset=%d\n", counter51bit[count] ->reset);
				printf("out=%d\n", counter51bit[count] ->out);
				counter51bit[count]->clk = arr2intcounter51bit(temp_clk, port_clk);
				counter51bit[count]->reset = arr2intcounter51bit(temp_reset, port_reset);
				counter51bit[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clk=%d\n", counter51bit[count] ->clk);
				printf("reset=%d\n", counter51bit[count] ->reset);
				printf("out=%d\n", counter51bit[count] ->out);
				int2arrcounter51bit(counter51bit[count] -> out, temp_out, port_out);

            }
            return 0;
        }