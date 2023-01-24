#include <iostream> // for std::cout
#include <vector>   // for std::vector
using std::cout;
using std::vector;

int main() {
  vector<int> v{1980, 1995, 2005, 2016};

  v.push_back(64);
  v.push_back(500);  

  cout << " Number of elements: " << v.size() << '\n';

  cout << " vector's elements: ";
  for (int n : v) {
    cout << n << ' ';
  }
  cout << '\n';
}

