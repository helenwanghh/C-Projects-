// Error #3: Missing const

#include <iostream>
using std::cout;

class Rectangle {
 public: 
  Rectangle() = default;

  Rectangle(double width, double height)
    : width_{width}, height_{height}
  {}

  double Width()  const   { return width_; }
  double Height() const   { return height_; }
  
  double Area() { return width_*height_; }

 private:
  double width_{};
  double height_{};
};

void PrintInfo(const Rectangle& r) {
  cout << "Rectangle width = " << r.Width() << ", height = " << r.Height() 
       << ",\n"
       << "area = " << r.Area() << "\n\n";
}

int main() {  
  Rectangle r{10, 20};
  PrintInfo(r);
}

