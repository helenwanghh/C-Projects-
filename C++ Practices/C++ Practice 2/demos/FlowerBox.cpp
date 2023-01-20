#include <iostream> // For std::cout
#include <string>   // For std::getline, std::string
using namespace std;

int main() {
  cout << "Message? ";
  string message{};
  getline(cin, message);

  string flowerLine(message.length() + 4, '*');

  cout << '\n';

  cout << flowerLine << '\n';
  cout << "* " << message << " *\n";
  cout << flowerLine << '\n';
}

