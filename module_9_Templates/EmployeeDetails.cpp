#include <iostream>
#include <string>

using namespace std;

template<typename T>
T concatenateValues(const T t1,const T t2){
  return t1+t2; 
}

int main(){
  
  double currentSalary,incrementAmount;
  string firstName,lastName;
  cout<<"Enter First Name:"<<endl;
  cin>>firstName;
  cout<<"Enter Last Name:"<<endl;
  cin>>lastName;
  
  cout<<"Enter Current Salary:"<<endl;
  cin>>currentSalary;
  cout<<"Enter Increment Amount:"<<endl;
  cin>>incrementAmount;
  cout<<"Display Employee Details:\n";
  cout<<"Employee Name: "<<concatenateValues(firstName,lastName)<<"\n";
  cout<<"New Salary:"<<concatenateValues(currentSalary,incrementAmount)<<"\n";
  return 0;
}
