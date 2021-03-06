/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vaes_top.h"
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
        extern "C" int temp_start[1024];
        extern "C" int port_start;
        extern "C" int temp_rstn[1024];
        extern "C" int port_rstn;
        extern "C" int temp_plain_text[1024];
        extern "C" int port_plain_text;
        extern "C" int temp_cipher_key[1024];
        extern "C" int port_cipher_key;
        extern "C" int temp_done[1024];
        extern "C" int port_done;
        extern "C" int temp_completed_round[1024];
        extern "C" int port_completed_round;
        extern "C" int temp_cipher_text[1024];
        extern "C" int port_cipher_text;
        extern "C" int fooaes_top(int,int);
        
        void int2arraes_top(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intaes_top(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int fooaes_top(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vaes_top* aes_top[1024];
            count--;
            if (init==0) 
            {
                aes_top[count]=new Vaes_top{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============aes_top : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clk=%d\n", aes_top[count] ->clk);
				printf("start=%d\n", aes_top[count] ->start);
				printf("rstn=%d\n", aes_top[count] ->rstn);
				printf("plain_text=%d\n", aes_top[count] ->plain_text);
				printf("cipher_key=%d\n", aes_top[count] ->cipher_key);
				printf("done=%d\n", aes_top[count] ->done);
				printf("completed_round=%d\n", aes_top[count] ->completed_round);
				printf("cipher_text=%d\n", aes_top[count] ->cipher_text);
				aes_top[count]->clk = arr2intaes_top(temp_clk, port_clk);
				aes_top[count]->start = arr2intaes_top(temp_start, port_start);
				aes_top[count]->rstn = arr2intaes_top(temp_rstn, port_rstn);
				aes_top[count]->plain_text = arr2intaes_top(temp_plain_text, port_plain_text);
				aes_top[count]->cipher_key = arr2intaes_top(temp_cipher_key, port_cipher_key);
				aes_top[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clk=%d\n", aes_top[count] ->clk);
				printf("start=%d\n", aes_top[count] ->start);
				printf("rstn=%d\n", aes_top[count] ->rstn);
				printf("plain_text=%d\n", aes_top[count] ->plain_text);
				printf("cipher_key=%d\n", aes_top[count] ->cipher_key);
				printf("done=%d\n", aes_top[count] ->done);
				printf("completed_round=%d\n", aes_top[count] ->completed_round);
				printf("cipher_text=%d\n", aes_top[count] ->cipher_text);
				int2arraes_top(aes_top[count] -> done, temp_done, port_done);
				int2arraes_top(aes_top[count] -> completed_round, temp_completed_round, port_completed_round);
				int2arraes_top(aes_top[count] -> cipher_text, temp_cipher_text, port_cipher_text);

            }
            return 0;
        }