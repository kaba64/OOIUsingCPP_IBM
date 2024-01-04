#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
  string socialSecurityNumber;
public:
  void setSocialSecurityNumber(const string socialSecurityNumberIn){socialSecurityNumber=socialSecurityNumberIn;}
  string getSocialSecurityNumber()const{return socialSecurityNumber;}
};

class Student: public virtual Person{
protected:
  int studentId;
public:  
  void setStudentId(const int id){studentId=id;}
  int getStudentId()const{return studentId;}
};

class Employee: public virtual Person{
protected:
  int employeeId;
public:
  void setEmployeeId(const int id){employeeId=id;}
  int getEmpoyeeId()const{return employeeId;}
};

class Trainee: public Student, public Employee{
private:
  int traineeId;
public:
  void setTraineeId(const int id){traineeId=id;}
  int getTraineeId()const{return traineeId;}
};

int main() {
  
  string ssn;
  int id;
  cout<<"Enter Trainee ID:";
  cin>>id;
  cout<<"Enter SSN Number:";
  cin>>ssn;
  Trainee trainee1;
  trainee1.setSocialSecurityNumber(ssn);
  trainee1.setTraineeId(id);
  cout<<"Trainee ID: "<<trainee1.getTraineeId()<<"\n";
  cout<<"Social Security Number: "<<trainee1.getSocialSecurityNumber()<<"\n";
  return 0;
}	 	  	  		  	     	     	       	 	
