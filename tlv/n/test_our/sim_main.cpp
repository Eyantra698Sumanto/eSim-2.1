  #include "obj_dir/Vour.h"
  #include "/usr/local/share/verilator/include/verilated.h"
extern "C" int a;
  int main(int argc, char** argv, char** env) {

      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      Vour* top = new Vour{contextp};
      while (!contextp->gotFinish()) { top->eval(); }
      delete top;
      delete contextp;
      return 0;
  }
