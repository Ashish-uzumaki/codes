// local_variables.cpp

#include <iostream>

int main() {
  
  // Instead of defining variable i in the beginning of the function
  // it can be locally defined in-place, as shown here.
  
  for (int i = 0; i < 20; i++)
    std :: cout << "Printing: " << i << std :: endl ;
  // std :: cout << "Printing out of loop: " << i << std :: endl ;
  return 0 ;
}
