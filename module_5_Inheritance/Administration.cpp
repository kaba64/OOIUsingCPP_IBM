//Multiple inheritance
#include <iostream>
using namespace std;
 
class RuralManagement {
protected:
  int acceptedSchemes;  
public:
  int getAcceptedSchemes()const{return acceptedSchemes;}
  void setAcceptedSchemes(int noOfSchemes){acceptedSchemes=noOfSchemes;}
  void calcNoOfSchemes(int noOfSchemes,int noOfSchemesRejected){
    setAcceptedSchemes(noOfSchemes-noOfSchemesRejected);
  }
};
 
class RevenueManagement{
protected:
  double totalRevenue;
public:
  double getTotalRevenue()const{return totalRevenue;}
  void setTotalRevenue(double revenue){totalRevenue=revenue;}
  void calcTotalRevenue(int noOfTerritoriess,double revenue){
    setTotalRevenue(noOfTerritoriess*revenue);
  }
};
class SchemeManagement: public RuralManagement, public RevenueManagement{
public:
  double allotMoneyPerScheme()const{return (totalRevenue/acceptedSchemes);}
};

int main()
{ 
  int rejected,schemes,territories;
  double revenue;
  cout<<"Enter number of territories :"<<endl;
  cin>>territories;
  cout<<"Enter revenue :"<<endl;
  cin>>revenue;
  cout<<"Enter total number of schemes :"<<endl;
  cin>>schemes;
  cout<<"Enter number of schemes rejected :"<<endl;
  cin>>rejected;
  SchemeManagement schemeObj;
  schemeObj.calcNoOfSchemes(schemes,rejected);
  schemeObj.calcTotalRevenue(territories,revenue);
  cout<<"Money allotted per scheme: "<<schemeObj.allotMoneyPerScheme()<<"\n";
  return 0;
}
