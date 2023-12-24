#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  int studentId;
  string name;
  int departmentId;
  string gender;
  string phoneNumber;
public:    
  void setStudentId(const int studentIdIn){studentId=studentIdIn;}
  int getStudentId()const{return studentId;}
  void setName(const string nameIn){name=nameIn;}
  string getName()const{return name;}
  void setDepartmentId(const int departmentIdIn){departmentId=departmentIdIn;}
  int getDepartmentId()const{return departmentId;}
  void setGender(const string genderIn){gender=genderIn;}
  string getGender()const{return gender;}
  void setPhoneNumber(const string phoneNumberIn){phoneNumber=phoneNumberIn;}
  string getPhoneNumber()const{return phoneNumber;}
};
int main()
{
  
  int id,deptId;
  string name,gender,phNo;
  cout<<"Enter the details:"<<endl;
  cout<<"Student Id"<<endl;
  cin>>id;
  cout<<"Student Name"<<endl;
  cin>>name;
  cout<<"Department Id"<<endl;
  cin>>deptId;
  cout<<"Gender"<<endl;
  cin>>gender;
  cout<<"Phone Number"<<endl;
  cin>>phNo;
  
  Student newStudent;
  
  newStudent.setStudentId(id);
  newStudent.setName(name);
  newStudent.setDepartmentId(deptId);
  newStudent.setGender(gender);
  newStudent.setPhoneNumber(phNo);

  cout<<"Student details entered:\n";
  cout<<newStudent.getStudentId()<<" "<<newStudent.getName()<<" "<<\
    newStudent.getDepartmentId()<<" "<<newStudent.getGender()<<" "<<newStudent.getPhoneNumber()<<"\n";
  return 0;
}

