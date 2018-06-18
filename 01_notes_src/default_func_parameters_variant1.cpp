// default_func_parameters_variant1.cpp

#include <iostream>

extern void showints(int a = 0,int b = 1) ;

int main() {
  showints(1,0);
  showints();

  return 0 ;
}
