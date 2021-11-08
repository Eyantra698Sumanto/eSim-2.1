/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vjboothmultiplier.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_A[1024];
        extern "C" int port_A;
        extern "C" int temp_B[1024];
        extern "C" int port_B;
        extern "C" int temp_PRODUCT[1024];
        extern "C" int port_PRODUCT;
        extern "C" int foojboothmultiplier(int,int);
        
        void int2arrjboothmultiplier(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intjboothmultiplier(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int foojboothmultiplier(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vjboothmultiplier* jboothmultiplier[1024];
            count--;
            if (init==0) 
            {
                jboothmultiplier[count]=new Vjboothmultiplier{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============jboothmultiplier : New Iteration===========");
                printf("\nInside foo before eval.....\n");
				printf("A=%d\n", jboothmultiplier[count] ->A);
				printf("B=%d\n", jboothmultiplier[count] ->B);
				printf("PRODUCT=%d\n", jboothmultiplier[count] ->PRODUCT);
				jboothmultiplier[count]->A = arr2intjboothmultiplier(temp_A, port_A);
				jboothmultiplier[count]->B = arr2intjboothmultiplier(temp_B, port_B);
				jboothmultiplier[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("A=%d\n", jboothmultiplier[count] ->A);
				printf("B=%d\n", jboothmultiplier[count] ->B);
				printf("PRODUCT=%d\n", jboothmultiplier[count] ->PRODUCT);
				int2arrjboothmultiplier(jboothmultiplier[count] -> PRODUCT, temp_PRODUCT, port_PRODUCT);

            }
            return 0;
        }