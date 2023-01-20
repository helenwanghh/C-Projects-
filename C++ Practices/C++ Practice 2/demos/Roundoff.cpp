#include <iostream>
using namespace std;

int main() {
  // Print Boolean values as "true" and "false" instead of 1 and 0
  cout << boolalpha;

  double x1 = 0.3;
  double x2 = 0.1 + 0.1 + 0.1;  // 0.1 added 3 times

  cout << "x1 == x2 : " << (x1 == x2) << '\n';


  double y1 = 0.5;
  double y2 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1;  // 0.1 added 5 times

  cout << "y1 == y2 : " << (y1 == y2) << '\n';
}

