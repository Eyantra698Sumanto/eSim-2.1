
//#include <memory>
#include </usr/local/share/verilator/include/verilated.h>
#include "Vand2.h"
#include <stdio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
int in[1000];
int main(int argc, char** argv, char** env) {
    if (false && argc && argv && env) {}

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    const std::unique_ptr<Vand2> and2{new Vand2{contextp.get(), "and2"}};
    string line;
    ifstream fpin;
    ofstream fpout;
    fpin.open("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/and2/input.txt",ios::in);
    getline(fpin,line);
    char *cstr = new char[line.length() + 1];
    strcpy(cstr, line.c_str());
    int len= strlen(cstr);
    int i=-1;
    printf("=============New Iteration===========\n");
    while(i<len-1)
    {
        contextp->timeInc(1);
        and2->A=(int)line[++i]-48;
        and2->B=(int)line[++i]-48;
        and2->eval();
    }
    printf("\nA=%d",and2->A);
    printf("\nB=%d",and2->B);

    fpin.close();
    and2->final();
    fpout.open("/home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/and2/output.txt");    
    printf("\nY=%d",and2->Y);
    fpout<<("Y:");
    fpout<<(char)(and2->Y+48);
    fpout<<(";\n");
    
    printf("\n");
    fpout.close();
    return 0;
}
