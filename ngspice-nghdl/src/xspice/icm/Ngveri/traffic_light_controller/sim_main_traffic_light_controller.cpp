/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vtraffic_light_controller.h"
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
        extern "C" int temp_rst[1024];
        extern "C" int port_rst;
        extern "C" int temp_light_M1[1024];
        extern "C" int port_light_M1;
        extern "C" int temp_light_S[1024];
        extern "C" int port_light_S;
        extern "C" int temp_light_MT[1024];
        extern "C" int port_light_MT;
        extern "C" int temp_light_M2[1024];
        extern "C" int port_light_M2;
        extern "C" int footraffic_light_controller(int,int);
        
        void int2arrtraffic_light_controller(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2inttraffic_light_controller(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int footraffic_light_controller(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vtraffic_light_controller* traffic_light_controller[1024];
            count--;
            if (init==0) 
            {
                traffic_light_controller[count]=new Vtraffic_light_controller{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============traffic_light_controller : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clk=%d\n", traffic_light_controller[count] ->clk);
				printf("rst=%d\n", traffic_light_controller[count] ->rst);
				printf("light_M1=%d\n", traffic_light_controller[count] ->light_M1);
				printf("light_S=%d\n", traffic_light_controller[count] ->light_S);
				printf("light_MT=%d\n", traffic_light_controller[count] ->light_MT);
				printf("light_M2=%d\n", traffic_light_controller[count] ->light_M2);
				traffic_light_controller[count]->clk = arr2inttraffic_light_controller(temp_clk, port_clk);
				traffic_light_controller[count]->rst = arr2inttraffic_light_controller(temp_rst, port_rst);
				traffic_light_controller[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clk=%d\n", traffic_light_controller[count] ->clk);
				printf("rst=%d\n", traffic_light_controller[count] ->rst);
				printf("light_M1=%d\n", traffic_light_controller[count] ->light_M1);
				printf("light_S=%d\n", traffic_light_controller[count] ->light_S);
				printf("light_MT=%d\n", traffic_light_controller[count] ->light_MT);
				printf("light_M2=%d\n", traffic_light_controller[count] ->light_M2);
				int2arrtraffic_light_controller(traffic_light_controller[count] -> light_M1, temp_light_M1, port_light_M1);
				int2arrtraffic_light_controller(traffic_light_controller[count] -> light_S, temp_light_S, port_light_S);
				int2arrtraffic_light_controller(traffic_light_controller[count] -> light_MT, temp_light_MT, port_light_MT);
				int2arrtraffic_light_controller(traffic_light_controller[count] -> light_M2, temp_light_M2, port_light_M2);

            }
            return 0;
        }