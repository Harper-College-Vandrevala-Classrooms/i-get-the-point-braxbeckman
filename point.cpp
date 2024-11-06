#include "point.hpp"
#include <cmath>
#include <iostream>
#include <stdexcept>

Point::Point(double x, double y)
{
  this->x = x;
  this->y = y;
}

double Point::getX()
{
  return x;
}
double Point::getY()
{
  return y;
}

double Point::operator-(Point &p)
{
  double result{};
  result = sqrt(((pow((p.getX() - x), 2) + (pow(p.getY() - y, 2)))));
  return result;
}

bool Point::operator==(Point &p)
{
  if (p.getX() == x && p.getY() == y)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Point::operator!=(Point &p)
{
  if (p.getX() == x && p.getY() == y)
  {
    return false;
  }
  else
  {
    return true;
  }
}

Point Point::operator/(Point &p)
{
  double newX;
  double newY;

  newX = (x + p.getX()) / 2;
  newY = (y + p.getY()) / 2;

  Point newPoint(newX, newY);
  return newPoint;
}

std::ostream &operator<<(std::ostream &out, const Point &p)
{
  out << "(" << p.x << ", " << p.y << ")";
  return out;
}

Point Point::operator*(int i)
{
  Point result(x * i, y * i);
  return result;
}

Point Point::operator*(float f)
{
  Point result(x * f, y * f);
  return result;
}

Point Point::operator*(double d)
{
  Point result(x * d, y * d);
  return result;
}

double Point::operator[](char coord)
{
  if (tolower(coord) == 'x')
  {
    return x;
  }
  else if (tolower(coord) == 'y')
  {
    return y;
  }
  else
  {
    throw std::invalid_argument("Invalid argument, please use 'x' or 'y'");
  }
}
