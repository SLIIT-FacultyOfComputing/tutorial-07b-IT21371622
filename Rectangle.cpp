#include <iostream>
using namespace std;
// Default Constructor Implementation
Rectangle::Rectangle() {
   length = 0;
   width = 0;
}
// Overloaded Constructor Implemenation
Rectangle::Rectangle(int l, int w) {
  length = l;
  width = w;
}
// Destructor Implementation
Rectangle::~Rectangle() {
  cout << "Rectangle Destructor called" << endl;
}
void Rectangle::display() {
   cout << "Rectangle Area = " << calcArea() << endl;
}

int Rectangle::calcArea() {
int Rectangle::calcArea()
{
  return length * width;
}
void Rectangle::setLength(int l)
{
  length=l;
}
void Rectangle::setWidth(int w)
{
  width=w;
}