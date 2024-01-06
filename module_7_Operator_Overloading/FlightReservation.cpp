//IMPLEMENT METHOD 'calculateReimbursement' and 'main' IN THIS FILE
#include<iostream>
#include "Reservation.cpp"
using namespace std;

void calculateReimbursement(Reservation &res){
  if(res.ticketCost>6000)
    res.discountPercentage="5%";
  else
    res.discountPercentage="0%";
}

int main(){
  int id,noOftickets;
  string name,food;
  double rate;
  cout<<"Enter the reservation id"<<endl;
  cin>>id;
  cout<<"Enter the reservation name"<<endl;
  cin>>name;
  cout<<"Enter number of tickets"<<endl;
  cin>>noOftickets;
  cout<<"Enter per ticket rate"<<endl;
  cin>>rate;
  cout<<"Enter type of food"<<endl;
  cin>>food;
  Reservation reservation1(id,name,noOftickets,rate,food);
  reservation1.calculateTicketCost();
  calculateReimbursement(reservation1);
  cout<<"Total ticket cost is "<<reservation1.getTicketCost()<<" US Dollars\n";
  if(reservation1.getDiscountPercentage()=="5%")
    cout<<"You are eligible for "<<reservation1.getDiscountPercentage()<<" discount\n";
  else
    cout<<"No discount is available for you\n";
  return 0;
}
