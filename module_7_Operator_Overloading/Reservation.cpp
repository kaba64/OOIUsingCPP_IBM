#include <iostream>
#include <string>
using namespace std;

class Reservation{
private:
  int reservationId;
  string reservationName;
  int noOfTickets;
  double perTicketRate;
  string foodType;
  double ticketCost;
  string discountPercentage;
public:
  Reservation(){}
  Reservation(int reservationIdIn, string reservationNameIn, int noOfTicketsIn, double perTicketRateIn, string foodTypeIn)
    :reservationId(reservationIdIn),reservationName(reservationNameIn),noOfTickets(noOfTicketsIn),
     perTicketRate(perTicketRateIn),foodType(foodTypeIn){}
  void setReservationId(int reservationIdIn){reservationId=reservationIdIn;}
  void setReservationName(string reservationNameIn){reservationName=reservationNameIn;}
  void setNoOfTickets(int noOfTicketsIn){noOfTickets=noOfTicketsIn;}
  void setPerTicketRate(double perTicketRateIn){perTicketRate=perTicketRateIn;}
  void setFoodType(string foodTypeIn){foodType=foodTypeIn;}
  void setDiscountPercentage(string discountPercentageIn){discountPercentage=discountPercentageIn;}
  int getReservationId()const{return reservationId;}
  string getReservationName()const{return reservationName;}
  int getNoOfTickets()const{return noOfTickets;}
  double getPerTicketRate()const{return perTicketRate;}
  string getFoodType()const{return foodType;}
  double getTicketCost()const{return ticketCost;}
  string getDiscountPercentage()const{return discountPercentage;} 
  void calculateTicketCost(){
    int foodTypeRate{1};
    if(foodType=="VEG")
      foodTypeRate=150;
    else if(foodType=="NONVEG")
      foodTypeRate=200;

    ticketCost = foodTypeRate*noOfTickets+noOfTickets*perTicketRate;
  }
  friend void calculateReimbursement(Reservation &res);
};
