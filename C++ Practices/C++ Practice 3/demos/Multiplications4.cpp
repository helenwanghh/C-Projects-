#include <iostream>
#include <random>
using namespace std;

int main() {
  // Infrastructure code for random numbers
  random_device seed{};
  mt19937 engine{seed()};
  uniform_int_distribution<> dis{1, 10};

  bool askMore{ true };
  while (askMore) {   
    int a{ dis(engine) };
    int b{ dis(engine) };

    cout << a << " * " << b << " = ? ";
    int userAnswer{};
    cin >> userAnswer;
        
    if (userAnswer == (a*b)) {
      cout << "Correct!";
    } else {
      cout << "Wrong!";
    }
    
    cout << "\n\nDo you want to continue (Y/N)? ";
    char ch{};
    cin >> ch;
    if (ch == 'n' || ch == 'N') {
      askMore = false;  // User wants to stop
    }
  }
}

