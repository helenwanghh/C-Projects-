#include <iostream>
using std::cin;
using std::cout;

double CelsiusFromFahrenheit(double fahrenheit) {
  return (fahrenheit - 32.0)*5.0/9.0;
}

int main() {
  cout << "Please enter a temperature value in Fahrenheit: ";
  double tempF{};
  cin >> tempF;

  cout << "The corresponding value in Celsius is: " 
       << CelsiusFromFahrenheit(tempF) << '\n';  
}

