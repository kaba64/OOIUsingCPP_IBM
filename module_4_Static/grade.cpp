#include <iostream>
#include <string>

using namespace std;

class College
{
private:
  static string principal_name;
public:
  void setPrincipalName(string name)
  {
    principal_name=name;
  }
  static string getPrincipalName()
  {
    return principal_name;
  }
};

class Student
{
private:
  int id;
  string name;
  float marks[5];
  float average;
  char grade;
  College cObj;
public:
  void setId(int idIn){id=idIn;}
  int getId(){return id;}
  void setAverage(float averageIn){average=averageIn;}
  int getAverage(){return average;}
  void setName(string n){name=n;}
  string getName(){return name;}
  void setMarks(float m[]){
    for(int i=0; i<5;i++)
      marks[i]=m[i];
  }
  float* getMarks(){return marks;}
  void setGrade(char g){grade=g;}
  char getGrade(){return grade;}
  College getCollegeObject(){return cObj;}
  
  void getStudentDetails(){
    cout<<"Enter Student ID :\n";
    int idIn;
    cin>>idIn;
    setId(idIn);
    cout<<"Enter Student Name :\n";
    string nameIn;
    cin>>nameIn;
    setName(nameIn);
    cout<<"Enter the five subject marks :\n";
    float m[5];
    for(int i=0;i<5;++i)
      cin>>m[i];
    setMarks(m);
  }
  void calculateAverage(){
    double ave{0.0};
    for(int i=0;i<5;++i){ave+=marks[i];}
    setAverage(ave/5);
  }
  void findGrade(){
    if(average>=80 && average<=100)
      setGrade('O');
    else{
      bool test = false;
      float *marTest = getMarks();
      for(int i=0;i<5;++i){
	if(marTest[i]<50)
	  test = true;
      }
      if(test)
	setGrade('F');
      else
	setGrade('A');
    }
  }
  void displayStudentDetails(){
    cout<<"Student Name : "<<getName()<<"\n";
    cout<<"Student ID : "<<getId()<<"\n";
    cout<<"Principal Name : "<<getCollegeObject().getPrincipalName()<<"\n";
    cout<<"Average : "<<getAverage()<<"\n";
    cout<<"Grade : "<<getGrade()<<"\n";
  }
};

string College::principal_name="John";

int main()
{
  Student student1;
  student1.getStudentDetails();
  student1.calculateAverage();
  student1.findGrade();
  student1.displayStudentDetails();
  return 0;
}
