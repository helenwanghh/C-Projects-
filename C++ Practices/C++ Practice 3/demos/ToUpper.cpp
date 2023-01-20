#include <cctype>  // for std::toupper
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Please enter a string: ";
  string s{};
  cin >> s;

  // For each character in the read string
  for (char c : s) {
    // Convert it to upper case, and print it
    char u = toupper(c);
    cout << u;
  }
  cout << '\n';
}

