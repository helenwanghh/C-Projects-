#include <iostream>
using std::cout;

void Swap(int & a, int & b) {
  cout << "Swap int overload\n";
  int temp{a};     // temp <== a
  a = b;           // a    <== b
  b = temp;        // b    <== temp
}

void Swap(double & a, double & b) {
  cout << "Swap double overload\n";
  double temp{a};  // temp <== a
  a = b;           // a    <== b
  b = temp;        // b    <== temp
}

int main() {
  int ix{2};
  int iy{8};
  Swap(ix, iy);

  double dx{3.14};
  double dy{2.71};
  Swap(dx, dy);
}

