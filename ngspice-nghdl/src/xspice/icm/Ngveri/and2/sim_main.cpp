
#include <memory>
#include <verilated.h>
#include "Vand2.h"
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
    
    const std::unique_ptr<Vand2> and2{new Vand2{contextp.get(), "and2"}};
    string line;
    ifstream fpin;
    ofstream fpout;
    fpin.open("read.txt",ios::in);
    getline(fpin,line);

    cout<<(int)line[0]-48;
    and2->A=(int)line[0]-48;
    and2->B=(int)line[1]-48;
    
    fpin.close();
    // Set Vand2's input signals
    fpout.open("write.txt");    
    and2->eval();
    printf("%d\n",and2->Y);
    fpout<<("Y:");
    fpout<<(char)(and2->Y+48);
    fpout<<(";\n");
    and2->final();
    fpout.close();
    }