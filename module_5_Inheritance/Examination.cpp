#include <iostream>
using namespace std;

class Examination{
protected:
  int passMark=100;
public:
  void setPassMark(int pMark){passMark=pMark;}
  int getPassMark()const{return passMark;}
  void displayResult(int gradePoint)const{
    if(gradePoint>passMark)
      cout<<"Pass\n";
    else
      cout<<"Fail\n";
  }
};

class ScienceExam: public Examination{
public:
  int calculateGradePoints(int mark){
    return 2*mark;
  }
};

class MathsExam: public Examination{
public:
  int  calculateGradePoints(int mark){
    return 4*mark;
  }
};

int main(){  
  int smark,mathmark;
  cout<<"Enter the mark in Science:";
  cin>>smark;
  cout<<"Enter the mark in Maths:";
  cin>>mathmark;
  ScienceExam Sciencestudent;
  MathsExam Mathsstudent;
  cout<<"Science:\n";
  cout<<"Result: ";
  Sciencestudent.displayResult(Sciencestudent.calculateGradePoints(smark));
  cout<<"Gradepoints: "<<Sciencestudent.calculateGradePoints(smark)<<"\n";
  cout<<"Maths:\n";
  cout<<"Result: ";
  Mathsstudent.displayResult(Mathsstudent.calculateGradePoints(mathmark));
  cout<<"Gradepoints: "<<Mathsstudent.calculateGradePoints(mathmark)<<"\n";
  return 0;
}
