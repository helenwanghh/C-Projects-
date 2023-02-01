// Rectangle.hpp -- Header file that declares the Rectangle class

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
 public: 
  Rectangle() = default;
  Rectangle(double width, double height);

  double Width()  const;
  double Height() const;
  
  double Area() const; 
  double Perimeter() const;
  void Scale(double scaleFactor);

 private:
  double width_{};
  double height_{};
};

#endif // RECTANGLE_HPP

