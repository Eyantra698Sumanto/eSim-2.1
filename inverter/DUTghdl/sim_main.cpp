#include <memory>
#include <verilated.h>
#include "VConvert.h"
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
    Verilated::mkdir("logs");
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->debug(0);
    contextp->randReset(2);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    const std::unique_ptr<VConvert> Convert{new VConvert{contextp.get(), "Convert"}};
    string line;
    ifstream file;
    ofstream fileout;
    file.open("text.txt",ios::in);
    getline(file,line);
    cout<<(int)line[0];
    Convert->i=(int)line[0];
    file.close();
    // Set VConvert's input signals
    fileout.open("write.txt");    
        
        Convert->eval();     
    printf("%d\n",Convert->o);
    fileout<<("o:");
    fileout<<(char)(Convert->o+48);
    fileout<<(";");
    Convert->final();
    fileout.close();
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif
    return 0;
}