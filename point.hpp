#pragma once
#include <iostream>

class Point
{
private:
  double x{};
  double y{};

public:
  Point(double = 0, double = 0);
  double operator-(Point &p);
  bool operator==(Point &p);
  bool operator!=(Point &p);
  Point operator/(Point &p);
  friend std::ostream &operator<<(std::ostream &out, const Point &p);
  double getX();
  double getY();
};
