#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
  // I'd like an int vector containing the value 3
  vector<int> v(3);  

  // Let's add another value to the vector
  v.push_back(4);

  // Print vector's content (expected: 3 4)
  cout << "vector's elements: ";
  for (int n : v) {
    cout << n << ' ';
  }
  cout << '\n';
}

