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
  Point operator*(int i);
  Point operator*(float f);
  Point operator*(double d);
  double operator[](char coord);
  friend std::ostream &operator<<(std::ostream &out, const Point &p);
  double getX();
  double getY();
};
