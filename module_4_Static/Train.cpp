#include <iostream>
#include <string>
using namespace std;

class Train{
private:
  long passengerPhone;
  string passengerName;
  char gender;
  int age;
  double ticketPrice;
public:
  long getPassengerPhone()const{return passengerPhone;}
  string getPassengerName()const{return passengerName;} 
  char getGender()const{return gender;}
  int getAge()const{return age;}
  double getTicketPrice()const{return ticketPrice;}
  void setPassengerPhone(const long pPhone){passengerPhone=pPhone;}
  void setPassengerName(const string pName){passengerName=pName;}
  void setGender(const char pGender){gender=pGender;}
  void setAge(const int pAge){age=pAge;} 
  void setTicketPrice(const double tPrice){ticketPrice=tPrice;}
  double calculateAmount(){
    if(age<16)
      return (0.5*getTicketPrice());
    else if (age>=60)
      return (0.75*getTicketPrice());
    else if(gender=='F')
      return (0.9*getTicketPrice());
    return getTicketPrice();
  }
};

int main(){
  Train passenger;
  //Fill code here
  long phone;
  string name;
  char gender;
  int age;
  double ticketPrice;
  cout<<"Enter the Passenger phone no : ";
  cin>>phone;
  passenger.setPassengerPhone(phone);
  cout<<"Enter the Passenger name : ";
  cin>>name;
  passenger.setPassengerName(name);
  cout<<"Enter the Passenger Age : ";
  cin>>age;
  passenger.setAge(age);
  cout<<"Enter the Gender(M/F): ";
  cin>>gender;
  passenger.setGender(gender);
  cout<<"Enter the Ticket Price (In dollars):";
  cin>>ticketPrice;
  passenger.setTicketPrice(ticketPrice);
  cout<<"Total Amount(In dollars): "<<passenger.calculateAmount()<<"\n";
  return 0;
}
