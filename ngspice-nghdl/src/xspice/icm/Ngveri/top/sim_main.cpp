
#include <memory>
#include <verilated.h>
#include "Vtop.h"
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
    
    const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "top"}};
    string line,lineprev;
    ifstream fpin;
    ofstream fpout;
    fpin.open("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/top/input.txt",ios::in);
    getline(fpin,line);
    char *cstr = new char[line.length() + 1];
    strcpy(cstr, line.c_str());
    int len= strlen(cstr);
    cout<<len;
    //cout<<lineprev;
    int i=-1;
    while(i<len-1)
    {contextp->timeInc(1);
    top->clk=(int)line[++i]-48;
    top->reset=(int)line[++i]-48;

    //top->clk=(int)line[++i]-48;
    top->eval();
    //printf("\nq=%d\n",top->q);
}   printf("\n%d%d",top->clk,top->reset);
   
    fpin.close();
    // Set Vtop's input signals
    fpout.open("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/top/output.txt");    
    
    top->final();
    printf("\npassed=%d;failed=%d;\n",top->passed,top->failed);
    fpout<<("passed:");
    fpout<<(char)(top->passed+48);
    fpout<<(";");
    fpout<<("failed:");
    fpout<<(char)(top->failed+48);
    fpout<<(";\n");
    
    fpout.close();
    return 0;
}
