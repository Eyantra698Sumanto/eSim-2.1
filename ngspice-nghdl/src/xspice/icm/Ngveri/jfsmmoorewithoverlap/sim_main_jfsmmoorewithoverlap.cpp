/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vjfsmmoorewithoverlap.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_clock[1024];
        extern "C" int port_clock;
        extern "C" int temp_reset[1024];
        extern "C" int port_reset;
        extern "C" int temp_datain[1024];
        extern "C" int port_datain;
        extern "C" int temp_dataout[1024];
        extern "C" int port_dataout;
        extern "C" int foojfsmmoorewithoverlap(int,int);
        
        void int2arrjfsmmoorewithoverlap(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intjfsmmoorewithoverlap(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int foojfsmmoorewithoverlap(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vjfsmmoorewithoverlap* jfsmmoorewithoverlap[1024];
            count--;
            if (init==0) 
            {
                jfsmmoorewithoverlap[count]=new Vjfsmmoorewithoverlap{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============jfsmmoorewithoverlap : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clock=%d\n", jfsmmoorewithoverlap[count] ->clock);
				printf("reset=%d\n", jfsmmoorewithoverlap[count] ->reset);
				printf("datain=%d\n", jfsmmoorewithoverlap[count] ->datain);
				printf("dataout=%d\n", jfsmmoorewithoverlap[count] ->dataout);
				jfsmmoorewithoverlap[count]->clock = arr2intjfsmmoorewithoverlap(temp_clock, port_clock);
				jfsmmoorewithoverlap[count]->reset = arr2intjfsmmoorewithoverlap(temp_reset, port_reset);
				jfsmmoorewithoverlap[count]->datain = arr2intjfsmmoorewithoverlap(temp_datain, port_datain);
				jfsmmoorewithoverlap[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clock=%d\n", jfsmmoorewithoverlap[count] ->clock);
				printf("reset=%d\n", jfsmmoorewithoverlap[count] ->reset);
				printf("datain=%d\n", jfsmmoorewithoverlap[count] ->datain);
				printf("dataout=%d\n", jfsmmoorewithoverlap[count] ->dataout);
				int2arrjfsmmoorewithoverlap(jfsmmoorewithoverlap[count] -> dataout, temp_dataout, port_dataout);

            }
            return 0;
        }