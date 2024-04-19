#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(string itemName, int itemPrice, int itemQuantity) {
   this->itemName=itemName;
   this->itemPrice = itemPrice;
   this->itemQuantity = itemQuantity;
}
      
void ItemToPurchase::SetName(string name) {
      itemName = name; 
}

string ItemToPurchase::GetName() {
   return itemName;
}

void ItemToPurchase::SetPrice(int price) {
      itemPrice = price;
}
   
int ItemToPurchase::GetPrice() {
   return itemPrice;
}

void ItemToPurchase::SetQuantity(int quant) {
   itemQuantity = quant;
}

int ItemToPurchase::GetQuantity() {
   return itemQuantity;
}
   
