
#include <memory>
#include <verilated.h>
#include "Vand.h"
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
    
    const std::unique_ptr<Vand> and{new Vand{contextp.get(), "and"}};
    string line;
    ifstream fpin;
    ofstream fpout;
    fpin.open("read.txt",ios::in);
    getline(fpin,line);

    cout<<(int)line[0]-48;
    and->A=(int)line[0]-48;
    and->B=(int)line[1]-48;
    
    fpin.close();
    // Set Vand's input signals
    fpout.open("write.txt");    
    and->eval();
    printf("%d\n",and->Y);
    fpout<<("Y:");
    fpout<<(char)(and->Y+48);
    fpout<<(";\n");
    and->final();
    fpout.close();
    return 0;
}
