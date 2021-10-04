  #include "obj_dir/Vour.h"
  #include "/usr/local/share/verilator/include/verilated.h"
#include <iostream>
#include <cstring>
  extern "C" int a;
  extern "C" int foo();
  int foo() {
      a++;
      printf("%d",a);
      VerilatedContext* contextp = new VerilatedContext;
      //contextp->commandArgs(argc, argv);
      Vour* top = new Vour{contextp};
      while (!contextp->gotFinish()) { top->eval(); }
      delete top;
      delete contextp;
      return 0;
  }
