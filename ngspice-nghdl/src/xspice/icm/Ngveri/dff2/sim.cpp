
#include <memory>
#include <verilated.h>
#include "Vdff.h"
#include "sim_main.h"
#include <stdio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;



int main(int argc, char** argv, char** env) {
   //if (false && argc && argv && env) {}
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->traceEverOn(true);
    //contextp->commandArgs(argc, argv);
    const std::unique_ptr<Vdff> dff{new Vdff{contextp.get(), "dff"}};
   // getline(fpin,line);
    /*char *cstr = new char[line.length() + 1];
    strcpy(cstr, line.c_str());
    int len= strlen(cstr);
    cout<<len;*/
    //cout<<lineprev;
    dff->d=temp_d[0];
    dff->clk=temp_clk[0];
    dff->rstn=temp_rstn[0];
   printf("\n%d%d%d",dff->d,dff->rstn,dff->clk);
   dff->eval();
    //fpin.close();
    // Set Vdff's input signals
    //dff->final();
    recv_data[0]=dff->q;
    
    //fpout.close();
    return 0;
}
