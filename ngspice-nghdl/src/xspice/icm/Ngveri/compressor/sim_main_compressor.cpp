/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vcompressor.h"
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
        extern "C" int temp_UnCompressedCache[1024];
        extern "C" int port_UnCompressedCache;
        extern "C" int temp_h[1024];
        extern "C" int port_h;
        extern "C" int temp_n[1024];
        extern "C" int port_n;
        extern "C" int temp_CompressedCache[1024];
        extern "C" int port_CompressedCache;
        extern "C" int temp_DeCompressedCache[1024];
        extern "C" int port_DeCompressedCache;
        extern "C" int foocompressor(int,int);
        
        void int2arrcompressor(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intcompressor(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int foocompressor(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vcompressor* compressor[1024];
            count--;
            if (init==0) 
            {
                compressor[count]=new Vcompressor{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============compressor : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clock=%d\n", compressor[count] ->clock);
				printf("UnCompressedCache=%d\n", compressor[count] ->UnCompressedCache);
				printf("h=%d\n", compressor[count] ->h);
				printf("n=%d\n", compressor[count] ->n);
				printf("CompressedCache=%d\n", compressor[count] ->CompressedCache);
				printf("DeCompressedCache=%d\n", compressor[count] ->DeCompressedCache);
				compressor[count]->clock = arr2intcompressor(temp_clock, port_clock);
				compressor[count]->UnCompressedCache = arr2intcompressor(temp_UnCompressedCache, port_UnCompressedCache);
				compressor[count]->h = arr2intcompressor(temp_h, port_h);
				compressor[count]->n = arr2intcompressor(temp_n, port_n);
				compressor[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clock=%d\n", compressor[count] ->clock);
				printf("UnCompressedCache=%d\n", compressor[count] ->UnCompressedCache);
				printf("h=%d\n", compressor[count] ->h);
				printf("n=%d\n", compressor[count] ->n);
				printf("CompressedCache=%d\n", compressor[count] ->CompressedCache);
				printf("DeCompressedCache=%d\n", compressor[count] ->DeCompressedCache);
				int2arrcompressor(compressor[count] -> CompressedCache, temp_CompressedCache, port_CompressedCache);
				int2arrcompressor(compressor[count] -> DeCompressedCache, temp_DeCompressedCache, port_DeCompressedCache);

            }
            return 0;
        }