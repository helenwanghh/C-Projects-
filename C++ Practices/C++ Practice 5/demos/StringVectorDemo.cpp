#include <iostream> // for std::cout
#include <string>   // for std::string
#include <vector>   // for std::vector
using std::cout;
using std::string;
using std::vector;

int main() {
  vector<string> v{"Connie", "meow"};
  
  v.push_back("C64");
  v.push_back("Amiga500");

  cout << " Number of elements: " << v.size() << '\n';

  cout << " vector's elements: ";
  for (string const& s : v) {
    cout << s << ' ';
  }
  cout << '\n';
}

