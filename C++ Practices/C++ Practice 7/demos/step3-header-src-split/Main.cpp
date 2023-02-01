// Main.cpp -- Source file that uses the Rectangle class

#include <iostream>       // For std::cout
#include "Rectangle.hpp"  // For the Rectangle class

using std::cout;

void PrintInfo(const Rectangle& r) {
  cout << "Rectangle width = " << r.Width()
       << ", height = " << r.Height()
       << ",\n"
       << "area = " << r.Area()
       << ", perimeter = " << r.Perimeter()
       << "\n\n";
}

int main() {
  cout << "Default constructed rectangle:\n";
  Rectangle r1{};  // also: Rectangle r1; 
  PrintInfo(r1);

  cout << "Rectangle r{10, 20}:\n";
  Rectangle r{10, 20};
  PrintInfo(r);

  cout << "After 2x scaling:\n";
  r.Scale(2);
  PrintInfo(r);
}

