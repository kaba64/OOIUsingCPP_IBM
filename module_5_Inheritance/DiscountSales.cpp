#include <iostream>
using namespace std;

class Product
{
protected:
  int markedPrice=1000;
  int discount=40;
public:
  void setMarkedPrice(int mPrice){markedPrice=mPrice;}
  void setDiscount(int dis){discount=dis;}
  int getMarkedPrice()const{return markedPrice;}
  int getDiscount()const{return discount;}
};
 
class Dress: public Product{
public:
  char findSize(int chestSize)const{
    if(chestSize>=20 && chestSize<=30)
      return 'S';
    else if(chestSize>=31 && chestSize<=40)
      return 'M';
    else if(chestSize>40)
      return 'L';
    cout<<"Out of range size (U)\n";
    return 'U';
  }
};

class Shirt: public Dress{
public:
  int calculatePrice(char chestSize)const{
    int addPrice{0};
    if(chestSize=='L')
      addPrice = 1000;
    else if(chestSize=='M')
      addPrice = 500;
    return markedPrice-((markedPrice * discount)/100)+addPrice;
  }
};


int main(){
  
  int size;
  cout<<"Enter the chest size : ";
  cin>>size;
  Shirt myShirt;
  cout<<"Dress Size : "<<myShirt.findSize(size)<<"\n";
  cout<<"Price (in $) : "<<myShirt.calculatePrice(myShirt.findSize(size))<<"\n";
  return 0;
}
