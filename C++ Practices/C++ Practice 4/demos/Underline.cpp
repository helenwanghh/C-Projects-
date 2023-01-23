#include <iostream>
#include <string>
using namespace std;

void Underline(string const& s) {
  // Create a string of the same length of the input string,
  // made by a sequence of the '=' character.
  string line(s.length(), '=');

  cout << s << '\n';    // Input String
  cout << line << '\n'; // ============
}

int main() {
  cout << "Please enter a string: ";
  string str{};
  cin >> str;

  cout << '\n';

  Underline(str);
}

