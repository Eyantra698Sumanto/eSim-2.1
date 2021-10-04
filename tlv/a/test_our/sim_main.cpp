  #include "Vm12.h"
  #include "verilated.h"
  int main(int argc, char** argv, char** env) {
      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      Vm12* top = new Vm12{contextp};
      while (!contextp->gotFinish()) { top->eval(); }
      delete top;
      delete contextp;
      return 0;
  }