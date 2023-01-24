#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void print(vector<int> const& v) {
  for (int n : v) {
    cout << n << ' ';
  }
  cout << '\n';
}

int main() {
  vector<int> v{1, 2, 3};  
  cout << "before: ";
  print(v);

  for (int n : v) {
    n *= 2;
  }

  cout << "after:  ";
  print(v);
}

