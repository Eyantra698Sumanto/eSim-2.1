
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

int main(int argc, char** argv, char** env) {
    if (false && argc && argv && env) {}

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    const std::unique_ptr<Vdff> dff{new Vdff{contextp.get(), "dff"}};
    string line;
    ifstream fpin;
    ofstream fpout;
    fpin.open("read.txt",ios::in);
    getline(fpin,line);

    cout<<(int)line[0]-48;
    dff->d=(int)line[0]-48;
    dff->rstn=(int)line[1]-48;
    dff->clk=(int)line[2]-48;
    
    fpin.close();
    // Set Vdff's input signals
    fpout.open("write.txt");    
    dff->eval();
    dff->final();
    printf("%d\n",dff->q);
    fpout<<("q:");
    fpout<<(char)(dff->q+48);
    fpout<<(";\n");
    
    fpout.close();
    return 0;
}