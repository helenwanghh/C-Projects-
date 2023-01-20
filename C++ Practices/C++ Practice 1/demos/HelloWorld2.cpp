// This program contains an unused variable.
// It will compile successfully. 
// However, if compiled with basic warnings enabled (-Wall),
// you'll get a proper warning message.

#include <iostream> // For std::cout

int main() {
  int n{}; // <--- This variable is unused!!
  
  std::cout << "Hello, World!\n";
}


