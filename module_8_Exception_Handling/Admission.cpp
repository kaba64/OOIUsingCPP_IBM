#include <iostream>
using namespace std;

double eligibility_ForAdmission(float a,float b,float c){
  if(a<60 || b<60 || c<60 || (a+b+c)<180)
    throw "Not eligible for Admission";
  return a+b+c;
}

int main(){
  float phyMarks;
  float chemMarks;
  float mathMarks;
  cout<<"Enter the Physics Marks"<<endl;
  cin>>phyMarks;
  cout<<"Enter the Chemistry Marks"<<endl;
  cin>>chemMarks;
  cout<<"Enter the Maths Marks"<<endl;
  cin>>mathMarks;
  //fill the code here
  try{
    double score;
    score = eligibility_ForAdmission(phyMarks,chemMarks,mathMarks);
    cout<<"Total score is "<<score<<"\n";
  }catch(const char*msg){
    cerr<<msg<<endl;
  }
  return 0;
}

