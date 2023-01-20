#include <iostream>
#include <random>
using namespace std;

int main() {
  // Used to init (seed) the random number generator
  random_device seed{};

  // The random number generator
  mt19937 engine{seed()};

  // Uniformly distribute random numbers in [1-10]
  uniform_int_distribution<> dis{1, 10};
  
  // Generate two random integers  
  int a{ dis(engine) };
  int b{ dis(engine) };
    
  cout << a << " * " << b << " = ? ";
  int userAnswer{};
  cin >> userAnswer;
    
  if (userAnswer == (a*b)) {
    cout << "Correct!\n";
  } else {
    cout << "Wrong!\n";
  }
}

