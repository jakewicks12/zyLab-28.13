#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
   public:
      void SetName(string name); 
      string GetName();
      void SetPrice(int price);
      int GetPrice();
      void SetQuantity(int quant);
      int GetQuantity();
      ItemToPurchase(string name = "none", int price = 0, int quant = 0);
   private:
      string itemName;
      int itemPrice;
      int itemQuantity;
      
};

#endif
