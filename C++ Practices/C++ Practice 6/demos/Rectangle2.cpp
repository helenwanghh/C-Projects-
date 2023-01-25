// Error #2: Missing public

#include <iostream>
using std::cout;

class Rectangle {

  Rectangle() = default;

  Rectangle(double width, double height)
    : width_{width}, height_{height}
  {}

  double Width()  const   { return width_; }
  double Height() const   { return height_; }
  
  double Area() const { 
    return width_*height_; 
  }

  double Perimeter() const {
    return 2.0*(width_ + height_);
  }

 private:
  double width_{};
  double height_{};
};

int main() {
  Rectangle r{10, 20};
  cout << r.Area() << '\n'; 
}

