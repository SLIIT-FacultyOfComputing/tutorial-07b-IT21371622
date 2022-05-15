#include "Item.h"
#include <iostream>
using namespace std;
// 4. Implement Default Constructor Implementation
// 5. Implement Overloaded Constructor Implementation
// 6. Implement Destructor (display "Destructor Called")

Item::Item(){
  Itemcode=0;
  unitprice=0;
  discount=0;
}
Item::Item(float discount){
  discount = pdiscount;
}
Item::~Item(){
  cout<<"Distructor called"<<endl;
}
void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}
float Item::getDiscount() {
  return discount;
}
float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}
void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}