#include <exception>
#include <iostream>
#include<string.h>
using namespace std;

string eligibilityForSchool(int age) {
  if(age<18)
    throw "Not eligible for Admission";
  return "Eligible for Admission";
}

int main(){

  string status;
  int age{0};
  cout<<"Enter the age\n";
  cin>>age;
  try{
    status = eligibilityForSchool(age);
    cout<<status<<"\n";
  }catch (const char* msg){
    cerr << msg <<"\n";
  }
}
