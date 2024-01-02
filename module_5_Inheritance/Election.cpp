#include <iostream>
using namespace std;

class Election {
protected:
  long int totalPeople;
  long int noOfWomen;
  long int noOfMen;
public:
  
  void setTotalPeople(long int totPeople){totalPeople=totPeople;}
  void setNoOfWomen(long int womenCount){noOfWomen=womenCount;}
  void setNoOfMen(long int menCount){noOfMen=menCount;}
  long int getTotalPeople()const{return totalPeople;}
  long int getNoOfWomen()const{return noOfWomen;}
  long int getNoOfMen()const{return noOfMen;}
};
 
class GeneralElection: public Election{
public:
  double calcVotePercentage(int partyA , int partyB)const{return (((partyA+partyB) *100.0) /totalPeople);}
  double calcWomenVotePercentage(int womenVotes)const{return ((womenVotes*100.0)/noOfWomen);}
  double calcMenVotePercentage(int menVotes)const{ return ((menVotes*100.0)/noOfMen);}
};

int main(){  
  GeneralElection election1;
  long int totalPeople,noOfWomen,noOfMen;
  int partyA,partyB,womenVotes,menVotes;
  double votePer,womenVotePer,menVotePer;
  cout<<"Enter the number of People:";
  cin>>totalPeople;
  election1.setTotalPeople(totalPeople);
  cout<<"Enter the number of women:";
  cin>>noOfWomen;
  election1.setNoOfWomen(noOfWomen);
  cout<<"Enter the number of men:";
  cin>>noOfMen;
  election1.setNoOfMen(noOfMen);
  cout<<"Enter the total votes by Party A:";
  cin>>partyA;
  cout<<"Enter the total votes by Party B:";
  cin>>partyB;
  cout<<"Enter the number of women votes:";
  cin>>womenVotes;
  cout<<"Enter the number of men votes:";
  cin>>menVotes;
  votePer = election1.calcVotePercentage(partyA,partyB);
  womenVotePer = election1.calcWomenVotePercentage(womenVotes);
  menVotePer = election1.calcMenVotePercentage(menVotes);
  cout<<"Vote Percentage: "<<votePer<<"\n";
  cout<<"Women Vote Percentage: "<<womenVotePer<<"\n";
  cout<<"Men Vote Percentage: "<<menVotePer<<"\n";
  return 0;
}
