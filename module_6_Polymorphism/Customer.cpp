#include <iostream>
#include<string>
using namespace std;

class Customer{
protected:
  string name;
  int units;
  string email;
public:
  void setName(string n){name = n;}
  string getName()const{return name;}
  void setEmail(string e){email = e;}
  string getEmail()const{return email;}
  void setUnits(int unit){units = unit;}
  int getUnits()const{return units;}
  virtual int calculateTariff()=0;
};

class NormalCustomer: public Customer{
public:
  int calculateTariff()override{return 0;}
};
class BrandCustomer: public Customer{
public:
  int calculateTariff()override{return 100 + units*2;}
};
class ExecutiveCustomer: public Customer{
public:
  int calculateTariff()override{return units*5;}
};

int main(){ 
  string name;
  string email;
  int units;
  int type;
  cout<<"Enter the name:"<<endl;
  cin>>name;
  cout<<"Enter the emailId:"<<endl;
  cin>>email;
  cout<<"Enter the units:"<<endl;
  cin>>units;
  cout<<"Enter customer type:"<<endl;
  cin>>type;
  int tariff{0};
  if(type==1){
    NormalCustomer obj;
    obj.setUnits(units);
    tariff = obj.calculateTariff();
  }else if(type==1){
    BrandCustomer obj;
    obj.setUnits(units);
    tariff = obj.calculateTariff();
  }else if(type==3){
    ExecutiveCustomer obj;
    obj.setUnits(units);
    tariff = obj.calculateTariff();
  }
  cout<<"Calculated Tariff(In US dollars): "<<tariff<<"\n";
  return 0;
}
