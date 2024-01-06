#include<iostream>
#include "Product.cpp"
using namespace std;

void setDiscount(Product &product, double discount){
  
  double newUnitPrice{product.unitPrice*discount/100};
  product.unitPrice-= newUnitPrice;
}

int main(){
  int productId;
  string productName;
  double quantity,unitPrice,discount;
  cout<<"Enter the product Id"<<endl;
  cin>>productId;
  cout<<"Enter the product Name"<<endl;
  cin>>productName;
  cout<<"Enter the quantity in kgs"<<endl;
  cin>>quantity;
  cout<<"Enter the unit price per kg"<<endl;
  cin>>unitPrice;
  //Fill the code here 
  cout<<"Enter the discount percentage"<<endl;
  cin>>discount;
  Product newProduct(productId,productName,quantity,unitPrice);
  setDiscount(newProduct,discount);
  cout<<"After discount, bill amount of Product id "<<productId<<" is  "<<newProduct.calculateBillAmount()<<" US Dollars\n";
  return 0;
}
