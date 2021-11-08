
#include <memory>
#include <verilated.h>
#include "Vtop1.h"
#include <stdio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

double sc_time_stamp() { return 0; }
int reverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }
   return sum;
}
int main(int argc, char** argv, char** env) {
    if (false && argc && argv && env) {}

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    const std::unique_ptr<Vtop1> top1{new Vtop1{contextp.get(), "top1"}};
    string line,lineprev;
    ifstream fpin;
    ofstream fpout;
    int j;
    fpin.open("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/top1/input.txt",ios::in);
    getline(fpin,line);
    char *cstr = new char[line.length() + 1];
    strcpy(cstr, line.c_str());
    int len= strlen(cstr);
    cout<<len;
    //cout<<lineprev;
    int i=-1;
    while(i<len-1)
    {   top1->clk=0;
        top1->reset=0;
        top1->cyc_cnt=0;
        contextp->timeInc(1);
    while(line[++i]!='S')
        top1->clk=top1->clk*10+(int)line[i]-48;
    while(line[++i]!='S')
        top1->reset=top1->reset*10+(int)line[i]-48;
    while(line[++i]!='S')
        top1->cyc_cnt=top1->cyc_cnt*10+(int)line[i]-48;
    //top1->cyc_cnt=reverse(top1->cyc_cnt);
    //top1->clk=(int)line[++i]-48;
    top1->eval();
    //printf("\nq=%d\n",top1->q);
}   printf("\n%d%d cyc=%d",top1->clk,top1->reset,top1->cyc_cnt);
   
    fpin.close();
    // Set Vtop1's input signals
    fpout.open("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/top1/output.txt");    
    
    top1->final();
    printf("\npassed=%d;failed=%d;\n",top1->passed,top1->failed);
    fpout<<("passed:");
    fpout<<(char)(top1->passed+48);
    fpout<<(";");
    fpout<<("failed:");
    fpout<<(char)(top1->failed+48);
    fpout<<(";\n");
    
    fpout.close();
    return 0;
}

