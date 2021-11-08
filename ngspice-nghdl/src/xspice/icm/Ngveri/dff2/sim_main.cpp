#include <memory>
#include <verilated.h>
#include "Vdff.h"
#include <stdio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

extern "C" int  temp_d[1024];
extern "C" int temp_rstn[1024];
extern "C" int temp_clk[1024];
extern "C" int recv_data[1024];
extern "C" int foo(int);

int foo(int init) {
    const static std::unique_ptr<VerilatedContext> contextp {new VerilatedContext};
    const static std::unique_ptr<Vdff> dff {new Vdff{contextp.get(), "dff"}};

    if (init) {
        contextp->traceEverOn(true);
    } else {
        printf("\nInside foo before eval: %d %d %d %d %d %d\n",dff->d,dff->rstn,dff->clk, dff->q, contextp.get(), dff.get());
        contextp->timeInc(1);
        dff->d=temp_d[0];
        dff->clk=temp_clk[0];
        dff->rstn=temp_rstn[0];
        dff->eval();

        // dff->final();
        printf("\nInside foo after eval: %d %d %d %d\n",dff->d,dff->rstn,dff->clk, dff->q);
        recv_data[0]=dff->q;
    }

    return 0;
}
