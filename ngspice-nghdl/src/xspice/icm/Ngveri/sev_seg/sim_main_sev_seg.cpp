/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vsev_seg.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_dist[1024];
        extern "C" int port_dist;
        extern "C" int temp_clk[1024];
        extern "C" int port_clk;
        extern "C" int temp_seg[1024];
        extern "C" int port_seg;
        extern "C" int temp_en[1024];
        extern "C" int port_en;
        extern "C" int foosev_seg(int,int);
        
        void int2arrsev_seg(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intsev_seg(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int foosev_seg(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vsev_seg* sev_seg[1024];
            count--;
            if (init==0) 
            {
                sev_seg[count]=new Vsev_seg{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============sev_seg : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("dist=%d\n", sev_seg[count] ->dist);
				printf("clk=%d\n", sev_seg[count] ->clk);
				printf("seg=%d\n", sev_seg[count] ->seg);
				printf("en=%d\n", sev_seg[count] ->en);
				sev_seg[count]->dist = arr2intsev_seg(temp_dist, port_dist);
				sev_seg[count]->clk = arr2intsev_seg(temp_clk, port_clk);
				sev_seg[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("dist=%d\n", sev_seg[count] ->dist);
				printf("clk=%d\n", sev_seg[count] ->clk);
				printf("seg=%d\n", sev_seg[count] ->seg);
				printf("en=%d\n", sev_seg[count] ->en);
				int2arrsev_seg(sev_seg[count] -> seg, temp_seg, port_seg);
				int2arrsev_seg(sev_seg[count] -> en, temp_en, port_en);

            }
            return 0;
        }