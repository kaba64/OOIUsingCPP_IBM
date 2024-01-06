#include<iostream>
#include "Addition.cpp"
using namespace std;

class Operation{
public:
  int addRealPart(Addition obj1, Addition obj2){
    return obj1.real+obj2.real;
  }
  int addImaginaryPart(Addition obj1, Addition obj2){
    return obj1.img+obj2.img;
  }
};   

int main(){
  
  int real,img=0;
  cout<<"Enter real and imaginary part of the first complex number"<<endl;
  cin>>real;
  cin>>img;
  Addition number1(real,img);
  cout<<"Enter real and imaginary part of the second complex number"<<endl;
  cin>>real;
  cin>>img;
  Addition number2(real,img);
  Operation op;
  cout<<"Sum of real and imaginary part is "<<op.addRealPart(number1,number2)<<"+i"<<op.addImaginaryPart(number1,number2)<<"\n";
  return 0;
}
