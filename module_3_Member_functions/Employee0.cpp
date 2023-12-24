#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
  int employeeId;
  string employeeName;
  double salary;
  double netSalary;
public:
  void setEmployeeId(const int employeeIdIn){employeeId=employeeIdIn;}
  void setEmployeeName(const string employeeNameIn){employeeName=employeeNameIn;}
  void setSalary(const double salaryIn){salary=salaryIn;}
  void setNetSalary(const double netSalaryIn){netSalary=netSalaryIn;}
  int getEmployeeId()const{return employeeId;}
  string getEmployeeName()const{return employeeName;}
  double getSalary()const{return salary;}
  void calculateNetSalary(const float pfpercentage){
    double netSalaryIn = salary - ( salary * pfpercentage ) / 100;
  }
  double getNetSalary()const{return netSalary;}
};


int main(){ 
  
  int id;
  string name;
  double sal;
  float pf;
  cout<<"Enter Id:"<<endl;
  cin>>id;
  cout<<"Enter Name:"<<endl;
  cin>>name;
  cout<<"Enter salary:"<<endl;
  cin>>sal;
  cout<<"Enter PF percentage:"<<endl;
  cin>>pf;

  Employee newEmployee;
  newEmployee.setEmployeeId(id);
  newEmployee.setEmployeeName(name);
  newEmployee.setSalary(sal);
  newEmployee.calculateNetSalary(pf);

  cout<<"Id:"<<newEmployee.getEmployeeId()<<"\n";
  cout<<"Name:"<<newEmployee.getEmployeeName()<<"\n";
  cout<<"Salary:"<<newEmployee.getSalary()<<"\n";
  cout<<"Net Salary:"<<newEmployee.getNetSalary()<<"\n";
  return 0;
}
