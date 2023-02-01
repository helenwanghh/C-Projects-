// Rectangle.hpp -- Header file that defines the Rectangle class

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


inline Rectangle::Rectangle(double width, double height)
  : width_{width}, height_{height} {}

inline double Rectangle::Width() const { 
  return width_; 
}

inline double Rectangle::Height() const { 
  return height_; 
}
  
inline double Rectangle::Area() const { 
  return width_*height_; 
}

inline double Rectangle::Perimeter() const {
  return 2.0*(width_ + height_);
}

inline void Rectangle::Scale(double scaleFactor) {
  width_  *= scaleFactor;
  height_ *= scaleFactor;
}

#endif // RECTANGLE_HPP


