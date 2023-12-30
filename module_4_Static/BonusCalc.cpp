#include <iostream>
#include <string.h>

using namespace std;
class Company
{
private:
  static string companyName;
  static string address;
  static long int contactNumber;
public:
  static void displayCompanyDetails(){
    cout<<"Company Name:"<<getCompanyName()<<"\n";
    cout<<"Address:"<<getAddress()<<"\n";
    cout<<"Contact Number:"<<getContactNumber()<<"\n";
  }
  static string getCompanyName(){return companyName;}
  static string getAddress(){return address;}
  static long int getContactNumber(){return contactNumber;}
  static void setCompanyName(string cname){companyName=cname;}
  static void setAddress(string add){address=add;}
  static void setContactNumber(long int cnumber){contactNumber=cnumber;}
};
class Employee
{
private:
  string empName;
  int empId;
  double netSalary;
  Company cObj;
public:
  void getEmployeeDetails(){
    cout<<"Enter Employee Name:\n";
    string name;
    cin>>name;
    setEmpName(name);
    cout<<"Enter Employee ID:\n";
    int id;
    cin>>id;
    setEmpId(id);
    cout<<"Enter Net Salary (In dollars):\n";
    double net;
    cin>>net;
    setNetSalary(net);
  }
  int calculateBonusPercentage(){
    if(netSalary >50000 && netSalary<=80000)
      return 5;
    else if(netSalary >30000 && netSalary<=50000)
      return 10;
    else if(netSalary >10000 && netSalary<=30000)
      return 15;
    else
      return 20;
  }
  void displayEmployeeDetails(){
    getCobj().displayCompanyDetails();
    cout<<"Employee Name:"<<getEmpName()<<"\n";
    cout<<"Employee ID:"<<getEmpId()<<"\n";
    cout<<"Employee Net Salary (In dollars):"<<setNetSalary()<<"\n";
    cout<<"Employee Bonus Percentage:"<<calculateBonusPercentage()<<"%\n";
  }
  void setEmpName(string name){empName=name;}
  void setEmpId(int id){empId=id;}
  void setNetSalary(double net){netSalary=net;}
  void setCobj(Company c){cObj=c;}
  Company getCobj(){return cObj;}
  string getEmpName()const{return empName;}
  int getEmpId()const{return empId;}
  double setNetSalary()const{return netSalary;}
  
};

string Company::companyName = "TekSoft";
string Company::address="LosAngeles";
long int Company::contactNumber=422245673;

int main()
{
  Employee employee1;
  employee1.getEmployeeDetails();
  employee1.displayEmployeeDetails();
  return 0;
}
