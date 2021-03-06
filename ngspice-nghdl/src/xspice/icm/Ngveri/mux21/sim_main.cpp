/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vmux21.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_D0[1024];
        extern "C" int port_D0;
        extern "C" int temp_D1[1024];
        extern "C" int port_D1;
        extern "C" int temp_S[1024];
        extern "C" int port_S;
        extern "C" int temp_Y[1024];
        extern "C" int port_Y;
        extern "C" int foo(int,int);
        
        void int2arr(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[i] = num % 10;
                num /= 10;
                }
        }
        int arr2int(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 10 * k + array[i];
            return k;
        }
        
        int foo(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vmux21* mux21[1024];
            count--;
            if (init==0) 
            {
                mux21[count]=new Vmux21{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============New Iteration===========");
                printf("\nInside foo before eval.....\n");
				printf("D0=%d\n", mux21[count] ->D0);
				printf("D1=%d\n", mux21[count] ->D1);
				printf("S=%d\n", mux21[count] ->S);
				printf("Y=%d\n", mux21[count] ->Y);
				mux21[count]->D0 = arr2int(temp_D0, port_D0);
				mux21[count]->D1 = arr2int(temp_D1, port_D1);
				mux21[count]->S = arr2int(temp_S, port_S);
				mux21[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("D0=%d\n", mux21[count] ->D0);
				printf("D1=%d\n", mux21[count] ->D1);
				printf("S=%d\n", mux21[count] ->S);
				printf("Y=%d\n", mux21[count] ->Y);
				int2arr(mux21[count] -> Y, temp_Y, port_Y);

            }
            return 0;
        }