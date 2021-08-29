#include <memory>
#include <verilated.h>
#include "VConvert.h"
double sc_time_stamp() { return 0; }

int main(int argc, char** argv, char** env) {
    if (false && argc && argv && env) {}
    Verilated::mkdir("logs");
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->debug(0);
    contextp->randReset(2);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    const std::unique_ptr<VConvert> Convert{new VConvert{contextp.get(), "Convert"}};

    // Set VConvert's input signals
    Convert->rstn = !0;
    Convert->clk = 0;
    Convert->d =1;
    int t=1;
    while (t<1000) {
        t++;
        contextp->timeInc(1);  
        Convert->clk = !Convert->clk;
        if (!Convert->clk) {
            if (contextp->time() > 1 && contextp->time() < 10) {
                Convert->rstn = !1;  // Assert reset
            } else {
                Convert->rstn = !0;  // Deassert reset
            }
            // Assign some other inputs
        }
        Convert->eval();     
    }
    Convert->final();
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif
    return 0;
}