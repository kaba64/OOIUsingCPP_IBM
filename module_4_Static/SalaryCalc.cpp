#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
  static int count;
  int employeeId;
  string employeeName;
  double salary;
  double netSalary;
public:
  void setEmployeeId(int id){employeeId=id;}
  int getEmployeeId()const{return employeeId;}
  void setEmployeeName(string nameIn){employeeName=nameIn;}
  string getEmployeeName()const{return employeeName;}
  void setSalary(double sal){salary=sal;}
  double getSalary()const{return salary;}
  void setNetSalary(double netSal){netSalary=netSal;}
  double getNetSalary()const{return netSalary;}
  void calculateNetSalary(int pfpercentage){
    netSalary=salary*(1.0-0.01*pfpercentage);
  }
  void display(){
    cout<<"Id: "<<getEmployeeId()<<"\n";
    cout<<"Name: "<<getEmployeeName()<<"\n";
    cout<<"Net Salary (In dollars): "<<getNetSalary()<<"\n";
  }
  void getEmployeeDetails(){
    cout<<"Enter Name:\n";
    string name;
    cin>>name;
    setEmployeeName(name);
    cout<<"Enter salary (In dollars):\n";
    double sal;
    cin>>sal;
    setSalary(sal);
    setEmployeeId(generateEmployeeId());
  }
  static int generateEmployeeId(){
    return ++count;
  }
};

int Employee::count =99;

int main(){

  Employee employee1, employee2;
  employee1.getEmployeeDetails();
  int pfpercentage;
  cout<<"Enter PF percentage:"<<endl;
  cin>>pfpercentage;
  employee1.calculateNetSalary(pfpercentage);
  employee1.display();
  cout<<"\n\n";
  employee2.getEmployeeDetails();
  cout<<"Enter PF percentage:"<<endl;
  cin>>pfpercentage;
  employee2.calculateNetSalary(pfpercentage);
  employee2.display();
  return 0;
}
