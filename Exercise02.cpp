#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;
int main() 
{ 
  int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
  // 1. Create a dynamic Rectangle type variable (pointer)
   // 2. Create a dynamic Rectangle Object set the length and width that was input from the keyboard
  Rectangle r1;
  cout<<"Enter width and length :"<<r1.setlength(int l)<<r1.setwidth(int w)<<endl;
   // 3. Create a dynamic Circle type variable (pointer)
   // 4. Create a dynamic Circle Object set radius that was input from the keyboard
  Circle c1;
  cout<<"Enter Radius :"<<c1.radius(int r)<<endl;
   // 5. Call the display method of the Rectangle Object
  void Rectangle::setwidth(int w),Rectangle::setlength(int l){
      width=w;
      length=l;
  }
   // 6. Call the display method of the Circle Object
  void Circle:setradius(int r){
      radius=r;
  }
   // 7. Delete the Rectangle Object from memory
  Rectangle::~Rectangle();
  Circle::~Circle();
   // 8. Delete the Circle Object from memory
}