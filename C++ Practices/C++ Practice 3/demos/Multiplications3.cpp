#include <iostream>
#include <random>
using namespace std;

int main() {
  // "Infrastructure" code for random numbers
  random_device seed{};
  mt19937 engine{seed()};
  uniform_int_distribution<> dis{1, 10};

  // How many questions to ask  
  constexpr int questionCount{3};

  // Keep count of correct answers
  int correctAnswers{0};
    
  for (int i = 0; i < questionCount; i++) {   
    int a{ dis(engine) };
    int b{ dis(engine) };

    cout << a << " * " << b << " = ? ";
    int userAnswer{};
    cin >> userAnswer;
        
    if (userAnswer == (a*b)) {
      cout << "Correct!"; 
      correctAnswers++;  // Update # of correct answers
    } else {
      cout << "Wrong!";
    }       
    cout << "\n\n";
  }

  cout << "Correct answers: " << correctAnswers << '\n';

  if (correctAnswers == questionCount) {
    cout << "Congrats! Your answers were all correct!\n";
  }
}

