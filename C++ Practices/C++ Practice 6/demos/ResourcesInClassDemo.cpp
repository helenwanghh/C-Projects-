#include <iostream>
using std::cout;


class ResourceA {
 public:
  ResourceA() {
    cout << "Acquiring resource A.\n";
  }

  ~ResourceA() {
    cout << "Releasing resource A.\n";
  }

  void Use() {
    cout << "Using resource A...\n";
  }

 private:
  // Raw resource safely wrapped here...
};


class ResourceB {
 public:
  ResourceB() {
    cout << "Acquiring resource B.\n";
  }

  ~ResourceB() {
    cout << "Releasing resource B.\n";
  }

  void Use() {
    cout << "Using resource B...\n";
  }

 private:
  // Raw resource safely wrapped here...
};


class ResourceC {
public:
  ResourceC() {
    cout << "Acquiring resource C.\n";
  }

  ~ResourceC() {
    cout << "Releasing resource C.\n";
  }

  void Use() {
    cout << "Using resource C...\n";
  }

 private:
  // Raw resource safely wrapped here...
};


class MyClass {
 public:
  MyClass() = default;

  void DoSomething() {
    resA_.Use();
    resB_.Use();
    resC_.Use();
  }

 private:
  ResourceA resA_{};
  ResourceB resB_{};
  ResourceC resC_{};
};


int main() {
  MyClass x{};   
  cout << "\n-----------------------------------\n";

  x.DoSomething();
  cout << "\n-----------------------------------\n";
}

