//Implement the method 'toConvert' and main in this class
#include<iostream>
#include "Calculator.cpp"
using namespace std;

void Converter::toConvert(Height ht){
  int Value1{ht.feet*30};
  int Value2{ht.inch* 3};
  cm = Value1+Value2;
}

int main(){
  int feet1,inch1;
  cout<<"Enter feet"<<endl;
  cin>>feet1;
  cout<<"Enter inch"<<endl;
  cin>>inch1;
  Height height1(feet1,inch1);
  Converter convert1;
  convert1.toConvert(height1);
  cout<<"Height entered is "<<height1.calculateHeight()<<"feet\n";
  cout<<"Height in cm is "<<convert1.getCm()<<"cm\n";
  return 0;
}
