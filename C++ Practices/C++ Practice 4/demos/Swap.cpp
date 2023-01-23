#include <iostream>
using std::cout;

void Swap(int a, int b) {
  int temp{a};  // temp <== a
  a = b;        // a    <== b
  b = temp;     // b    <== temp
}

int main() {
  int x{2};
  int y{8};

  cout << "Before swap: x = " << x << "; y = " << y << '\n';

  Swap(x, y);

  cout << "After swap:  x = " << x << "; y = " << y << '\n';
}

