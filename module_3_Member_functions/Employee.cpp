#include <iostream>
#include <string>

using namespace std;

class Employee { 
private:
  int associateId;
  string associateName;
  string workStatus;
public:
  void setAssociateId(int associateIdIn){associateId=associateIdIn;}
  void setAssociateName(string associateNameIn){associateName=associateNameIn;}
  void setWorkStatus(string workStatusIn){workStatus=workStatusIn;}
  int getAssociateId()const{return associateId;}
  string getAssociateName()const{return associateName;}
  string getWorkStatus()const{return workStatus;}
  void updateStatusDetails(int days){
    if(days<=20)
      setWorkStatus("Core skills");
    else if(days>20 && days<=40)
      setWorkStatus("Advanced skills");
    else if(days>40)
      setWorkStatus("Project phase");
  }
  
};


int main(){
  
  int id;
  string name;
  int days;
  cout<<"Enter the associate id:";
  cin>>id;
  cout<<"Enter the associate name:";
  cin>>name;
  cout<<"Enter the number of days:";
  cin>>days;
  Employee employee;
  employee.setAssociateId(id);
  employee.setAssociateName(name);
  employee.updateStatusDetails(days);
  cout<<"The associate "<<employee.getAssociateName()<<" work status: "<<employee.getWorkStatus();
  
  return 0;
}
