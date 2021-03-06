
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

double sc_time_stamp() { return 0; }

int main(int argc, char** argv, char** env) {
    if (false && argc && argv && env) {}

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    const std::unique_ptr<Vdff> dff{new Vdff{contextp.get(), "dff"}};
    string line,lineprev;
    ifstream fpin;
    ofstream fpout;
    fpin.open("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff/input.txt",ios::in);
    getline(fpin,line);
    char *cstr = new char[line.length() + 1];
    strcpy(cstr, line.c_str());
    int len= strlen(cstr);
    cout<<len;
    //cout<<lineprev;
    int i=-1;
    while(i<len-1)
    {contextp->timeInc(1);
    dff->d=(int)line[++i]-48;
    dff->rstn=(int)line[++i]-48;

    dff->clk=(int)line[++i]-48;
    dff->eval();
    //printf("\nq=%d\n",dff->q);
}   printf("\n%d%d%d",dff->d,dff->rstn,dff->clk);
   
    fpin.close();
    // Set Vdff's input signals
    fpout.open("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff/output.txt");    
    
    dff->final();
    printf("\nq=%d\n",dff->q);
    fpout<<("q:");
    fpout<<(char)(dff->q+48);
    fpout<<(";\n");
    
    fpout.close();
    return 0;
}
