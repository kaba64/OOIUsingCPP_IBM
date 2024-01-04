#include <iostream>
#include <string>
using namespace std;

int calculateTotalReturns(const int amount,const int interestRate){
  return amount +( (amount*interestRate) / 100);
}
int calculateTotalReturns(const int depositAmount ,const int term,const int returnRate){
  int amount{depositAmount*12*term};
  return amount + ((amount*returnRate) / 100);
}
int calculateTotalReturns(const string stockName,const double price,const int number){
  return price*number;
}

int main(){
  int stockName;
  int numbers,amount,rate,depositAmount,term,rRate;
  double sharePrice;
  cout<<"Stock:"<<endl;
  cout<<"Enter stock Name : "<<endl;
  cin>>stockName;
  cout<<"Enter stock price : "<<endl;
  cin>>sharePrice;
  cout<<"Enter number of stocks : "<<endl;
  cin>>numbers;
  cout<<"Total Returns (In US dollars): "<<calculateTotalReturns(stockName,sharePrice,numbers)<<"\n";
  cout<<"FD:"<<endl;
  cout<<"Enter Amount : "<<endl;
  cin>>amount;
  cout<<"Enter interest rate : "<<endl;
  cin>>rate;
  cout<<"Total Returns (In US dollars):"<<calculateTotalReturns(amount,rate)<<"\n";
  cout<<"Mutual Funds :"<<endl;
  cout<<"Enter amount for SIP: "<<endl;
  cin>>depositAmount;
  cout<<"Enter term : "<<endl;
  cin>>term;
  cout<<"Enter return rate : "<<endl;
  cin>>rRate;
  cout<<"Total Returns (In US dollars): "<<calculateTotalReturns(depositAmount,term,rRate)<<"\n";
}
