#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   string name;
   int price;
   int quant;
   
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin,name);
   cout << "Enter the item price:" << endl;
   cin >> price;
   cout << "Enter the item quantity:" << endl;
   cin >> quant;
   cout << endl;
   ItemToPurchase item1(name, price, quant);
   
   cin.ignore();
   
   cout << "Item 2" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin,name);
   cout << "Enter the item price:" << endl;
   cin >> price;
   cout << "Enter the item quantity:" << endl;
   cin >> quant;
   cout << endl;
   ItemToPurchase item2(name, price, quant);
   
   cout << "TOTAL COST" << endl;
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice()
   << " = $" << item1.GetPrice()*item1.GetQuantity() << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice()
   << " = $" << item2.GetPrice()*item2.GetQuantity() << endl << endl;
   cout << "Total: $" << (item1.GetPrice()*item1.GetQuantity()) + (item2.GetPrice()*item2.GetQuantity()) << endl;
   
   return 0;
}
