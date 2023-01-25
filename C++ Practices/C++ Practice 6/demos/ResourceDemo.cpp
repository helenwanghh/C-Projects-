#include <iostream>
using std::cout;

class Resource {
 public:
  Resource() {
    cout << "Acquiring resource.\n";
  }

  ~Resource() {
    cout << "Releasing resource.\n";
  }

  void Use() {
    cout << "Using resource...\n";
  }

 private:
  // Raw resource safely wrapped here...
};

int main() {
  Resource r{};   
  r.Use();
}

