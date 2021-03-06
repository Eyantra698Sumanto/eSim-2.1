/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vhalfadder.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_a[1024];
        extern "C" int port_a;
        extern "C" int temp_b[1024];
        extern "C" int port_b;
        extern "C" int temp_sum[1024];
        extern "C" int port_sum;
        extern "C" int temp_carry[1024];
        extern "C" int port_carry;
        extern "C" int foohalfadder(int,int);
        
        void int2arrhalfadder(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2inthalfadder(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int foohalfadder(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vhalfadder* halfadder[1024];
            count--;
            if (init==0) 
            {
                halfadder[count]=new Vhalfadder{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============halfadder : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("a=%d\n", halfadder[count] ->a);
				printf("b=%d\n", halfadder[count] ->b);
				printf("sum=%d\n", halfadder[count] ->sum);
				printf("carry=%d\n", halfadder[count] ->carry);
				halfadder[count]->a = arr2inthalfadder(temp_a, port_a);
				halfadder[count]->b = arr2inthalfadder(temp_b, port_b);
				halfadder[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("a=%d\n", halfadder[count] ->a);
				printf("b=%d\n", halfadder[count] ->b);
				printf("sum=%d\n", halfadder[count] ->sum);
				printf("carry=%d\n", halfadder[count] ->carry);
				int2arrhalfadder(halfadder[count] -> sum, temp_sum, port_sum);
				int2arrhalfadder(halfadder[count] -> carry, temp_carry, port_carry);

            }
            return 0;
        }