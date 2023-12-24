#include <iostream>
#include <string>
using namespace std;

class Mobile{
private:    
  string mobileBrand;
  string mobileModelName;
  double mobilePrice;  
public:    
  string getMobileBrand()const{return mobileBrand;}
  string getMobileModelName()const{return mobileModelName;}
  double getMobilePrice()const{return mobilePrice;}
  void setMobileBrand(const string mobileBrandIn){mobileBrand=mobileBrandIn;}
  void setMobileModelName(const string mobileModelNameIn){mobileModelName=mobileModelNameIn;}
  void setMobilePrice(const double mobilePriceIn){mobilePrice=mobilePriceIn;}
};

int main()//DO NOT change the 'main' signature
{
  //Input statements are provided as part of the code skeleton
  string brand,model;
  double price;
  cout<<"Enter the mobile brand:"<<endl;
  cin>>brand;
  cout<<"Enter the mobile model name:"<<endl;
  cin>>model;
  cout<<"Enter the mobile price:"<<endl;
  cin>>price;

  Mobile mobileNew;
  mobileNew.setMobileBrand(brand);
  mobileNew.setMobileModelName(model);
  mobileNew.setMobilePrice(price);
  cout<<"Mobile Details\n";
  cout<<"Mobile Brand:"<<mobileNew.getMobileBrand()<<"\n";
  cout<<"Mobile Model Name:"<<mobileNew.getMobileModelName()<<"\n";
  cout<<"Mobile Price :"<<mobileNew.getMobilePrice()<<"\n";
  return 0;
}
