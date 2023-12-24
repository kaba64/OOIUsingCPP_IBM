#include <iostream>
#include <string>
using namespace std;

class Shop{
private:
  string itemName;
  int itemQuantity;
  double itemPrice;
public:
  string getItemName()const{return itemName;}
  int getItemQuantity()const{return itemQuantity;}
  double getItemPrice()const{return itemPrice;}
  void setItemName(const string itemNameIn){itemName=itemNameIn;}
  void setItemQuantity(const int itemQuantityIn){itemQuantity=itemQuantityIn;}
  void setItemPrice(const double itemPriceIn){itemPrice=itemPriceIn;}
};

int main()
{
  string name;
  int quantity;
  double price;
  cout<<"Enter the item name:"<<endl;
  cin>>name;
  cout<<"Enter the item quantity:"<<endl;
  cin>>quantity;
  cout<<"Enter the item price:"<<endl;
  cin>>price;

  Shop NewShop;
  NewShop.setItemName(name);
  NewShop.setItemQuantity(quantity);
  NewShop.setItemPrice(price);
  cout<<"Item Name: "<<NewShop.getItemName()<<"\n";
  cout<<"Item Quantity: "<<NewShop.getItemQuantity()<<"\n";
  cout<<"Item Price: "<<NewShop.getItemPrice()<<"\n";
  return 0;
}
